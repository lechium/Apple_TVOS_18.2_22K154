//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

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

struct SCRCMathAverageValue {
    unsigned int samples;
    double fifo[50];
    int fifoIndex;
    double sum;
    double average;
    double current;
};

struct VOTExternalRoutingInfo {
    unsigned long long state;
    _Bool isWireless;
    _Bool isMirroring;
    _Bool supportsAudio;
    _Bool isHeadphoneBT;
    _Bool isHeadsetBT;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
    id _field2;
} CDStruct_a70f6672;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
} CDStruct_4bcfbbae;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

