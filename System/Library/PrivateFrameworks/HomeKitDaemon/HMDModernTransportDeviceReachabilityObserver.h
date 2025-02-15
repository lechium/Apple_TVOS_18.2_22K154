//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFTimer, NSMapTable, NSMutableArray, NSString;
@protocol HMDDateProvider, HMDTimerProvider;

__attribute__((visibility("hidden")))
@interface HMDModernTransportDeviceReachabilityObserver : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMapTable *_deviceToListenersMap;	// 16 = 0x10
    NSMutableArray *_devicesWithPendingUnreachability;	// 24 = 0x18
    id <HMDTimerProvider> _timerProvider;	// 32 = 0x20
    id <HMDDateProvider> _dateProvider;	// 40 = 0x28
    HMFTimer *_debounceTimer;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x00100000001ab2f1
- (void).cxx_destruct;	// IMP=0x00000000001ab25a
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000001ab248
- (void)_serviceExpiredUnreachableDevices;	// IMP=0x00000000001aad20
- (void)_notifyListeners:(id)arg1 address:(id)arg2 isReachable:(_Bool)arg3;	// IMP=0x00000000001aaa3f
- (void)transport:(id)arg1 idsIdentifier:(id)arg2 didAppearReachable:(_Bool)arg3;	// IMP=0x00000000001aa721
- (void)_clearUnreachablePendingForContext:(id)arg1;	// IMP=0x00000000001aa6ac
- (void)_setUnreachablePendingForContext:(id)arg1;	// IMP=0x00000000001aa477
- (void)_evaluateDebounceTimer;	// IMP=0x00000000001aa340
- (id)isDeviceAddressReachable:(id)arg1;	// IMP=0x00000000001aa241
- (void)removeListener:(id)arg1 forDeviceAddress:(id)arg2;	// IMP=0x00000000001a9f71
- (void)addListener:(id)arg1 forDeviceAddress:(id)arg2;	// IMP=0x00000000001a9ccd
- (id)initWithTimerProvider:(id)arg1 dateProvider:(id)arg2;	// IMP=0x00000000001a9bbc
- (id)init;	// IMP=0x00000000001a9b58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

