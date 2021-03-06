/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "FEF-IntermediateDraft"
 * 	found in "../annexb-snacc-122001.asn1"
 */

#include <asn_internal.h>

#include "RealTimeSampleArrayDescriptiveDataSection.h"

static int asn_DFL_6_set_0(int set_value, void **sptr) {
	MetricCategory_t *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 0 */
		return asn_long2INTEGER(st, 0);
	} else {
		/* Test default value 0 */
		long value;
		if(asn_INTEGER2long(st, &value))
			return -1;
		return (value == 0);
	}
}
static asn_TYPE_member_t asn_MBR_vmosourcelist_13[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_MetricsCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_vmosourcelist_tags_13[] = {
	(ASN_TAG_CLASS_APPLICATION | (2467 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_vmosourcelist_specs_13 = {
	sizeof(struct RealTimeSampleArrayDescriptiveDataSection__vmosourcelist),
	offsetof(struct RealTimeSampleArrayDescriptiveDataSection__vmosourcelist, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_vmosourcelist_13 = {
	"vmosourcelist",
	"vmosourcelist",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_vmosourcelist_tags_13,
	sizeof(asn_DEF_vmosourcelist_tags_13)
		/sizeof(asn_DEF_vmosourcelist_tags_13[0]) - 1, /* 1 */
	asn_DEF_vmosourcelist_tags_13,	/* Same as above */
	sizeof(asn_DEF_vmosourcelist_tags_13)
		/sizeof(asn_DEF_vmosourcelist_tags_13[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_vmosourcelist_13,
	1,	/* Single element */
	&asn_SPC_vmosourcelist_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_metricsourcelist_15[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_HandleRef,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_metricsourcelist_tags_15[] = {
	(ASN_TAG_CLASS_APPLICATION | (2366 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_metricsourcelist_specs_15 = {
	sizeof(struct RealTimeSampleArrayDescriptiveDataSection__metricsourcelist),
	offsetof(struct RealTimeSampleArrayDescriptiveDataSection__metricsourcelist, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_metricsourcelist_15 = {
	"metricsourcelist",
	"metricsourcelist",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_metricsourcelist_tags_15,
	sizeof(asn_DEF_metricsourcelist_tags_15)
		/sizeof(asn_DEF_metricsourcelist_tags_15[0]) - 1, /* 1 */
	asn_DEF_metricsourcelist_tags_15,	/* Same as above */
	sizeof(asn_DEF_metricsourcelist_tags_15)
		/sizeof(asn_DEF_metricsourcelist_tags_15[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_metricsourcelist_15,
	1,	/* Single element */
	&asn_SPC_metricsourcelist_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_msmtsitelist_17[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_BodySiteCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_msmtsitelist_tags_17[] = {
	(ASN_TAG_CLASS_APPLICATION | (2430 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_msmtsitelist_specs_17 = {
	sizeof(struct RealTimeSampleArrayDescriptiveDataSection__msmtsitelist),
	offsetof(struct RealTimeSampleArrayDescriptiveDataSection__msmtsitelist, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_msmtsitelist_17 = {
	"msmtsitelist",
	"msmtsitelist",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_msmtsitelist_tags_17,
	sizeof(asn_DEF_msmtsitelist_tags_17)
		/sizeof(asn_DEF_msmtsitelist_tags_17[0]) - 1, /* 1 */
	asn_DEF_msmtsitelist_tags_17,	/* Same as above */
	sizeof(asn_DEF_msmtsitelist_tags_17)
		/sizeof(asn_DEF_msmtsitelist_tags_17[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_msmtsitelist_17,
	1,	/* Single element */
	&asn_SPC_msmtsitelist_specs_17	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_msmtsitelistext_19[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ExtNomenRef,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_msmtsitelistext_tags_19[] = {
	(ASN_TAG_CLASS_APPLICATION | (2551 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_msmtsitelistext_specs_19 = {
	sizeof(struct RealTimeSampleArrayDescriptiveDataSection__msmtsitelistext),
	offsetof(struct RealTimeSampleArrayDescriptiveDataSection__msmtsitelistext, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_msmtsitelistext_19 = {
	"msmtsitelistext",
	"msmtsitelistext",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_msmtsitelistext_tags_19,
	sizeof(asn_DEF_msmtsitelistext_tags_19)
		/sizeof(asn_DEF_msmtsitelistext_tags_19[0]) - 1, /* 1 */
	asn_DEF_msmtsitelistext_tags_19,	/* Same as above */
	sizeof(asn_DEF_msmtsitelistext_tags_19)
		/sizeof(asn_DEF_msmtsitelistext_tags_19[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_msmtsitelistext_19,
	1,	/* Single element */
	&asn_SPC_msmtsitelistext_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_bodysitelist_21[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_BodySiteCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_bodysitelist_tags_21[] = {
	(ASN_TAG_CLASS_APPLICATION | (2429 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_bodysitelist_specs_21 = {
	sizeof(struct RealTimeSampleArrayDescriptiveDataSection__bodysitelist),
	offsetof(struct RealTimeSampleArrayDescriptiveDataSection__bodysitelist, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_bodysitelist_21 = {
	"bodysitelist",
	"bodysitelist",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_bodysitelist_tags_21,
	sizeof(asn_DEF_bodysitelist_tags_21)
		/sizeof(asn_DEF_bodysitelist_tags_21[0]) - 1, /* 1 */
	asn_DEF_bodysitelist_tags_21,	/* Same as above */
	sizeof(asn_DEF_bodysitelist_tags_21)
		/sizeof(asn_DEF_bodysitelist_tags_21[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_bodysitelist_21,
	1,	/* Single element */
	&asn_SPC_bodysitelist_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_bodysitelistext_23[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ExtNomenRef,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_bodysitelistext_tags_23[] = {
	(ASN_TAG_CLASS_APPLICATION | (2550 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_bodysitelistext_specs_23 = {
	sizeof(struct RealTimeSampleArrayDescriptiveDataSection__bodysitelistext),
	offsetof(struct RealTimeSampleArrayDescriptiveDataSection__bodysitelistext, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_bodysitelistext_23 = {
	"bodysitelistext",
	"bodysitelistext",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_bodysitelistext_tags_23,
	sizeof(asn_DEF_bodysitelistext_tags_23)
		/sizeof(asn_DEF_bodysitelistext_tags_23[0]) - 1, /* 1 */
	asn_DEF_bodysitelistext_tags_23,	/* Same as above */
	sizeof(asn_DEF_bodysitelistext_tags_23)
		/sizeof(asn_DEF_bodysitelistext_tags_23[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_bodysitelistext_23,
	1,	/* Single element */
	&asn_SPC_bodysitelistext_specs_23	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_metriccalibration_25[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_MetricCalEntry,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_metriccalibration_tags_25[] = {
	(ASN_TAG_CLASS_APPLICATION | (2362 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_metriccalibration_specs_25 = {
	sizeof(struct RealTimeSampleArrayDescriptiveDataSection__metriccalibration),
	offsetof(struct RealTimeSampleArrayDescriptiveDataSection__metriccalibration, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_metriccalibration_25 = {
	"metriccalibration",
	"metriccalibration",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_metriccalibration_tags_25,
	sizeof(asn_DEF_metriccalibration_tags_25)
		/sizeof(asn_DEF_metriccalibration_tags_25[0]) - 1, /* 1 */
	asn_DEF_metriccalibration_tags_25,	/* Same as above */
	sizeof(asn_DEF_metriccalibration_tags_25)
		/sizeof(asn_DEF_metriccalibration_tags_25[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_metriccalibration_25,
	1,	/* Single element */
	&asn_SPC_metriccalibration_specs_25	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_visualgrid_40[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SaGridEntry,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_visualgrid_tags_40[] = {
	(ASN_TAG_CLASS_APPLICATION | (2331 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_visualgrid_specs_40 = {
	sizeof(struct RealTimeSampleArrayDescriptiveDataSection__visualgrid),
	offsetof(struct RealTimeSampleArrayDescriptiveDataSection__visualgrid, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_visualgrid_40 = {
	"visualgrid",
	"visualgrid",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_visualgrid_tags_40,
	sizeof(asn_DEF_visualgrid_tags_40)
		/sizeof(asn_DEF_visualgrid_tags_40[0]) - 1, /* 1 */
	asn_DEF_visualgrid_tags_40,	/* Same as above */
	sizeof(asn_DEF_visualgrid_tags_40)
		/sizeof(asn_DEF_visualgrid_tags_40[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_visualgrid_40,
	1,	/* Single element */
	&asn_SPC_visualgrid_specs_40	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_sacalibrationdata_42[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SaCalData,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_sacalibrationdata_tags_42[] = {
	(ASN_TAG_CLASS_APPLICATION | (2405 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_sacalibrationdata_specs_42 = {
	sizeof(struct RealTimeSampleArrayDescriptiveDataSection__sacalibrationdata),
	offsetof(struct RealTimeSampleArrayDescriptiveDataSection__sacalibrationdata, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sacalibrationdata_42 = {
	"sacalibrationdata",
	"sacalibrationdata",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_sacalibrationdata_tags_42,
	sizeof(asn_DEF_sacalibrationdata_tags_42)
		/sizeof(asn_DEF_sacalibrationdata_tags_42[0]) - 1, /* 1 */
	asn_DEF_sacalibrationdata_tags_42,	/* Same as above */
	sizeof(asn_DEF_sacalibrationdata_tags_42)
		/sizeof(asn_DEF_sacalibrationdata_tags_42[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_sacalibrationdata_42,
	1,	/* Single element */
	&asn_SPC_sacalibrationdata_specs_42	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_filterspecification_44[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SaFilterEntry,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_filterspecification_tags_44[] = {
	(ASN_TAG_CLASS_APPLICATION | (2329 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_filterspecification_specs_44 = {
	sizeof(struct RealTimeSampleArrayDescriptiveDataSection__filterspecification),
	offsetof(struct RealTimeSampleArrayDescriptiveDataSection__filterspecification, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_filterspecification_44 = {
	"filterspecification",
	"filterspecification",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_filterspecification_tags_44,
	sizeof(asn_DEF_filterspecification_tags_44)
		/sizeof(asn_DEF_filterspecification_tags_44[0]) - 1, /* 1 */
	asn_DEF_filterspecification_tags_44,	/* Same as above */
	sizeof(asn_DEF_filterspecification_tags_44)
		/sizeof(asn_DEF_filterspecification_tags_44[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_filterspecification_44,
	1,	/* Single element */
	&asn_SPC_filterspecification_specs_44	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RealTimeSampleArrayDescriptiveDataSection_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, handle),
		(ASN_TAG_CLASS_APPLICATION | (2337 << 2)),
		0,
		&asn_DEF_Handle,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"handle"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, devicehandle),
		(ASN_TAG_CLASS_APPLICATION | (6034 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HandleRef,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"devicehandle"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, metrictype),
		(ASN_TAG_CLASS_APPLICATION | (2351 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MetricsCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"metrictype"
		},
	{ ATF_POINTER, 24, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, labelstring),
		(ASN_TAG_CLASS_APPLICATION | (2343 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FEFString,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"labelstring"
		},
	{ ATF_POINTER, 23, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, metriccategory),
		(ASN_TAG_CLASS_APPLICATION | (2367 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MetricCategory,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		asn_DFL_6_set_0,	/* DEFAULT 0 */
		"metriccategory"
		},
	{ ATF_POINTER, 22, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, metricstatus),
		(ASN_TAG_CLASS_APPLICATION | (2368 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MetricStatus,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"metricstatus"
		},
	{ ATF_POINTER, 21, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, measurementstatus),
		(ASN_TAG_CLASS_APPLICATION | (2375 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasurementStatus,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"measurementstatus"
		},
	{ ATF_POINTER, 20, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, metricid),
		(ASN_TAG_CLASS_APPLICATION | (2347 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MetricsCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"metricid"
		},
	{ ATF_POINTER, 19, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, metricidext),
		(ASN_TAG_CLASS_APPLICATION | (2502 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ExtNomenRef,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"metricidext"
		},
	{ ATF_POINTER, 18, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, unitcode),
		(ASN_TAG_CLASS_APPLICATION | (2454 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UnitsOfMeasurementCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"unitcode"
		},
	{ ATF_POINTER, 17, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, unitlabelstring),
		(ASN_TAG_CLASS_APPLICATION | (2457 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FEFString,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"unitlabelstring"
		},
	{ ATF_POINTER, 16, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, vmosourcelist),
		(ASN_TAG_CLASS_APPLICATION | (2467 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_vmosourcelist_13,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"vmosourcelist"
		},
	{ ATF_POINTER, 15, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, metricsourcelist),
		(ASN_TAG_CLASS_APPLICATION | (2366 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_metricsourcelist_15,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"metricsourcelist"
		},
	{ ATF_POINTER, 14, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, msmtsitelist),
		(ASN_TAG_CLASS_APPLICATION | (2430 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_msmtsitelist_17,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"msmtsitelist"
		},
	{ ATF_POINTER, 13, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, msmtsitelistext),
		(ASN_TAG_CLASS_APPLICATION | (2551 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_msmtsitelistext_19,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"msmtsitelistext"
		},
	{ ATF_POINTER, 12, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, bodysitelist),
		(ASN_TAG_CLASS_APPLICATION | (2429 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_bodysitelist_21,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"bodysitelist"
		},
	{ ATF_POINTER, 11, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, bodysitelistext),
		(ASN_TAG_CLASS_APPLICATION | (2550 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_bodysitelistext_23,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"bodysitelistext"
		},
	{ ATF_POINTER, 10, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, metriccalibration),
		(ASN_TAG_CLASS_APPLICATION | (2362 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_metriccalibration_25,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"metriccalibration"
		},
	{ ATF_POINTER, 9, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, colour),
		(ASN_TAG_CLASS_APPLICATION | (2321 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SimpleColour,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"colour"
		},
	{ ATF_POINTER, 8, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, measuremode),
		(ASN_TAG_CLASS_APPLICATION | (2373 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrivateCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"measuremode"
		},
	{ ATF_POINTER, 7, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, measureperiod),
		(ASN_TAG_CLASS_APPLICATION | (2443 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MetricMeasure,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"measureperiod"
		},
	{ ATF_POINTER, 6, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, averagingperiod),
		(ASN_TAG_CLASS_APPLICATION | (2535 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MetricMeasure,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"averagingperiod"
		},
	{ ATF_POINTER, 5, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, starttime),
		(ASN_TAG_CLASS_APPLICATION | (2538 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AbsoluteTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"starttime"
		},
	{ ATF_POINTER, 4, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, stoptime),
		(ASN_TAG_CLASS_APPLICATION | (2539 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AbsoluteTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"stoptime"
		},
	{ ATF_POINTER, 3, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, metricinfolabelstring),
		(ASN_TAG_CLASS_APPLICATION | (2365 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FEFString,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"metricinfolabelstring"
		},
	{ ATF_POINTER, 2, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, substance),
		(ASN_TAG_CLASS_APPLICATION | (2542 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ExtNomenRef,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"substance"
		},
	{ ATF_POINTER, 1, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, substancelabelstring),
		(ASN_TAG_CLASS_APPLICATION | (2508 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FEFString,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"substancelabelstring"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, saspecification),
		(ASN_TAG_CLASS_APPLICATION | (2413 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SaSpec,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"saspecification"
		},
	{ ATF_POINTER, 1, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, compression),
		(ASN_TAG_CLASS_APPLICATION | (2322 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrivateCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"compression"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, scaleandrangespec),
		(ASN_TAG_CLASS_APPLICATION | (2416 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ScaleRangeSpec,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"scaleandrangespec"
		},
	{ ATF_POINTER, 6, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, saphysiologicalrange),
		(ASN_TAG_CLASS_APPLICATION | (2411 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AbsoluteRange,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"saphysiologicalrange"
		},
	{ ATF_POINTER, 5, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, visualgrid),
		(ASN_TAG_CLASS_APPLICATION | (2331 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_visualgrid_40,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"visualgrid"
		},
	{ ATF_POINTER, 4, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, sacalibrationdata),
		(ASN_TAG_CLASS_APPLICATION | (2405 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sacalibrationdata_42,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"sacalibrationdata"
		},
	{ ATF_POINTER, 3, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, filterspecification),
		(ASN_TAG_CLASS_APPLICATION | (2329 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_filterspecification_44,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"filterspecification"
		},
	{ ATF_POINTER, 2, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, sasignalfrequency),
		(ASN_TAG_CLASS_APPLICATION | (2408 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SaSignalFrequency,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"sasignalfrequency"
		},
	{ ATF_POINTER, 1, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, sameasureresolution),
		(ASN_TAG_CLASS_APPLICATION | (2409 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FEFFloat,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"sameasureresolution"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, sampleperiod),
		(ASN_TAG_CLASS_APPLICATION | (2445 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Fraction,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"sampleperiod"
		},
	{ ATF_POINTER, 1, offsetof(struct RealTimeSampleArrayDescriptiveDataSection, sweepspeed),
		(ASN_TAG_CLASS_APPLICATION | (2431 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MetricMeasure,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"sweepspeed"
		},
};
static ber_tlv_tag_t asn_DEF_RealTimeSampleArrayDescriptiveDataSection_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RealTimeSampleArrayDescriptiveDataSection_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (2321 << 2)), 18, 0, 0 }, /* colour at 859 */
    { (ASN_TAG_CLASS_APPLICATION | (2322 << 2)), 28, 0, 0 }, /* compression at 962 */
    { (ASN_TAG_CLASS_APPLICATION | (2329 << 2)), 33, 0, 0 }, /* filterspecification at 983 */
    { (ASN_TAG_CLASS_APPLICATION | (2331 << 2)), 31, 0, 0 }, /* visualgrid at 973 */
    { (ASN_TAG_CLASS_APPLICATION | (2337 << 2)), 0, 0, 0 }, /* handle at 779 */
    { (ASN_TAG_CLASS_APPLICATION | (2343 << 2)), 3, 0, 0 }, /* labelstring at 790 */
    { (ASN_TAG_CLASS_APPLICATION | (2347 << 2)), 7, 0, 0 }, /* metricid at 803 */
    { (ASN_TAG_CLASS_APPLICATION | (2351 << 2)), 2, 0, 0 }, /* metrictype at 787 */
    { (ASN_TAG_CLASS_APPLICATION | (2362 << 2)), 17, 0, 0 }, /* metriccalibration at 856 */
    { (ASN_TAG_CLASS_APPLICATION | (2365 << 2)), 24, 0, 0 }, /* metricinfolabelstring at 880 */
    { (ASN_TAG_CLASS_APPLICATION | (2366 << 2)), 12, 0, 0 }, /* metricsourcelist at 828 */
    { (ASN_TAG_CLASS_APPLICATION | (2367 << 2)), 4, 0, 0 }, /* metriccategory at 793 */
    { (ASN_TAG_CLASS_APPLICATION | (2368 << 2)), 5, 0, 0 }, /* metricstatus at 797 */
    { (ASN_TAG_CLASS_APPLICATION | (2373 << 2)), 19, 0, 0 }, /* measuremode at 862 */
    { (ASN_TAG_CLASS_APPLICATION | (2375 << 2)), 6, 0, 0 }, /* measurementstatus at 800 */
    { (ASN_TAG_CLASS_APPLICATION | (2405 << 2)), 32, 0, 0 }, /* sacalibrationdata at 978 */
    { (ASN_TAG_CLASS_APPLICATION | (2408 << 2)), 34, 0, 0 }, /* sasignalfrequency at 986 */
    { (ASN_TAG_CLASS_APPLICATION | (2409 << 2)), 35, 0, 0 }, /* sameasureresolution at 989 */
    { (ASN_TAG_CLASS_APPLICATION | (2411 << 2)), 30, 0, 0 }, /* saphysiologicalrange at 969 */
    { (ASN_TAG_CLASS_APPLICATION | (2413 << 2)), 27, 0, 0 }, /* saspecification at 959 */
    { (ASN_TAG_CLASS_APPLICATION | (2416 << 2)), 29, 0, 0 }, /* scaleandrangespec at 965 */
    { (ASN_TAG_CLASS_APPLICATION | (2429 << 2)), 15, 0, 0 }, /* bodysitelist at 846 */
    { (ASN_TAG_CLASS_APPLICATION | (2430 << 2)), 13, 0, 0 }, /* msmtsitelist at 834 */
    { (ASN_TAG_CLASS_APPLICATION | (2431 << 2)), 37, 0, 0 }, /* sweepspeed at 1093 */
    { (ASN_TAG_CLASS_APPLICATION | (2443 << 2)), 20, 0, 0 }, /* measureperiod at 865 */
    { (ASN_TAG_CLASS_APPLICATION | (2445 << 2)), 36, 0, 0 }, /* sampleperiod at 1090 */
    { (ASN_TAG_CLASS_APPLICATION | (2454 << 2)), 9, 0, 0 }, /* unitcode at 814 */
    { (ASN_TAG_CLASS_APPLICATION | (2457 << 2)), 10, 0, 0 }, /* unitlabelstring at 817 */
    { (ASN_TAG_CLASS_APPLICATION | (2467 << 2)), 11, 0, 0 }, /* vmosourcelist at 822 */
    { (ASN_TAG_CLASS_APPLICATION | (2502 << 2)), 8, 0, 0 }, /* metricidext at 808 */
    { (ASN_TAG_CLASS_APPLICATION | (2508 << 2)), 26, 0, 0 }, /* substancelabelstring at 890 */
    { (ASN_TAG_CLASS_APPLICATION | (2535 << 2)), 21, 0, 0 }, /* averagingperiod at 869 */
    { (ASN_TAG_CLASS_APPLICATION | (2538 << 2)), 22, 0, 0 }, /* starttime at 873 */
    { (ASN_TAG_CLASS_APPLICATION | (2539 << 2)), 23, 0, 0 }, /* stoptime at 877 */
    { (ASN_TAG_CLASS_APPLICATION | (2542 << 2)), 25, 0, 0 }, /* substance at 885 */
    { (ASN_TAG_CLASS_APPLICATION | (2550 << 2)), 16, 0, 0 }, /* bodysitelistext at 851 */
    { (ASN_TAG_CLASS_APPLICATION | (2551 << 2)), 14, 0, 0 }, /* msmtsitelistext at 840 */
    { (ASN_TAG_CLASS_APPLICATION | (6034 << 2)), 1, 0, 0 } /* devicehandle at 782 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RealTimeSampleArrayDescriptiveDataSection_specs_1 = {
	sizeof(struct RealTimeSampleArrayDescriptiveDataSection),
	offsetof(struct RealTimeSampleArrayDescriptiveDataSection, _asn_ctx),
	asn_MAP_RealTimeSampleArrayDescriptiveDataSection_tag2el_1,
	38,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RealTimeSampleArrayDescriptiveDataSection = {
	"RealTimeSampleArrayDescriptiveDataSection",
	"RealTimeSampleArrayDescriptiveDataSection",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_RealTimeSampleArrayDescriptiveDataSection_tags_1,
	sizeof(asn_DEF_RealTimeSampleArrayDescriptiveDataSection_tags_1)
		/sizeof(asn_DEF_RealTimeSampleArrayDescriptiveDataSection_tags_1[0]), /* 1 */
	asn_DEF_RealTimeSampleArrayDescriptiveDataSection_tags_1,	/* Same as above */
	sizeof(asn_DEF_RealTimeSampleArrayDescriptiveDataSection_tags_1)
		/sizeof(asn_DEF_RealTimeSampleArrayDescriptiveDataSection_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RealTimeSampleArrayDescriptiveDataSection_1,
	38,	/* Elements count */
	&asn_SPC_RealTimeSampleArrayDescriptiveDataSection_specs_1	/* Additional specs */
};

