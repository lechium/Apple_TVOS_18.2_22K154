//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FBScene, PBSceneLayoutViewController, UIViewController;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

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

struct CGVector {
    double dx;
    double dy;
};

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct atomic_flag {
    _Atomic _Bool _Value;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

#pragma mark Typedef'd Structures

typedef struct {
    PBSceneLayoutViewController *sceneLayoutViewController;
    UIViewController *fromViewController;
    UIViewController *toViewController;
    _Bool isResigning;
} CDStruct_821c97ab;

typedef struct {
    PBSceneLayoutViewController *sceneLayoutViewController;
    UIViewController *fromViewController;
    UIViewController *toViewController;
} CDStruct_a697a85d;

typedef struct {
    id _field1;
    id _field2;
} CDStruct_a70f6672;

typedef struct {
    FBScene *defaultKioskScene;
} CDStruct_090c3085;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    float _field1;
    _Bool _field2;
} CDStruct_e6eb8490;

typedef struct {
    PBSceneLayoutViewController *sceneLayoutViewController;
    UIViewController *fromViewController;
    UIViewController *toViewController;
    FBScene *defaultKioskScene;
    _Bool shouldPlaySound;
    _Bool isLaunchingFromKiosk;
    struct CGRect appIconFrame;
} CDStruct_ce5a068a;

typedef struct {
    struct CGRect bounds;
    struct CGRect fullDisplayBounds;
} CDStruct_75a85bf1;

