//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class __IOGCFastPathClient;
@protocol OS_dispatch_mach, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __IOGCFastPathInputQueue : NSObject
{
    struct __CFAllocator *allocator;	// 8 = 0x8
    __IOGCFastPathClient *client;	// 16 = 0x10
    struct IOGCFastPathInputQueueInterface **queueInterface;	// 24 = 0x18
    unsigned long long queueID;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    CDUnknownBlockType _cancelHandler;	// 48 = 0x30
    CDUnknownFunctionPointerType _dataAvailableCallback;	// 56 = 0x38
    void *_dataAvailableContext;	// 64 = 0x40
    NSObject<OS_dispatch_mach> *_dispatchMach;	// 72 = 0x48
    _Bool _activated;	// 80 = 0x50
    _Bool _cancelled;	// 81 = 0x51
}

- (id)description;	// IMP=0x000000000003dedf
- (void)dealloc;	// IMP=0x000000000003ddd1

@end

