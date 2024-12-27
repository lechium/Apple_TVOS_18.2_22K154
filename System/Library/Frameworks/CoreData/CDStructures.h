//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct _NSFaultingMutableArrayFlags {
    unsigned int _isFault:1;
    unsigned int _reserved:31;
};

struct _NSFaultingMutableOrderedSetFlags {
    unsigned int _isFault:1;
    unsigned int _mustPropagateDelete:1;
    unsigned int _ignoringIdempotentKVO:1;
    unsigned int _mustCopyOnWrite:1;
    unsigned int _isImmutableCopy:1;
    unsigned int _reserved:11;
    unsigned int _relationship:16;
};

struct _NSFaultingMutableSetFlags {
    unsigned int _isFault:1;
    unsigned int _mustPropagateDelete:1;
    unsigned int _reserved:14;
    unsigned int _relationship:16;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _PFArrayFlags {
    unsigned int shouldRetain:1;
    unsigned int shouldRelease:1;
    unsigned int useExtendedRelease:1;
    unsigned int freeBackingArray:1;
    unsigned int copyBackingArray:1;
    unsigned int managedObjects:1;
    unsigned int _RESERVED:27;
};

struct _PFBatchFaultingArrayFlags {
    unsigned int _LRUIndex:8;
    unsigned int _uniformEntity:1;
    unsigned int _LRUEntryCount:11;
    unsigned int _RESERVED:12;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct persistentStoreCacheFlags {
    unsigned int _preserveToManyRelationships:1;
    unsigned int _reserved:31;
};

struct sqlite3_snapshot {
    unsigned char _field1[48];
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned int _field1;
    double _field2;
    unsigned long long _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    struct {
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :25;
    } _field8;
    int _field9;
    void **_field10;
    unsigned int *_field11;
    void *_field12;
    void *_field13;
} CDStruct_2b54fbaf;

