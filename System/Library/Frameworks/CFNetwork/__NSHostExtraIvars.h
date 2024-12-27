//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __NSHostExtraIvars : NSObject
{
    NSString *thingToResolve;	// 8 = 0x8
    int resolveType;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *resolveQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *cacheAccessQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *callbackQueue;	// 40 = 0x28
    _Bool startedResolving;	// 48 = 0x30
}

- (void)dealloc;	// IMP=0x0000000000143095
- (id)init;	// IMP=0x000000000014302e

@end

