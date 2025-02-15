//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADDeviceProximityManager, NSArray, NSString;
@protocol OS_dispatch_queue;

@interface ADDeviceRouter : NSObject
{
    NSArray *_currentDeviceContextTuples;	// 8 = 0x8
    long long _isLocalDeviceFollowerInStereoPair;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    ADDeviceProximityManager *_deviceProximityManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000dd046
- (void)requestLifecycleObserver:(id)arg1 requestDidEndWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00100000000dcffb
- (void)requestLifecycleObserver:(id)arg1 requestWasCancelledWithInfo:(id)arg2 forReason:(long long)arg3 origin:(long long)arg4 client:(id)arg5 successorInfo:(id)arg6;	// IMP=0x00100000000dcff5
- (void)requestLifecycleObserver:(id)arg1 requestWillBeginWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00100000000dcfae
- (void)getPreferredDeviceToHandleCommand:(id)arg1 logNearbyDeviceMetrics:(_Bool)arg2 executionContext:(id)arg3 sharedUserID:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000dcd85
- (void)_fetchCurrentDeviceContextTuplesIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000dcc1e
- (void)_updateContext:(id)arg1;	// IMP=0x00100000000dca93
- (void)updateContext:(id)arg1;	// IMP=0x00100000000dc97f
- (id)_initWithQueue:(id)arg1 deviceProximityManager:(id)arg2;	// IMP=0x00100000000dc8aa
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000000dc829

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

