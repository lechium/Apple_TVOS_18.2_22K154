//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBCloudZone, HMBLocalZone, HMDActiveXPCClientConnectionsPeriodicTimer, HMDCameraClipFeedbackManager, HMDCameraClipsQuotaManager, HMDCameraSignificantEventFaceClassificationResolver, HMDDatabaseZoneManager, HMDFeaturesDataSource, HMFMessageDispatcher, NSDate, NSDictionary, NSObject, NSString, NSUUID;
@protocol HMDCameraClipManagerDelegate, HMDFileManager, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraClipManager : HMFObject
{
    _Bool _hasWriteAccess;	// 8 = 0x8
    NSString *_logIdentifier;	// 16 = 0x10
    id <HMDCameraClipManagerDelegate> _delegate;	// 24 = 0x18
    HMBLocalZone *_localZone;	// 32 = 0x20
    HMBCloudZone *_cloudZone;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    HMDDatabaseZoneManager *_zoneManager;	// 56 = 0x38
    HMDCameraClipsQuotaManager *_quotaManager;	// 64 = 0x40
    HMDCameraSignificantEventFaceClassificationResolver *_faceClassificationResolver;	// 72 = 0x48
    HMDActiveXPCClientConnectionsPeriodicTimer *_clientConnectionsTimer;	// 80 = 0x50
    HMFMessageDispatcher *_messageDispatcher;	// 88 = 0x58
    NSUUID *_cameraProfileUUID;	// 96 = 0x60
    id <HMDFileManager> _fileManager;	// 104 = 0x68
    HMDFeaturesDataSource *_featuresDataSource;	// 112 = 0x70
    HMDCameraClipFeedbackManager *_feedbackManager;	// 120 = 0x78
    NSDate *_suppressNotificationsBeforeDate;	// 128 = 0x80
    unsigned long long _fetchBatchLimit;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *_cleanupQueue;	// 144 = 0x90
    CDUnknownBlockType _fetchServerFactory;	// 152 = 0x98
}

+ (id)logCategory;	// IMP=0x00100000008da0fe
+ (double)maximumClipDuration;	// IMP=0x00100000008da057
- (void).cxx_destruct;	// IMP=0x00000000008d4c69
@property(copy) CDUnknownBlockType fetchServerFactory; // @synthesize fetchServerFactory=_fetchServerFactory;
@property(retain) NSObject<OS_dispatch_queue> *cleanupQueue; // @synthesize cleanupQueue=_cleanupQueue;
@property unsigned long long fetchBatchLimit; // @synthesize fetchBatchLimit=_fetchBatchLimit;
@property(copy) NSDate *suppressNotificationsBeforeDate; // @synthesize suppressNotificationsBeforeDate=_suppressNotificationsBeforeDate;
@property(retain) HMDCameraClipFeedbackManager *feedbackManager; // @synthesize feedbackManager=_feedbackManager;
@property(readonly) HMDFeaturesDataSource *featuresDataSource; // @synthesize featuresDataSource=_featuresDataSource;
@property(readonly) id <HMDFileManager> fileManager; // @synthesize fileManager=_fileManager;
@property(readonly, copy) NSUUID *cameraProfileUUID; // @synthesize cameraProfileUUID=_cameraProfileUUID;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) HMDActiveXPCClientConnectionsPeriodicTimer *clientConnectionsTimer; // @synthesize clientConnectionsTimer=_clientConnectionsTimer;
@property(readonly) HMDCameraSignificantEventFaceClassificationResolver *faceClassificationResolver; // @synthesize faceClassificationResolver=_faceClassificationResolver;
@property(readonly) HMDCameraClipsQuotaManager *quotaManager; // @synthesize quotaManager=_quotaManager;
@property(readonly) HMDDatabaseZoneManager *zoneManager; // @synthesize zoneManager=_zoneManager;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) _Bool hasWriteAccess; // @synthesize hasWriteAccess=_hasWriteAccess;
@property(retain) HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(retain) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property __weak id <HMDCameraClipManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (void)submitLogEvent:(id)arg1 error:(id)arg2;	// IMP=0x00000000008d49b5
- (void)clientConnectionsTimerDidFire:(id)arg1;	// IMP=0x00000000008d495b
- (void)zoneManager:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2;	// IMP=0x00000000008d467a
- (void)zoneManagerDidStop:(id)arg1;	// IMP=0x00000000008d44ee
- (void)zoneManagerDidStart:(id)arg1;	// IMP=0x00000000008d3e03
- (_Bool)zoneManager:(id)arg1 shouldRequestShareInvitationFromUser:(id)arg2;	// IMP=0x00000000008d3d92
- (_Bool)areShareModificationsEnabledForManager:(id)arg1;	// IMP=0x00000000008d3d3f
- (_Bool)manager:(id)arg1 shouldGrantWriteAccessToUser:(id)arg2;	// IMP=0x00000000008d3cce
- (_Bool)manager:(id)arg1 shouldShareWithUser:(id)arg2;	// IMP=0x00000000008d3c5d
- (id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2;	// IMP=0x00000000008d3ba3
- (id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2;	// IMP=0x00000000008d3ae9
- (id)localZone:(id)arg1 didProcessModelCreation:(id)arg2;	// IMP=0x00000000008d3a2f
- (void)cloudZone:(id)arg1 didEncounterZoneDisabledError:(id)arg2;	// IMP=0x00000000008d39be
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)handleHomePersonManagerSettingsDidChangeNotification:(id)arg1;	// IMP=0x00000000008d38eb
- (void)handleUserRemoteAccessDidChangeNotification:(id)arg1;	// IMP=0x00000000008d387a
- (void)handleUserCamerasAccessLevelDidChangeNotification:(id)arg1;	// IMP=0x00000000008d3809
- (void)handleUserPrivilegeDidChangeNotification:(id)arg1;	// IMP=0x00000000008d3798
- (void)handleUpdateCloudStorageMessage:(id)arg1;	// IMP=0x00000000008d3446
- (void)handleFetchIsCloudStorageEnabledMessage:(id)arg1;	// IMP=0x00000000008d2efa
- (void)handleImportClipsMessage:(id)arg1;	// IMP=0x00000000008d2832
- (void)handleRemoteHandleFaceMisclassificationMessage:(id)arg1;	// IMP=0x00000000008d2272
- (void)handleHandleFaceMisclassificationMessage:(id)arg1;	// IMP=0x00000000008d1746
- (void)handleDeleteAllClipsMessage:(id)arg1;	// IMP=0x00000000008d13c4
- (void)handleDeleteClipMessage:(id)arg1;	// IMP=0x00000000008d0f0f
- (void)handleFetchSignificantEventsMessage:(id)arg1;	// IMP=0x00000000008d05f5
- (void)handleFetchFaceCropURLMessage:(id)arg1;	// IMP=0x00000000008cff1e
- (void)handleFetchFaceCropDataRepresentationMessage:(id)arg1;	// IMP=0x00000000008cf7f3
- (void)handleFetchHeroFrameURLMessage:(id)arg1;	// IMP=0x00000000008cf1ae
- (void)handleFetchHeroFrameDataRepresentationMessage:(id)arg1;	// IMP=0x00000000008ceb06
- (void)handleFetchVideoSegmentsAssetContextMessage:(id)arg1;	// IMP=0x00000000008ce921
- (void)handleFetchCountOfClipsMessage:(id)arg1;	// IMP=0x00000000008ce12a
- (void)handleFetchClipForSignificantEventMessage:(id)arg1;	// IMP=0x00000000008cd3c8
- (void)handleFetchClipsMessage:(id)arg1;	// IMP=0x00000000008ccb3a
- (void)handleFetchClipMessage:(id)arg1;	// IMP=0x00000000008cc4f4
- (void)handlePerformCloudPullMessage:(id)arg1;	// IMP=0x00000000008cc2d3
- (void)handleUnsubscribeMessage:(id)arg1;	// IMP=0x00000000008cbfe0
- (void)handleSubscribeMessage:(id)arg1;	// IMP=0x00000000008cbc02
- (id)_disableCloudStorage;	// IMP=0x00000000008cb8bb
- (id)_enableCloudStorage;	// IMP=0x00000000008cb5d0
- (void)_removeAllFaceClassificationModels;	// IMP=0x00000000008cb4bd
- (id)_removeClipsWithUUIDs:(id)arg1 options:(id)arg2;	// IMP=0x00000000008cb3fc
- (void)_notifyPrimaryResidentAboutFaceMisclassificationForFaceCropData:(id)arg1 personUUID:(id)arg2 personManagerUUID:(id)arg3;	// IMP=0x00000000008cae9d
- (id)_handleFaceMisclassificationForFaceCropURL:(id)arg1 personUUID:(id)arg2 personManagerUUID:(id)arg3 significantEventModel:(id)arg4;	// IMP=0x00000000008ca981
- (void)_notifyForChangedSignificantEventModel:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x00000000008ca6ff
- (void)_handleChangedFaceClassificationModel:(id)arg1;	// IMP=0x00000000008ca4a0
- (void)_handleChangedSignificantEventNotificationModel:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x00000000008ca2a0
- (void)_handleChangedClipModel:(id)arg1 wasCreated:(_Bool)arg2 mirrorOutputFuture:(id)arg3;	// IMP=0x00000000008c9dce
- (void)_fetchAssetContextForMessage:(id)arg1 propertyName:(id)arg2;	// IMP=0x00000000008c99cb
- (void)_notifyTransportsOfUpdatedSignificantEvents:(id)arg1 removedSignificantEventUUIDs:(id)arg2;	// IMP=0x00000000008c9375
- (void)_notifyTransportsOfUpdatedClips:(id)arg1 removedClipUUIDs:(id)arg2;	// IMP=0x00000000008c8d1f
- (void)_cleanUpExpiredClips;	// IMP=0x00000000008c89c3
- (void)_cleanUpIncompleteClipsForInitialStartup:(_Bool)arg1;	// IMP=0x00000000008c8581
- (void)_cleanUpClipsForInitialStartup:(_Bool)arg1;	// IMP=0x00000000008c84d1
- (id)_performCloudPull;	// IMP=0x00000000008c820f
- (id)_fetchFaceCropURLForSignificantEventModel:(id)arg1;	// IMP=0x00000000008c7eda
- (id)_fetchHeroFrameURLForSignificantEventModel:(id)arg1;	// IMP=0x00000000008c7a41
- (id)_fetchCanonicalHeroFrameURLForClipModel:(id)arg1;	// IMP=0x00000000008c7523
- (_Bool)_fetchClipsWithDateInterval:(id)arg1 quality:(long long)arg2 isAscending:(_Bool)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00000000008c7037
- (_Bool)_fetchSignificantEventsWithDateInterval:(id)arg1 isAscending:(_Bool)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000000008c6d14
- (id)_faceClassificationsForSignificantEventWithUUID:(id)arg1;	// IMP=0x00000000008c6aec
- (id)_significantEventsWithUUIDs:(id)arg1;	// IMP=0x00000000008c6a5c
- (id)_significantEventFromSignificantEventModel:(id)arg1;	// IMP=0x00000000008c6943
- (id)_significantEventModelsForClipWithUUID:(id)arg1;	// IMP=0x00000000008c6731
- (id)_significantEventModelsWithUUIDs:(id)arg1;	// IMP=0x00000000008c6310
- (id)home;	// IMP=0x00000000008c62c0
- (id)significantEventsForClipContainingDate:(id)arg1;	// IMP=0x00000000008c5daa
- (id)performCloudPull;	// IMP=0x00000000008c5cdf
- (void)cleanUpClips;	// IMP=0x00000000008c5c8a
- (id)remove;	// IMP=0x00000000008c5b3e
- (id)fetchHeroFrameURLForSignificantEventWithUUID:(id)arg1;	// IMP=0x00000000008c588e
- (id)heroFrameURLForSignificantEventWithUUID:(id)arg1;	// IMP=0x00000000008c561e
- (void)configure;	// IMP=0x00000000008c4b51
@property(readonly, copy) NSDictionary *stateDump;
@property(readonly) _Bool hasStartedUpCloudZone;
- (id)significantEventsWithDateInterval:(id)arg1;	// IMP=0x00000000008c4745
- (id)significantEventsForClipWithUUID:(id)arg1;	// IMP=0x00000000008c46b5
@property(readonly, copy) NSString *zoneName;
- (id)initWithZoneManager:(id)arg1 quotaManager:(id)arg2 faceClassificationResolver:(id)arg3 clientConnectionsTimer:(id)arg4 messageDispatcher:(id)arg5 workQueue:(id)arg6 cameraProfileUUID:(id)arg7 fileManager:(id)arg8 featuresDataSource:(id)arg9;	// IMP=0x00000000008c4239
- (id)initWithHome:(id)arg1 zoneName:(id)arg2 messageDispatcher:(id)arg3 workQueue:(id)arg4 cameraProfileUUID:(id)arg5;	// IMP=0x00000000008c3fa2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

