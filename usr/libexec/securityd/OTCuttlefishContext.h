//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKAccountInfo, CKKSCondition, CKKSKeychainView, CKKSLockStateTracker, CKKSNearFutureScheduler, CKKSReachabilityTracker, CuttlefishXPCWrapper, NSData, NSOperationQueue, NSString, OTAccountSettings, OTCustodianRecoveryKey, OTCuttlefishAccountStateHolder, OTFollowup, OTInheritanceKey, OTMetricsSessionData, OctagonAPSReceiver, OctagonStateMachine, SecLaunchSequence, TPPolicyVersion, TPSpecificUser, TrustedPeersHelperHealthCheckResult;
@protocol CKKSCloudKitAccountStateTrackingProvider><CKKSOctagonStatusMemoizer, CKKSPeerProvider, OS_dispatch_queue, OTAccountsAdapter, OTAuthKitAdapter, OTDeviceInformationAdapter, OTPersonaAdapter, OTSOSAdapter, OTTapToRadarAdapter, OTTooManyPeersAdapter;

@interface OTCuttlefishContext : NSObject
{
    NSString *_bottleID;	// 8 = 0x8
    NSString *_bottleSalt;	// 16 = 0x10
    NSData *_entropy;	// 24 = 0x18
    long long _resetReason;	// 32 = 0x20
    NSString *_idmsTargetContext;	// 40 = 0x28
    NSString *_idmsCuttlefishPassword;	// 48 = 0x30
    _Bool _notifyIdMS;	// 56 = 0x38
    _Bool _skipRateLimitingCheck;	// 57 = 0x39
    _Bool _repair;	// 58 = 0x3a
    _Bool _reportRateLimitingError;	// 59 = 0x3b
    TrustedPeersHelperHealthCheckResult *_healthCheckResults;	// 64 = 0x40
    _Bool _isGuitarfish;	// 72 = 0x48
    long long _accountType;	// 80 = 0x50
    _Bool _initialBecomeUntrustedPosted;	// 88 = 0x58
    int _shouldSendMetricsForOctagon;	// 92 = 0x5c
    CuttlefishXPCWrapper *_cuttlefishXPCWrapper;	// 96 = 0x60
    OTFollowup *_followupHandler;	// 104 = 0x68
    NSString *_containerName;	// 112 = 0x70
    NSString *_contextID;	// 120 = 0x78
    TPSpecificUser *_activeAccount;	// 128 = 0x80
    NSString *_pairingUUID;	// 136 = 0x88
    CKKSLockStateTracker *_lockStateTracker;	// 144 = 0x90
    OTCuttlefishAccountStateHolder *_accountMetadataStore;	// 152 = 0x98
    OctagonStateMachine *_stateMachine;	// 160 = 0xa0
    CKKSNearFutureScheduler *_apsRateLimiter;	// 168 = 0xa8
    CKKSNearFutureScheduler *_sosConsistencyRateLimiter;	// 176 = 0xb0
    CKKSNearFutureScheduler *_checkMetricsTrigger;	// 184 = 0xb8
    OTMetricsSessionData *_sessionMetrics;	// 192 = 0xc0
    CKKSKeychainView *_ckks;	// 200 = 0xc8
    id <CKKSCloudKitAccountStateTrackingProvider><CKKSOctagonStatusMemoizer> _accountStateTracker;	// 208 = 0xd0
    id <OTDeviceInformationAdapter> _deviceAdapter;	// 216 = 0xd8
    id <OTAccountsAdapter> _accountsAdapter;	// 224 = 0xe0
    id <OTAuthKitAdapter> _authKitAdapter;	// 232 = 0xe8
    id <OTPersonaAdapter> _personaAdapter;	// 240 = 0xf0
    id <OTSOSAdapter> _sosAdapter;	// 248 = 0xf8
    id <OTTooManyPeersAdapter> _tooManyPeersAdapter;	// 256 = 0x100
    id <OTTapToRadarAdapter> _tapToRadarAdapter;	// 264 = 0x108
    CKKSCondition *_pendingEscrowCacheWarmup;	// 272 = 0x110
    NSObject<OS_dispatch_queue> *_queue;	// 280 = 0x118
    TPPolicyVersion *_policyOverride;	// 288 = 0x120
    SecLaunchSequence *_launchSequence;	// 296 = 0x128
    NSOperationQueue *_operationQueue;	// 304 = 0x130
    CKAccountInfo *_cloudKitAccountInfo;	// 312 = 0x138
    CKKSCondition *_cloudKitAccountStateKnown;	// 320 = 0x140
    CKKSNearFutureScheduler *_suggestTLKUploadNotifier;	// 328 = 0x148
    CKKSNearFutureScheduler *_requestPolicyCheckNotifier;	// 336 = 0x150
    CKKSNearFutureScheduler *_upgradeUserControllableViewsRateLimiter;	// 344 = 0x158
    CKKSNearFutureScheduler *_fixupRetryScheduler;	// 352 = 0x160
    CKKSReachabilityTracker *_reachabilityTracker;	// 360 = 0x168
    NSString *_recoveryKey;	// 368 = 0x170
    OTCustodianRecoveryKey *_custodianRecoveryKey;	// 376 = 0x178
    OTInheritanceKey *_inheritanceKey;	// 384 = 0x180
    OctagonAPSReceiver *_apsReceiver;	// 392 = 0x188
    id <CKKSPeerProvider> _octagonAdapter;	// 400 = 0x190
    Class _escrowRequestClass;	// 408 = 0x198
    Class _notifierClass;	// 416 = 0x1a0
    NSString *_machineID;	// 424 = 0x1a8
    OTAccountSettings *_accountSettings;	// 432 = 0x1b0
}

- (void).cxx_destruct;	// IMP=0x00200000000f01cf
@property(retain) OTAccountSettings *accountSettings; // @synthesize accountSettings=_accountSettings;
@property(retain, nonatomic) NSString *machineID; // @synthesize machineID=_machineID;
@property(nonatomic) _Bool initialBecomeUntrustedPosted; // @synthesize initialBecomeUntrustedPosted=_initialBecomeUntrustedPosted;
@property(readonly) Class notifierClass; // @synthesize notifierClass=_notifierClass;
@property(readonly) Class escrowRequestClass; // @synthesize escrowRequestClass=_escrowRequestClass;
@property(retain) id <CKKSPeerProvider> octagonAdapter; // @synthesize octagonAdapter=_octagonAdapter;
@property(retain) OctagonAPSReceiver *apsReceiver; // @synthesize apsReceiver=_apsReceiver;
@property(retain, nonatomic) OTInheritanceKey *inheritanceKey; // @synthesize inheritanceKey=_inheritanceKey;
@property(retain, nonatomic) OTCustodianRecoveryKey *custodianRecoveryKey; // @synthesize custodianRecoveryKey=_custodianRecoveryKey;
@property(retain, nonatomic) NSString *recoveryKey; // @synthesize recoveryKey=_recoveryKey;
@property(retain) CKKSReachabilityTracker *reachabilityTracker; // @synthesize reachabilityTracker=_reachabilityTracker;
@property(retain) CKKSNearFutureScheduler *fixupRetryScheduler; // @synthesize fixupRetryScheduler=_fixupRetryScheduler;
@property(retain) CKKSNearFutureScheduler *upgradeUserControllableViewsRateLimiter; // @synthesize upgradeUserControllableViewsRateLimiter=_upgradeUserControllableViewsRateLimiter;
@property(retain) CKKSNearFutureScheduler *requestPolicyCheckNotifier; // @synthesize requestPolicyCheckNotifier=_requestPolicyCheckNotifier;
@property(retain) CKKSNearFutureScheduler *suggestTLKUploadNotifier; // @synthesize suggestTLKUploadNotifier=_suggestTLKUploadNotifier;
@property(retain) CKKSCondition *cloudKitAccountStateKnown; // @synthesize cloudKitAccountStateKnown=_cloudKitAccountStateKnown;
@property(retain) CKAccountInfo *cloudKitAccountInfo; // @synthesize cloudKitAccountInfo=_cloudKitAccountInfo;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) SecLaunchSequence *launchSequence; // @synthesize launchSequence=_launchSequence;
@property(retain) TPPolicyVersion *policyOverride; // @synthesize policyOverride=_policyOverride;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) CKKSCondition *pendingEscrowCacheWarmup; // @synthesize pendingEscrowCacheWarmup=_pendingEscrowCacheWarmup;
@property(readonly) id <OTTapToRadarAdapter> tapToRadarAdapter; // @synthesize tapToRadarAdapter=_tapToRadarAdapter;
@property(readonly) id <OTTooManyPeersAdapter> tooManyPeersAdapter; // @synthesize tooManyPeersAdapter=_tooManyPeersAdapter;
@property(readonly) id <OTSOSAdapter> sosAdapter; // @synthesize sosAdapter=_sosAdapter;
@property(readonly) id <OTPersonaAdapter> personaAdapter; // @synthesize personaAdapter=_personaAdapter;
@property(readonly) id <OTAuthKitAdapter> authKitAdapter; // @synthesize authKitAdapter=_authKitAdapter;
@property(readonly) id <OTAccountsAdapter> accountsAdapter; // @synthesize accountsAdapter=_accountsAdapter;
@property(readonly) id <OTDeviceInformationAdapter> deviceAdapter; // @synthesize deviceAdapter=_deviceAdapter;
@property(readonly) id <CKKSCloudKitAccountStateTrackingProvider><CKKSOctagonStatusMemoizer> accountStateTracker; // @synthesize accountStateTracker=_accountStateTracker;
@property(retain) CKKSKeychainView *ckks; // @synthesize ckks=_ckks;
@property(nonatomic) int shouldSendMetricsForOctagon; // @synthesize shouldSendMetricsForOctagon=_shouldSendMetricsForOctagon;
@property(retain) OTMetricsSessionData *sessionMetrics; // @synthesize sessionMetrics=_sessionMetrics;
@property(retain, nonatomic) CKKSNearFutureScheduler *checkMetricsTrigger; // @synthesize checkMetricsTrigger=_checkMetricsTrigger;
@property(retain, nonatomic) CKKSNearFutureScheduler *sosConsistencyRateLimiter; // @synthesize sosConsistencyRateLimiter=_sosConsistencyRateLimiter;
@property(retain, nonatomic) CKKSNearFutureScheduler *apsRateLimiter; // @synthesize apsRateLimiter=_apsRateLimiter;
@property(readonly) OctagonStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) OTCuttlefishAccountStateHolder *accountMetadataStore; // @synthesize accountMetadataStore=_accountMetadataStore;
- (id)lockStateTracker;	// IMP=0x00100000000efd67
@property(retain, nonatomic) NSString *pairingUUID; // @synthesize pairingUUID=_pairingUUID;
@property(retain) TPSpecificUser *activeAccount; // @synthesize activeAccount=_activeAccount;
@property(readonly) NSString *contextID; // @synthesize contextID=_contextID;
@property(readonly) NSString *containerName; // @synthesize containerName=_containerName;
@property(retain) OTFollowup *followupHandler; // @synthesize followupHandler=_followupHandler;
@property(readonly) CuttlefishXPCWrapper *cuttlefishXPCWrapper; // @synthesize cuttlefishXPCWrapper=_cuttlefishXPCWrapper;
- (_Bool)persistSendingMetricsPermitted:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00100000000efc45
- (_Bool)fetchSendingMetricsPermitted:(id *)arg1;	// IMP=0x00100000000efbe3
- (_Bool)checkAllStateCleared;	// IMP=0x00100000000efaba
- (void)clearContextState;	// IMP=0x00100000000efa02
- (void)getAccountMetadataWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ef8c3
- (void)rpcResetAccountCDPContentsWithIdmsTargetContext:(id)arg1 idmsCuttlefishPassword:(id)arg2 notifyIdMS:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000000ef4be
- (id)egoPeerStatus:(id *)arg1;	// IMP=0x00100000000ef248
- (id)currentlyEnforcingIDMSTDL_testOnly:(id *)arg1;	// IMP=0x00100000000ef0a8
- (_Bool)machineIDOnMemoizedList:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000eee02
- (void)waitForOctagonUpgrade:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ee5e5
- (void)checkOctagonHealth:(_Bool)arg1 repair:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000edc93
- (_Bool)processMoveRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000ed596
- (_Bool)postConfirmPasscodeCFU:(id *)arg1;	// IMP=0x00100000000ed458
- (_Bool)leaveTrust:(id *)arg1;	// IMP=0x00100000000ed317
- (_Bool)recheckCKKSTrustStatus:(id *)arg1;	// IMP=0x00100000000eced2
- (_Bool)shouldPostConfirmPasscodeCFU:(id *)arg1;	// IMP=0x00100000000eccc0
- (_Bool)postRepairCFU:(id *)arg1;	// IMP=0x00100000000ecb26
- (void)rerollWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ec872
- (void)rpcFetchTotalCountOfTrustedPeers:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ec6cf
- (void)rpcTlkRecoverabilityForEscrowRecordData:(id)arg1 source:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ec565
- (void)tlkRecoverabilityInOctagon:(id)arg1 source:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ec4a7
- (void)octagonPeerIDGivenBottleID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ec2f6
- (void)rpcWaitForPriorityViewKeychainDataRecovery:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ebf5b
- (void)rpcAccountWideSettingsWithForceFetch:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ebcd2
- (void)rpcFetchAccountSettings:(CDUnknownBlockType)arg1;	// IMP=0x00100000000eba64
- (void)rpcFetchTrustedSecureElementIdentities:(CDUnknownBlockType)arg1;	// IMP=0x00100000000eb6c6
- (void)rpcRemoveLocalSecureElementIdentityPeerID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000eb520
- (void)rpcSetLocalSecureElementIdentity:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000eb314
- (void)rpcSetAccountSetting:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ead36
- (void)rpcSetUserControllableViewsSyncingStatus:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000eac72
- (void)rpcFetchUserControllableViewsSyncingStatus:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ea731
- (void)rpcRefetchCKKSPolicy:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ea541
- (void)fetchEscrowContents:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ea39f
- (void)rpcInvalidateEscrowCache:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ea203
- (void)rpcFetchAllViableEscrowRecordsFromSource:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ea05a
- (void)rpcFetchAllViableBottlesFromSource:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e9e31
- (void)rpcTrustStatus:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e968f
- (void)rpcTrustStatusCachedStatus:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e9510
- (void)rpcCreateInheritanceKeyWithUUID:(id)arg1 claimTokenData:(id)arg2 wrappingKeyData:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000000e9248
- (void)rpcRecreateInheritanceKeyWithUUID:(id)arg1 oldIK:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e8faa
- (void)rpcCheckInheritanceKeyWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e8df4
- (void)rpcRemoveInheritanceKeyWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e8c3e
- (void)rpcStoreInheritanceKeyWithIK:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e8a88
- (void)rpcGenerateInheritanceKeyWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e8942
- (void)rpcCreateInheritanceKeyWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e878c
- (void)rpcCheckCustodianRecoveryKeyWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e85d6
- (void)rpcRemoveCustodianRecoveryKeyWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e8420
- (void)rpcCreateCustodianRecoveryKeyWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e826a
- (void)areRecoveryKeysDistrusted:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e80cc
- (void)rpcRemoveRecoveryKey:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e7f2e
- (void)rpcIsRecoveryKeySet:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e7d90
- (void)rpcSetRecoveryKey:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e7b7d
- (void)fetchTrustedDeviceNamesByPeerID:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e79df
- (void)rpcFetchEgoPeerID:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e788b
- (void)rpcStatus:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e6c42
- (id)sosSelvesStatus;	// IMP=0x00100000000e6881
- (id)sosTrustedPeersStatus;	// IMP=0x00100000000e65de
- (id)ckksPeerStatus:(id)arg1;	// IMP=0x00100000000e6454
- (void)rpcJoin:(id)arg1 vouchSig:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e60bf
- (id)joinStatePathDictionary;	// IMP=0x00100000000e5a4f
- (void)preflightRecoverOctagonUsingRecoveryKey:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e5741
- (void)preflightJoinWithInheritanceKey:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e533f
- (void)joinWithInheritanceKey:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e5079
- (void)preflightJoinWithCustodianRecoveryKey:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e4c9a
- (void)joinWithCustodianRecoveryKey:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e4a25
- (void)joinWithRecoveryKey:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e4763
- (void)joinWithBottle:(id)arg1 entropy:(id)arg2 bottleSalt:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000000e441e
- (void)rpcPrepareIdentityAsApplicantWithConfiguration:(id)arg1 epoch:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e3e18
- (void)rpcVoucherWithConfiguration:(id)arg1 permanentInfo:(id)arg2 permanentInfoSig:(id)arg3 stableInfo:(id)arg4 stableInfoSig:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x00100000000e3724
- (void)rpcEpoch:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e34fa
- (id)errorIfNoCKAccount:(id)arg1;	// IMP=0x00100000000e347f
- (long long)checkForCKAccount:(id)arg1;	// IMP=0x00100000000e2fe4
- (void)trustedPeerSetChanged:(id)arg1;	// IMP=0x00100000000e2ca8
- (void)selfPeerChanged:(id)arg1;	// IMP=0x00100000000e2ca2
- (void)deviceNameUpdated;	// IMP=0x00100000000e2b7a
- (void)requestTrustedDeviceListRefresh;	// IMP=0x00100000000e2b36
- (id)currentMemoizedLastHealthCheck;	// IMP=0x00100000000e29b8
- (int)currentMemoizedAccountState;	// IMP=0x00100000000e2896
- (int)currentMemoizedTrustState;	// IMP=0x00100000000e2774
- (void)setMachineIDOverride:(id)arg1;	// IMP=0x00100000000e270b
- (void)popTooManyPeersDialogWithEgoPeerStatus:(id)arg1 accountMeta:(id)arg2;	// IMP=0x00100000000e21cd
- (_Bool)waitForReady:(long long)arg1;	// IMP=0x00100000000e2143
- (void)notifyContainerChangeWithUserInfo:(id)arg1;	// IMP=0x00100000000e1b21
- (void)notifyContainerChange:(id)arg1;	// IMP=0x00100000000e1ad2
- (void)handleTTRRequest:(id)arg1;	// IMP=0x00100000000e169c
- (id)extractStringKey:(id)arg1 fromDictionary:(id)arg2;	// IMP=0x00100000000e1639
- (id)becomeReadyOperation;	// IMP=0x00100000000e155d
- (id)becomeInheritedOperation;	// IMP=0x00100000000e1481
- (id)becomeUntrustedOperation:(id)arg1;	// IMP=0x00100000000e138d
- (void)checkTrustStatusAndPostRepairCFUIfNecessary:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e128d
- (_Bool)checkForPhonePeerPresence:(id)arg1;	// IMP=0x00100000000e1019
- (id)repairAccountIfTrustedByTPHWithIntendedState:(id)arg1;	// IMP=0x00100000000e0e7b
- (id)cloudKitAccountNewlyAvailableOperation:(id)arg1;	// IMP=0x00100000000e0d87
- (id)postRepairCFUAndBecomeUntrusted;	// IMP=0x00100000000e0d0d
- (id)cuttlefishTrustEvaluation;	// IMP=0x00100000000e0b1e
- (id)evaluateTPHOctagonTrust;	// IMP=0x00100000000e0aa4
- (id)evaluateSecdOctagonTrust;	// IMP=0x00100000000e0a2a
- (id)checkForAccountFixupsOperation:(id)arg1;	// IMP=0x00100000000e0916
- (id)appleAccountSignOutOperation;	// IMP=0x00100000000e08a0
- (id)initializingOperation;	// IMP=0x00100000000e07c4
- (void)setMetricsToState:(int)arg1;	// IMP=0x00100000000e07a1
- (void)setMetricsStateToInactive;	// IMP=0x00100000000e0676
- (void)setMetricsStateToActive;	// IMP=0x00100000000e0545
- (id)_onqueueNextStateMachineTransition:(id)arg1 flags:(id)arg2 pendingFlags:(id)arg3;	// IMP=0x00100000000dc274
- (void)clearPairingUUID;	// IMP=0x00100000000dc260
- (void)handlePairingRestart:(id)arg1;	// IMP=0x00100000000dbefc
- (void)startOctagonStateMachine;	// IMP=0x00100000000dbebf
- (id)operationDependencies;	// IMP=0x00100000000dbb5a
- (id)prepareInformation;	// IMP=0x00100000000db735
- (void)rpcRemoveFriendsInClique:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000db621
- (void)rpcLeaveClique:(CDUnknownBlockType)arg1;	// IMP=0x00100000000db3ca
- (void)rpcResetAndEstablish:(long long)arg1 idmsTargetContext:(id)arg2 idmsCuttlefishPassword:(id)arg3 notifyIdMS:(_Bool)arg4 accountSettings:(id)arg5 isGuitarfish:(_Bool)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x00100000000db127
- (id)mergedAccountSettings:(id)arg1;	// IMP=0x00100000000db026
- (void)rpcResetAndEstablish:(long long)arg1 isGuitarfish:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000daff8
- (void)performCKServerUnreadableDataRemoval:(_Bool)arg1 altDSID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000dab53
- (void)rpcReset:(long long)arg1 isGuitarfish:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000da8ae
- (void)rpcEstablish:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000da7be
- (id)establishStatePathDictionary;	// IMP=0x00100000000da3a9
- (void)localReset:(CDUnknownBlockType)arg1;	// IMP=0x00100000000da1c2
- (_Bool)setCDPEnabled:(id *)arg1;	// IMP=0x00100000000da010
- (long long)getCDPStatus:(id *)arg1;	// IMP=0x00100000000d9e4b
- (_Bool)accountNoLongerAvailable;	// IMP=0x00100000000d9d9b
- (_Bool)idmsTrustLevelChanged:(id *)arg1;	// IMP=0x00100000000d9d54
- (void)moveToCheckTrustedState;	// IMP=0x00100000000d9ca7
- (_Bool)accountAvailable:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000d9496
- (void)cloudkitAccountStateChange:(id)arg1 to:(id)arg2;	// IMP=0x00100000000d912c
- (_Bool)canSendMetricsUsingAccountState:(int)arg1;	// IMP=0x00100000000d9120
- (void)notificationOfMachineIDListChange;	// IMP=0x00100000000d90a3
@property(readonly, copy) NSString *description;
- (void)accountStateUpdated:(id)arg1 from:(id)arg2;	// IMP=0x00100000000d88df
- (void)notifyTrustChanged:(int)arg1;	// IMP=0x00100000000d875c
- (void)dealloc;	// IMP=0x00100000000d872d
- (void)resetCKKS:(id)arg1;	// IMP=0x00100000000d871b
- (void)clearCKKS;	// IMP=0x00100000000d8707
- (id)initWithContainerName:(id)arg1 contextID:(id)arg2 activeAccount:(id)arg3 cuttlefish:(id)arg4 ckksAccountSync:(id)arg5 sosAdapter:(id)arg6 accountsAdapter:(id)arg7 authKitAdapter:(id)arg8 personaAdapter:(id)arg9 tooManyPeersAdapter:(id)arg10 tapToRadarAdapter:(id)arg11 lockStateTracker:(id)arg12 reachabilityTracker:(id)arg13 accountStateTracker:(id)arg14 deviceInformationAdapter:(id)arg15 apsConnectionClass:(Class)arg16 escrowRequestClass:(Class)arg17 notifierClass:(Class)arg18 cdpd:(id)arg19;	// IMP=0x00100000000d7d44

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

