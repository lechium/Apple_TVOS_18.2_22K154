//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLPlatformObject.h>

@class CKAccountInfo, CPLCloudKitCoordinator, CPLCloudKitOperationsTracker, CPLCloudKitSimpleCache, CPLCloudKitTaskGroupThrottler, CPLDuetTicketProvider, CPLFingerprintContext, NSArray, NSDate, NSError, NSIndexSet, NSMutableDictionary, NSMutableSet, NSObject, NSOperationQueue, NSString, NSURL;
@protocol CPLCloudKitOperationGroupMapper, CPLCloudKitReschedulerManager, CPLCloudKitZoneManager, CPLSharedRecordPropertyMapping, NSObject, OS_dispatch_queue;

@interface CPLCloudKitTransport : CPLPlatformObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSOperationQueue *_workOperationQueue;	// 16 = 0x10
    CPLCloudKitOperationsTracker *_operationTracker;	// 24 = 0x18
    _Bool _mightRejectVideoStreaming;	// 32 = 0x20
    NSIndexSet *_rejectedVideoStreamingIntents;	// 40 = 0x28
    _Bool _rejectVideoStreamingAtContentLevel;	// 48 = 0x30
    NSArray *_rejectedVideoStreamingIntentNames;	// 56 = 0x38
    id <CPLCloudKitOperationGroupMapper> _operationGroupMapper;	// 64 = 0x40
    CPLCloudKitSimpleCache *_streamingContentItemCache;	// 72 = 0x48
    CPLCloudKitTaskGroupThrottler *_resourceDownloadGate;	// 80 = 0x50
    CPLCloudKitTaskGroupThrottler *_streamingGate;	// 88 = 0x58
    CPLCloudKitTaskGroupThrottler *_computeStateOperationsGate;	// 96 = 0x60
    id <NSObject> _identityChangeWatcher;	// 104 = 0x68
    id <NSObject> _accountInfoWatcher;	// 112 = 0x70
    unsigned long long _accountInfoFetchGeneration;	// 120 = 0x78
    NSDate *_lastAccountInfoUpdateDate;	// 128 = 0x80
    NSString *_lastDisablingReasonBecauseOfAccountStatus;	// 136 = 0x88
    CKAccountInfo *_accountInfo;	// 144 = 0x90
    long long _accountStatus;	// 152 = 0x98
    NSDate *_lastAccountInfoUpdateRequestDate;	// 160 = 0xa0
    NSMutableDictionary *_helpers;	// 168 = 0xa8
    NSMutableSet *_startedHelperIdentifiers;	// 176 = 0xb0
    NSURL *_tempFolderURL;	// 184 = 0xb8
    _Bool _tempFolderHasBeenCreated;	// 192 = 0xc0
    _Bool _opened;	// 193 = 0xc1
    id <CPLCloudKitReschedulerManager> _reschedulerManager;	// 200 = 0xc8
    CDUnknownBlockType _shouldIgnoreZoneWithZoneID;	// 208 = 0xd0
    CPLFingerprintContext *_fingerprintContext;	// 216 = 0xd8
    id <CPLCloudKitZoneManager> _zoneManager;	// 224 = 0xe0
    CPLCloudKitCoordinator *_coordinator;	// 232 = 0xe8
    CPLDuetTicketProvider *_duetTicketProvider;	// 240 = 0xf0
    NSDate *_significantWorkBeginDate;	// 248 = 0xf8
    NSError *_errorForAllOperations;	// 256 = 0x100
}

+ (id)_errorsByTaskForTasksByRecordId:(id)arg1 fromUnderlyingError:(id)arg2;	// IMP=0x0020000000091c61
+ (id)_betterErrorForRecordId:(id)arg1 recordError:(id)arg2;	// IMP=0x0010000000091a6f
+ (_Bool)allowsUserInitiatedOperationsOverExpensiveNetwork;	// IMP=0x001000000009073e
+ (_Bool)allowsSyncOverExpensiveNetwork;	// IMP=0x001000000009068f
+ (_Bool)allowsSyncOverCellular;	// IMP=0x00100000000905e0
+ (id)involvedProcesses;	// IMP=0x0010000000090569
- (void).cxx_destruct;	// IMP=0x0020000000096d99
@property(retain) NSError *errorForAllOperations; // @synthesize errorForAllOperations=_errorForAllOperations;
@property(retain, nonatomic) NSDate *significantWorkBeginDate; // @synthesize significantWorkBeginDate=_significantWorkBeginDate;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) CPLDuetTicketProvider *duetTicketProvider; // @synthesize duetTicketProvider=_duetTicketProvider;
@property(readonly) CPLCloudKitCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain, nonatomic) id <CPLCloudKitZoneManager> zoneManager; // @synthesize zoneManager=_zoneManager;
@property(retain) CPLFingerprintContext *fingerprintContext; // @synthesize fingerprintContext=_fingerprintContext;
@property(copy, nonatomic) CDUnknownBlockType shouldIgnoreZoneWithZoneID; // @synthesize shouldIgnoreZoneWithZoneID=_shouldIgnoreZoneWithZoneID;
@property _Bool opened; // @synthesize opened=_opened;
@property(retain, nonatomic) id <CPLCloudKitOperationGroupMapper> operationGroupMapper; // @synthesize operationGroupMapper=_operationGroupMapper;
@property(retain, nonatomic) id <CPLCloudKitReschedulerManager> reschedulerManager; // @synthesize reschedulerManager=_reschedulerManager;
@property(readonly, nonatomic) CPLCloudKitOperationsTracker *operationTracker; // @synthesize operationTracker=_operationTracker;
- (void)getTemporaryFolderWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000096758
- (void)acquireHelperWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000964b7
- (void)registerHelper:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x00100000000962bf
- (void)noteZoneIDChangeWasIgnored:(id)arg1;	// IMP=0x001000000009629c
- (_Bool)shouldIgnoreScopeWithIdentifier:(id)arg1;	// IMP=0x001000000009624b
- (_Bool)shouldIgnoreZoneWithZoneID:(id)arg1;	// IMP=0x0010000000096099
- (id)databaseForOperationType:(long long)arg1 relativeToOperationType:(long long)arg2;	// IMP=0x0010000000096079
@property(readonly, nonatomic) _Bool supportsSharedDatabase;
- (_Bool)_isAppLibrary;	// IMP=0x0010000000096016
- (_Bool)shouldRunOperationsWithError:(id *)arg1;	// IMP=0x0010000000095fc9
- (void)processTaskErrorIfNeeded:(id)arg1 forTask:(id)arg2;	// IMP=0x001000000009595a
- (void)_noteContainerHasBeenWiped;	// IMP=0x0010000000095801
- (void)_failAllFutureOperationsWithContainerHasBeenWipedError;	// IMP=0x0010000000095654
@property(readonly, nonatomic) _Bool canBoostBackgroundOperations;
@property(readonly, nonatomic) _Bool canBoostOperations;
@property(readonly, nonatomic, getter=isForeground) _Bool foreground;
@property(readonly, nonatomic, getter=isNetworkConnected) _Bool networkConnected;
- (void)associateMetric:(id)arg1;	// IMP=0x001000000009547c
- (void)launchOperation:(id)arg1 type:(long long)arg2;	// IMP=0x0010000000095354
- (id)newOperationConfiguration;	// IMP=0x0010000000095337
- (id)zoneIdentificationForCloudKitScope:(id)arg1 engineScope:(id)arg2;	// IMP=0x001000000009531a
- (long long)scopeTypeForCloudKitScope:(id)arg1 proposedScopeType:(long long)arg2 fetchedRecords:(id)arg3 currentUserID:(id)arg4;	// IMP=0x00100000000952fd
- (id)recordsToFetchToIdentifyCloudKitScope:(id)arg1 proposedScopeType:(long long)arg2 currentUserID:(id)arg3;	// IMP=0x00100000000952e0
- (id)rejectedScopedIdentifierForRejectedCKRecordID:(id)arg1;	// IMP=0x00100000000952ce
- (id)scopedIdentifierForCKRecordID:(id)arg1;	// IMP=0x001000000009522a
- (id)scopeIdentifierFromZoneID:(id)arg1;	// IMP=0x001000000009520d
- (id)zoneIDFromScopeIdentifier:(id)arg1;	// IMP=0x00100000000951f0
- (id)cloudKitScopeForScopeIdentifier:(id)arg1;	// IMP=0x00100000000951d3
- (id)concreteScopeFromTransportScope:(id)arg1;	// IMP=0x00100000000951ba
- (id)transportScopeFromConcreteScope:(id)arg1;	// IMP=0x00100000000951a5
- (_Bool)isInterestedInZoneID:(id)arg1 forCoordinator:(id)arg2;	// IMP=0x0010000000095190
- (id)interestingZoneIDsForCoordinator:(id)arg1;	// IMP=0x00100000000950b5
- (void)coordinatorDidReceiveAPushNotification:(id)arg1;	// IMP=0x0010000000094edc
- (void)coordinator:(id)arg1 provideCKAssetWithRecordID:(id)arg2 fieldName:(id)arg3 recordType:(id)arg4 signature:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000094c71
- (void)_coordinator:(id)arg1 provideCKAssetWithRecordID:(id)arg2 fieldName:(id)arg3 recordType:(id)arg4 signature:(id)arg5 tempFolderURL:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x00100000000934ce
@property(readonly, nonatomic) NSString *defaultSourceBundleIdentifier;
@property(readonly) NSString *cloudKitClientIdentifier;
- (void)_withTempCKAssetForData:(id)arg1 tempFolderURL:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00100000000932a6
- (id)_tempDestinationURLForRecoveredDataWithTempFolderURL:(id)arg1;	// IMP=0x00100000000931f2
- (void)_cleanTempRecoveredDataURL:(id)arg1;	// IMP=0x0010000000092fd3
- (void)testKey:(id)arg1 value:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000092cec
- (void)getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000092b07
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000091edc
- (id)componentName;	// IMP=0x0010000000091ecf
- (void)_updateWalrusTo:(_Bool)arg1;	// IMP=0x0010000000091a03
- (void)_disableSchedulerBecauseAccountIsUnavailableWithReason:(id)arg1;	// IMP=0x00100000000916df
- (void)_enableSchedulerBecauseAccountIsAvailable;	// IMP=0x001000000009153c
- (void)_updateStateWithAccountStatus:(long long)arg1;	// IMP=0x0010000000091406
- (void)_updateStateWithAccountInfo:(id)arg1 walrusEnabledDefault:(id)arg2;	// IMP=0x0010000000091078
- (void)_updateAccountInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000090b8b
- (void)_forceUpdateAccountInfoWithReason:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000909db
- (void)_forceUpdateAccountInfoWithReason:(id)arg1;	// IMP=0x00100000000909bc
- (void)_stopWatchingAccountInfoChanges;	// IMP=0x001000000009099b
- (void)_startWatchingAccountInfoChangesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000907ed
@property(readonly, nonatomic) NSArray *involvedProcesses;
- (id)createReschedulerForSession:(id)arg1;	// IMP=0x001000000009046c
- (void)dropPersistedInitialSyncSession;	// IMP=0x001000000009044f
- (void)findPersistedInitialSyncSession:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000090294
- (id)createGroupForPropagateChanges;	// IMP=0x00100000000901bb
- (id)createGroupForQueryUserIdentities;	// IMP=0x00100000000900dc
- (id)createGroupForSharedLibraryRampCheck;	// IMP=0x0010000000090000
- (id)createGroupForExitSharedLibrary;	// IMP=0x001000000008ff24
- (id)createGroupForCleanupLibrary;	// IMP=0x001000000008fe48
- (id)createGroupForFetchingExistingSharedScope;	// IMP=0x001000000008fd69
- (id)createGroupForAcceptingLibraryShare;	// IMP=0x001000000008fc8a
- (id)createGroupForFetchingLibraryShare;	// IMP=0x001000000008fbab
- (id)createGroupForPublishingLibraryShare;	// IMP=0x001000000008facc
- (id)createGroupForAcceptingMomentShare;	// IMP=0x001000000008f9ed
- (id)createGroupForFetchingMomentShare;	// IMP=0x001000000008f90e
- (id)createGroupForPublishingMomentShare;	// IMP=0x001000000008f82f
- (id)createGroupForPruningCheck;	// IMP=0x001000000008f782
- (id)createGroupForAnalysisDownload;	// IMP=0x001000000008f6a9
- (id)createGroupForMovieStreamingWithIntent:(unsigned long long)arg1;	// IMP=0x001000000008f44c
- (id)createGroupForDownloadWithIntent:(unsigned long long)arg1 priority:(unsigned long long)arg2;	// IMP=0x001000000008f162
- (id)createGroupForWidgetResourcesDownload;	// IMP=0x001000000008f149
- (id)createGroupForResourcesDownload;	// IMP=0x001000000008f133
- (id)createGroupForThumbnailsDownload;	// IMP=0x001000000008f057
- (id)createGroupForStagedScopeCleanup;	// IMP=0x001000000008ef7e
- (id)createGroupForReshare;	// IMP=0x001000000008eea5
- (id)createGroupForFixUpTasks;	// IMP=0x001000000008edcc
- (id)createGroupForComputeStateDownloadPrefetch;	// IMP=0x001000000008ecf3
- (id)createGroupForComputeStateDownloadOnDemand;	// IMP=0x001000000008ec17
- (id)createGroupForComputeStateUpload;	// IMP=0x001000000008eb3b
- (id)createGroupForChangeDownload;	// IMP=0x001000000008ea62
- (id)createGroupForChangeUpload;	// IMP=0x001000000008e986
- (id)createGroupForLibraryStateCheck;	// IMP=0x001000000008e8ad
- (id)createGroupForFetchScopeListChanges;	// IMP=0x001000000008e7d4
- (id)createGroupForTransportScopeRefresh;	// IMP=0x001000000008e6f8
- (id)createGroupForTransportScopeUpdate;	// IMP=0x001000000008e61f
- (id)createGroupForTransportScopeDelete;	// IMP=0x001000000008e546
- (id)createGroupForFeedback;	// IMP=0x001000000008e499
- (id)createGroupForSetup;	// IMP=0x001000000008e3ef
- (id)createGroupForWidgetPrefetch;	// IMP=0x001000000008e3d3
- (id)createGroupForRecoveryDownload;	// IMP=0x001000000008e3b7
- (id)createGroupForMemoriesPrefetch;	// IMP=0x001000000008e39b
- (id)createGroupForKeepOriginalsPrefetch;	// IMP=0x001000000008e37f
- (id)createGroupForNonDerivativePrefetch;	// IMP=0x001000000008e363
- (id)createGroupForThumbnailPrefetch;	// IMP=0x001000000008e28a
- (id)createGroupForPrefetch;	// IMP=0x001000000008e26e
- (id)createGroupForInitialDownload;	// IMP=0x001000000008e195
- (id)createGroupForResetSync;	// IMP=0x001000000008e0b9
- (id)createGroupForInitialUpload;	// IMP=0x001000000008dfdd
- (id)createGroupForSendExitStatus;	// IMP=0x001000000008df01
- (id)createGroupAllowsCellular:(_Bool)arg1 allowsExpensiveNetwork:(_Bool)arg2 foreground:(_Bool)arg3 upload:(_Bool)arg4 metadata:(_Bool)arg5;	// IMP=0x001000000008de7a
- (_Bool)isNewTransportScope:(id)arg1 compatibleWithOldTransportScope:(id)arg2;	// IMP=0x001000000008dd96
- (void)upgradeFlags:(id)arg1 fromTransportScope:(id)arg2;	// IMP=0x001000000008dd09
- (id)transportScopeForUpgradeFromScopeName:(id)arg1;	// IMP=0x001000000008dc67
- (id)scopeNameForTransportScope:(id)arg1;	// IMP=0x001000000008dbe6
- (id)descriptionForTransportScope:(id)arg1;	// IMP=0x001000000008db09
- (id)tentativeConcreteScopeForScope:(id)arg1;	// IMP=0x001000000008d9ab
- (void)cancelBlockedTasksIncludingBackground:(_Bool)arg1;	// IMP=0x001000000008d98e
- (void);	// IMP=0x001000000008d96c
- (void)noteClientIsInForeground;	// IMP=0x001000000008d947
- (void)noteClientIsEndingSignificantWork;	// IMP=0x001000000008d933
- (void)noteClientIsBeginningSignificantWork;	// IMP=0x001000000008d91c
- (void)setShouldOverride:(_Bool)arg1 forSystemBudgets:(unsigned long long)arg2;	// IMP=0x001000000008d8cb
- (void)getSystemBudgetsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000008d73c
- (void)setIsSignificantWorkPending:(_Bool)arg1;	// IMP=0x001000000008d3eb
- (id)simpleDescriptionForScopeListSyncAnchor:(id)arg1;	// IMP=0x001000000008d3d2
- (_Bool)getProposedStagingScopeIdentifier:(id *)arg1 stagingTransportScope:(id *)arg2 forScope:(id)arg3 transportScope:(id)arg4 transportUserIdentifier:(id)arg5;	// IMP=0x001000000008d236
- (id)simpleDescriptionForSyncAnchor:(id)arg1;	// IMP=0x001000000008d04b
- (id)bestErrorForUnderlyingError:(id)arg1;	// IMP=0x001000000008d032
- (_Bool)isResourceDynamic:(id)arg1;	// IMP=0x001000000008cfe5
- (id)sendFeedbackTaskForMessages:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008cf2d
- (id)queryUserDetailsTaskForParticipants:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008ce75
- (id)cleanupStagedScope:(id)arg1 stagingScope:(id)arg2 destinationScope:(id)arg3 transportScopeMapping:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000008cd7a
- (id)updateContributorsTaskWithSharedScope:(id)arg1 contributorsUpdates:(id)arg2 transportScopeMapping:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000008ccc2
- (id)sharedLibraryServerRampTaskWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000008cc28
- (id)fixUpSparseRecordsTaskWithTasks:(id)arg1 transportScopeMapping:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008cb90
- (id)removeParticipantInSharedLibraryTaskFromSharedScope:(id)arg1 transportScope:(id)arg2 share:(id)arg3 retentionPolicy:(long long)arg4 exitSource:(long long)arg5 userIdentifiersToRemove:(id)arg6 participantIDsToRemove:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x001000000008ca4e
- (id)startExitTaskFromSharedScope:(id)arg1 transportScope:(id)arg2 share:(id)arg3 retentionPolicy:(long long)arg4 exitSource:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000008c942
- (id)fetchExistingSharedLibraryScopeTaskWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000008c8a8
- (id)acceptTaskForSharedScope:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008c7c3
- (id)fetchTaskForScopeWithShareURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008c639
- (id)updateShareTaskForScope:(id)arg1 transportScope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008c535
- (id)createScopeTaskForScope:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008c450
- (id)inMemoryDownloadTaskForResource:(id)arg1 record:(id)arg2 target:(id)arg3 transportScopeMapping:(id)arg4 clientBundleID:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000008c2ef
- (id)resourcesDownloadTaskWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000008c278
- (id)rampingRequestTaskForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008c1d2
- (id)resourceCheckTaskForResources:(id)arg1 targetMapping:(id)arg2 transportScopeMapping:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000008c0d0
- (id)getStreamingURLTaskForResource:(id)arg1 intent:(unsigned long long)arg2 hints:(id)arg3 timeRange:(CDStruct_e83c9415)arg4 target:(id)arg5 transportScopeMapping:(id)arg6 clientBundleID:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x001000000008bf38
- (id)fetchScopeListChangesForScopeListSyncAnchor:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008bea0
- (id)downloadComputeStatesWithScopedIdentifiers:(id)arg1 scope:(id)arg2 sharedScope:(id)arg3 targetStorageURL:(id)arg4 transportScopeMapping:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000008bd7e
- (id)uploadComputeStates:(id)arg1 scope:(id)arg2 sharedScope:(id)arg3 targetMapping:(id)arg4 transportScopeMapping:(id)arg5 knownRecords:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x001000000008bc47
- (id)downloadBatchTaskForSyncAnchor:(id)arg1 scope:(id)arg2 transportScopeMapping:(id)arg3 currentScopeChange:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000008bb4c
- (id)queryTaskForCursor:(id)arg1 class:(Class)arg2 scope:(id)arg3 transportScopeMapping:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000008ba68
- (id)fetchTransportScopeForScope:(id)arg1 transportScope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008b97b
- (id)getCurrentSyncAnchorWithTransportScope:(id)arg1 scope:(id)arg2 previousScopeChange:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000008b88f
- (id)getScopeInfoWithTransportScope:(id)arg1 scope:(id)arg2 previousScopeChange:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000008b7a3
- (id)updateTransportScope:(id)arg1 scope:(id)arg2 scopeChange:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000008b695
- (id)deleteTransportScope:(id)arg1 scope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008b5a2
- (id)reshareRecordsTaskWithRecords:(id)arg1 sourceScope:(id)arg2 destinationScope:(id)arg3 transportScopeMapping:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000008b4c7
- (id)uploadBatchTaskForBatch:(id)arg1 scope:(id)arg2 targetMapping:(id)arg3 transportScopeMapping:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000008b322
- (id)fetchRecordsTaskForRecordsWithScopedIdentifiers:(id)arg1 targetMapping:(id)arg2 transportScopeMapping:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000008b26a
- (id)setupTaskUpdateDisabledFeatures:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008b1ca
- (id)acquireReschedulerTaskWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000008b16e
@property(readonly, nonatomic) id <CPLSharedRecordPropertyMapping> propertyMapping;
@property(readonly, nonatomic) Class userIdentifierClass;
@property(readonly, nonatomic) Class transportGroupClass;
- (void)closeAndDeactivate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008ab74
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000089e4f
- (id)duetIdentifier;	// IMP=0x0010000000089e3d
- (void)duetTicketProviderBlockedStatusDidChange;	// IMP=0x0010000000089d34
- (void)_updateBudgets;	// IMP=0x001000000008985b
- (id)engineLibrary;	// IMP=0x001000000008980b
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x0010000000089605
@property(readonly, nonatomic) NSString *mainScopeIdentifier;
- (_Bool)isAppLibrary;	// IMP=0x001000000008951d
@property(readonly) _Bool isSystemLibrary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

