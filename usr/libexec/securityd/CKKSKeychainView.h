//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKKSAccountStateTracker, CKKSCloudKitClassDependencies, CKKSCondition, CKKSIncomingQueueOperation, CKKSLockStateTracker, CKKSNearFutureScheduler, CKKSNewTLKOperation, CKKSOperationDependencies, CKKSOutgoingQueueOperation, CKKSProcessReceivedKeysOperation, CKKSReachabilityTracker, CKKSReencryptOutgoingItemsOperation, CKKSResultOperation, CKKSSecDbAdapter, CKKSSynchronizeOperation, CKKSZoneChangeFetcher, NSArray, NSDate, NSDictionary, NSHashTable, NSMutableSet, NSOperation, NSOperationQueue, NSSet, NSString, OctagonStateMachine, OctagonStateMultiStateArrivalWatcher, TPSyncingPolicy;
@protocol CKKSCuttlefishAdapterProtocol, OS_dispatch_queue, OTAccountsAdapter, OTPersonaAdapter;

@interface CKKSKeychainView : NSObject
{
    _Bool _keyStateMachineRefetched;	// 8 = 0x8
    _Bool _keyStateFullRefetchRequested;	// 9 = 0x9
    _Bool _firstManateeKeyFetched;	// 10 = 0xa
    _Bool _initiatedLocalScan;	// 11 = 0xb
    _Bool _itemModificationsBeforePolicyLoaded;	// 12 = 0xc
    _Bool _halted;	// 13 = 0xd
    _Bool _havoc;	// 14 = 0xe
    long long _accountStatus;	// 16 = 0x10
    CKContainer *_container;	// 24 = 0x18
    CKKSAccountStateTracker *_accountTracker;	// 32 = 0x20
    CKKSReachabilityTracker *_reachabilityTracker;	// 40 = 0x28
    CKKSCloudKitClassDependencies *_cloudKitClassDependencies;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    CKKSCondition *_loggedIn;	// 64 = 0x40
    CKKSCondition *_loggedOut;	// 72 = 0x48
    CKKSCondition *_accountStateKnown;	// 80 = 0x50
    long long _trustStatus;	// 88 = 0x58
    CKKSCondition *_trustStatusKnown;	// 96 = 0x60
    CKKSLockStateTracker *_lockStateTracker;	// 104 = 0x68
    OctagonStateMachine *_stateMachine;	// 112 = 0x70
    id <OTPersonaAdapter> _personaAdapter;	// 120 = 0x78
    id <OTAccountsAdapter> _accountsAdapter;	// 128 = 0x80
    id <CKKSCuttlefishAdapterProtocol> _cuttlefishAdapter;	// 136 = 0x88
    CKKSZoneChangeFetcher *_zoneChangeFetcher;	// 144 = 0x90
    CKKSNearFutureScheduler *_suggestTLKUpload;	// 152 = 0x98
    CKKSNearFutureScheduler *_outgoingQueueOperationScheduler;	// 160 = 0xa0
    CKKSNearFutureScheduler *_outgoingQueuePriorityOperationScheduler;	// 168 = 0xa8
    CKKSIncomingQueueOperation *_lastIncomingQueueOperation;	// 176 = 0xb0
    CKKSNewTLKOperation *_lastNewTLKOperation;	// 184 = 0xb8
    CKKSOutgoingQueueOperation *_lastOutgoingQueueOperation;	// 192 = 0xc0
    CKKSProcessReceivedKeysOperation *_lastProcessReceivedKeysOperation;	// 200 = 0xc8
    CKKSReencryptOutgoingItemsOperation *_lastReencryptOutgoingItemsOperation;	// 208 = 0xd0
    CKKSSynchronizeOperation *_lastSynchronizeOperation;	// 216 = 0xd8
    CKKSResultOperation *_lastFixupOperation;	// 224 = 0xe0
    NSOperation *_holdOutgoingQueueOperation;	// 232 = 0xe8
    NSOperation *_holdIncomingQueueOperation;	// 240 = 0xf0
    NSOperation *_holdLocalSynchronizeOperation;	// 248 = 0xf8
    NSString *_zoneName;	// 256 = 0x100
    CKKSOperationDependencies *_operationDependencies;	// 264 = 0x108
    CKKSCondition *_policyLoaded;	// 272 = 0x110
    OctagonStateMultiStateArrivalWatcher *_priorityViewsProcessed;	// 280 = 0x118
    CKKSResultOperation *_resultsOfNextIncomingQueueOperationOperation;	// 288 = 0x120
    NSHashTable *_outgoingQueueOperations;	// 296 = 0x128
    NSMutableSet *_resyncRecordsSeen;	// 304 = 0x130
    CKKSSecDbAdapter *_databaseProvider;	// 312 = 0x138
    NSOperationQueue *_operationQueue;	// 320 = 0x140
    CKKSResultOperation *_accountLoggedInDependency;	// 328 = 0x148
    NSArray *_currentTrustStates;	// 336 = 0x150
    NSSet *_viewAllowList;	// 344 = 0x158
}

- (void).cxx_destruct;	// IMP=0x0020000000194f13
@property _Bool havoc; // @synthesize havoc=_havoc;
@property(retain) NSSet *viewAllowList; // @synthesize viewAllowList=_viewAllowList;
@property(retain) NSArray *currentTrustStates; // @synthesize currentTrustStates=_currentTrustStates;
@property _Bool halted; // @synthesize halted=_halted;
@property(retain) CKKSResultOperation *accountLoggedInDependency; // @synthesize accountLoggedInDependency=_accountLoggedInDependency;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) CKKSSecDbAdapter *databaseProvider; // @synthesize databaseProvider=_databaseProvider;
@property(retain) NSMutableSet *resyncRecordsSeen; // @synthesize resyncRecordsSeen=_resyncRecordsSeen;
@property(retain) NSHashTable *outgoingQueueOperations; // @synthesize outgoingQueueOperations=_outgoingQueueOperations;
@property(retain) CKKSResultOperation *resultsOfNextIncomingQueueOperationOperation; // @synthesize resultsOfNextIncomingQueueOperationOperation=_resultsOfNextIncomingQueueOperationOperation;
@property _Bool itemModificationsBeforePolicyLoaded; // @synthesize itemModificationsBeforePolicyLoaded=_itemModificationsBeforePolicyLoaded;
@property(retain) OctagonStateMultiStateArrivalWatcher *priorityViewsProcessed; // @synthesize priorityViewsProcessed=_priorityViewsProcessed;
@property(retain) CKKSCondition *policyLoaded; // @synthesize policyLoaded=_policyLoaded;
@property(readonly) CKKSOperationDependencies *operationDependencies; // @synthesize operationDependencies=_operationDependencies;
@property _Bool initiatedLocalScan; // @synthesize initiatedLocalScan=_initiatedLocalScan;
@property(readonly) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(retain) NSOperation *holdLocalSynchronizeOperation; // @synthesize holdLocalSynchronizeOperation=_holdLocalSynchronizeOperation;
@property(retain) NSOperation *holdIncomingQueueOperation; // @synthesize holdIncomingQueueOperation=_holdIncomingQueueOperation;
@property(retain) NSOperation *holdOutgoingQueueOperation; // @synthesize holdOutgoingQueueOperation=_holdOutgoingQueueOperation;
@property(retain) CKKSResultOperation *lastFixupOperation; // @synthesize lastFixupOperation=_lastFixupOperation;
@property(retain) CKKSSynchronizeOperation *lastSynchronizeOperation; // @synthesize lastSynchronizeOperation=_lastSynchronizeOperation;
@property(retain) CKKSReencryptOutgoingItemsOperation *lastReencryptOutgoingItemsOperation; // @synthesize lastReencryptOutgoingItemsOperation=_lastReencryptOutgoingItemsOperation;
@property(retain) CKKSProcessReceivedKeysOperation *lastProcessReceivedKeysOperation; // @synthesize lastProcessReceivedKeysOperation=_lastProcessReceivedKeysOperation;
@property(retain) CKKSOutgoingQueueOperation *lastOutgoingQueueOperation; // @synthesize lastOutgoingQueueOperation=_lastOutgoingQueueOperation;
@property(retain) CKKSNewTLKOperation *lastNewTLKOperation; // @synthesize lastNewTLKOperation=_lastNewTLKOperation;
@property(retain) CKKSIncomingQueueOperation *lastIncomingQueueOperation; // @synthesize lastIncomingQueueOperation=_lastIncomingQueueOperation;
@property(retain) CKKSNearFutureScheduler *outgoingQueuePriorityOperationScheduler; // @synthesize outgoingQueuePriorityOperationScheduler=_outgoingQueuePriorityOperationScheduler;
@property(retain) CKKSNearFutureScheduler *outgoingQueueOperationScheduler; // @synthesize outgoingQueueOperationScheduler=_outgoingQueueOperationScheduler;
@property(retain) CKKSNearFutureScheduler *suggestTLKUpload; // @synthesize suggestTLKUpload=_suggestTLKUpload;
@property(retain) CKKSZoneChangeFetcher *zoneChangeFetcher; // @synthesize zoneChangeFetcher=_zoneChangeFetcher;
@property(retain) id <CKKSCuttlefishAdapterProtocol> cuttlefishAdapter; // @synthesize cuttlefishAdapter=_cuttlefishAdapter;
@property(retain) id <OTAccountsAdapter> accountsAdapter; // @synthesize accountsAdapter=_accountsAdapter;
@property _Bool firstManateeKeyFetched; // @synthesize firstManateeKeyFetched=_firstManateeKeyFetched;
@property _Bool keyStateFullRefetchRequested; // @synthesize keyStateFullRefetchRequested=_keyStateFullRefetchRequested;
@property _Bool keyStateMachineRefetched; // @synthesize keyStateMachineRefetched=_keyStateMachineRefetched;
@property(retain) id <OTPersonaAdapter> personaAdapter; // @synthesize personaAdapter=_personaAdapter;
@property(readonly) OctagonStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain) CKKSLockStateTracker *lockStateTracker; // @synthesize lockStateTracker=_lockStateTracker;
@property(retain) CKKSCondition *trustStatusKnown; // @synthesize trustStatusKnown=_trustStatusKnown;
@property long long trustStatus; // @synthesize trustStatus=_trustStatus;
@property(retain) CKKSCondition *accountStateKnown; // @synthesize accountStateKnown=_accountStateKnown;
@property(retain) CKKSCondition *loggedOut; // @synthesize loggedOut=_loggedOut;
@property(retain) CKKSCondition *loggedIn; // @synthesize loggedIn=_loggedIn;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) CKKSCloudKitClassDependencies *cloudKitClassDependencies; // @synthesize cloudKitClassDependencies=_cloudKitClassDependencies;
@property(readonly) CKKSReachabilityTracker *reachabilityTracker; // @synthesize reachabilityTracker=_reachabilityTracker;
@property(retain) CKKSAccountStateTracker *accountTracker; // @synthesize accountTracker=_accountTracker;
@property(readonly) CKContainer *container; // @synthesize container=_container;
@property long long accountStatus; // @synthesize accountStatus=_accountStatus;
- (id)fastStatus:(id)arg1 zoneStateEntry:(id)arg2;	// IMP=0x0010000000194651
- (id)intransactionSlowStatus:(id)arg1;	// IMP=0x0010000000193471
- (void)rpcStatus:(id)arg1 fast:(_Bool)arg2 waitForNonTransientState:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000001930d8
- (id)viewsForPeerID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000192f07
- (_Bool)waitUntilReadyForRPCForOperation:(id)arg1 fast:(_Bool)arg2 errorOnNoCloudKitAccount:(_Bool)arg3 errorOnPolicyMissing:(_Bool)arg4 error:(id *)arg5;	// IMP=0x0010000000192b5f
- (id)policyDependentViewStateForName:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000192b40
- (id)policyDependentViewStateForName:(id)arg1 timeout:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0010000000192811
- (_Bool)waitForPolicy:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x001000000019266d
- (void)halt;	// IMP=0x001000000019226f
- (void)cancelAllOperations;	// IMP=0x0010000000192222
- (void)cancelPendingOperations;	// IMP=0x0010000000192053
- (void)waitForOperationsOfClass:(Class)arg1;	// IMP=0x0010000000191ead
- (_Bool)waitUntilAllOperationsAreFinished;	// IMP=0x0010000000191e31
- (_Bool)scheduleOperationWithoutDependencies:(id)arg1;	// IMP=0x0010000000191d2b
- (void)scheduleOperation:(id)arg1;	// IMP=0x0010000000191bef
- (_Bool)waitForKeyHierarchyReadiness;	// IMP=0x00100000001919d6
- (_Bool)waitForFetchAndIncomingQueueProcessing;	// IMP=0x0010000000191858
- (_Bool)outgoingQueueEmpty:(id *)arg1;	// IMP=0x00100000001917b2
- (void)trustedPeerSetChanged:(id)arg1;	// IMP=0x00100000001916dd
- (void)selfPeerChanged:(id)arg1;	// IMP=0x0010000000191635
- (_Bool)shouldRetryAfterFetchError:(id)arg1 zoneID:(id)arg2;	// IMP=0x00100000001912ee
- (_Bool)ckErrorOrPartialError:(id)arg1 isError:(long long)arg2 zoneID:(id)arg3;	// IMP=0x00100000001910da
- (void)changesFetched:(id)arg1 deletedRecordIDs:(id)arg2 zoneID:(id)arg3 newChangeToken:(id)arg4 moreComing:(_Bool)arg5 resync:(_Bool)arg6;	// IMP=0x0010000000190e76
- (id)participateInFetch:(id)arg1;	// IMP=0x0010000000190d3c
- (_Bool)_onQueueZoneIsReadyForFetching:(id)arg1;	// IMP=0x0010000000190840
- (_Bool)zoneIsReadyForFetching:(id)arg1;	// IMP=0x0010000000190755
- (void)_onqueuePrioritizePriorityViews;	// IMP=0x00100000001903af
- (id)viewStateForName:(id)arg1;	// IMP=0x0010000000190335
- (void)testDropPolicy;	// IMP=0x0010000000190292
- (void)setSyncingViewsAllowList:(id)arg1;	// IMP=0x0010000000190280
- (id)createViewState:(id)arg1 contextID:(id)arg2 zoneIsNew:(_Bool)arg3 priorityView:(_Bool)arg4 ckksManagedView:(_Bool)arg5;	// IMP=0x001000000018ff44
- (void)onqueueCreatePriorityViewsProcessedWatcher;	// IMP=0x001000000018fce3
- (_Bool)setCurrentSyncingPolicy:(id)arg1 policyIsFresh:(_Bool)arg2;	// IMP=0x001000000018f1b3
- (_Bool)setCurrentSyncingPolicy:(id)arg1;	// IMP=0x001000000018f19f
@property(readonly) TPSyncingPolicy *syncingPolicy;
- (void)endTrustedOperation;	// IMP=0x001000000018efbc
- (void)beginTrustedOperation:(id)arg1 suggestTLKUpload:(id)arg2 requestPolicyCheck:(id)arg3;	// IMP=0x001000000018ebcd
- (void)handleCKLogout;	// IMP=0x001000000018ea9b
- (void)handleCKLogin;	// IMP=0x001000000018e759
- (void)cloudkitAccountStateChange:(id)arg1 to:(id)arg2;	// IMP=0x001000000018e2c0
- (long long)accountStatusFromCKAccountInfo:(id)arg1;	// IMP=0x001000000018e25c
- (id)createAccountLoggedInDependency:(id)arg1;	// IMP=0x001000000018e13b
- (void)beginCloudKitOperation;	// IMP=0x001000000018e0e7
- (_Bool)insideSQLTransaction;	// IMP=0x001000000018e079
- (void)dispatchSyncWithReadOnlySQLTransaction:(CDUnknownBlockType)arg1;	// IMP=0x001000000018dff2
- (void)dispatchSyncWithSQLTransaction:(CDUnknownBlockType)arg1;	// IMP=0x001000000018df6b
- (_Bool)_onqueueResetAllInflightOQE:(id *)arg1;	// IMP=0x001000000018d980
- (id)resyncLocal;	// IMP=0x001000000018d905
- (id)resyncWithCloud;	// IMP=0x001000000018d88a
- (void)xpc24HrNotification;	// IMP=0x001000000018d846
- (void)pcsMirrorKeysForServices:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000018d6f6
- (void)toggleHavoc:(CDUnknownBlockType)arg1;	// IMP=0x001000000018d604
- (id)updateDeviceState:(_Bool)arg1 waitForKeyHierarchyInitialization:(unsigned long long)arg2 ckoperationGroup:(id)arg3;	// IMP=0x001000000018d424
- (void)scanLocalItems;	// IMP=0x001000000018d3e0
- (id)rpcWaitForPriorityViewProcessing;	// IMP=0x001000000018d2e5
- (id)rpcProcessIncomingQueue:(id)arg1 errorOnClassAFailure:(_Bool)arg2;	// IMP=0x001000000018cfde
- (id)rpcFetchAndProcessIncomingQueue:(id)arg1 because:(id)arg2 errorOnClassAFailure:(_Bool)arg3;	// IMP=0x001000000018c6d3
- (id)rpcFetchBecause:(id)arg1;	// IMP=0x001000000018c086
- (id)resultsOfNextProcessIncomingQueueOperation;	// IMP=0x001000000018bf6a
- (void)_onqueueProcessOutgoingQueue:(id)arg1 priorityRush:(_Bool)arg2;	// IMP=0x001000000018bcba
- (id)rpcProcessOutgoingQueue:(id)arg1 operationGroup:(id)arg2;	// IMP=0x001000000018b8d7
- (id)findFirstPendingOperation:(id)arg1 ofClass:(Class)arg2;	// IMP=0x001000000018b6f7
- (id)findFirstPendingOperation:(id)arg1;	// IMP=0x001000000018b6e3
- (id)viewsRequiringTLKUpload;	// IMP=0x001000000018b5e8
- (void)receiveTLKUploadRecords:(id)arg1;	// IMP=0x001000000018b48a
- (id)findKeySets:(_Bool)arg1;	// IMP=0x001000000018b343
- (void)sendMetricForFirstManateeAccess;	// IMP=0x001000000018b1da
- (void)decryptCurrentItems:(id)arg1 cache:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x001000000018a864
- (void)decryptPCSIdentities:(id)arg1 cache:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x001000000018a0ce
- (_Bool)unwrapKeysAndSaveToCache:(id)arg1 syncKeys:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000189d49
- (_Bool)unwrapTLKAndSaveToCache:(id)arg1 tlks:(id)arg2 tlkShares:(id)arg3 error:(id *)arg4;	// IMP=0x001000000018975b
- (void)fetchPCSIdentityOutOfBand:(id)arg1 forceFetch:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x0010000000188c74
- (void)getCurrentItemOutOfBand:(id)arg1 forceFetch:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x0010000000188149
- (void)getCurrentItemForAccessGroup:(id)arg1 identifier:(id)arg2 viewHint:(id)arg3 fetchCloudValue:(_Bool)arg4 complete:(CDUnknownBlockType)arg5;	// IMP=0x0010000000187b64
- (id)zoneIDForViewHint:(id)arg1 pcsShortcut:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000187981
- (void)unsetCurrentItemsForAccessGroup:(id)arg1 identifiers:(id)arg2 viewHint:(id)arg3 complete:(CDUnknownBlockType)arg4;	// IMP=0x0010000000187351
- (void)setCurrentItemForAccessGroup:(id)arg1 hash:(id)arg2 accessGroup:(id)arg3 identifier:(id)arg4 viewHint:(id)arg5 replacing:(id)arg6 hash:(id)arg7 complete:(CDUnknownBlockType)arg8;	// IMP=0x0000000000186d0a
- (void)handleKeychainEventDbConnection:(struct __OpaqueSecDbConnection *)arg1 source:(unsigned long long)arg2 added:(struct SecDbItem *)arg3 deleted:(struct SecDbItem *)arg4 rateLimiter:(id)arg5;	// IMP=0x0010000000185c9b
- (void)notifyPasswordsOrPCSChangedForAddedItem:(struct SecDbItem *)arg1 modified:(struct SecDbItem *)arg2 deleted:(struct SecDbItem *)arg3;	// IMP=0x0010000000185c2e
- (void)notifyForItem:(struct SecDbItem *)arg1;	// IMP=0x0010000000185a45
- (_Bool)_onqueueOtherDevicesReportHavingTLKs:(id)arg1 trustStates:(id)arg2;	// IMP=0x0010000000184724
- (id)tlkMissingOperation:(id)arg1;	// IMP=0x0010000000184610
- (_Bool)allowOutOfBandFetch:(id *)arg1;	// IMP=0x00100000001840d6
@property(readonly) NSDate *earliestFetchTime;
@property(readonly) NSSet *viewList;
- (id)viewsInState:(id)arg1;	// IMP=0x0010000000183acc
- (_Bool)anyViewsInState:(id)arg1;	// IMP=0x00100000001838f2
- (id)loseTrustOperation:(id)arg1;	// IMP=0x00100000001837de
- (id)becomeReadyOperation:(id)arg1;	// IMP=0x00100000001836ca
- (id)_onqueueNextStateMachineTransition:(id)arg1 flags:(id)arg2 pendingFlags:(id)arg3;	// IMP=0x001000000017f5d7
- (void)_onqueuePokeKeyStateMachine;	// IMP=0x001000000017f563
- (void)keyStateMachineRequestProcess;	// IMP=0x001000000017f51f
- (id)rpcResetCloudKit:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000017ee36
- (id)rpcResetLocal:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000017e973
- (id)performInitializedOperation;	// IMP=0x001000000017e897
@property(readonly) NSDictionary *stateConditions;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (id)initWithContainer:(id)arg1 contextID:(id)arg2 activeAccount:(id)arg3 accountTracker:(id)arg4 lockStateTracker:(id)arg5 reachabilityTracker:(id)arg6 savedTLKNotifier:(id)arg7 cloudKitClassDependencies:(id)arg8 personaAdapter:(id)arg9 accountsAdapter:(id)arg10 cuttlefishAdapter:(id)arg11;	// IMP=0x001000000017db20
- (void)modifyTLKSharesForExternallyManagedView:(id)arg1 adding:(id)arg2 deleting:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000001c5ee1
- (void)loadKeys:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c5e03
- (void)fetchCloudKitExternallyManagedViewKeyHierarchy:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c5c5b
- (void)fetchExternallyManagedViewKeyHierarchy:(id)arg1 forceFetch:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000001c5ae7
- (void)proposeTLKForExternallyManagedView:(id)arg1 proposedTLK:(id)arg2 wrappedOldTLK:(id)arg3 tlkShares:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00100000001c5781
- (void)resetExternallyManagedCloudKitView:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c55f6
- (id)externalManagedViewForRPC:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001c525b

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

