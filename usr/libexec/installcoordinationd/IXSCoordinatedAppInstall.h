//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IPPublishedIdentityProgress, IXAppInstallCoordinatorSeed, IXApplicationIdentity, IXProgressHint, IXSClientConnection, IXSCoordinatorProgress, IXSOwnedDataPromise, IXSPlaceholder, IXSPlaceholderFailureInfo, IXSPowerAssertion, IXSPromisedOutOfBandTransfer, LSRecordPromise, MISSING_TYPE, NSArray, NSDate, NSError, NSMutableArray, NSProgress, NSSet, NSString, NSUUID, RBSTerminationAssertion;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface IXSCoordinatedAppInstall : NSObject
{
    _Bool _needsPostProcessing;	// 8 = 0x8
    _Bool _isPaused;	// 9 = 0x9
    _Bool _complete;	// 10 = 0xa
    _Bool _isTracked;	// 11 = 0xb
    unsigned char _coordinatorScope;	// 12 = 0xc
    _Bool _currentProgressPhaseIsComplete;	// 13 = 0xd
    _Bool _sentBeginRestoringUserData;	// 14 = 0xe
    _Bool _expectTermAssertionCallback;	// 15 = 0xf
    _Bool _appAssetPromiseSetterCanInstallLocalProvisionedContent;	// 16 = 0x10
    _Bool _sentBeginPostProcessing;	// 17 = 0x11
    struct os_unfair_lock_s _externalPropertyLock;	// 20 = 0x14
    IXSPlaceholder *_placeholderPromise;	// 24 = 0x18
    IXSOwnedDataPromise *_appAssetPromise;	// 32 = 0x20
    unsigned long long _appAssetPromiseDRI;	// 40 = 0x28
    NSArray *_initialODRAssetPromises;	// 48 = 0x30
    IXSPromisedOutOfBandTransfer *_userDataPromise;	// 56 = 0x38
    IXSPromisedOutOfBandTransfer *_deviceSecurityPromise;	// 64 = 0x40
    IXSPromisedOutOfBandTransfer *_preparationPromise;	// 72 = 0x48
    IXSOwnedDataPromise *_installOptionsPromise;	// 80 = 0x50
    NSArray *_essentialAssetPromises;	// 88 = 0x58
    unsigned long long _importance;	// 96 = 0x60
    unsigned long long _newRemovability;	// 104 = 0x68
    unsigned long long _newRemovabilityClient;	// 112 = 0x70
    unsigned long long _savedRemovability;	// 120 = 0x78
    unsigned long long _savedRemovabilityClient;	// 128 = 0x80
    CDUnknownBlockType _priorityBoostCompletion;	// 136 = 0x88
    NSString *_priorityBoostSourceInfo;	// 144 = 0x90
    LSRecordPromise *_completedRecordPromise;	// 152 = 0x98
    unsigned long long _effectiveIntent;	// 160 = 0xa0
    IXSClientConnection *_scopedToConnection;	// 168 = 0xa8
    MISSING_TYPE *_progressHint;	// 176 = 0xb0
    unsigned long long _placeholderDisposition;	// 184 = 0xb8
    IXAppInstallCoordinatorSeed *_seed;	// 192 = 0xc0
    NSObject<OS_dispatch_queue> *_internalQueue;	// 200 = 0xc8
    NSObject<OS_dispatch_queue> *_delegateCallQueue;	// 208 = 0xd0
    NSObject<OS_dispatch_group> *_outstandingInstallOperationsGroup;	// 216 = 0xd8
    NSError *_error;	// 224 = 0xe0
    unsigned long long _errorSourceIdentifier;	// 232 = 0xe8
    NSUUID *_installOptionsPromiseUUID;	// 240 = 0xf0
    NSUUID *_placeholderPromiseUUID;	// 248 = 0xf8
    NSUUID *_appAssetPromiseUUID;	// 256 = 0x100
    NSArray *_initialODRAssetPromiseUUIDs;	// 264 = 0x108
    NSUUID *_userDataPromiseUUID;	// 272 = 0x110
    NSUUID *_deviceSecurityPromiseUUID;	// 280 = 0x118
    NSUUID *_preparationPromiseUUID;	// 288 = 0x120
    NSProgress *_cachedCurrentPhaseProgress;	// 296 = 0x128
    NSMutableArray *_pendingProgressRequests;	// 304 = 0x130
    unsigned long long _placeholderInstallState;	// 312 = 0x138
    unsigned long long _appInstallState;	// 320 = 0x140
    IXSPlaceholderFailureInfo *_placeholderFailureInfo;	// 328 = 0x148
    unsigned long long _originalInstallType;	// 336 = 0x150
    IXSPowerAssertion *_appInstallPowerAssertion;	// 344 = 0x158
    RBSTerminationAssertion *_termAssertion;	// 352 = 0x160
    NSObject<OS_dispatch_source> *_assertionRetryTimer;	// 360 = 0x168
    unsigned long long _assertionRetryCount;	// 368 = 0x170
    NSDate *_firstAppExtensionBusyTime;	// 376 = 0x178
    IXSCoordinatorProgress *_coordinatorProgress;	// 384 = 0x180
    IPPublishedIdentityProgress *_publishedInstallProgress;	// 392 = 0x188
    NSObject<OS_os_transaction> *_transaction;	// 400 = 0x190
    NSObject<OS_os_transaction> *_assertionTransaction;	// 408 = 0x198
    NSArray *_essentialAssetPromiseUUIDs;	// 416 = 0x1a0
    unsigned long long _postProcessingAssertionState;	// 424 = 0x1a8
    unsigned long long _updateScheduleState;	// 432 = 0x1b0
    NSObject<OS_dispatch_queue> *_assertionQueue;	// 440 = 0x1b8
    CDUnknownBlockType _schedulerCallback;	// 448 = 0x1c0
}

+ (id)_fetchInstallOptionsFromPromise:(id)arg1 error:(id *)arg2;	// IMP=0x0020000000053556
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000049efe
- (void).cxx_destruct;	// IMP=0x0020000000064f8f
@property(copy, nonatomic) CDUnknownBlockType schedulerCallback; // @synthesize schedulerCallback=_schedulerCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *assertionQueue; // @synthesize assertionQueue=_assertionQueue;
@property(nonatomic) unsigned long long updateScheduleState; // @synthesize updateScheduleState=_updateScheduleState;
@property(nonatomic) unsigned long long postProcessingAssertionState; // @synthesize postProcessingAssertionState=_postProcessingAssertionState;
@property(copy, nonatomic) NSArray *essentialAssetPromiseUUIDs; // @synthesize essentialAssetPromiseUUIDs=_essentialAssetPromiseUUIDs;
@property(nonatomic) _Bool sentBeginPostProcessing; // @synthesize sentBeginPostProcessing=_sentBeginPostProcessing;
@property(retain, nonatomic) NSObject<OS_os_transaction> *assertionTransaction; // @synthesize assertionTransaction=_assertionTransaction;
@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(nonatomic) _Bool appAssetPromiseSetterCanInstallLocalProvisionedContent; // @synthesize appAssetPromiseSetterCanInstallLocalProvisionedContent=_appAssetPromiseSetterCanInstallLocalProvisionedContent;
@property(retain, nonatomic) IPPublishedIdentityProgress *publishedInstallProgress; // @synthesize publishedInstallProgress=_publishedInstallProgress;
@property(retain, nonatomic) IXSCoordinatorProgress *coordinatorProgress; // @synthesize coordinatorProgress=_coordinatorProgress;
@property(retain, nonatomic) NSDate *firstAppExtensionBusyTime; // @synthesize firstAppExtensionBusyTime=_firstAppExtensionBusyTime;
@property(nonatomic) unsigned long long assertionRetryCount; // @synthesize assertionRetryCount=_assertionRetryCount;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *assertionRetryTimer; // @synthesize assertionRetryTimer=_assertionRetryTimer;
@property(nonatomic) _Bool expectTermAssertionCallback; // @synthesize expectTermAssertionCallback=_expectTermAssertionCallback;
@property(retain, nonatomic) RBSTerminationAssertion *termAssertion; // @synthesize termAssertion=_termAssertion;
@property(retain, nonatomic) IXSPowerAssertion *appInstallPowerAssertion; // @synthesize appInstallPowerAssertion=_appInstallPowerAssertion;
@property(nonatomic) _Bool sentBeginRestoringUserData; // @synthesize sentBeginRestoringUserData=_sentBeginRestoringUserData;
@property(nonatomic) unsigned long long originalInstallType; // @synthesize originalInstallType=_originalInstallType;
@property(retain, nonatomic) IXSPlaceholderFailureInfo *placeholderFailureInfo; // @synthesize placeholderFailureInfo=_placeholderFailureInfo;
@property(nonatomic) unsigned long long appInstallState; // @synthesize appInstallState=_appInstallState;
@property(nonatomic) unsigned long long placeholderInstallState; // @synthesize placeholderInstallState=_placeholderInstallState;
@property(retain, nonatomic) NSMutableArray *pendingProgressRequests; // @synthesize pendingProgressRequests=_pendingProgressRequests;
@property(readonly, nonatomic) NSProgress *cachedCurrentPhaseProgress; // @synthesize cachedCurrentPhaseProgress=_cachedCurrentPhaseProgress;
@property(retain, nonatomic) NSUUID *preparationPromiseUUID; // @synthesize preparationPromiseUUID=_preparationPromiseUUID;
@property(retain, nonatomic) NSUUID *deviceSecurityPromiseUUID; // @synthesize deviceSecurityPromiseUUID=_deviceSecurityPromiseUUID;
@property(retain, nonatomic) NSUUID *userDataPromiseUUID; // @synthesize userDataPromiseUUID=_userDataPromiseUUID;
@property(copy, nonatomic) NSArray *initialODRAssetPromiseUUIDs; // @synthesize initialODRAssetPromiseUUIDs=_initialODRAssetPromiseUUIDs;
@property(retain, nonatomic) NSUUID *appAssetPromiseUUID; // @synthesize appAssetPromiseUUID=_appAssetPromiseUUID;
@property(retain, nonatomic) NSUUID *placeholderPromiseUUID; // @synthesize placeholderPromiseUUID=_placeholderPromiseUUID;
@property(retain, nonatomic) NSUUID *installOptionsPromiseUUID; // @synthesize installOptionsPromiseUUID=_installOptionsPromiseUUID;
@property(nonatomic) unsigned long long errorSourceIdentifier; // @synthesize errorSourceIdentifier=_errorSourceIdentifier;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) struct os_unfair_lock_s externalPropertyLock; // @synthesize externalPropertyLock=_externalPropertyLock;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *outstandingInstallOperationsGroup; // @synthesize outstandingInstallOperationsGroup=_outstandingInstallOperationsGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateCallQueue; // @synthesize delegateCallQueue=_delegateCallQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(readonly, nonatomic) IXAppInstallCoordinatorSeed *seed; // @synthesize seed=_seed;
@property(retain, nonatomic) NSString *priorityBoostSourceInfo; // @synthesize priorityBoostSourceInfo=_priorityBoostSourceInfo;
@property(copy, nonatomic) CDUnknownBlockType priorityBoostCompletion; // @synthesize priorityBoostCompletion=_priorityBoostCompletion;
- (void)assertionTargetProcessDidExit:(id)arg1;	// IMP=0x0010000000064889
- (void)scheduledAppUpdateReadyToExecuteAndRunBlockWhenComplete:(CDUnknownBlockType)arg1;	// IMP=0x0010000000064787
- (void)_onQueue_runPostProcessingAssertionHandler;	// IMP=0x00100000000645b9
@property(nonatomic) unsigned long long placeholderDisposition; // @synthesize placeholderDisposition=_placeholderDisposition;
- (void)promise:(id)arg1 didCancelForReason:(id)arg2 client:(unsigned long long)arg3;	// IMP=0x001000000006411f
- (void)promise:(id)arg1 didUpdateProgress:(double)arg2;	// IMP=0x001000000006406b
- (void)promiseDidReset:(id)arg1;	// IMP=0x0010000000064065
- (void)promiseDidComplete:(id)arg1;	// IMP=0x0010000000063dcd
- (void)promiseDidBegin:(id)arg1;	// IMP=0x0010000000063733
- (unsigned long long)transactionStepForPromise:(id)arg1;	// IMP=0x0010000000063502
- (void)didUpdateProgress:(double)arg1 forPhase:(unsigned long long)arg2 overallProgress:(double)arg3;	// IMP=0x0010000000063406
- (void)_onQueue_updatePostProcessingProgress;	// IMP=0x0010000000062c72
- (void)_limitedConcurrency_fetchPostProcessingProgressAndRun:(CDUnknownBlockType)arg1;	// IMP=0x0010000000062b53
- (id)_limitedConcurrency_fetchInstallingProgress;	// IMP=0x0010000000062a71
- (void)_onQueue_updateLoadingProgress;	// IMP=0x0010000000061533
- (void)_limitedConcurrency_fetchLoadingProgressForPlaceholderInstallType:(unsigned long long)arg1 progressHint:(id)arg2 andRun:(CDUnknownBlockType)arg3;	// IMP=0x0010000000061340
- (void)_onQueue_setInstallProgressPercentComplete:(double)arg1 forPhase:(unsigned long long)arg2;	// IMP=0x00100000000612a2
- (void)_onQueue_configureTotalUnitCountsForInstallProgress:(id)arg1;	// IMP=0x0010000000061133
- (void)_limitedConcurrency_saveOriginalInstallTypeForAppRecord:(id)arg1;	// IMP=0x0010000000061062
- (id)_limitedConcurrency_fetchLSProgressForPhase:(unsigned long long)arg1 appRecord:(id)arg2;	// IMP=0x0010000000060f5a
- (void)_limitedConcurrency_setUpLSProgressForInstallType:(unsigned long long)arg1 progressHint:(id)arg2;	// IMP=0x0010000000060d1a
- (void)_runWithProgress:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0010000000060a30
- (void)_onQueue_fetchProgressForPhase:(unsigned long long)arg1 andRun:(CDUnknownBlockType)arg2;	// IMP=0x0010000000060526
- (void)_onQueue_fetchProgressAndRun:(CDUnknownBlockType)arg1;	// IMP=0x001000000006048c
- (void)_onQueue_finishProgress;	// IMP=0x00100000000603ed
- (void)_onQueue_finishProgress:(id)arg1;	// IMP=0x001000000006029d
- (void)_onQueue_cancelProgress;	// IMP=0x00100000000601fe
- (void)_onQueue_cancelProgress:(id)arg1;	// IMP=0x001000000006012c
- (void)_onQueue_resumeProgress;	// IMP=0x0010000000060073
- (void)_onQueue_pauseProgress;	// IMP=0x001000000005ffd4
- (void)_pauseProgressObject:(id)arg1;	// IMP=0x001000000005ff09
@property(nonatomic) _Bool currentProgressPhaseIsComplete; // @synthesize currentProgressPhaseIsComplete=_currentProgressPhaseIsComplete;
@property(copy, nonatomic) IXProgressHint *progressHint; // @synthesize progressHint=_progressHint;
@property(copy, nonatomic) IXProgressHint *progressHintWithDefault; // @dynamic progressHintWithDefault;
@property(readonly, copy, nonatomic) NSSet *promiseUUIDs;
@property(nonatomic) __weak IXSClientConnection *scopedToConnection; // @synthesize scopedToConnection=_scopedToConnection;
@property(nonatomic) unsigned char coordinatorScope; // @synthesize coordinatorScope=_coordinatorScope;
@property(nonatomic) unsigned long long effectiveIntent; // @synthesize effectiveIntent=_effectiveIntent;
@property(readonly, nonatomic) unsigned long long originalIntent; // @dynamic originalIntent;
@property(readonly, nonatomic) unsigned long long creator; // @dynamic creator;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @dynamic uniqueIdentifier;
@property(readonly, nonatomic) unsigned long long installationDomain; // @dynamic installationDomain;
@property(readonly, copy, nonatomic) IXApplicationIdentity *identity; // @dynamic identity;
@property(readonly, copy) NSString *description;
- (id)promiseStateDescription;	// IMP=0x001000000005e358
- (void)setPlaceholderInstallState:(unsigned long long)arg1 withLSRecordPromiseForCompletion:(id)arg2;	// IMP=0x001000000005dfa8
- (void)_updatePendingOperationsForChangeFromPreviousState:(unsigned long long)arg1 toNewState:(unsigned long long)arg2;	// IMP=0x001000000005dde0
@property(nonatomic) _Bool isTracked; // @synthesize isTracked=_isTracked;
- (void)_onQueue_saveState;	// IMP=0x001000000005dade
- (void)_onQueue_internal_saveState;	// IMP=0x001000000005d832
- (void)_onQueue_internal_cancelForReason:(id)arg1 client:(unsigned long long)arg2;	// IMP=0x001000000005d81a
- (_Bool)_onQueue_internal_cancelForReason:(id)arg1 client:(unsigned long long)arg2 needsLSDatabaseSync:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x001000000005c7a1
- (id)_onQueue_localizedAppName;	// IMP=0x001000000005c5fd
- (_Bool)cancelForReason:(id)arg1 client:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000005c5e5
- (_Bool)cancelForReason:(id)arg1 client:(unsigned long long)arg2 needsLSDatabaseSync:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x001000000005c43f
- (void)_onQueue_cancelPlaceholderIfNeededForReason:(id)arg1 client:(unsigned long long)arg2 needsLSDatabaseSync:(_Bool *)arg3;	// IMP=0x001000000005be27
- (_Bool)_onQueue_shouldDeletePlaceholderOnCancelationForReason:(id)arg1 client:(unsigned long long)arg2;	// IMP=0x001000000005bbfe
- (void)_onQueue_removeParallelPlaceholder:(_Bool *)arg1;	// IMP=0x001000000005b901
- (void)_onQueue_handleAppAssetPromiseCancellationWhenRestoringWithReason:(id)arg1 client:(unsigned long long)arg2;	// IMP=0x001000000005b674
- (_Bool)_shouldRemovePlaceholderForReason:(id)arg1;	// IMP=0x001000000005b486
@property(retain, nonatomic) LSRecordPromise *completedRecordPromise; // @synthesize completedRecordPromise=_completedRecordPromise;
- (void)_onQueue_updatePlaceholderForFailureReason:(id)arg1 client:(unsigned long long)arg2 installType:(unsigned long long)arg3;	// IMP=0x001000000005b121
- (void)_asyncUpdatePlaceholderMetadataWithInstallType:(unsigned long long)arg1 reason:(long long)arg2 underlyingError:(id)arg3 client:(unsigned long long)arg4;	// IMP=0x001000000005af08
- (_Bool)_placeholderOrParallelPlaceholderIsInstalledWithRecord:(id *)arg1;	// IMP=0x001000000005adcf
@property(readonly, nonatomic, getter=placeholderIsInstalled) _Bool placeholderInstalled;
@property(nonatomic, getter=isComplete) _Bool complete; // @synthesize complete=_complete;
- (void)_onQueue_unregister;	// IMP=0x0010000000059fef
- (void)_onQueue_prioritizeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000059c82
- (void)prioritizeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000059bac
@property(nonatomic) _Bool shouldBeginRestoringUserData; // @dynamic shouldBeginRestoringUserData;
- (void)setPriorityBoostCompletion:(CDUnknownBlockType)arg1 withSourceInfo:(id)arg2;	// IMP=0x00100000000596b2
- (void)setNewRemovabilityState:(unsigned long long)arg1 removabilityClient:(unsigned long long)arg2;	// IMP=0x0010000000059640
@property(nonatomic) unsigned long long savedRemovabilityClient; // @synthesize savedRemovabilityClient=_savedRemovabilityClient;
@property(nonatomic) unsigned long long savedRemovability; // @synthesize savedRemovability=_savedRemovability;
@property(nonatomic) unsigned long long newRemovabilityClient; // @synthesize newRemovabilityClient=_newRemovabilityClient;
@property(nonatomic) unsigned long long newRemovability; // @synthesize newRemovability=_newRemovability;
@property(nonatomic) unsigned long long importance; // @synthesize importance=_importance;
- (_Bool)externalGetIsPaused;	// IMP=0x00100000000590a2
- (void)externalSetIsPaused:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000058fc9
- (void)setIsPaused:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000058cdb
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(copy, nonatomic) NSArray *essentialAssetPromises; // @synthesize essentialAssetPromises=_essentialAssetPromises;
@property(nonatomic) _Bool shouldBeginPostProcessing; // @dynamic shouldBeginPostProcessing;
@property(nonatomic) _Bool needsPostProcessing; // @synthesize needsPostProcessing=_needsPostProcessing;
@property(retain, nonatomic) IXSOwnedDataPromise *installOptionsPromise; // @synthesize installOptionsPromise=_installOptionsPromise;
- (void)_internal_setInstallOptionsPromise:(id)arg1;	// IMP=0x0010000000057fd1
@property(retain, nonatomic) IXSPromisedOutOfBandTransfer *preparationPromise; // @synthesize preparationPromise=_preparationPromise;
@property(retain, nonatomic) IXSPromisedOutOfBandTransfer *deviceSecurityPromise; // @synthesize deviceSecurityPromise=_deviceSecurityPromise;
@property(retain, nonatomic) IXSPromisedOutOfBandTransfer *userDataPromise; // @synthesize userDataPromise=_userDataPromise;
@property(copy, nonatomic) NSArray *initialODRAssetPromises; // @synthesize initialODRAssetPromises=_initialODRAssetPromises;
@property(nonatomic) unsigned long long appAssetPromiseDRI; // @synthesize appAssetPromiseDRI=_appAssetPromiseDRI;
@property(retain, nonatomic) IXSOwnedDataPromise *appAssetPromise; // @synthesize appAssetPromise=_appAssetPromise;
- (void)_internal_setAppAssetPromise:(id)arg1;	// IMP=0x0010000000056a9f
@property(retain, nonatomic) IXSPlaceholder *placeholderPromise; // @synthesize placeholderPromise=_placeholderPromise;
- (void)_onQueue_fireObserversForClient:(id)arg1;	// IMP=0x001000000005558a
- (void)_onQueue_acquireAssertionAndDoInstall;	// IMP=0x0010000000055276
- (void)_onQueue_doInstall;	// IMP=0x0010000000054706
- (void)_onQueue_doAddReference:(id)arg1;	// IMP=0x0010000000054440
- (void)_finishAppInstallAtURL:(id)arg1 result:(_Bool)arg2 recordPromise:(id)arg3 error:(id)arg4;	// IMP=0x0010000000053eb4
- (void)_onQueue_handleCancelForInstallFailure:(id)arg1;	// IMP=0x0010000000053c11
- (id)_onQueue_fetchInstallOptionsWithError:(id *)arg1;	// IMP=0x0010000000053b11
- (void)_onQueue_acquireAssertionAndInstallPlaceholder;	// IMP=0x001000000005333d
- (void)_onQueue_installPlaceholder;	// IMP=0x0010000000051f25
- (id)_onQueue_fetchMetadataFromInstalledAppForOffloadWithError:(id *)arg1;	// IMP=0x00100000000518bf
- (void)_finishPlaceholderInstallAtURL:(id)arg1 result:(_Bool)arg2 recordPromise:(id)arg3 error:(id)arg4;	// IMP=0x0010000000050d35
- (id)_limitedConcurrency_installApplication:(id)arg1 isPlaceholder:(_Bool)arg2 options:(id)arg3 retries:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x00100000000500c8
- (_Bool)_limitedConcurrency_doRetryingInstallOperationForPlaceholder:(_Bool)arg1 installTargetURL:(id)arg2 retries:(unsigned long long)arg3 error:(id *)arg4 installAttemptBlock:(CDUnknownBlockType)arg5;	// IMP=0x001000000004f374
- (void)_onQueue_acquireAssertionForPlaceholder:(_Bool)arg1;	// IMP=0x001000000004ef09
- (void)_onQueue_handleAssertionAcquisitionFailureForPlaceholder:(_Bool)arg1 withError:(id)arg2;	// IMP=0x001000000004e53b
- (void)_onQueue_runAssertionHandlerForPlaceholder:(_Bool)arg1;	// IMP=0x001000000004e4aa
- (long long)_onQueue_assertionRetrySeconds;	// IMP=0x001000000004e427
- (void)_onQueue_convertTerminationAssertionToAllowExtensionLaunch;	// IMP=0x001000000004e238
- (_Bool)_onQueue_acquireTerminationAssertionWithPredicate:(id)arg1 description:(id)arg2 terminationResistance:(unsigned char)arg3 allowLaunchPredicate:(id)arg4 error:(id *)arg5;	// IMP=0x001000000004dedf
- (void)_runAsyncBlockWithDescription:(id)arg1 onLaunchServicesQueue:(CDUnknownBlockType)arg2;	// IMP=0x001000000004dd6d
- (void)_runAsyncBlockWithDescription:(id)arg1 onUninstallQueue:(CDUnknownBlockType)arg2;	// IMP=0x001000000004db74
- (void)_onQueue_checkState;	// IMP=0x001000000004d686
- (_Bool)_onQueue_scheduleUpdate;	// IMP=0x001000000004d64e
- (_Bool)_eligibleToScheduleUpdate;	// IMP=0x001000000004d646
- (_Bool)_onQueue_isPlaceholderUnnecessary;	// IMP=0x001000000004d105
@property(readonly, nonatomic) unsigned long long state;
- (void)handleFirstUnlockNotification;	// IMP=0x001000000004c215
- (void)_onAssertionQueue_setTermAssertion:(id)arg1;	// IMP=0x001000000004c043
- (id)_createPowerAssertion;	// IMP=0x001000000004bed6
- (_Bool)awakeFromSerializationWithError:(id *)arg1;	// IMP=0x0010000000049f06
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000049717
- (void)dealloc;	// IMP=0x0010000000049592
- (id)initWithSeed:(id)arg1 scopedToConnection:(id)arg2;	// IMP=0x0010000000049505
- (void)_internalInitWithSeed:(id)arg1 scopedToConnection:(id)arg2;	// IMP=0x0010000000049354
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000048804
- (void)_initInternalState;	// IMP=0x0010000000048542
- (oneway void)_remote_removabilityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000006bcdd
- (oneway void)_remote_setRemovability:(unsigned long long)arg1 byClient:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000006bc0d
- (oneway void)_remote_getProgressHintWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000006baba
- (oneway void)_remote_setProgressHint:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006b9cb
- (oneway void)_remote_getPlaceholderDispositionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000006b8a9
- (oneway void)_remote_setPlaceholderDisposition:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006b634
- (oneway void)_remote_convertToGloballyScopedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000006b46b
- (oneway void)_remote_getCoordinatorScopeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000006b420
- (oneway void)_remote_getCoordinationState:(CDUnknownBlockType)arg1;	// IMP=0x001000000006b280
- (oneway void)_remote_prioritizeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000006b1ab
- (oneway void)_remote_getIsPausedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000006b08d
- (oneway void)_remote_setIsPaused:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006afb5
- (oneway void)_remote_fireObserversForClient:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006aec6
- (oneway void)_remote_getErrorInfo:(CDUnknownBlockType)arg1;	// IMP=0x001000000006ad07
- (oneway void)_remote_getIsComplete:(CDUnknownBlockType)arg1;	// IMP=0x001000000006abe9
- (oneway void)_remote_hasEssentialAssetPromises:(CDUnknownBlockType)arg1;	// IMP=0x001000000006a8d0
- (oneway void)_remote_getEssentialAssetPromises:(CDUnknownBlockType)arg1;	// IMP=0x001000000006a33f
- (oneway void)_remote_setEssentialAssetPromiseUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000069d27
- (oneway void)_remote_getPostProcessingShouldBegin:(CDUnknownBlockType)arg1;	// IMP=0x0010000000069c09
- (oneway void)_remote_getNeedsPostProcessing:(CDUnknownBlockType)arg1;	// IMP=0x00100000000699cd
- (oneway void)_remote_setNeedsPostProcessing:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000697f5
- (oneway void)_remote_getHasDeviceSecurityPromise:(CDUnknownBlockType)arg1;	// IMP=0x00100000000696c3
- (oneway void)_remote_getDeviceSecurityPromise:(CDUnknownBlockType)arg1;	// IMP=0x00100000000694a1
- (oneway void)_remote_setDeviceSecurityPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000069290
- (oneway void)_remote_getPreparationPromise:(CDUnknownBlockType)arg1;	// IMP=0x001000000006906e
- (oneway void)_remote_setPreparationPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000068e5d
- (oneway void)_remote_getUserDataRestoreShouldBegin:(CDUnknownBlockType)arg1;	// IMP=0x0010000000068d3f
- (oneway void)_remote_hasUserDataPromise:(CDUnknownBlockType)arg1;	// IMP=0x0010000000068c0d
- (oneway void)_remote_getUserDataPromise:(CDUnknownBlockType)arg1;	// IMP=0x00100000000689eb
- (oneway void)_remote_setUserDataPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000687da
- (oneway void)_remote_hasInitialODRAssetPromises:(CDUnknownBlockType)arg1;	// IMP=0x00100000000686a8
- (oneway void)_remote_getInitialODRAssetPromises:(CDUnknownBlockType)arg1;	// IMP=0x001000000006831a
- (oneway void)_remote_setInitialODRAssetPromiseUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000067f60
- (oneway void)_remote_conveyPriorityReplacingExisting:(_Bool)arg1 forConnection:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000067a0f
- (oneway void)_remote_importanceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000678f3
- (oneway void)_remote_setImportance:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006781d
- (oneway void)_remote_getInstallOptions:(CDUnknownBlockType)arg1;	// IMP=0x001000000006760c
- (oneway void)_remote_hasInstallOptions:(CDUnknownBlockType)arg1;	// IMP=0x00100000000674da
- (oneway void)_remote_setInstallOptionsPromiseUUID:(id)arg1 forConnection:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000066b82
- (_Bool)_validateParentLinkageForInstallOptions:(id)arg1 connection:(id)arg2 error:(id *)arg3;	// IMP=0x001000000006694f
- (oneway void)_remote_setAppAssetPromiseDRI:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006688e
- (oneway void)_remote_getAppAssetPromiseDRI:(CDUnknownBlockType)arg1;	// IMP=0x0010000000066772
- (oneway void)_remote_appAssetPromiseHasBegunFulfillment:(CDUnknownBlockType)arg1;	// IMP=0x00100000000664db
- (oneway void)_remote_hasAppAssetPromise:(CDUnknownBlockType)arg1;	// IMP=0x00100000000663a9
- (oneway void)_remote_getAppAssetPromise:(CDUnknownBlockType)arg1;	// IMP=0x0010000000066187
- (oneway void)_remote_setAppAssetPromiseUUID:(id)arg1 fromConnection:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000065a30
- (oneway void)_remote_hasPlaceholderPromise:(CDUnknownBlockType)arg1;	// IMP=0x00100000000658fe
- (oneway void)_remote_getPlaceholderPromise:(CDUnknownBlockType)arg1;	// IMP=0x00100000000656dc
- (oneway void)_remote_setPlaceholderPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006525a
- (oneway void)_remote_cancelForReason:(id)arg1 client:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000651a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

