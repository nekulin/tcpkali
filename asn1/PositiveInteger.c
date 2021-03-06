/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TcpkaliOrchestration"
 * 	found in "TcpkaliOrchestration.asn1"
 * 	`asn1c -gen-OER -gen-PER -pdu=TcpkaliMessage`
 */

#include "PositiveInteger.h"

int
PositiveInteger_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	unsigned long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const unsigned long *)sptr;
	
	if((value >= 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_PositiveInteger_constr_1 CC_NOTUSED = {
	{ 0, 1 }	/* (1..MAX) */,
	-1};
asn_per_constraints_t asn_PER_type_PositiveInteger_constr_1 CC_NOTUSED = {
	{ APC_SEMI_CONSTRAINED,	-1, -1,  1,  0 }	/* (1..MAX) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
const asn_INTEGER_specifics_t asn_SPC_PositiveInteger_specs_1 = {
	0,	0,	0,	0,	0,
	0,	/* Native long size */
	1	/* Unsigned representation */
};
static const ber_tlv_tag_t asn_DEF_PositiveInteger_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_PositiveInteger = {
	"PositiveInteger",
	"PositiveInteger",
	&asn_OP_NativeInteger,
	asn_DEF_PositiveInteger_tags_1,
	sizeof(asn_DEF_PositiveInteger_tags_1)
		/sizeof(asn_DEF_PositiveInteger_tags_1[0]), /* 1 */
	asn_DEF_PositiveInteger_tags_1,	/* Same as above */
	sizeof(asn_DEF_PositiveInteger_tags_1)
		/sizeof(asn_DEF_PositiveInteger_tags_1[0]), /* 1 */
	{ &asn_OER_type_PositiveInteger_constr_1, &asn_PER_type_PositiveInteger_constr_1, PositiveInteger_constraint },
	0, 0,	/* No members */
	&asn_SPC_PositiveInteger_specs_1	/* Additional specs */
};

