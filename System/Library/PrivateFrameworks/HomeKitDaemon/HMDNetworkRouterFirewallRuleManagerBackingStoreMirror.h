//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBCloudDatabase, HMBLocalDatabase, HMBLocalZone, HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorInternalStateModel, NAFuture, NAPromise, NSObject, NSString;
@protocol HMBLocalZoneID, NAScheduler, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirror : HMFObject
{
    _Bool _shuttingDown;	// 8 = 0x8
    _Bool _useAnonymousRequests;	// 9 = 0x9
    id <HMBLocalZoneID> _zoneID;	// 16 = 0x10
    HMBLocalZone *_localZone;	// 24 = 0x18
    NAFuture *_lastAsyncFuture;	// 32 = 0x20
    HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorInternalStateModel *_internalState;	// 40 = 0x28
    HMBCloudDatabase *_cloudDatabase;	// 48 = 0x30
    HMBLocalDatabase *_localDatabase;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_workQueue;	// 64 = 0x40
    NAPromise *_startupPromise;	// 72 = 0x48
    NAPromise *_shutdownPromise;	// 80 = 0x50
    id <NAScheduler> _workQueueScheduler;	// 88 = 0x58
}

+ (id)logCategory;	// IMP=0x0010000000ad42cb
+ (id)publicKeysFromCertificateRecord:(id)arg1;	// IMP=0x001000000060b56f
+ (id)__publicKeyFromCertificateRecord:(id)arg1 dataKey:(id)arg2 assetKey:(id)arg3;	// IMP=0x001000000060a9eb
+ (id)__recordKeyCertificatePrefix:(id)arg1;	// IMP=0x001000000060a8fa
+ (id)__certificatesRecordID;	// IMP=0x001000000060a8ca
+ (id)__createSignatureVerificationPolicy;	// IMP=0x001000000060a8a3
+ (unsigned long long)__maxSizeForCKRecordSignatureVerificationCertificateChain;	// IMP=0x001000000060a7bd
+ (_Bool)__errorIsNotFound:(id)arg1;	// IMP=0x00100000008a1aa4
+ (id)__overrideParentModelID;	// IMP=0x00100000008a1a74
- (void).cxx_destruct;	// IMP=0x0000000000ad0a76
@property(readonly, nonatomic) id <NAScheduler> workQueueScheduler; // @synthesize workQueueScheduler=_workQueueScheduler;
@property(readonly, nonatomic) NAPromise *shutdownPromise; // @synthesize shutdownPromise=_shutdownPromise;
@property(readonly, nonatomic) NAPromise *startupPromise; // @synthesize startupPromise=_startupPromise;
@property(readonly, nonatomic) _Bool useAnonymousRequests; // @synthesize useAnonymousRequests=_useAnonymousRequests;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) HMBLocalDatabase *localDatabase; // @synthesize localDatabase=_localDatabase;
@property(readonly, nonatomic) HMBCloudDatabase *cloudDatabase; // @synthesize cloudDatabase=_cloudDatabase;
@property(nonatomic, getter=isShuttingDown) _Bool shuttingDown; // @synthesize shuttingDown=_shuttingDown;
@property(retain, nonatomic) HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorInternalStateModel *internalState; // @synthesize internalState=_internalState;
@property(retain, nonatomic) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property(readonly, nonatomic) id <HMBLocalZoneID> zoneID; // @synthesize zoneID=_zoneID;
- (void)__saveInternalStateWithActivity:(id)arg1;	// IMP=0x0000000000ad0514
- (_Bool)_removeOverridesForZoneName:(id)arg1 recordName:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000ad02bb
- (_Bool)removeOverridesForZoneName:(id)arg1 recordName:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000ad0201
- (_Bool)removeAllOverridesWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000ad0178
- (_Bool)removeOverridesForRecordIDs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000acff48
- (_Bool)addOverrides:(id)arg1 replace:(_Bool)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000acfd0d
- (id)_fetchOverridesForZoneName:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000acfaa1
- (id)fetchOverridesForZoneName:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000acfa8f
- (id)fetchAllOverridesWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000acfa75
- (id)fetchOverridesForRecordIDs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000acf6f2
- (_Bool)removeAllLocalRulesWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000acf4d2
- (id)fetchAllDataForZoneName:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000acf424
- (id)fetchAllDataWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000acf38c
- (id)_fetchAllDataForZoneName:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000acf120
- (id)fetchAllDataForRecordIDs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000aced9d
- (void)fetchCloudRecordsForZoneID:(id)arg1 recordID:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000aceca5
- (id)desiredKeys;	// IMP=0x0000000000acebc5
- (void)fetchCloudRecordIDsForZoneID:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000aceaca
- (void)_fetchCloudRecordsForZoneID:(id)arg1 recordID:(id)arg2 options:(id)arg3 desiredKeys:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000ace8db
- (void)fetchCloudChangesForRecordIDs:(id)arg1 options:(id)arg2 ignoreLastSynchronizedRecords:(_Bool)arg3 xpcActivity:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000ace6f5
- (id)cloudFetchNeededForRecordIDs:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000ace5b6
@property(readonly, nonatomic) NAFuture *shutdownFuture;
@property(readonly, nonatomic) NAFuture *startupFuture;
- (id)shutdown;	// IMP=0x0000000000ace3e1
- (id)flush;	// IMP=0x0000000000ace2ac
- (id)triggerOutputForOutputRow:(unsigned long long)arg1 options:(id)arg2;	// IMP=0x0000000000ace23d
- (id)destroy;	// IMP=0x0000000000ace1ce
- (void)startUpWithLocalZone:(id)arg1;	// IMP=0x0000000000ace0f3
@property(readonly, nonatomic) NAFuture *startUp;
- (id)__asyncFutureWithActivity:(id)arg1 ignoreErrors:(_Bool)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000acdf00
@property(retain, nonatomic) NAFuture *lastAsyncFuture; // @synthesize lastAsyncFuture=_lastAsyncFuture;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
- (id)initWithLocalDatabase:(id)arg1 cloudDatabase:(id)arg2 useAnonymousRequests:(_Bool)arg3 ownerQueue:(id)arg4;	// IMP=0x0000000000acda43
- (void)__startQueryOperation:(id)arg1 operation:(id)arg2;	// IMP=0x000000000012cd54
- (void)__fetchRecordsByQuery:(id)arg1;	// IMP=0x000000000012c82f
- (void)__fetchRecordByID:(id)arg1;	// IMP=0x000000000012c2e3
- (void)__fetchCloudRecordsWithFetchInfo:(id)arg1;	// IMP=0x000000000012c23a
- (_Bool)__shouldFailCloudRecordFetchError:(id)arg1 error:(id)arg2;	// IMP=0x000000000012bc4e
- (void)__shutdownWithActivity:(id)arg1;	// IMP=0x00000000001deb23
- (void)__startupWithLocalZone:(id)arg1 activity:(id)arg2;	// IMP=0x00000000001de815
- (id)__loadOrCreateInternalStateModelWithLocalZone:(id)arg1 activity:(id)arg2;	// IMP=0x00000000001de461
- (void)__retryFetchVerificationCertificatesWithFetchInfo:(id)arg1;	// IMP=0x0000000000609cf1
- (_Bool)__canRecoverFromVerificationCertificatesError:(id)arg1 fetchInfo:(id)arg2;	// IMP=0x0000000000609aff
- (void)__fetchVerificationCertificatesCompleted:(id)arg1 record:(id)arg2 error:(id)arg3;	// IMP=0x00000000006096d2
- (void)__fetchVerificationCertificatesWithFetchInfo:(id)arg1;	// IMP=0x000000000060953b
- (void)fetchVerificationCertificatesRecordWithOperationGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000609321
- (_Bool)__removeOverridesForZoneName:(id)arg1 recordName:(id)arg2 options:(id)arg3 activity:(id)arg4 error:(id *)arg5;	// IMP=0x00000000008a1132
- (_Bool)__removeOverridesForZoneName:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id *)arg4;	// IMP=0x00000000008a00c9
- (_Bool)__removeOverridesForRecordIDs:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id *)arg4;	// IMP=0x000000000089f875
- (_Bool)__removeAllOverridesWithOptions:(id)arg1 activity:(id)arg2 error:(id *)arg3;	// IMP=0x000000000089f4b2
- (_Bool)__addOverrides:(id)arg1 replace:(_Bool)arg2 options:(id)arg3 activity:(id)arg4 error:(id *)arg5;	// IMP=0x000000000089eefe
- (id)__fetchOverridesForZoneName:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id *)arg4;	// IMP=0x000000000089e43f
- (id)__fetchOverridesForRecordIDs:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id *)arg4;	// IMP=0x000000000089dd0d
- (_Bool)__removeAllLocalRulesWithOptions:(id)arg1 activity:(id)arg2 error:(id *)arg3;	// IMP=0x000000000089d9b1
- (id)__fetchAllDataForZoneName:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id *)arg4;	// IMP=0x000000000089d0b3
- (id)__fetchAllDataForZoneID:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id *)arg4;	// IMP=0x000000000089bddb
- (id)__fetchAllDataForRecordIDs:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id *)arg4;	// IMP=0x000000000089b39d
- (id)__localZonesForRecordIDs:(id)arg1 activity:(id)arg2 error:(id *)arg3;	// IMP=0x000000000089ab78
- (void)__shutdownLocalZones:(id)arg1 activity:(id)arg2;	// IMP=0x000000000089a82d
- (id)__openLocalZoneForCloudZoneID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000089a757
- (id)__createCloudZoneIDForZoneID:(id)arg1;	// IMP=0x000000000089a663
- (void)__updateChangeTokenWithFetchInfo:(id)arg1;	// IMP=0x00000000009eda3d
- (void)__removeDeletedZonesWithFetchInfo:(id)arg1;	// IMP=0x0000000000a21828
- (void)__retryFetchDatabaseChangesWithFetchInfo:(id)arg1;	// IMP=0x0000000000bc88fb
- (_Bool)__canRecoverFromFetchDatabaseChangesError:(id)arg1 fetchInfo:(id)arg2;	// IMP=0x0000000000bc85e1
- (void)__fetchDatabaseChangesCompleted:(id)arg1 error:(id)arg2;	// IMP=0x0000000000bc84d6
- (void)__fetchDatabaseChangesWithFetchInfo:(id)arg1;	// IMP=0x0000000000bc7ece
- (void)__fetchZoneChangesWithFetchInfo:(id)arg1;	// IMP=0x0000000000e10f4f
- (void)__performCloudZonePullsWithFetchInfo:(id)arg1;	// IMP=0x0000000000e109fc
- (void)__startUpCloudZonesWithFetchInfo:(id)arg1;	// IMP=0x0000000000e104a9
- (_Bool)__createCloudZonesForFetchInfo:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000e1010d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

