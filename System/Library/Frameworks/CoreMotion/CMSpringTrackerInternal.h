//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMSpringTrackerInternal : NSObject
{
    void *fLocationdConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *fInternalQueue;	// 16 = 0x10
    _Bool fTrackingStarted;	// 24 = 0x18
    CDUnknownBlockType fHandler;	// 32 = 0x20
}

- (void)_querySpringDataFromRecord:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001adfc8
- (void)_handleStartStopResponse:(shared_ptr_bdcc6d0f)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001adaac
- (void)_stopWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001ad865
- (void)_startWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001ad5f2
- (_Bool)_isTracking;	// IMP=0x00000000001ad389
- (void)_teardown;	// IMP=0x00000000001ad347
- (void)dealloc;	// IMP=0x00000000001ad30d
- (id)init;	// IMP=0x00000000001acd9a

@end

