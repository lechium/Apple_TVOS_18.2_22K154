//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDSyncOperation, HMDSyncOperationQueue, HMFExponentialBackoffTimer, NSArray, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol HMDSyncOperationManagerDataSource, OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface HMDSyncOperationManager : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableArray *_cloudVerifyAccountOperations;	// 16 = 0x10
    NSMutableArray *_cloudZonePushOperationQueues;	// 24 = 0x18
    NSMutableArray *_cloudZoneFetchOperationQueues;	// 32 = 0x20
    NSMutableArray *_cloudCancelPauseOperations;	// 40 = 0x28
    NSMutableArray *_cloudQueryDatabaseOperations;	// 48 = 0x30
    NSMutableArray *_cloudPostFetchOperations;	// 56 = 0x38
    NSMutableDictionary *_cloudZonePushOperationQueuesMap;	// 64 = 0x40
    NSMutableDictionary *_cloudZoneFetchOperationQueuesMap;	// 72 = 0x48
    NSObject<OS_os_log> *_logger;	// 80 = 0x50
    _Bool _pauseQueue;	// 88 = 0x58
    _Bool _syncLoopDialogDisplayed;	// 89 = 0x59
    HMDSyncOperationQueue *_cloudPushOperations;	// 96 = 0x60
    HMDSyncOperationQueue *_cloudFetchOperations;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_workQueue;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_clientQueue;	// 120 = 0x78
    long long _pauseCloudPushLevel;	// 128 = 0x80
    HMFExponentialBackoffTimer *_cloudPushDelayTimer;	// 136 = 0x88
    HMDSyncOperation *_currentOperation;	// 144 = 0x90
    id <HMDSyncOperationManagerDataSource> _dataSource;	// 152 = 0x98
    CDUnknownBlockType _timerFactory;	// 160 = 0xa0
}

+ (id)logCategory;	// IMP=0x001000000069fdbf
- (void).cxx_destruct;	// IMP=0x000000000069b6bb
@property(readonly) CDUnknownBlockType timerFactory; // @synthesize timerFactory=_timerFactory;
@property(readonly, nonatomic) __weak id <HMDSyncOperationManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) HMDSyncOperation *currentOperation; // @synthesize currentOperation=_currentOperation;
@property(nonatomic, getter=wasSyncLoopDialogDisplayed) _Bool syncLoopDialogDisplayed; // @synthesize syncLoopDialogDisplayed=_syncLoopDialogDisplayed;
@property(retain, nonatomic) HMFExponentialBackoffTimer *cloudPushDelayTimer; // @synthesize cloudPushDelayTimer=_cloudPushDelayTimer;
@property(nonatomic) long long pauseCloudPushLevel; // @synthesize pauseCloudPushLevel=_pauseCloudPushLevel;
@property(nonatomic) _Bool pauseQueue; // @synthesize pauseQueue=_pauseQueue;
@property(readonly, copy) NSArray *cloudZoneFetchOperationQueues; // @synthesize cloudZoneFetchOperationQueues=_cloudZoneFetchOperationQueues;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000069b4f0
- (void)resetCloudPushTimer:(id)arg1;	// IMP=0x000000000069b438
- (void)killCloudPushAndResume;	// IMP=0x000000000069b3c7
- (void)resumeCloudPush;	// IMP=0x000000000069b356
- (void)pauseCloudPush;	// IMP=0x000000000069b2e5
- (void)kick;	// IMP=0x000000000069b274
- (void)resume;	// IMP=0x000000000069b203
- (void)pause;	// IMP=0x000000000069b192
- (void)_handleCancelledOperations:(id)arg1;	// IMP=0x000000000069b0da
- (void)_handleNextOperation;	// IMP=0x000000000069aca5
- (id)_dequeueNextOperation;	// IMP=0x000000000069a5fc
- (void)cancelOperations;	// IMP=0x000000000069a58b
- (void)pauseAndWaitForCurrentOperationCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000069a475
- (void)addOperationRespectingOptions:(id)arg1 withDelay:(double)arg2;	// IMP=0x000000000069a3a8
- (void)_dropWithoutAlreadyScheduledOperation:(id)arg1;	// IMP=0x000000000069a239
- (void)addOperation:(id)arg1 withDelay:(double)arg2;	// IMP=0x000000000069a066
- (void)addOperation:(id)arg1;	// IMP=0x000000000069a051
- (void)_reportPossibleSyncLoop;	// IMP=0x0000000000699eba
- (id)dumpState;	// IMP=0x00000000006996c4
@property(readonly, copy) NSString *description;
- (id)popCloudPostFetchOperation;	// IMP=0x0000000000699528
- (_Bool)dropCloudPostFetchOperationsIfPresent;	// IMP=0x000000000069933f
- (_Bool)addCloudPostFetchOperationIfNonePresent:(id)arg1;	// IMP=0x000000000069929d
- (id)popCloudQueryDatabaseOperation;	// IMP=0x00000000006991fd
- (_Bool)addCloudQueryDatabaseOperationIfNonePresent:(id)arg1;	// IMP=0x000000000069915b
- (id)popCloudCancelPauseOperation;	// IMP=0x00000000006990bb
- (void)addCloudCancelPauseOperation:(id)arg1;	// IMP=0x0000000000699045
- (_Bool)popCloudZoneFetchOperationAndMoveQueueToEnd:(id *)arg1;	// IMP=0x0000000000698d8b
- (void)removeCloudZoneFetchOperationQueue:(id)arg1;	// IMP=0x0000000000698ccf
- (_Bool)addCloudZoneFetchOperation:(id)arg1 delay:(double)arg2;	// IMP=0x0000000000698b8e
- (id)popCloudZonePushOperationAndMoveQueueToEnd;	// IMP=0x00000000006988ea
- (void)removeCloudZonePushOperationQueue:(id)arg1;	// IMP=0x000000000069882e
- (_Bool)addCloudZonePushOperation:(id)arg1 delay:(double)arg2;	// IMP=0x000000000069869e
- (id)popCloudVerifyAccountOperation;	// IMP=0x00000000006985fe
- (void)addCloudVerifyAccountOperation:(id)arg1;	// IMP=0x0000000000698588
@property(readonly, copy) NSArray *cloudPostFetchOperations;
@property(readonly, copy) NSArray *cloudQueryDatabaseOperations;
@property(readonly, copy) NSArray *cloudCancelPauseOperations;
- (id)cloudZoneFetchOperations;	// IMP=0x0000000000698408
@property(readonly, copy) NSArray *cloudZonePushOperationQueues;
@property(readonly) HMDSyncOperationQueue *cloudFetchOperations; // @synthesize cloudFetchOperations=_cloudFetchOperations;
@property(readonly, copy) NSArray *cloudVerifyAccountOperations;
@property(readonly) HMDSyncOperationQueue *cloudPushOperations; // @synthesize cloudPushOperations=_cloudPushOperations;
- (id)initWithClientQueue:(id)arg1 dataSource:(id)arg2 timerFactory:(CDUnknownBlockType)arg3;	// IMP=0x0000000000697eb1
- (id)initWithClientQueue:(id)arg1 dataSource:(id)arg2;	// IMP=0x0000000000697e98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

