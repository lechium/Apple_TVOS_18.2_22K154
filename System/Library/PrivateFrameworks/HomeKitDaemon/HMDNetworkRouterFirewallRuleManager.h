//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBLocalDatabase, NSArray, NSMutableArray, NSNotificationCenter, NSObject, NSString;
@protocol HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator, HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinatorFactory, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterFirewallRuleManager : HMFObject
{
    struct os_unfair_lock_s _propertyLock;	// 8 = 0x8
    long long _state;	// 16 = 0x10
    id <HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator> _coordinator;	// 24 = 0x18
    NSMutableArray *_clients;	// 32 = 0x20
    unsigned long long _operationsInProgressCount;	// 40 = 0x28
    HMBLocalDatabase *_localDatabase;	// 48 = 0x30
    NSNotificationCenter *_notificationCenter;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_workQueue;	// 72 = 0x48
    id <HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinatorFactory> _coordinatorFactory;	// 80 = 0x50
}

+ (double)defaultCloudFetchRetryInterval;	// IMP=0x00100000004fcd7b
+ (double)defaultCloudFetchInterval;	// IMP=0x00100000004fcd62
+ (id)sharedInstance;	// IMP=0x00100000004fcd32
+ (id)logCategory;	// IMP=0x00100000004fcd02
- (void).cxx_destruct;	// IMP=0x00000000004f8c76
@property(readonly, nonatomic) id <HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinatorFactory> coordinatorFactory; // @synthesize coordinatorFactory=_coordinatorFactory;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) HMBLocalDatabase *localDatabase; // @synthesize localDatabase=_localDatabase;
- (void)forceFetchCloudChangesAndForceChangeNotifications:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000004f8b86
- (void)removeOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000004f8b73
- (void)removeAllOverridesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000004f8b62
- (void)addOverrides:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000004f8b53
- (void)setOverrides:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000004f8b41
- (void)dumpPairedMetadataForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(_Bool)arg4 rawOutput:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000004f8a29
- (void)removeAllLocalRulesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000004f89aa
- (void)dumpLocalRulesForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(_Bool)arg4 rawOutput:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000004f8978
- (void)dumpLocalRulesForProductGroup:(id)arg1 ignoreOverrides:(_Bool)arg2 rawOutput:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000004f8951
- (void)dumpAllLocalRulesIgnoringOverrides:(_Bool)arg1 rawOutput:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000004f892c
- (void)dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(_Bool)arg3 verifySignatures:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000004f8916
- (void)listCloudRecordsForProductGroup:(id)arg1 rawOutput:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000004f88f1
- (void)fetchPairedMetadataVersionConfigurationsForAccessories:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000004f8843
- (void)fetchRulesForAccessories:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000004f8795
- (void)_fetchCloudChangesIgnoringLastFetchedAccessories:(_Bool)arg1 forceChangeNotifications:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000004f86f7
- (void)fetchCloudChangesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000004f86de
- (void)didCompleteScheduledCloudFetch;	// IMP=0x00000000004f8634
@property(readonly, copy, nonatomic) NSArray *activeClients;
- (void)shutdownForClient:(id)arg1;	// IMP=0x00000000004f8467
- (void)startupForClient:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000004f8389
@property(nonatomic) unsigned long long operationsInProgressCount; // @synthesize operationsInProgressCount=_operationsInProgressCount;
@property(readonly, nonatomic) NSMutableArray *clients; // @synthesize clients=_clients;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) id <HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator> coordinator; // @synthesize coordinator=_coordinator;
- (void)dealloc;	// IMP=0x00000000004f802f
- (id)initWithLocalDatabase:(id)arg1 coordinatorFactory:(id)arg2;	// IMP=0x00000000004f7f40
- (id)initWithLocalDatabase:(id)arg1;	// IMP=0x00000000004f7f2c
- (id)init;	// IMP=0x00000000004f7eb1
- (id)initWithLocalDatabase:(id)arg1 notificationCenter:(id)arg2 workQueue:(id)arg3 coordinatorFactory:(id)arg4;	// IMP=0x00000000004f7cf9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

