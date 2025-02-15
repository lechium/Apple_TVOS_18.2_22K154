//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHAPAccessory, NSArray, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDTargetControllerManager : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    unsigned char _maximumTargets;	// 12 = 0xc
    _Bool _configurationRefreshed;	// 13 = 0xd
    HMDHAPAccessory *_controller;	// 16 = 0x10
    NSMutableSet *_configuredTargets;	// 24 = 0x18
    unsigned long long _ticksPerSecond;	// 32 = 0x20
    NSArray *_buttonConfiguration;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    NSString *_logID;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x0010000000628903
- (void).cxx_destruct;	// IMP=0x0000000000621e25
@property(nonatomic) _Bool configurationRefreshed; // @synthesize configurationRefreshed=_configurationRefreshed;
@property(nonatomic) unsigned char maximumTargets; // @synthesize maximumTargets=_maximumTargets;
@property(readonly, nonatomic) NSString *logID; // @synthesize logID=_logID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSMutableSet *configuredTargets; // @synthesize configuredTargets=_configuredTargets;
@property(readonly, nonatomic) __weak HMDHAPAccessory *controller; // @synthesize controller=_controller;
- (void)_configureTargetAccessories:(id)arg1 reason:(id)arg2 targetAccessories:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000621b8f
- (void)_handleConfigureTargets:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000620d71
- (void)handleConfigureTargets:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000620c93
- (id)targetConfigurationMatchingAccessory:(id)arg1;	// IMP=0x0000000000620934
- (id)targetConfigurationMatchingIdentifier:(id)arg1;	// IMP=0x000000000062074f
- (void)updateTargets:(id)arg1;	// IMP=0x0000000000620697
- (void)autoConfigureTargets;	// IMP=0x0000000000620626
- (void)_saveTargetUUIDs;	// IMP=0x0000000000620385
- (void)__characteristicEventsReceived:(id)arg1;	// IMP=0x000000000061fece
- (void)registerForActiveIdentifierNotifications;	// IMP=0x000000000061fe5d
- (void)_registerForActiveIdentifierNotifications;	// IMP=0x000000000061f6ff
- (void)_handleActiveIdentifierReadResponses:(id)arg1;	// IMP=0x000000000061f244
- (void)__handleActiveIdentifierChange:(id)arg1 forCharacteristic:(id)arg2;	// IMP=0x000000000061ee9f
- (void)acknowledgeTargetControlService:(id)arg1 active:(_Bool)arg2;	// IMP=0x000000000061ede8
- (void)_resetTargets;	// IMP=0x000000000061eb0d
- (id)_dataForResetTargetsWithOutError:(id *)arg1;	// IMP=0x000000000061e958
- (void)removeTargetAccessory:(id)arg1;	// IMP=0x000000000061e700
- (void)_removeTargets:(id)arg1;	// IMP=0x000000000061e04a
- (id)_dataForRemoveTargets:(id)arg1 outError:(id *)arg2;	// IMP=0x000000000061db85
- (void)addTargetAccessory:(id)arg1 buttonConfiguration:(id)arg2;	// IMP=0x000000000061da93
- (void)_addTargets:(id)arg1;	// IMP=0x000000000061d2a7
- (void)_postSelectionChangeNotification:(_Bool)arg1 object:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000000061d204
- (id)_dataForAddTargets:(id)arg1 outError:(id *)arg2;	// IMP=0x000000000061cae7
- (void)updateTargetAccessory:(id)arg1 name:(id)arg2 buttonConfiguration:(id)arg3;	// IMP=0x000000000061c9dc
- (void)_updateName:(id)arg1 buttonConfiguration:(id)arg2 target:(id)arg3;	// IMP=0x000000000061c252
- (id)_dataForUpdateTarget:(id)arg1 name:(id)arg2 buttonConfiguration:(id)arg3 outError:(id *)arg4;	// IMP=0x000000000061bcba
- (void)updateButtonConfigurationForTarget:(id)arg1;	// IMP=0x000000000061bc02
- (void)_auditTargets:(id)arg1;	// IMP=0x000000000061b3e3
- (void)_listTargetsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000061b026
- (id)_dataForListTargetsWithOutError:(id *)arg1;	// IMP=0x000000000061ae71
- (void)_refreshConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000061aba6
- (void)_readSupportedConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000061a8a7
- (void)refreshConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000061a7ef
- (void)_notifyConfigurationRefresh:(id)arg1;	// IMP=0x000000000061a71d
- (id)__refreshedConfiguration:(id)arg1;	// IMP=0x000000000061a538
- (int)_parseSupportedTargetConfiguration:(id)arg1;	// IMP=0x000000000061a1ed
- (void)__accessoryRemoved:(id)arg1;	// IMP=0x000000000061a135
- (void)__accessoryNameUpdated:(id)arg1;	// IMP=0x000000000061a07d
- (void)__accessoryConnected:(id)arg1;	// IMP=0x0000000000619fc5
- (void)__accessoryConfigured:(id)arg1;	// IMP=0x0000000000619fb3
- (void)__accessoryDisconnected:(id)arg1;	// IMP=0x0000000000619efb
- (void)__accessoryUnconfigured:(id)arg1;	// IMP=0x0000000000619ee9
@property(retain, nonatomic) NSArray *buttonConfiguration; // @synthesize buttonConfiguration=_buttonConfiguration;
@property(nonatomic) unsigned long long ticksPerSecond; // @synthesize ticksPerSecond=_ticksPerSecond;
@property(readonly, nonatomic) NSArray *targetUUIDs;
- (void)resetConfiguredTargets;	// IMP=0x00000000006199ae
- (void)removeConfiguredTarget:(id)arg1;	// IMP=0x0000000000619938
- (void)addConfiguredTarget:(id)arg1;	// IMP=0x00000000006198c2
- (id)logIdentifier;	// IMP=0x0000000000619850
- (void)invalidate;	// IMP=0x0000000000619736
- (id)initWithTargetControllerAccessory:(id)arg1 targets:(id)arg2;	// IMP=0x0000000000618c2b
- (id)init;	// IMP=0x0000000000618b83

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

