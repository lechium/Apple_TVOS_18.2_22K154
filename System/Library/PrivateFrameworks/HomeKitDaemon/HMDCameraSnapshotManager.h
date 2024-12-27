//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraResidentMessageHandler, HMDCameraSnapshotMonitorEvents, HMDCameraStreamSnapshotHandler, HMDHAPAccessory, HMDSnapshotCacheRequestHandler, HMDSnapshotLocalSession, HMDSnapshotRequestHandler, HMDSnapshotSlotManager, HMFMessageDispatcher, HMFNetMonitor, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSString, NSUUID;
@protocol HMDCameraSnapshotManagerDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraSnapshotManager : HMFObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSUUID *_uniqueIdentifier;	// 16 = 0x10
    HMFMessageDispatcher *_msgDispatcher;	// 24 = 0x18
    HMDSnapshotLocalSession *_currentLocalSession;	// 32 = 0x20
    NSMutableDictionary *_currentRemoteSessions;	// 40 = 0x28
    HMDHAPAccessory *_accessory;	// 48 = 0x30
    NSString *_imageCacheDirectory;	// 56 = 0x38
    HMDCameraSnapshotMonitorEvents *_monitorServicesManager;	// 64 = 0x40
    HMDSnapshotRequestHandler *_snapshotRequestHandler;	// 72 = 0x48
    HMDSnapshotCacheRequestHandler *_snapshotCacheRequestHandler;	// 80 = 0x50
    HMDSnapshotSlotManager *_snapshotSlotManager;	// 88 = 0x58
    HMDCameraStreamSnapshotHandler *_streamSnapshotHandler;	// 96 = 0x60
    NSMutableArray *_pendingSnapshotRequestDuringStreamSetup;	// 104 = 0x68
    NSMutableArray *_pendingRemoteSnapshotRequestDuringStreamSetup;	// 112 = 0x70
    HMFNetMonitor *_networkMonitor;	// 120 = 0x78
    HMDCameraResidentMessageHandler *_residentMessageHandler;	// 128 = 0x80
    id <HMDCameraSnapshotManagerDataSource> _dataSource;	// 136 = 0x88
    NSString *_logIdentifier;	// 144 = 0x90
}

+ (id)logCategory;	// IMP=0x00100000009285a4
+ (void)cleanStaleSnapshotDirectoriesUsingCurrentAccessories:(id)arg1;	// IMP=0x0010000000928136
- (void).cxx_destruct;	// IMP=0x000000000092585e
@property(readonly, nonatomic) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)handleCameraSettingsDidChangeNotification:(id)arg1;	// IMP=0x00000000009257ba
- (void)streamSnapshotHandler:(id)arg1 didChangeStreamSetupInProgress:(_Bool)arg2;	// IMP=0x000000000092540f
- (void)streamSnapshotHandler:(id)arg1 didGetLastSnapshot:(id)arg2;	// IMP=0x000000000092525b
- (void)streamSnapshotHandler:(id)arg1 didGetNewSnapshot:(id)arg2;	// IMP=0x0000000000924fa8
- (void)snapshotRelayStream:(id)arg1 didCompleteSendImage:(id)arg2 sessionID:(id)arg3;	// IMP=0x0000000000924e64
- (void)snapshotRelayStream:(id)arg1 didStartCaptureImage:(id)arg2 sessionID:(id)arg3;	// IMP=0x0000000000924d20
- (void)snapshotStreamSender:(id)arg1 didCompleteSendImage:(id)arg2 sessionID:(id)arg3;	// IMP=0x0000000000924bdc
- (void)snapshotStreamSender:(id)arg1 didStartCaptureImage:(id)arg2 sessionID:(id)arg3;	// IMP=0x0000000000924a98
- (void)snapshotStreamReceiver:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4;	// IMP=0x000000000092493a
- (void)snapshotStreamReceiver:(id)arg1 didStartGettingImage:(id)arg2 sessionID:(id)arg3;	// IMP=0x0000000000924804
- (void)snapshotRelaySender:(id)arg1 didSaveSnapshotFile:(id)arg2 sessionID:(id)arg3;	// IMP=0x00000000009245ec
- (void)snapshotRelaySender:(id)arg1 didCompleteSendImage:(id)arg2 sessionID:(id)arg3;	// IMP=0x00000000009244a8
- (void)snapshotRelaySender:(id)arg1 didStartCaptureImage:(id)arg2 sessionID:(id)arg3;	// IMP=0x0000000000924364
- (void)snapshotRelayReceiver:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4;	// IMP=0x0000000000924206
- (void)snapshotRelayReceiver:(id)arg1 didStartGettingImage:(id)arg2 sessionID:(id)arg3;	// IMP=0x00000000009240d0
- (void)snapshotLocal:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4;	// IMP=0x0000000000923f72
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_handleTakeRemoteSnapshotFailureMessage:(id)arg1;	// IMP=0x00000000009239b9
- (void)_handleRemoteSnapshotReceivedMessage:(id)arg1;	// IMP=0x000000000092358c
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000923374
- (void)_handleTakeRemoteSnapshotMessage:(id)arg1;	// IMP=0x0000000000922349
- (void)_handleTakeSnapshotMessage:(id)arg1;	// IMP=0x000000000092149a
@property(readonly, copy) NSDictionary *encodedMostRecentSnapshot;
- (void)_handleCreateSnapshotFromBulletinContextMessage:(id)arg1;	// IMP=0x0000000000920e00
- (void)_handleReleaseSnapshotMessage:(id)arg1;	// IMP=0x0000000000920dda
- (void)_handleFillSnapshotSlotMessage:(id)arg1;	// IMP=0x0000000000920db4
- (void)handleAccessoryUnconfigured:(id)arg1;	// IMP=0x0000000000920d43
- (void)releaseSnapshotWithSlotIdentifier:(id)arg1;	// IMP=0x0000000000920c8b
- (void)takeSnapshot:(id)arg1;	// IMP=0x0000000000920bd3
- (void)registerForMessages;	// IMP=0x0000000000920502
- (void)dealloc;	// IMP=0x0000000000920471
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 uniqueIdentifier:(id)arg4 msgDispatcher:(id)arg5 networkMonitor:(id)arg6 logIdentifier:(id)arg7 imageCacheDirectory:(id)arg8 residentMessageHandler:(id)arg9 snapshotSlotManager:(id)arg10 dataSource:(id)arg11;	// IMP=0x0000000000920067
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 uniqueIdentifier:(id)arg4 msgDispatcher:(id)arg5 networkMonitor:(id)arg6;	// IMP=0x000000000091fdcf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

