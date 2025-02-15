//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct BKPathZGradientInfo {
    double previousTimestamp;
    double previousQuality;
    double zGradient;
};

struct BKPointTriple {
    _Bool locationsAreValid;
    _Bool hitTestIsShifted;
    _Bool preciseLocationCalculated;
    struct CGPoint location;
    struct CGPoint hitTestLocation;
    struct CGPoint preciseLocation;
};

struct CATransform3D {
    double _field1;
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
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
};

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

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned long long _field4;
    float _field5;
    struct CATransform3D _field6;
    struct CATransform3D _field7;
    _Bool _field8;
    _Bool _field9;
    float _field10;
    float _field11;
    float _field12;
} CDStruct_2cb78f1a;

typedef struct {
    struct CGAffineTransform _field1;
    struct CGRect _field2;
} CDStruct_358621a0;

typedef struct {
    struct CGSize _field1;
    double _field2;
    unsigned char _field3;
    struct CGRect _field4;
} CDStruct_c3a51bd1;

