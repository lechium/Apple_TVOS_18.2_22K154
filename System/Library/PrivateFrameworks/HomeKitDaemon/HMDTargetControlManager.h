//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessory, HMDSiriServer, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDTargetControlManager : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HMDAccessory *_targetAccessory;	// 16 = 0x10
    NSMutableArray *_configuredControllers;	// 24 = 0x18
    NSMutableArray *_activeControlServices;	// 32 = 0x20
    NSMutableArray *_eventReceivers;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    NSString *_logID;	// 56 = 0x38
    HMDSiriServer *_siriServer;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x0010000000840f2a
- (void).cxx_destruct;	// IMP=0x000000000083e0c0
@property(retain, nonatomic) HMDSiriServer *siriServer; // @synthesize siriServer=_siriServer;
@property(readonly, nonatomic) NSString *logID; // @synthesize logID=_logID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) __weak HMDAccessory *targetAccessory; // @synthesize targetAccessory=_targetAccessory;
- (void)__activeSelectionReset:(id)arg1;	// IMP=0x000000000083dbd9
- (void)__activeSelectionChanged:(id)arg1;	// IMP=0x000000000083d2c6
- (void)_handleTargetControlServiceDeselection:(id)arg1;	// IMP=0x000000000083d038
- (void)_handleTargetControlServiceSelection:(id)arg1;	// IMP=0x000000000083ce48
- (void)_handleControllerDisconnected:(id)arg1;	// IMP=0x000000000083cab1
- (void)_targetAccessoryUnconfiguredWithController:(id)arg1;	// IMP=0x000000000083c3ab
- (void)_targetAccessoryConfiguredWithController:(id)arg1;	// IMP=0x000000000083c0c2
- (void)__characteristicsEventsReceived:(id)arg1;	// IMP=0x000000000083b996
- (void)_handleButtonEvent:(id)arg1 fromControlService:(id)arg2;	// IMP=0x000000000083a98a
- (id)__getOrCreateEventReceiver:(id)arg1;	// IMP=0x000000000083a333
- (void)__serviceRemoved:(id)arg1;	// IMP=0x000000000083a27b
- (void)__accessoryRemoved:(id)arg1;	// IMP=0x000000000083a1c3
- (void)__accessoryAdded:(id)arg1;	// IMP=0x000000000083a10b
- (void)__accessoryDisconnected:(id)arg1;	// IMP=0x000000000083a053
- (void)__accessoryUnconfigured:(id)arg1;	// IMP=0x000000000083a041
- (void)__accessoryConnected:(id)arg1;	// IMP=0x0000000000839f89
- (void)__accessoryConfigured:(id)arg1;	// IMP=0x0000000000839f77
- (void)__accessoryNameUpdated:(id)arg1;	// IMP=0x0000000000839ebf
- (void)__controllerRefreshedConfiguration:(id)arg1;	// IMP=0x0000000000839e07
- (void)_targetAccessoryRefreshConfigurationWithController:(id)arg1 userInfo:(id)arg2;	// IMP=0x00000000008392d4
- (id)__selectButtonConfiguration:(id)arg1 receiver:(id)arg2;	// IMP=0x00000000008388f0
- (void)__targetAccessoryUnconfiguredForControl:(id)arg1;	// IMP=0x0000000000838838
- (void)__targetAccessoryConfiguredForControl:(id)arg1;	// IMP=0x0000000000838780
- (void)addTargetControllers:(id)arg1;	// IMP=0x0000000000838063
- (void)removeReceiver:(id)arg1;	// IMP=0x0000000000837fed
- (void)addReceiver:(id)arg1;	// IMP=0x0000000000837f77
@property(readonly, nonatomic) NSMutableArray *eventReceivers; // @synthesize eventReceivers=_eventReceivers;
- (void)removeControlService:(id)arg1;	// IMP=0x0000000000837ea1
- (void)addControlService:(id)arg1;	// IMP=0x0000000000837e14
@property(readonly, nonatomic) NSMutableArray *activeControlServices; // @synthesize activeControlServices=_activeControlServices;
- (void)_removeController:(id)arg1;	// IMP=0x0000000000837c93
- (void)_addController:(id)arg1;	// IMP=0x0000000000837b11
@property(readonly, nonatomic) NSMutableArray *configuredControllers; // @synthesize configuredControllers=_configuredControllers;
- (id)logIdentifier;	// IMP=0x0000000000837a61
- (void)invalidate;	// IMP=0x00000000008376ce
- (id)initWithTargetAccessory:(id)arg1 controllers:(id)arg2;	// IMP=0x0000000000836c91
- (id)init;	// IMP=0x0000000000836be9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

