//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CADisplayLink, NSData, NSThread, RBDisplayListInterpolator, RBImageQueueContents;

#pragma mark Function Pointers

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct Contents;

struct Document;

struct RBPath {
    void *info;
    struct RBPathCallbacks *callbacks;
};

struct RBPathCallbacks;

struct Surface;

struct _CAImageQueue;

struct cf_ptr<_CAImageQueue *> {
    struct _CAImageQueue *_p;
};

struct cf_ptr<const __CFDictionary *> {
    struct __CFDictionary *_p;
};

struct cf_ptr<const __CFString *> {
    struct __CFString *_p;
};

struct objc_ptr<CADisplayLink *> {
    CADisplayLink *_p;
};

struct objc_ptr<NSData *> {
    NSData *_p;
};

struct objc_ptr<NSThread *> {
    NSThread *_p;
};

struct objc_ptr<RBDisplayListInterpolator *> {
    RBDisplayListInterpolator *_p;
};

struct objc_ptr<RBImageQueueContents *> {
    RBImageQueueContents *_p;
};

struct objc_ptr<id<_RBDisplayListContents>> {
    id _p;
};

struct objc_ptr<id> {
    id _p;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct path_ptr {
    struct RBPath _p;
};

struct refcounted_ptr<RB::DisplayList::Contents> {
    struct Contents *_p;
};

struct refcounted_ptr<RB::Surface> {
    struct Surface *_p;
};

struct spin_lock {
    struct os_unfair_lock_s _lock;
};

struct unique_ptr<RB::XML::Document, std::default_delete<RB::XML::Document>> {
    struct __compressed_pair<RB::XML::Document *, std::default_delete<RB::XML::Document>> {
        struct Document *__value_;
    } __ptr_;
};

#pragma mark Typedef'd Structures

typedef struct {
    int _field1;
    void *_field2;
} CDStruct_27041886;

