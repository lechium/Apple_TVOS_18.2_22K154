//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMWorkoutMetsInternal : NSObject
{
    void *fLocationdConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *fInternalQueue;	// 16 = 0x10
}

- (void)_queryWorkoutMetsWithSessionId:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000024b624
- (void)_teardown;	// IMP=0x000000000024b5f4
- (void)dealloc;	// IMP=0x000000000024b5b2
- (id)init;	// IMP=0x000000000024b085

@end

