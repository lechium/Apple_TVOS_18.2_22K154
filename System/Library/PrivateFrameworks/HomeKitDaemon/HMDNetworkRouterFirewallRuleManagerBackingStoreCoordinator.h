//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBLocalZone, NSNotificationCenter, NSObject, NSString;
@protocol HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler, HMDNetworkRouterFirewallRuleManagerBackingStoreMirror, HMDNetworkRouterFirewallRuleManagerInternal, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator : HMFObject
{
    id <HMDNetworkRouterFirewallRuleManagerInternal> _firewallRuleManager;	// 8 = 0x8
    id <HMDNetworkRouterFirewallRuleManagerBackingStoreMirror> _mirror;	// 16 = 0x10
    NSNotificationCenter *_notificationCenter;	// 24 = 0x18
    id <HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler> _cloudFetchScheduler;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_ownerQueue;	// 40 = 0x28
    HMBLocalZone *_mirroredLocalZone;	// 48 = 0x30
}

+ (id)__pairedMetadataDataDictionaryFromRecordDictionary:(id)arg1;	// IMP=0x00100000009fcdc8
+ (id)__networkDeclarationDataDictionaryFromRecordDictionary:(id)arg1;	// IMP=0x00100000009fccf4
+ (id)__pairedMetadataDictionaryFromOverrideObjectDictionary:(id)arg1;	// IMP=0x00100000009fcc06
+ (id)__networkDeclarationDataDictionaryFromOverrideObjectDictionary:(id)arg1;	// IMP=0x00100000009fcb18
+ (id)__createProcessingOptionsWithLabel:(id)arg1;	// IMP=0x00100000009fcb01
+ (id)__createProcessingOptionsWithLabel:(id)arg1 qualityOfService:(long long)arg2;	// IMP=0x00100000009fcaa0
+ (id)__jsonFromRecords:(id)arg1 validateWithPublicKeys:(id)arg2 rawOutput:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00100000009fbff1
+ (id)__pairedMetadataFromRecord:(id)arg1 recordKey:(id)arg2 identifier:(id)arg3;	// IMP=0x00100000009fbe08
+ (id)__networkDeclarationsFromRecord:(id)arg1 recordKey:(id)arg2 identifier:(id)arg3;	// IMP=0x00100000009fbc1f
+ (id)__jsonFromPairedMetadata:(id)arg1 rawOutput:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00100000009fbb0a
+ (id)__jsonFromDeclarations:(id)arg1 rawOutput:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00100000009fb9f5
+ (id)__jsonStringFromDictionary:(id)arg1 rawOutput:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00100000009fb983
+ (id)__jsonValueForCKRecordValue:(id)arg1;	// IMP=0x00100000009fb4da
+ (_Bool)ckUseAnonymousAccount;	// IMP=0x00100000009fb48f
+ (long long)ckContainerEnvironment;	// IMP=0x00100000009fb2f1
+ (id)ckContainerIdentifier;	// IMP=0x00100000009fb14a
+ (id)logCategory;	// IMP=0x00100000009fb11a
- (void).cxx_destruct;	// IMP=0x00000000009f8b56
@property(retain, nonatomic) HMBLocalZone *mirroredLocalZone; // @synthesize mirroredLocalZone=_mirroredLocalZone;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *ownerQueue; // @synthesize ownerQueue=_ownerQueue;
@property(readonly, nonatomic) id <HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler> cloudFetchScheduler; // @synthesize cloudFetchScheduler=_cloudFetchScheduler;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) __weak id <HMDNetworkRouterFirewallRuleManagerInternal> firewallRuleManager; // @synthesize firewallRuleManager=_firewallRuleManager;
- (void)cloudFetchSchedulerFired:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000009f8a2d
- (void)__cloudFetchSchedulerFired:(CDUnknownBlockType)arg1;	// IMP=0x00000000009f87f5
- (void)__stopCloudFetchScheduler;	// IMP=0x00000000009f86b9
- (void)__maybeStartOrStopCloudFetchScheduler;	// IMP=0x00000000009f82c4
- (_Bool)removeOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 error:(id *)arg3;	// IMP=0x00000000009f8130
- (_Bool)removeAllOverridesWithError:(id *)arg1;	// IMP=0x00000000009f807a
- (_Bool)addOverrides:(id)arg1 replace:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000009f7e40
- (id)_fetchAllOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x00000000009f7bb5
- (id)dumpPairedMetadataForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(_Bool)arg4 rawOutput:(_Bool)arg5 error:(id *)arg6;	// IMP=0x00000000009f78fd
- (_Bool)removeAllLocalRulesWithError:(id *)arg1;	// IMP=0x00000000009f7847
- (id)dumpLocalRulesForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(_Bool)arg4 rawOutput:(_Bool)arg5 error:(id *)arg6;	// IMP=0x00000000009f758f
- (void)dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(_Bool)arg3 listOnly:(_Bool)arg4 verifySignatures:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000009f7388
- (void)_dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(_Bool)arg3 verifySignatures:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000009f6e81
- (void)_listCloudRecordsForProductGroup:(id)arg1 rawOutput:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000009f6cb2
- (void)_fetchCloudChangesIfNeededForRecordIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000009f69e4
- (id)ruleConfigurationForAccessory:(id)arg1 declarations:(id)arg2;	// IMP=0x00000000009f5f85
- (void)fetchRulesForAccessories:(id)arg1 qualityOfService:(long long)arg2 ignoreOverrides:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000009f5a81
- (id)fetchPairedMetadataVersionConfigurationsForAccessories:(id)arg1 qualityOfService:(long long)arg2 ignoreOverrides:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000000009f4dad
- (id)_fetchPairedMetadataForAccessories:(id)arg1 options:(id)arg2 ignoreOverrides:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000000009f4056
- (id)pairedMetadataVersionConfigurationForAccessory:(id)arg1 pairedMetadata:(id)arg2;	// IMP=0x00000000009f35a7
- (id)_fetchNetworkDeclarationsForRecordIDs:(id)arg1 options:(id)arg2 ignoreOverrides:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000000009f2c51
- (id)_fetchAllDataForProductGroup:(id)arg1 productNumber:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x00000000009f29c6
- (void)_fetchCloudChangesWithQualityOfService:(long long)arg1 ignoreLastFetchedAccessories:(_Bool)arg2 forceChangeNotifications:(_Bool)arg3 requiredRecordIDs:(id)arg4 schedulerXpcActivity:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000009f25a0
- (void)fetchCloudChangesWithQualityOfService:(long long)arg1 ignoreLastFetchedAccessories:(_Bool)arg2 forceChangeNotifications:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000009f2480
- (void)firewallRuleManagerClientsDidChange;	// IMP=0x00000000009f242d
- (void)shutdownWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000009f2161
- (void)__startupWithMirror:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000009f1eaa
- (void)__startupWithMirroredLocalZone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000009f1c12
- (void)startupWithLocalDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000009f17ce
@property(retain, nonatomic) id <HMDNetworkRouterFirewallRuleManagerBackingStoreMirror> mirror; // @synthesize mirror=_mirror;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
- (id)initWithFirewallRuleManager:(id)arg1 notificationCenter:(id)arg2 cloudFetchInterval:(double)arg3 cloudFetchRetryInterval:(double)arg4 ownerQueue:(id)arg5;	// IMP=0x00000000009f1620
- (id)initWithFirewallRuleManager:(id)arg1 notificationCenter:(id)arg2 cloudFetchScheduler:(id)arg3 ownerQueue:(id)arg4;	// IMP=0x00000000009f15b7
- (id)initWithFirewallRuleManager:(id)arg1 notificationCenter:(id)arg2 ownerQueue:(id)arg3;	// IMP=0x00000000009f14e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

