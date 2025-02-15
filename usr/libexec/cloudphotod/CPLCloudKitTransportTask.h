//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKOperation, CKOperationGroup, CKRecordID, CPLBackgroundActivity, CPLCKRecordFetchCache, CPLFingerprintContext, CPLSyncSession, CPLTransportScopeMapping, MISSING_TYPE, NSArray, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSMutableSet, NSProgress, NSString, NSURL;
@protocol CPLCloudKitTaskController, CPLCloudKitTransportTaskGate, CPLEngineStoreUserIdentifier, CPLEngineTransportGroup, OS_dispatch_queue;

@interface CPLCloudKitTransportTask : NSObject
{
    NSMutableArray *_currentOperations;	// 8 = 0x8
    NSMutableArray *_lastOperationRequestUUIDs;	// 16 = 0x10
    NSMutableDictionary *_cachedScopes;	// 24 = 0x18
    NSMutableDictionary *_cacheScopeIdentifiersPerZoneID;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_synchronousWorkQueue;	// 48 = 0x30
    _Bool _mustCallTaskDidFinish;	// 56 = 0x38
    unsigned long long _nonCKOperationCount;	// 64 = 0x40
    _Bool _foregroundHasBeenChanged;	// 72 = 0x48
    _Bool _hasProgress;	// 73 = 0x49
    NSProgress *_progress;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_progressQueue;	// 88 = 0x58
    NSMutableSet *_associatedMetrics;	// 96 = 0x60
    id _activityRequest;	// 104 = 0x68
    NSError *_acquireError;	// 112 = 0x70
    CPLBackgroundActivity *_activity;	// 120 = 0x78
    _Bool _cancelled;	// 128 = 0x80
    NSURL *_temporaryFolderURL;	// 136 = 0x88
    NSProgress *_callbackOperationProgress;	// 144 = 0x90
    id _activityEligibilityChangeHandler;	// 152 = 0x98
    _Bool _highPriorityBackground;	// 160 = 0xa0
    _Bool _forcedTask;	// 161 = 0xa1
    _Bool _backgroundTask;	// 162 = 0xa2
    _Bool _allowsFetchCache;	// 163 = 0xa3
    _Bool _foreground;	// 164 = 0xa4
    _Bool _allowsCellular;	// 165 = 0xa5
    _Bool _boostable;	// 166 = 0xa6
    _Bool _isUpload;	// 167 = 0xa7
    _Bool _isMetadata;	// 168 = 0xa8
    _Bool _hasBackgroundActivity;	// 169 = 0xa9
    id <CPLEngineStoreUserIdentifier> _transportUserIdentifier;	// 176 = 0xb0
    id <CPLEngineTransportGroup> _transportGroup;	// 184 = 0xb8
    id trackingContext;	// 192 = 0xc0
    id <CPLCloudKitTaskController> _controller;	// 200 = 0xc8
    id <CPLCloudKitTransportTaskGate> _gate;	// 208 = 0xd0
    CPLSyncSession *_session;	// 216 = 0xd8
    CPLCKRecordFetchCache *_fetchCache;	// 224 = 0xe0
    MISSING_TYPE *_sourceBundleIdentifier;	// 232 = 0xe8
    double _timeoutIntervalForRequest;	// 240 = 0xf0
    double _timeoutIntervalForResource;	// 248 = 0xf8
    NSString *_idleDescription;	// 256 = 0x100
    CPLTransportScopeMapping *_transportScopeMapping;	// 264 = 0x108
}

+ (_Bool)allowsCellularForDownloadOperationOfSize:(unsigned long long)arg1 isForeground:(_Bool)arg2 isHighPriority:(_Bool)arg3;	// IMP=0x002000000006cb31
+ (_Bool)allowsCellularForDownloadOperationOfResource:(id)arg1 isForeground:(_Bool)arg2 isHighPriority:(_Bool)arg3;	// IMP=0x001000000006cabc
+ (void)initialize;	// IMP=0x00100000000663eb
+ (id)reverseMappingForMoveSteps;	// IMP=0x001000000003cfaf
+ (id)mappingForMoveSteps;	// IMP=0x001000000003ceaf
+ (void)setMoveStepFaultInjector:(CDUnknownBlockType)arg1;	// IMP=0x001000000003ce86
+ (CDUnknownBlockType)moveStepFaultInjector;	// IMP=0x001000000003ce6d
+ (id)copiedRecordFromSourceRecord:(id)arg1 sourceDatabaseScope:(long long)arg2 toRecordID:(id)arg3 helper:(id)arg4 action:(id)arg5 error:(id *)arg6;	// IMP=0x0010000000038fdf
- (void).cxx_destruct;	// IMP=0x002000000006e0ed
@property(retain, nonatomic) CPLTransportScopeMapping *transportScopeMapping; // @synthesize transportScopeMapping=_transportScopeMapping;
@property _Bool hasBackgroundActivity; // @synthesize hasBackgroundActivity=_hasBackgroundActivity;
@property(copy) NSString *idleDescription; // @synthesize idleDescription=_idleDescription;
@property(nonatomic) _Bool isMetadata; // @synthesize isMetadata=_isMetadata;
@property(nonatomic) _Bool isUpload; // @synthesize isUpload=_isUpload;
@property(readonly, nonatomic) double timeoutIntervalForResource; // @synthesize timeoutIntervalForResource=_timeoutIntervalForResource;
@property(readonly, nonatomic) double timeoutIntervalForRequest; // @synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest;
@property(nonatomic, getter=isBoostable) _Bool boostable; // @synthesize boostable=_boostable;
@property(nonatomic) _Bool allowsCellular; // @synthesize allowsCellular=_allowsCellular;
@property(copy, nonatomic) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;
@property(retain, nonatomic) CPLCKRecordFetchCache *fetchCache; // @synthesize fetchCache=_fetchCache;
@property(readonly, nonatomic) CPLSyncSession *session; // @synthesize session=_session;
@property(retain, nonatomic) id <CPLCloudKitTransportTaskGate> gate; // @synthesize gate=_gate;
@property(readonly, nonatomic) id <CPLCloudKitTaskController> controller; // @synthesize controller=_controller;
@property(retain, nonatomic) id trackingContext; // @synthesize trackingContext;
@property(nonatomic) _Bool allowsFetchCache; // @synthesize allowsFetchCache=_allowsFetchCache;
@property(nonatomic, getter=isBackgroundTask) _Bool backgroundTask; // @synthesize backgroundTask=_backgroundTask;
@property(nonatomic, getter=isForcedTask) _Bool forcedTask; // @synthesize forcedTask=_forcedTask;
@property(nonatomic, getter=isHighPriorityBackground) _Bool highPriorityBackground; // @synthesize highPriorityBackground=_highPriorityBackground;
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup; // @synthesize transportGroup=_transportGroup;
@property(retain, nonatomic) id <CPLEngineStoreUserIdentifier> transportUserIdentifier; // @synthesize transportUserIdentifier=_transportUserIdentifier;
- (id)rejectedScopedIdentifierForRejectedCKRecordID:(id)arg1;	// IMP=0x001000000006deda
- (id)scopedIdentifierForCKRecordID:(id)arg1;	// IMP=0x001000000006de32
- (id)scopeIdentifierFromZoneID:(id)arg1;	// IMP=0x001000000006ddb9
- (id)_scopeIdentifierFromZoneID:(id)arg1;	// IMP=0x001000000006dc43
- (id)zoneIDFromScopeIdentifier:(id)arg1;	// IMP=0x001000000006dba6
- (void);	// IMP=0x001000000006da8b
@property(copy, nonatomic) NSDictionary *transportScopes;
- (id)cloudKitScopeForScopeIdentifier:(id)arg1;	// IMP=0x001000000006d954
- (void)enumerateAllZonesWithBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000006d7a6
- (void)_enumerateAllZonesForSharedDatabase:(_Bool)arg1 block:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000006d243
- (void)fetchUserRecordIDFetchWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000006cd75
- (void)getUserRecordIDFetchIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000006cb49
- (id)_networkBehaviorForConfiguration:(id)arg1;	// IMP=0x001000000006ca8f
- (id)_stringForQoS:(long long)arg1;	// IMP=0x001000000006ca68
- (id)baseConfigurationForTask;	// IMP=0x001000000006c6fb
- (void)setupConfigurationForOperation:(id)arg1;	// IMP=0x001000000006c43b
- (_Bool)_operationsShouldBeDiscretionary;	// IMP=0x001000000006c347
- (void)runOperations;	// IMP=0x001000000006c28d
- (void)processErrorIfNeeded:(id)arg1;	// IMP=0x001000000006c271
- (void)popTaskOperation;	// IMP=0x001000000006c254
- (void)pushTaskOperation;	// IMP=0x001000000006c237
- (void)taskDidFinish;	// IMP=0x001000000006bdf6
- (id)operationDidFinish:(id)arg1 error:(id)arg2;	// IMP=0x001000000006b85a
- (void)updateContextWithBlock:(CDUnknownBlockType)arg1 forOperation:(id)arg2;	// IMP=0x001000000006b796
- (void)updateProgress:(double)arg1 forOperation:(id)arg2;	// IMP=0x001000000006b6ed
- (void)updateOneBatchForOperation:(id)arg1;	// IMP=0x001000000006b64e
- (void)associateMetric:(id)arg1;	// IMP=0x001000000006b5bf
- (_Bool)deleteTemporaryFolderWithError:(id *)arg1;	// IMP=0x001000000006b4eb
- (void)getTemporaryFolderWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000006b0d5
- (void)acquireHelperWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000006ad0f
@property(readonly, nonatomic) NSArray *lastOperationRequestUUIDs;
- (void)executeSynchronousWork:(CDUnknownBlockType)arg1 onItems:(id)arg2 description:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000006aa28
- (void)executeSynchronousWork:(CDUnknownBlockType)arg1 description:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000069ffb
- (void)dispatchSynchronousWork:(CDUnknownBlockType)arg1;	// IMP=0x0010000000069eca
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *synchronousWorkQueue;
- (id)callbackOperationDidFinishWithError:(id)arg1;	// IMP=0x0010000000069c4c
- (void)dispatchCallbackOperation:(id)arg1 progress:(id)arg2;	// IMP=0x001000000006984c
- (void)_cancelCallbackProgress;	// IMP=0x001000000006978b
- (id)operationDidFinishWithError:(id)arg1;	// IMP=0x0010000000069552
- (void)updateContextWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000069301
- (void)updateProgress:(double)arg1;	// IMP=0x00100000000690bc
- (void)updateOneBatch;	// IMP=0x0010000000068eaf
- (void)launchOperation:(id)arg1 type:(long long)arg2 withContext:(id)arg3 sourceBundleIdentifiers:(id)arg4;	// IMP=0x001000000006836f
- (void)launchOperation:(id)arg1 type:(long long)arg2 withContext:(id)arg3;	// IMP=0x001000000006823c
@property(readonly, nonatomic) CKOperation *currentOperation;
- (_Bool)shouldRunOperationsWithError:(id *)arg1;	// IMP=0x0010000000067e37
- (void)dispatchAfter:(double)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0010000000067ce6
- (void)dispatchAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000067b49
- (CDUnknownBlockType)blockWithAdaptedQOS:(CDUnknownBlockType)arg1;	// IMP=0x0010000000067abf
- (void)cancelIfBlocked;	// IMP=0x001000000006785f
- (void)_cancelAllOperationsIfBlocked;	// IMP=0x00100000000674af
- (void)cancel;	// IMP=0x0010000000066f65
- (void)runWithinSyncSession:(id)arg1;	// IMP=0x0010000000066f53
- (void)runWithNoSyncSession;	// IMP=0x0010000000066f3f
- (void)_runWithSyncSession:(id)arg1;	// IMP=0x00100000000669fa
- (void)_acquireActivityAndLaunchOperation;	// IMP=0x0010000000066755
- (void)_reallyStartOperation;	// IMP=0x00100000000666fb
@property(nonatomic) _Bool foreground; // @synthesize foreground=_foreground;
@property(readonly, nonatomic) CKOperationGroup *operationGroup;
@property(readonly, nonatomic) CKRecordID *currentUserID;
@property(readonly, nonatomic) NSString *mainScopeIdentifier;
- (id)initWithController:(id)arg1;	// IMP=0x001000000006648c
@property(readonly) CPLFingerprintContext *fingerprintContext;
- (id)finalizedDestinationCKRecordFromProposedCKRecord:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003d1f1
- (id)recordNameInDestinationCKRecordFromRecordName:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003d1db
- (_Bool)shouldCopyCKRecordKeyToDestinationCKRecord:(id)arg1;	// IMP=0x001000000003d1d3
- (id)baseDestinationCKRecordForSourceCKRecord:(id)arg1 destinationCKRecordID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000003d131
- (void)prepareCopyForCKRecordID:(id)arg1 fromCKRecord:(id)arg2;	// IMP=0x001000000003d12b
- (_Bool)shouldCopyForCKRecordID:(id)arg1 fromCKRecord:(id)arg2;	// IMP=0x001000000003d123
- (void)moveRecordsWithIDs:(id)arg1 followRemapping:(_Bool)arg2 sourceType:(long long)arg3 destinationRecordIDs:(id)arg4 destinationType:(long long)arg5 helper:(id)arg6 finalizeMoveChanges:(CDUnknownBlockType)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x001000000003c84b
- (void)moveRecordsWithIDs:(id)arg1 followRemapping:(_Bool)arg2 sourceType:(long long)arg3 destinationRecordIDs:(id)arg4 destinationType:(long long)arg5 helper:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x001000000003c7fd
- (id)_moveChangesFromSourceRecords:(id)arg1 recordIDs:(id)arg2 sourceType:(long long)arg3 destinationRecordIDs:(id)arg4 helper:(id)arg5 sourceRecordIDs:(id *)arg6 operationContext:(id)arg7 error:(id *)arg8;	// IMP=0x001000000003bdd2
- (void)_applyMoveChanges:(id)arg1 sourceType:(long long)arg2 destinationType:(long long)arg3 helper:(id)arg4 operationContext:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000003b23b
- (void)copyRecordsWithIDs:(id)arg1 sourceType:(long long)arg2 destinationRecordIDs:(id)arg3 destinationType:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000003b173
- (void)copyRecordsWithIDs:(id)arg1 followRemapping:(_Bool)arg2 sourceType:(long long)arg3 destinationRecordIDs:(id)arg4 destinationType:(long long)arg5 helper:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x001000000003ab64
- (void)uploadDestinationRecords:(id)arg1 destinationType:(long long)arg2 scopeProvider:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000003ab3d
- (void)_uploadDestinationRecords:(id)arg1 destinationType:(long long)arg2 scopeProvider:(id)arg3 operationContext:(id)arg4 uploadAction:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000003a155
- (id)_destinationRecordsFromSourceRecords:(id)arg1 recordIDs:(id)arg2 sourceType:(long long)arg3 destinationRecordIDs:(id)arg4 helper:(id)arg5 sourceRecordIDs:(id *)arg6 operationContext:(id)arg7 action:(id)arg8 error:(id *)arg9;	// IMP=0x0010000000039bae
- (void)fetchRecordsFollowRemappingWithIDs:(id)arg1 wantsAllRecords:(_Bool)arg2 type:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000085a78
- (id)_recordWithRecordID:(id)arg1 usingRealRecords:(id)arg2 remappedRecordIDs:(id)arg3 wantsAllRecords:(_Bool)arg4;	// IMP=0x001000000008562d
- (void)_fetchRecordsFollowRemappingWithIDs:(id)arg1 alreadyFetchRecordIDs:(id)arg2 remappedRecordIDs:(id)arg3 realRecords:(id)arg4 type:(long long)arg5 storeRequestUUIDsIn:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x0010000000085122
- (void)fetchZoneForScope:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000084e42
- (void)_fetchZoneForZoneID:(id)arg1 operationType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000848d4
- (void)fetchPlaceholderRecordsForScopedIdentifiers:(id)arg1 targetMapping:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000842ee
- (void)fetchUnknownTargetsInMapping:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000084089
- (void)fetchFullRecordsForScopedIdentifiers:(id)arg1 targetMapping:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000083e88
- (void)_fetchRecordsForRemainingScopedIdentifiers:(id)arg1 alreadyFetchedScopedIdentifiers:(id)arg2 userRecordID:(id)arg3 foundCPLRecords:(id)arg4 foundCKRecords:(id)arg5 targetMapping:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x0010000000083706
- (_Bool)_mergeFoundCKRecords:(id)arg1 updateFoundCPLRecords:(id)arg2 remainingScopedIdentifiers:(id)arg3 fetchedScopedIdentifiers:(id)arg4 userRecordID:(id)arg5 targetMapping:(id)arg6 error:(id *)arg7;	// IMP=0x0010000000081ac1
- (void)_mergePrivateRecord:(id)arg1 withSharedRecord:(id)arg2 merger:(id)arg3;	// IMP=0x00100000000819b7
- (id)_sharedRecordToPrivateRecord:(id)arg1 scopedIdentifier:(id)arg2;	// IMP=0x00100000000818bd
- (id)_interpretedSharedChangeFromCKRecord:(id)arg1 scopedIdentifier:(id)arg2 userRecordID:(id)arg3;	// IMP=0x00100000000817dd
- (id)_interpretedChangeFromCKRecord:(id)arg1 scopedIdentifier:(id)arg2 userRecordID:(id)arg3;	// IMP=0x00100000000813d7
- (void)fetchRecordWithScopedIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000813c0
- (void)_fetchRecordWithScopedIdentifiers:(id)arg1 followRemapping:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000080db6
- (void)_fetchNextOperationType:(id)arg1 followRemapping:(_Bool)arg2 recordIDMapping:(id)arg3 inResult:(id)arg4 storeRequestUUIDsIn:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000008098a
- (void)fetchRecordWithNames:(id)arg1 inScope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000080970
- (void)fetchRecordsWithIDs:(id)arg1 fetchResources:(_Bool)arg2 inScope:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000008084b
- (void)fetchRecordWithNames:(id)arg1 fetchResources:(_Bool)arg2 inScope:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000080310
- (void)fetchRecordsWithIDs:(id)arg1 fetchResources:(_Bool)arg2 wantsAllRecords:(_Bool)arg3 type:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000802ec
- (void)fetchRecordsWithIDs:(id)arg1 fetchResources:(_Bool)arg2 desiredKeys:(id)arg3 wantsAllRecords:(_Bool)arg4 type:(long long)arg5 perFoundRecordBlock:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x001000000007f1d9
- (void)fetchRecordsWithIDs:(id)arg1 fetchResources:(_Bool)arg2 desiredKeys:(id)arg3 wantsAllRecords:(_Bool)arg4 type:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000007f1b6
- (void)uploadRecords:(id)arg1 cloudKitScope:(id)arg2 scopeProvider:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000009fd3b
- (void)updateRecords:(id)arg1 cloudKitScope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009f87a
- (void)updatePrivatePropertiesOnAssetsWithScopedIdentifiers:(id)arg1 desiredKeys:(id)arg2 destinationZoneIdentification:(id)arg3 sharedZoneIdentification:(id)arg4 targetMapping:(id)arg5 knownRecords:(id)arg6 shouldUpdateRecord:(CDUnknownBlockType)arg7 updateBlock:(CDUnknownBlockType)arg8 completionHandler:(CDUnknownBlockType)arg9;	// IMP=0x001000000009e50e
- (id)_errorForUpdateError:(id)arg1 scopeProvider:(id)arg2;	// IMP=0x001000000009e379
- (void)_createSparsePrivateRecordsIfNecessary:(id)arg1 recordClass:(Class)arg2 userRecordID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000009da6a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

