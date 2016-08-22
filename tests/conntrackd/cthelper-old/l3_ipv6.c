#include <stdlib.h>
#include <string.h>
#include <netinet/ip6.h>
#include <linux/if_ether.h>

#include "proto.h"

#include <libnetfilter_conntrack/libnetfilter_conntrack.h>

static void
l3_ipv6_ct_build_tuple(const uint8_t *pkt, struct nf_conntrack *ct)
{
	const struct ip6_hdr *ip6h = (const struct ip6_hdr *)pkt;

	nfct_set_attr_u16(ct, ATTR_ORIG_L3PROTO, AF_INET6);
	nfct_set_attr_u16(ct, ATTR_REPL_L3PROTO, AF_INET6);
	nfct_set_attr(ct, ATTR_ORIG_IPV6_SRC, &ip6h->ip6_src);
	nfct_set_attr(ct, ATTR_ORIG_IPV6_DST, &ip6h->ip6_dst);
	nfct_set_attr(ct, ATTR_REPL_IPV6_SRC, &ip6h->ip6_src);
	nfct_set_attr(ct, ATTR_REPL_IPV6_DST, &ip6h->ip6_dst);
}

static int
l3_ipv6_ct_cmp_tuple_orig(const uint8_t *pkt, struct nf_conntrack *ct)
{
	const struct ip6_hdr *ip6h = (const struct ip6_hdr *)pkt;

	if (memcmp(&ip6h->ip6_src, nfct_get_attr(ct, ATTR_ORIG_IPV6_SRC),
		   sizeof(struct in6_addr)) == 0 &&
	    memcmp(&ip6h->ip6_dst, nfct_get_attr(ct, ATTR_ORIG_IPV6_DST),
		   sizeof(struct in6_addr)) == 0)
		return 1;

	return 0;
}

static int
l3_ipv6_ct_cmp_tuple_repl(const uint8_t *pkt, struct nf_conntrack *ct)
{
	const struct ip6_hdr *ip6h = (const struct ip6_hdr *)pkt;

	if (memcmp(&ip6h->ip6_src, nfct_get_attr(ct, ATTR_REPL_IPV6_SRC),
		   sizeof(struct in6_addr)) == 0 &&
	    memcmp(&ip6h->ip6_dst, nfct_get_attr(ct, ATTR_REPL_IPV6_DST),
		   sizeof(struct in6_addr)) == 0)
		return 1;

	return 0;
}

static int l3_ipv6_pkt_l4proto_num(const uint8_t *pkt)
{
	const struct ip6_hdr *ip6h = (const struct ip6_hdr *)pkt;

	return ip6h->ip6_nxt;
}

static int l3_ipv6_pkt_l3hdr_len(const uint8_t *pkt)
{
	return sizeof(struct ip6_hdr);
}

static struct cthelper_proto_l2l3_helper ipv4 = {
	.l2protonum	= ETH_P_IPV6,
	.l3protonum	= AF_INET6,
	.l2hdr_len	= ETH_HLEN,
	.l3ct_build	= l3_ipv6_ct_build_tuple,
	.l3ct_cmp_orig	= l3_ipv6_ct_cmp_tuple_orig,
	.l3ct_cmp_repl	= l3_ipv6_ct_cmp_tuple_repl,
	.l3pkt_hdr_len	= l3_ipv6_pkt_l3hdr_len,
	.l4pkt_proto	= l3_ipv6_pkt_l4proto_num,
};

void l2l3_ipv6_init(void)
{
	cthelper_proto_l2l3_helper_register(&ipv4);
}
