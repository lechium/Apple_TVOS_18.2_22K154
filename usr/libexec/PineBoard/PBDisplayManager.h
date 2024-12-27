//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSHashTable, NSMutableArray, NSMutableDictionary, NSNumber, NSSet, NSString, NSUserDefaults, PBBulletinService, PBCableSignalInfo, PBMultiLatch, PBSDisplayMode;
@protocol BSInvalidatable, OS_dispatch_queue, OS_dispatch_source;

@interface PBDisplayManager : NSObject
{
    _Bool _filteredUsingdPineBoardPolicy;	// 8 = 0x8
    _Bool _canHandleHighBandwidthModes;	// 9 = 0x9
    _Bool _shouldModeSwitchForDynamicRange;	// 10 = 0xa
    _Bool _shouldModeSwitchForFrameRate;	// 11 = 0xb
    _Bool _atmosEnabled;	// 12 = 0xc
    _Bool _detectedPoorCableConnection;	// 13 = 0xd
    _Bool _deemed4KCapable;	// 14 = 0xe
    _Bool _usesDolbyLowLatency;	// 15 = 0xf
    double _baseCableCheckTimeInterval;	// 16 = 0x10
    NSArray *_blackScreenRecoveryDisplayModes;	// 24 = 0x18
    id <BSInvalidatable> _stateCaptureHandle;	// 32 = 0x20
    NSMutableDictionary *_nextEstablishModePerDisplays;	// 40 = 0x28
    NSHashTable *_stateObservers;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_reloadStateSource;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_notifyClientsSource;	// 64 = 0x40
    NSNumber *_displayConnectionToNotify;	// 72 = 0x48
    PBBulletinService *_bulletinService;	// 80 = 0x50
    PBMultiLatch *_wakeProgressLatch;	// 88 = 0x58
    NSObject<OS_dispatch_source> *_displayIDStabilizer;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_displayUpdateQueue;	// 104 = 0x68
    double _localeRefreshRate;	// 112 = 0x70
    NSArray *_sortedDisplayModes;	// 120 = 0x78
    PBSDisplayMode *_currentDisplayMode;	// 128 = 0x80
    PBSDisplayMode *_fallbackDisplayMode;	// 136 = 0x88
    PBSDisplayMode *_userSelectedDisplayMode;	// 144 = 0x90
    NSSet *_seenDisplayIDs;	// 152 = 0x98
    NSString *_currentDisplayID;	// 160 = 0xa0
    long long _displayConnection;	// 168 = 0xa8
    long long _lastCablePollStatus;	// 176 = 0xb0
    NSDictionary *_audioLatencies;	// 184 = 0xb8
    long long _eARCStatus;	// 192 = 0xc0
    double _userPreferredRefreshRate;	// 200 = 0xc8
    NSSet *_encodedPromotedDisplayModes;	// 208 = 0xd0
    NSNumber *_presentedDisplayAssistantKind;	// 216 = 0xd8
    NSUserDefaults *_defaults;	// 224 = 0xe0
    NSDictionary *_memoryStore;	// 232 = 0xe8
    NSString *_currentDisplayIdentifier;	// 240 = 0xf0
    NSObject<OS_dispatch_source> *_cableCheckTimer;	// 248 = 0xf8
    PBCableSignalInfo *_lastCableErrorInfo;	// 256 = 0x100
    NSMutableArray *_matchContentRequestedModes;	// 264 = 0x108
    struct CGSize _softwareDisplaySize;	// 272 = 0x110
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0020000000259a17
+ (unsigned long long)migrateWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x001000000025967a
+ (unsigned long long)migrateDisplayModes:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000258cac
+ (unsigned long long)migratePreferenceKeyToDisplayIdentifier:(id)arg1;	// IMP=0x0010000000258931
+ (void)reevaluateAtmosCapabilities;	// IMP=0x0010000000251e6c
+ (id)sharedInstanceIfExists;	// IMP=0x0010000000251e5a
+ (id)sharedInstance;	// IMP=0x0010000000251dbf
+ (id)dependencyDescription;	// IMP=0x0010000000251c70
+ (_Bool)shouldAllowModeSwitchForDynamicFrameRate;	// IMP=0x0010000000099715
+ (_Bool)shouldAllowModeSwitchForDynamicRange;	// IMP=0x001000000009967e
+ (void)enumerateMutableDisplayPreferencesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001455a3
- (void).cxx_destruct;	// IMP=0x002000000025a6c8
@property(retain, nonatomic) NSMutableArray *matchContentRequestedModes; // @synthesize matchContentRequestedModes=_matchContentRequestedModes;
@property(copy, nonatomic) PBCableSignalInfo *lastCableErrorInfo; // @synthesize lastCableErrorInfo=_lastCableErrorInfo;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *cableCheckTimer; // @synthesize cableCheckTimer=_cableCheckTimer;
@property(copy, nonatomic) NSString *currentDisplayIdentifier; // @synthesize currentDisplayIdentifier=_currentDisplayIdentifier;
@property(retain, nonatomic) NSDictionary *memoryStore; // @synthesize memoryStore=_memoryStore;
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
@property(readonly, nonatomic) _Bool usesDolbyLowLatency; // @synthesize usesDolbyLowLatency=_usesDolbyLowLatency;
@property(retain, nonatomic) NSNumber *presentedDisplayAssistantKind; // @synthesize presentedDisplayAssistantKind=_presentedDisplayAssistantKind;
@property(nonatomic) _Bool deemed4KCapable; // @synthesize deemed4KCapable=_deemed4KCapable;
@property(copy, nonatomic) NSSet *encodedPromotedDisplayModes; // @synthesize encodedPromotedDisplayModes=_encodedPromotedDisplayModes;
@property(nonatomic) double userPreferredRefreshRate; // @synthesize userPreferredRefreshRate=_userPreferredRefreshRate;
@property(nonatomic) struct CGSize softwareDisplaySize; // @synthesize softwareDisplaySize=_softwareDisplaySize;
@property(nonatomic) long long eARCStatus; // @synthesize eARCStatus=_eARCStatus;
@property(retain, nonatomic) NSDictionary *audioLatencies; // @synthesize audioLatencies=_audioLatencies;
@property(nonatomic) long long lastCablePollStatus; // @synthesize lastCablePollStatus=_lastCablePollStatus;
@property(nonatomic) _Bool detectedPoorCableConnection; // @synthesize detectedPoorCableConnection=_detectedPoorCableConnection;
@property(nonatomic) long long displayConnection; // @synthesize displayConnection=_displayConnection;
@property(nonatomic) _Bool atmosEnabled; // @synthesize atmosEnabled=_atmosEnabled;
@property(nonatomic) _Bool shouldModeSwitchForFrameRate; // @synthesize shouldModeSwitchForFrameRate=_shouldModeSwitchForFrameRate;
@property(nonatomic) _Bool shouldModeSwitchForDynamicRange; // @synthesize shouldModeSwitchForDynamicRange=_shouldModeSwitchForDynamicRange;
@property(nonatomic) _Bool canHandleHighBandwidthModes; // @synthesize canHandleHighBandwidthModes=_canHandleHighBandwidthModes;
@property(copy, nonatomic) NSString *currentDisplayID; // @synthesize currentDisplayID=_currentDisplayID;
@property(copy, nonatomic) NSSet *seenDisplayIDs; // @synthesize seenDisplayIDs=_seenDisplayIDs;
@property(copy, nonatomic) PBSDisplayMode *userSelectedDisplayMode; // @synthesize userSelectedDisplayMode=_userSelectedDisplayMode;
@property(copy, nonatomic) PBSDisplayMode *fallbackDisplayMode; // @synthesize fallbackDisplayMode=_fallbackDisplayMode;
@property(copy, nonatomic) PBSDisplayMode *currentDisplayMode; // @synthesize currentDisplayMode=_currentDisplayMode;
@property(copy, nonatomic) NSArray *sortedDisplayModes; // @synthesize sortedDisplayModes=_sortedDisplayModes;
@property(nonatomic) double localeRefreshRate; // @synthesize localeRefreshRate=_localeRefreshRate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *displayUpdateQueue; // @synthesize displayUpdateQueue=_displayUpdateQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *displayIDStabilizer; // @synthesize displayIDStabilizer=_displayIDStabilizer;
@property(readonly, nonatomic) PBMultiLatch *wakeProgressLatch; // @synthesize wakeProgressLatch=_wakeProgressLatch;
@property(retain, nonatomic) PBBulletinService *bulletinService; // @synthesize bulletinService=_bulletinService;
@property(retain, nonatomic) NSNumber *displayConnectionToNotify; // @synthesize displayConnectionToNotify=_displayConnectionToNotify;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *notifyClientsSource; // @synthesize notifyClientsSource=_notifyClientsSource;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *reloadStateSource; // @synthesize reloadStateSource=_reloadStateSource;
@property(retain, nonatomic) NSHashTable *stateObservers; // @synthesize stateObservers=_stateObservers;
@property(retain, nonatomic) NSMutableDictionary *nextEstablishModePerDisplays; // @synthesize nextEstablishModePerDisplays=_nextEstablishModePerDisplays;
@property(nonatomic) _Bool filteredUsingdPineBoardPolicy; // @synthesize filteredUsingdPineBoardPolicy=_filteredUsingdPineBoardPolicy;
@property(readonly, nonatomic) id <BSInvalidatable> stateCaptureHandle; // @synthesize stateCaptureHandle=_stateCaptureHandle;
@property(copy, nonatomic) NSArray *blackScreenRecoveryDisplayModes; // @synthesize blackScreenRecoveryDisplayModes=_blackScreenRecoveryDisplayModes;
@property(nonatomic) double baseCableCheckTimeInterval; // @synthesize baseCableCheckTimeInterval=_baseCableCheckTimeInterval;
- (void)_mediaServicesWereReset:(id)arg1;	// IMP=0x001000000025a397
- (id)stateDumpBuilder;	// IMP=0x001000000025a323
- (void)sceneManager:(id)arg1 didChangeCurrentApplicationFromSceneHandle:(id)arg2 toSceneHandle:(id)arg3;	// IMP=0x001000000025a2d8
- (void)presentationElementFocusCoordinator:(id)arg1 didUpdateToActiveLayoutLevel:(long long)arg2 fromLevel:(long long)arg3;	// IMP=0x0010000000259f42
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000259c66
- (void)setDisplayStabilizationTimer:(double)arg1;	// IMP=0x0010000000259c2a
- (void)removeStateObserver:(id)arg1;	// IMP=0x00100000002599aa
- (void)addStateObserver:(id)arg1;	// IMP=0x001000000025993d
- (void)notifyStateChangeForDisplayConnection:(long long)arg1;	// IMP=0x001000000025977d
- (void)displayConnectionUpdated:(long long)arg1;	// IMP=0x001000000025974e
- (id)audioLatencyForDisplayMode:(id)arg1;	// IMP=0x0010000000258913
- (void)setAudioLatency:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000258854
- (_Bool)didCompleteDisplayAssistantForCurrentDisplay;	// IMP=0x0010000000258841
- (void)displayAssistantDidCompleteForKind:(id)arg1 fromUserInteraction:(_Bool)arg2;	// IMP=0x0010000000258716
- (void)removeCableCheckHistory;	// IMP=0x0010000000258703
- (void)forgetDisplaysForDisplayAssistant;	// IMP=0x00100000002586f0
- (void)displayAssistantDidCompleteForKind:(id)arg1;	// IMP=0x00100000002586db
- (void)displayAssistantDidStartForKind:(id)arg1;	// IMP=0x00100000002586c8
- (void)presentDisplayAssistantWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000025852f
- (void)handleRegionChangeWithNewCountryCode:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000025851c
- (void)wakeDisplayWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000258502
- (void)sleepDisplayWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000258408
- (void)completeDisplayTransition:(long long)arg1 error:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000002580c8
- (void)_resetSettingsForCurrentDisplay;	// IMP=0x0010000000257eda
- (void)_recalculateDefaultDisplayMode:(CDUnknownBlockType)arg1;	// IMP=0x001000000025750b
- (id)_recalculatedBlackScreenRecoveryDisplayModes;	// IMP=0x0010000000257013
- (id)_recalculatedDisplayModesFromCoreAnimationModes:(id)arg1;	// IMP=0x0010000000256a52
- (void)_applyAudioLatencyIfNeeded;	// IMP=0x001000000025675f
- (void)_completeReloadingState;	// IMP=0x00100000002563cc
- (void)reloadState;	// IMP=0x001000000025548c
- (void)updateDisplayManagerWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000254392
- (void)updateCurrentCADisplayFromDisplayMode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000253fde
- (void)enableAtmos:(_Bool)arg1;	// IMP=0x0010000000253fcb
- (void)updateSoftwareDisplaySize:(struct CGSize)arg1;	// IMP=0x0010000000253f8b
- (void)enableModeSwitchingForFrameRate:(_Bool)arg1;	// IMP=0x0010000000253f78
- (void)enableModeSwitchingForDynamicRange:(_Bool)arg1;	// IMP=0x0010000000253f65
- (id)findMatchingCAMode:(id)arg1;	// IMP=0x0010000000253c5d
- (id)findMatchingLocaleMode:(id)arg1 enforceVirtualCheck:(_Bool)arg2;	// IMP=0x0010000000253c3d
- (id)findFirstMode:(CDUnknownBlockType)arg1;	// IMP=0x0010000000253c1f
- (id)filterModes:(CDUnknownBlockType)arg1;	// IMP=0x0010000000253c01
- (void)fetchCurrentDisplayStateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000253b9c
@property(readonly, nonatomic) NSDictionary *serialisedState;
@property(readonly, nonatomic) _Bool isPresentingDisplayAssistant;
- (_Bool)isAdvertisingHDMI2;	// IMP=0x0010000000253554
- (id)promotedVirtualDisplayModes;	// IMP=0x001000000025335e
- (void)dealloc;	// IMP=0x00100000002527cd
- (id)_init;	// IMP=0x0010000000251f35
- (id)init;	// IMP=0x0010000000251ed8
- (double)recalculatedCurrentLocaleRefreshRate;	// IMP=0x001000000006acc4
- (void)updateDisplayForNewRegionWithCountryCode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006a9e9
- (_Bool)_isModeSwitchInProgress;	// IMP=0x001000000009b401
- (void)_notifyDisplayModeChange:(_Bool)arg1;	// IMP=0x001000000009b247
- (void)_notifyDisplayModeChangeDidFinish;	// IMP=0x001000000009b232
- (void)_considerDisplayModeSwitchFinished:(id)arg1;	// IMP=0x001000000009b1e9
- (long long)reportingValueForMatchFrameRate;	// IMP=0x001000000009b1cf
- (long long)reportingValueForMatchDynamicRange;	// IMP=0x001000000009b1b5
- (id)_bestSDRDisplayMode;	// IMP=0x001000000009aea4
- (_Bool)_shouldModeSwitchForBundleIdentifier:(id)arg1;	// IMP=0x001000000009ac8f
- (void)_updateDisplayManagerWithDisplayMode:(id)arg1;	// IMP=0x001000000009aa8a
- (id)_findDisplayModeFromPredicate:(id)arg1;	// IMP=0x001000000009a769
- (id)_bestDisplayModeForDynamicRange:(long long)arg1 frameRate:(double)arg2;	// IMP=0x001000000009a5dc
- (id)_fallbackPredicatesForDynamicRange:(long long)arg1 frameRates:(id)arg2;	// IMP=0x001000000009a362
- (id)_displayModePredicatesForDynamicRange:(long long)arg1 frameRate:(double)arg2;	// IMP=0x001000000009a045
- (id)preferredDisplayModeForBundleIdentifier:(id)arg1;	// IMP=0x0010000000099d0a
- (void)performModeSwitchForDisplayConfigurationRequest:(id)arg1;	// IMP=0x00100000000999c7
- (void)performModeSwitchForBundleIdentifierIfNeeded:(id)arg1;	// IMP=0x0010000000099853
- (_Bool)isModeSwitchNeededForTransitionToBundleIdentifier:(id)arg1;	// IMP=0x00100000000997ac
- (void)removeNativeAndPerformanceObservers;	// IMP=0x001000000009962a
- (void)addNativeAndPerformanceObservers;	// IMP=0x0010000000099465
- (void)runSleepWakeModeSetCycleToMode:(id)arg1 oldMode:(id)arg2 forDisplayIdentifier:(id)arg3 replyBlock:(CDUnknownBlockType)arg4;	// IMP=0x001000000013254f
- (void)_saveDisplayMode:(id)arg1 forDisplayID:(id)arg2;	// IMP=0x001000000014810c
- (id)_displayModeForDisplayID:(id)arg1;	// IMP=0x001000000014801e
- (void)removeDisplayModeForKey:(id)arg1 persisted:(_Bool)arg2;	// IMP=0x0010000000147f75
- (id)_readDisplayModeForKey:(id)arg1 persisted:(_Bool)arg2;	// IMP=0x0010000000147e18
- (void)_saveDisplayMode:(id)arg1 forKey:(id)arg2 persisted:(_Bool)arg3;	// IMP=0x0010000000147d29
- (void)_saveCurrentResolutionsPreferences:(id)arg1 toPersistentStore:(_Bool)arg2 forDisplayID:(id)arg3;	// IMP=0x0010000000147a76
- (void)_saveCurrentResolutionsPreferences:(id)arg1 toPersistentStore:(_Bool)arg2;	// IMP=0x0010000000147a00
- (id)_currentResolutionsPreferencesFromPersistentStore:(_Bool)arg1 forDisplayID:(id)arg2;	// IMP=0x00100000001476df
- (id)_currentResolutionsPreferencesFromPersistentStore:(_Bool)arg1;	// IMP=0x001000000014767c
- (id)_locateLikelyOriginalDisplayPrefsForNewIdentifier:(id)arg1 fromSet:(id)arg2;	// IMP=0x001000000014749c
- (double)readCableAlertIntervalOverride;	// IMP=0x0010000000147445
- (int)readCableScoreOverride;	// IMP=0x00100000001473cb
- (double)readCableErrorPollingIntervalOverride;	// IMP=0x0010000000147374
- (double)readCableHistoryWindowOverride;	// IMP=0x001000000014731d
- (_Bool)_debugAlwaysSaveModeEnabled;	// IMP=0x00100000001472d2
- (_Bool)_shouldPreferDolbyVisionLowLatency;	// IMP=0x0010000000147287
- (void)resetCableCheckCumulativeTime;	// IMP=0x0010000000147242
- (double)readCableCheckCumulativeTime;	// IMP=0x00100000001471eb
- (void)saveCableCheckCumulativeTime:(double)arg1;	// IMP=0x0010000000147194
- (_Bool)readDetectedPoorCableConnection;	// IMP=0x0010000000147149
- (void)saveDetectedPoorCableConnection:(_Bool)arg1;	// IMP=0x00100000001470f7
- (void)removeLastCableErrorInfo;	// IMP=0x00100000001470b2
- (id)readLastCableErrorInfo;	// IMP=0x0010000000146f8e
- (void)saveLastCableErrorInfo:(id)arg1;	// IMP=0x0010000000146e72
- (id)readAudioLatencies;	// IMP=0x0010000000146dbb
- (void)adjustAtmos:(id)arg1;	// IMP=0x0010000000146bfd
- (void)removeAudioLatencies;	// IMP=0x0010000000146b49
- (void)saveNewAudioLatency:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000146a0f
- (id)readEncodedPromotedDisplayModes;	// IMP=0x0010000000146918
- (void)removePromotedDisplayModes;	// IMP=0x0010000000146864
- (void)saveNewPromotedDisplayMode:(id)arg1;	// IMP=0x0010000000146661
- (void)removeAllCompleteDisplayAssistants;	// IMP=0x00100000001465ca
- (_Bool)readDidCompleteDisplayAssistant;	// IMP=0x001000000014652d
- (void)saveDidCompleteDisplayAssistant:(_Bool)arg1;	// IMP=0x0010000000146473
- (double)readUserPreferredRefreshRate;	// IMP=0x00100000001463ca
- (void)saveUserPreferredRefreshRate:(double)arg1;	// IMP=0x0010000000146349
- (struct CGSize)readSoftwareDisplaySize;	// IMP=0x0010000000146261
- (void)saveSoftwareDisplaySize:(struct CGSize)arg1;	// IMP=0x0010000000146185
- (_Bool)readAtmosEnabled;	// IMP=0x00100000001460ea
- (_Bool)readShouldModeSwitchForFrameRate;	// IMP=0x001000000014604d
- (void)saveAtmosEnabled:(_Bool)arg1;	// IMP=0x0010000000145f93
- (void)saveShouldModeSwitchForFrameRate:(_Bool)arg1;	// IMP=0x0010000000145ed9
- (_Bool)readShouldModeSwitchForDynamicRange;	// IMP=0x0010000000145e3c
- (void)saveShouldModeSwitchForDynamicRange:(_Bool)arg1;	// IMP=0x0010000000145d82
- (_Bool)readCanDoHighBandwidth;	// IMP=0x0010000000145ce5
- (void)saveCanHandleHighBandwidthModes:(_Bool)arg1;	// IMP=0x0010000000145c2b
- (id)readSeenDisplayIDs;	// IMP=0x0000000000145aff
- (void)saveCurrentDisplayID:(id)arg1;	// IMP=0x0010000000145a0e
- (void)removeUserSelectedDisplayMode;	// IMP=0x0010000000145986
- (id)readUserSelectedDisplayMode;	// IMP=0x00100000001458bb
- (void)saveUserSelectedDisplayMode:(id)arg1;	// IMP=0x00100000001457e9
- (double)_historyWindowInterval;	// IMP=0x001000000015f566
- (double)_pollingInterval;	// IMP=0x001000000015f4d2
- (void)_stopBackgroundMonitoring;	// IMP=0x001000000015f3a1
- (void)_startBackgroundMonitoringAndIgnoreFirstPoll:(_Bool)arg1;	// IMP=0x001000000015f39b
- (void)_resetTimer;	// IMP=0x001000000015f36e
- (void)registerModeSwitch;	// IMP=0x001000000015f35b
- (void)resetCableInfoHistory;	// IMP=0x001000000015f26a
- (void)_processCurrentCableInfo;	// IMP=0x001000000015f264
- (void)stopMonitoringCable;	// IMP=0x001000000015f25e
- (void)startMonitoringCable;	// IMP=0x001000000015f258

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

