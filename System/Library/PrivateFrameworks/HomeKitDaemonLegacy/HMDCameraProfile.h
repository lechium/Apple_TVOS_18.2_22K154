//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCameraClipManager, HMDCameraClipUserNotificationCenter, HMDCameraProfileSettingsManager, HMDCameraRecordingManager, HMDCameraRecordingReachabilityEventManager, HMDCameraSnapshotManager, HMDCameraStreamSnapshotHandler, HMDHAPAccessory, HMDPredicateUtilities, HMDService, HMFNetMonitor, HMFTimer, NSDictionary, NSMutableArray, NSNotificationCenter, NSSet, NSString, _HMCameraUserSettings;

__attribute__((visibility("hidden")))
@interface HMDCameraProfile
{
    _Bool _microphonePresent;	// 16 = 0x10
    _Bool _speakerPresent;	// 17 = 0x11
    HMDCameraClipManager *_clipManager;	// 24 = 0x18
    HMDService *_recordingManagementService;	// 32 = 0x20
    HMDHAPAccessory *_hapAccessory;	// 40 = 0x28
    NSSet *_cameraStreamManagers;	// 48 = 0x30
    HMDCameraSnapshotManager *_snapshotManager;	// 56 = 0x38
    HMDCameraStreamSnapshotHandler *_streamSnapshotHandler;	// 64 = 0x40
    NSMutableArray *_settingProactiveReaders;	// 72 = 0x48
    HMFNetMonitor *_networkMonitor;	// 80 = 0x50
    HMDCameraProfileSettingsManager *_cameraSettingsManager;	// 88 = 0x58
    HMDCameraRecordingReachabilityEventManager *_reachabilityEventManager;	// 96 = 0x60
    HMDCameraClipUserNotificationCenter *_clipUserNotificationCenter;	// 104 = 0x68
    NSNotificationCenter *_notificationCenter;	// 112 = 0x70
    HMFTimer *_recordingEventsCleanupTimer;	// 120 = 0x78
    HMDPredicateUtilities *_predicateUtilities;	// 128 = 0x80
    HMDCameraRecordingManager *_cameraRecordingManager;	// 136 = 0x88
    CDUnknownBlockType _recordingEventsCleanupTimerFactory;	// 144 = 0x90
    CDUnknownBlockType _recordingManagerFactory;	// 152 = 0x98
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000009714e0
+ (id)logCategory;	// IMP=0x00100000009714b0
+ (void)setBulletinBoard:(id)arg1;	// IMP=0x001000000097149c
+ (id)bulletinBoard;	// IMP=0x0010000000971459
- (void).cxx_destruct;	// IMP=0x0000000000970abc
@property(copy) CDUnknownBlockType recordingManagerFactory; // @synthesize recordingManagerFactory=_recordingManagerFactory;
@property(copy) CDUnknownBlockType recordingEventsCleanupTimerFactory; // @synthesize recordingEventsCleanupTimerFactory=_recordingEventsCleanupTimerFactory;
@property(retain) HMDCameraRecordingManager *cameraRecordingManager; // @synthesize cameraRecordingManager=_cameraRecordingManager;
@property(retain) HMDPredicateUtilities *predicateUtilities; // @synthesize predicateUtilities=_predicateUtilities;
@property(retain) HMFTimer *recordingEventsCleanupTimer; // @synthesize recordingEventsCleanupTimer=_recordingEventsCleanupTimer;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) HMDCameraClipUserNotificationCenter *clipUserNotificationCenter; // @synthesize clipUserNotificationCenter=_clipUserNotificationCenter;
@property(readonly) HMDCameraRecordingReachabilityEventManager *reachabilityEventManager; // @synthesize reachabilityEventManager=_reachabilityEventManager;
@property(readonly) HMDCameraProfileSettingsManager *cameraSettingsManager; // @synthesize cameraSettingsManager=_cameraSettingsManager;
@property(readonly) HMFNetMonitor *networkMonitor; // @synthesize networkMonitor=_networkMonitor;
@property(readonly) NSMutableArray *settingProactiveReaders; // @synthesize settingProactiveReaders=_settingProactiveReaders;
@property(readonly) HMDCameraStreamSnapshotHandler *streamSnapshotHandler; // @synthesize streamSnapshotHandler=_streamSnapshotHandler;
@property(readonly) HMDCameraSnapshotManager *snapshotManager; // @synthesize snapshotManager=_snapshotManager;
@property(readonly) NSSet *cameraStreamManagers; // @synthesize cameraStreamManagers=_cameraStreamManagers;
@property(readonly) __weak HMDHAPAccessory *hapAccessory; // @synthesize hapAccessory=_hapAccessory;
@property(readonly) HMDService *recordingManagementService; // @synthesize recordingManagementService=_recordingManagementService;
@property(readonly) HMDCameraClipManager *clipManager; // @synthesize clipManager=_clipManager;
@property(readonly, nonatomic, getter=isSpeakerPresent) _Bool speakerPresent; // @synthesize speakerPresent=_speakerPresent;
@property(readonly, nonatomic, getter=isMicrophonePresent) _Bool microphonePresent; // @synthesize microphonePresent=_microphonePresent;
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000097071b
- (void)networkMonitorIsUnreachable:(id)arg1;	// IMP=0x0000000000970663
- (void)networkMonitorIsReachable:(id)arg1;	// IMP=0x00000000009705ab
- (void)clipManagerDidEncounterDisabledCloudStorage:(id)arg1;	// IMP=0x0000000000970537
- (void)clipManagerDidDisableCloudStorage:(id)arg1;	// IMP=0x00000000009704c3
- (void)clipManagerDidStop:(id)arg1;	// IMP=0x00000000009703b8
- (void)clipManagerDidStartUpCloudZone:(id)arg1;	// IMP=0x0000000000970320
- (void)clipManagerDidStart:(id)arg1;	// IMP=0x0000000000970182
- (void)clipManager:(id)arg1 didDeleteClipWithUUID:(id)arg2;	// IMP=0x00000000009700ea
- (void)clipManager:(id)arg1 didUpdateSignificantEvent:(id)arg2 withHomePresence:(id)arg3;	// IMP=0x000000000096fff0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000096fed3
- (void)handleResidentsChangedNotification:(id)arg1;	// IMP=0x000000000096fe62
- (void)handleCameraProfileSettingsDidChangeNotification:(id)arg1;	// IMP=0x000000000096fd74
@property(readonly) _HMCameraUserSettings *currentSettings;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000096fb36
- (void)cameraSettingProactiveReaderDidCompleteRead:(id)arg1;	// IMP=0x000000000096fa9e
- (void)_handleStreamControlRequest:(id)arg1;	// IMP=0x000000000096f2d7
- (void)_handleNegotiateStreamRequest:(id)arg1;	// IMP=0x000000000096e8dc
- (void)_postLocalNotificationForUpdatedSignificantEvent:(id)arg1;	// IMP=0x000000000096e8d6
- (void)_postNotificationForUpdatedSignificantEvent:(id)arg1 homePresence:(id)arg2;	// IMP=0x000000000096e758
- (_Bool)_shouldNotifyForSignificantEvent:(id)arg1 homePresence:(id)arg2;	// IMP=0x000000000096de93
- (_Bool)_areFaceClassificationsSuppressedForSignificantEvent:(id)arg1;	// IMP=0x000000000096dc32
- (void)registerForMessages;	// IMP=0x000000000096d193
- (void)_setControlSupport;	// IMP=0x000000000096cf5a
- (id)dumpState;	// IMP=0x000000000096ce56
- (void)dealloc;	// IMP=0x000000000096cde8
- (void)unconfigure;	// IMP=0x000000000096cc7a
- (void)removeCloudData;	// IMP=0x000000000096cbe8
@property(readonly, copy) NSString *description;
- (void)_setUpBulletinNotificationManagerObserver;	// IMP=0x000000000096caf9
- (void)_createCameraRecordingManager;	// IMP=0x000000000096c6ae
- (void)tearDownWithReplacementCameraProfile:(id)arg1;	// IMP=0x000000000096c4e5
- (void)setUp;	// IMP=0x000000000096bf9b
@property(readonly, nonatomic, getter=isCameraRecordingFeatureSupported) _Bool supportsCameraRecordingFeature;
- (id)initWithAccessory:(id)arg1 services:(id)arg2 recordingManagementService:(id)arg3 msgDispatcher:(id)arg4 workQueue:(id)arg5 home:(id)arg6 settingsManager:(id)arg7 uniqueIdentifier:(id)arg8 clipManager:(id)arg9 clipUserNotificationCenter:(id)arg10 reachabilityEventManager:(id)arg11 networkMonitor:(id)arg12 streamSnapshotHandler:(id)arg13 snapshotManager:(id)arg14 cameraStreamManagers:(id)arg15 notificationCenter:(id)arg16;	// IMP=0x000000000096bae6
- (id)initWithAccessory:(id)arg1 services:(id)arg2 msgDispatcher:(id)arg3 workQueue:(id)arg4 home:(id)arg5 settingsManager:(id)arg6;	// IMP=0x000000000096aea4
@property(readonly, copy) NSDictionary *assistantObject;
@property(readonly, copy) NSString *urlString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

