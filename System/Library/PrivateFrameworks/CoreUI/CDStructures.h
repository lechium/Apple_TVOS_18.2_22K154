//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CUIDesignColorTraits {
    long long _field1;
    long long _field2;
    long long _field3;
    long long _field4;
    long long _field5;
    long long _field6;
    long long _field7;
};

struct CUIDesignColorTraits2 {
    unsigned long long _field1;
    long long _field2;
    long long _field3;
    long long _field4;
    long long _field5;
    long long _field6;
    long long _field7;
    long long _field8;
    long long _field9;
    unsigned long long _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    unsigned long long _field13;
};

struct CUIVectorGlyphPathElementLength {
    float _field1;
    float _field2;
};

struct CUIVectorGlyphPathLengthData {
    float totalLength;
    float *subpathLengths;
    struct CUIVectorGlyphPathElementLength *elementLengths;
    unsigned long long *elementToSubpath;
    unsigned long long numSubpaths;
    unsigned long long numElements;
};

struct FontValue {
    char _field1[128];
    float _field2;
};

struct _CUIVibrantColorMatrixOptions {
    double _field1[4];
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _carextendedMetadata {
    unsigned int _field1;
    char _field2[256];
    char _field3[256];
    char _field4[256];
    char _field5[256];
};

struct _carheader {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    char _field6[128];
    char _field7[256];
    unsigned char _field8[16];
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
};

struct _colordef {
    unsigned int _field1;
    unsigned int _field2;
    struct _rgbquad {
        unsigned int :8;
        unsigned int :8;
        unsigned int :8;
        unsigned int :8;
    } _field3;
};

struct _csibitmap {
    unsigned int _field1;
    union {
        unsigned int _field1;
        struct _csibitmapflags {
            unsigned int :1;
            unsigned int :1;
            unsigned int :30;
        } _field2;
    } _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned char _field5[0];
};

struct _csicolor {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int :8;
    unsigned int :3;
    unsigned int :21;
    unsigned int _field3;
    double _field4[0];
};

struct _csiheader {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int :4;
    unsigned int :28;
    struct _csimetadata {
        unsigned int _field1;
        unsigned short _field2;
        unsigned short _field3;
        char _field4[128];
    } _field8;
    unsigned int _field9;
    struct _csibitmaplist {
        unsigned int _field1;
        unsigned int _field2[0];
    } _field10;
};

struct _csitextstyle {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    float _field4;
    float _field5;
    float _field6;
    unsigned int _field7;
    unsigned int _field8;
    char _field9[0];
};

struct _cuieffectdata {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    struct _cuieffectlist {
        unsigned int _field1;
        unsigned int _field2[0];
    } _field5;
};

struct _psdGradientColor {
    double red;
    double green;
    double blue;
    double alpha;
};

struct _renditionkeyattributeindex {
    unsigned long long keymask;
    unsigned char keyindices[65];
    unsigned int nkeys;
    unsigned int keylist[29];
};

struct _renditionkeyfmt {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4[0];
};

struct _renditionkeytoken {
    unsigned short identifier;
    unsigned short value;
};

struct crmFlags {
    unsigned int scalesVertically:1;
    unsigned int scalesHorizontally:1;
    unsigned int reserved:14;
};

struct cuithemerenditionrenditionflags {
    unsigned int isVectorBased:1;
    unsigned int isOpaque:1;
    unsigned int bitmapEncoding:4;
    unsigned int optOutOfThinning:1;
    unsigned int isFlippable:1;
    unsigned int isTintable:1;
    unsigned int preservedVectorRepresentation:1;
    unsigned int preserveForArchiveOnly:1;
    unsigned int reserved:21;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct vImage_Buffer {
    void *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    _Bool _field6;
} CDStruct_073a3662;

typedef struct {
    unsigned int _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
} CDStruct_bdea167c;

typedef struct {
    unsigned int _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
} CDStruct_3d979a67;

typedef struct {
    MISSING_TYPE *columns[4];
} CDStruct_14d5dc5e;

typedef struct {
    double top;
    double left;
    double bottom;
    double right;
} CDStruct_3c058996;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    _Bool _field6;
    _Bool _field7;
} CDStruct_2a8bd0fe;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    float _field10;
    float _field11;
    float _field12;
    unsigned int _field13;
} CDStruct_c78fd0c4;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
} CDStruct_265c7ca9;

typedef struct {
    long long _field1;
    char *_field2;
    char *_field3;
} CDStruct_c77fb927;

typedef struct {
    unsigned int _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    struct CGPoint _field9;
} CDStruct_a5d4af33;

typedef struct {
    char *_field1;
    char *_field2;
    struct _renditionkeytoken _field3[5];
    long long _field4;
    long long _field5;
    struct {
        char *_field1;
        char *_field2;
        long long _field3;
        unsigned long long _field4;
    } _field6[12];
} CDStruct_26b2aa83;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    struct CGPoint _field9;
} CDStruct_ca46f23f;

typedef struct {
    unsigned int effectType;
    unsigned int effectParameter;
    CDUnion_577fdfa6 effectValue;
} CDStruct_c57d91d4;

typedef struct {
    char *_field1;
    char *_field2;
    _Bool _field3;
    long long _field4;
    CDStruct_26b2aa83 _field5[8];
} CDStruct_22c2ae3f;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    CDStruct_c57d91d4 _field6[125];
} CDStruct_35a2250d;

// Ambiguous groups
typedef struct {
    double *_field1;
    unsigned long long _field2;
} CDStruct_f92c8eab;

typedef struct {
    double *deltaComponents;
    unsigned long long numDeltas;
} CDStruct_351aa1f6;

#pragma mark Typedef'd Unions

typedef union {
    double floatValue;
    unsigned long long intValue;
    struct _rgbcolor {
        unsigned char r;
        unsigned char g;
        unsigned char b;
    } colorValue;
    short angleValue;
    unsigned int enumValue;
} CDUnion_577fdfa6;

