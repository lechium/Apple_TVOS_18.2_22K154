//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFTimer, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDRemoteDeviceConfirmationHandler : HMFObject
{
    HMFTimer *_timeoutTimer;	// 8 = 0x8
    CDUnknownBlockType _handler;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000009a5f16
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(copy) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly) HMFTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000009a5e4d
- (id)initWithTimeoutTimer:(id)arg1 workQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000009a5d31

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

