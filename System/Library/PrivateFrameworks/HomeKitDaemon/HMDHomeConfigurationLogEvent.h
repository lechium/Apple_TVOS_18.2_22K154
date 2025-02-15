//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMHomeLogEvent.h>

@class NSArray, NSDictionary, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDHomeConfigurationLogEvent : HMMHomeLogEvent
{
    _Bool _ownerUser;	// 8 = 0x8
    _Bool _accessToHomeAllowed;	// 9 = 0x9
    _Bool _isResidentAvailable;	// 10 = 0xa
    _Bool _isAutomaticThirdPartyAccessorySoftwareUpdateEnabled;	// 11 = 0xb
    _Bool _primaryReportingDevice;	// 12 = 0xc
    _Bool _isCurrentDeviceResidentCapable;	// 13 = 0xd
    _Bool _isCurrentDeviceResidentEnabled;	// 14 = 0xe
    _Bool _isCurrentDevicePrimaryResident;	// 15 = 0xf
    _Bool _isCurrentDeviceLocalToHome;	// 16 = 0x10
    _Bool _isResidentFirstEnabled;	// 17 = 0x11
    _Bool _isResidentElectionV2Enabled;	// 18 = 0x12
    _Bool _networkProtectionEnabled;	// 19 = 0x13
    _Bool _isActivityHistoryEligible;	// 20 = 0x14
    _Bool _isActivityHistoryEnabled;	// 21 = 0x15
    _Bool _isSmokeAlarmEnabled;	// 22 = 0x16
    _Bool _isSiriPhraseOptionsHeySiriEnabled;	// 23 = 0x17
    _Bool _isSiriPhraseOptionsJustSiriEnabled;	// 24 = 0x18
    _Bool _isResidentSelectionEnabled;	// 25 = 0x19
    int _networkProtectionStatus;	// 28 = 0x1c
    unsigned int _databaseSize;	// 32 = 0x20
    unsigned int _metadataVersion;	// 36 = 0x24
    unsigned long long _homeIndex;	// 40 = 0x28
    unsigned long long _currentUserPrivilege;	// 48 = 0x30
    unsigned long long _homeCategoryBitMask;	// 56 = 0x38
    unsigned long long _appleMediaCategoryBitMask;	// 64 = 0x40
    unsigned long long _thirdPartyMediaCategoryBitMask;	// 72 = 0x48
    unsigned long long _numAccessories;	// 80 = 0x50
    unsigned long long _numCertifiedAccessories;	// 88 = 0x58
    unsigned long long _numBridgedAccessories;	// 96 = 0x60
    unsigned long long _numNotCertifiedAccessories;	// 104 = 0x68
    unsigned long long _numSmartHomeAccessories;	// 112 = 0x70
    unsigned long long _numThirdPartyMediaAccessories;	// 120 = 0x78
    unsigned long long _numAppleMediaAccessories;	// 128 = 0x80
    unsigned long long _numHAPAccessories;	// 136 = 0x88
    unsigned long long _numCHIPAccessories;	// 144 = 0x90
    unsigned long long _numHAPAccessoriesFirmwareUpdateEligible;	// 152 = 0x98
    unsigned long long _numCHIPAccessoriesFirmwareUpdateEligible;	// 160 = 0xa0
    unsigned long long _numIPAccessories;	// 168 = 0xa8
    unsigned long long _numBTAccessories;	// 176 = 0xb0
    unsigned long long _numBTOnlyAccessories;	// 184 = 0xb8
    unsigned long long _numThreadAccessories;	// 192 = 0xc0
    unsigned long long _numHAPIPAccessories;	// 200 = 0xc8
    unsigned long long _numHAPBTAccessories;	// 208 = 0xd0
    unsigned long long _numHAPBatteryServiceAccessories;	// 216 = 0xd8
    unsigned long long _numAppleAudioAccessories;	// 224 = 0xe0
    unsigned long long _numAppleTVAccessories;	// 232 = 0xe8
    unsigned long long _numAppleTV4K2ndGenAccessories;	// 240 = 0xf0
    unsigned long long _numTelevisionAccessories;	// 248 = 0xf8
    unsigned long long _numTelevisionSetTopBoxAccessories;	// 256 = 0x100
    unsigned long long _numTelevisionStreamingStickAccessories;	// 264 = 0x108
    unsigned long long _numHAPSpeakerServiceAccessories;	// 272 = 0x110
    unsigned long long _numPrimaryHAPSpeakerServiceAccessories;	// 280 = 0x118
    unsigned long long _numWholeHouseAudioAccessories;	// 288 = 0x120
    unsigned long long _numCapableSiriEndpointAccessories;	// 296 = 0x128
    unsigned long long _numEnabledSiriEndpointAccessories;	// 304 = 0x130
    unsigned long long _numAccessoriesWiFiPPSKCredential;	// 312 = 0x138
    unsigned long long _numAccessoriesNetworkProtectionUnprotected;	// 320 = 0x140
    unsigned long long _numAccessoriesNetworkProtectionAutoFullAccess;	// 328 = 0x148
    unsigned long long _numAccessoriesNetworkProtectionAutoProtectedMainLAN;	// 336 = 0x150
    unsigned long long _numAccessoriesNetworkProtectionAutoProtectedHomeKitLAN;	// 344 = 0x158
    unsigned long long _numAccessoriesNetworkProtectionFullAccess;	// 352 = 0x160
    unsigned long long _numAccessoriesNetworkProtectionHomeKitOnly;	// 360 = 0x168
    unsigned long long _numCameraAccessories;	// 368 = 0x170
    unsigned long long _numCameraAccessoriesSupportRecording;	// 376 = 0x178
    unsigned long long _numCameraAccessoriesRecordingEnabled;	// 384 = 0x180
    unsigned long long _numCameraAccessoriesReachabilityNotificationEnabled;	// 392 = 0x188
    unsigned long long _numCameraAccessoriesWithActivityZonesEnabled;	// 400 = 0x190
    unsigned long long _numLightProfilesWithNaturalLightingSupported;	// 408 = 0x198
    unsigned long long _numLightProfilesWithNaturalLightingEnabled;	// 416 = 0x1a0
    unsigned long long _numLightProfilesWithNaturalLightingUsed;	// 424 = 0x1a8
    unsigned long long _numMatterLightProfilesWithNaturalLightingSupported;	// 432 = 0x1b0
    unsigned long long _numMatterLightProfilesWithNaturalLightingEnabled;	// 440 = 0x1b8
    unsigned long long _numMatterLightProfilesWithNaturalLightingUsed;	// 448 = 0x1c0
    unsigned long long _numResidentsEnabled;	// 456 = 0x1c8
    unsigned long long _enabledResidentsDeviceCapabilities;	// 464 = 0x1d0
    unsigned long long _numServices;	// 472 = 0x1d8
    unsigned long long _numTriggers;	// 480 = 0x1e0
    unsigned long long _numActiveTriggers;	// 488 = 0x1e8
    unsigned long long _numEventTriggers;	// 496 = 0x1f0
    unsigned long long _numTimerTriggers;	// 504 = 0x1f8
    unsigned long long _numShortcuts;	// 512 = 0x200
    unsigned long long _numTargetControllers;	// 520 = 0x208
    unsigned long long _numCertifiedTargetControllers;	// 528 = 0x210
    unsigned long long _numBridgedTargetControllers;	// 536 = 0x218
    unsigned long long _numCertifiedBridgedTargetControllers;	// 544 = 0x220
    long long _numUsers;	// 552 = 0x228
    long long _numAdmins;	// 560 = 0x230
    long long _numRestrictedGuests;	// 568 = 0x238
    unsigned long long _userPrivilegeBitMask;	// 576 = 0x240
    unsigned long long _numConfiguredScenes;	// 584 = 0x248
    unsigned long long _numTriggerOwnedConfiguredScenes;	// 592 = 0x250
    unsigned long long _numScenes;	// 600 = 0x258
    unsigned long long _numRooms;	// 608 = 0x260
    unsigned long long _numZones;	// 616 = 0x268
    unsigned long long _numAccessoryServiceGroups;	// 624 = 0x270
    long long _homeCreationCohortWeek;	// 632 = 0x278
    long long _firstHAPAccessoryAddedCohortWeek;	// 640 = 0x280
    long long _numConfiguredWidgets;	// 648 = 0x288
    unsigned long long _numThreadAccessoryMinCapable;	// 656 = 0x290
    unsigned long long _numThreadAccessorySleepCapable;	// 664 = 0x298
    unsigned long long _numThreadAccessoryFullCapable;	// 672 = 0x2a0
    unsigned long long _numThreadAccessoryRouterCapable;	// 680 = 0x2a8
    unsigned long long _numThreadAccessoryBorderRouterCapable;	// 688 = 0x2b0
    unsigned long long _numThreadBorderRouters;	// 696 = 0x2b8
    NSArray *_multiUserSettings;	// 704 = 0x2c0
    NSArray *_eventTriggers;	// 712 = 0x2c8
    NSArray *_hapServices;	// 720 = 0x2d0
    long long _currentMediaAccessoryFallbackMediaUserType;	// 728 = 0x2d8
    unsigned long long _numHomePods;	// 736 = 0x2e0
    unsigned long long _numHomePodMinis;	// 744 = 0x2e8
    unsigned long long _numHomePod2ndGen;	// 752 = 0x2f0
    unsigned long long _numMediaSystems;	// 760 = 0x2f8
    unsigned long long _numHomePodStereoPairs;	// 768 = 0x300
    unsigned long long _numHomePodMiniStereoPairs;	// 776 = 0x308
    unsigned long long _numHomePod2ndGenStereoPairs;	// 784 = 0x310
    NSNumber *_numBSPs;	// 792 = 0x318
    unsigned long long _numWoLAccessories;	// 800 = 0x320
    unsigned long long _numHAPLocks;	// 808 = 0x328
    unsigned long long _numMatterLocks;	// 816 = 0x330
    unsigned long long _numLocksWithAccessCodeSupported;	// 824 = 0x338
    unsigned long long _numLocksWithWalletKeySupported;	// 832 = 0x340
    unsigned long long _ownerPerspectiveNumUsersWithAccessCode;	// 840 = 0x348
    unsigned long long _numAccessoriesWithWalletKeySupported;	// 848 = 0x350
    unsigned long long _residentElectionBitMask;	// 856 = 0x358
    unsigned long long _numACBAccessories;	// 864 = 0x360
    unsigned long long _residentSelectionMode;	// 872 = 0x368
    unsigned long long _numRVCs;	// 880 = 0x370
    NSString *_oldestTVOSVersionInHome;	// 888 = 0x378
    NSString *_oldestTVOSBuildInHome;	// 896 = 0x380
    NSString *_primaryResidentVersionInHome;	// 904 = 0x388
    NSString *_primaryResidentBuildInHome;	// 912 = 0x390
}

- (void).cxx_destruct;	// IMP=0x00000000006ed40d
@property(readonly, nonatomic) NSString *primaryResidentBuildInHome; // @synthesize primaryResidentBuildInHome=_primaryResidentBuildInHome;
@property(readonly, nonatomic) NSString *primaryResidentVersionInHome; // @synthesize primaryResidentVersionInHome=_primaryResidentVersionInHome;
@property(readonly, nonatomic) NSString *oldestTVOSBuildInHome; // @synthesize oldestTVOSBuildInHome=_oldestTVOSBuildInHome;
@property(readonly, nonatomic) NSString *oldestTVOSVersionInHome; // @synthesize oldestTVOSVersionInHome=_oldestTVOSVersionInHome;
@property(readonly, nonatomic) unsigned long long numRVCs; // @synthesize numRVCs=_numRVCs;
@property(readonly, nonatomic) unsigned long long residentSelectionMode; // @synthesize residentSelectionMode=_residentSelectionMode;
@property(readonly, nonatomic) _Bool isResidentSelectionEnabled; // @synthesize isResidentSelectionEnabled=_isResidentSelectionEnabled;
@property(readonly, nonatomic) unsigned long long numACBAccessories; // @synthesize numACBAccessories=_numACBAccessories;
@property(readonly) unsigned long long residentElectionBitMask; // @synthesize residentElectionBitMask=_residentElectionBitMask;
@property(readonly, nonatomic) _Bool isSiriPhraseOptionsJustSiriEnabled; // @synthesize isSiriPhraseOptionsJustSiriEnabled=_isSiriPhraseOptionsJustSiriEnabled;
@property(readonly, nonatomic) _Bool isSiriPhraseOptionsHeySiriEnabled; // @synthesize isSiriPhraseOptionsHeySiriEnabled=_isSiriPhraseOptionsHeySiriEnabled;
@property(readonly, nonatomic) _Bool isSmokeAlarmEnabled; // @synthesize isSmokeAlarmEnabled=_isSmokeAlarmEnabled;
@property(readonly, nonatomic) unsigned long long numAccessoriesWithWalletKeySupported; // @synthesize numAccessoriesWithWalletKeySupported=_numAccessoriesWithWalletKeySupported;
@property(readonly, nonatomic) unsigned long long ownerPerspectiveNumUsersWithAccessCode; // @synthesize ownerPerspectiveNumUsersWithAccessCode=_ownerPerspectiveNumUsersWithAccessCode;
@property(readonly, nonatomic) unsigned long long numLocksWithWalletKeySupported; // @synthesize numLocksWithWalletKeySupported=_numLocksWithWalletKeySupported;
@property(readonly, nonatomic) unsigned long long numLocksWithAccessCodeSupported; // @synthesize numLocksWithAccessCodeSupported=_numLocksWithAccessCodeSupported;
@property(readonly, nonatomic) unsigned long long numMatterLocks; // @synthesize numMatterLocks=_numMatterLocks;
@property(readonly, nonatomic) unsigned long long numHAPLocks; // @synthesize numHAPLocks=_numHAPLocks;
@property unsigned int metadataVersion; // @synthesize metadataVersion=_metadataVersion;
@property unsigned int databaseSize; // @synthesize databaseSize=_databaseSize;
@property(readonly, nonatomic) unsigned long long numWoLAccessories; // @synthesize numWoLAccessories=_numWoLAccessories;
@property(readonly, copy) NSNumber *numBSPs; // @synthesize numBSPs=_numBSPs;
@property(readonly, nonatomic) unsigned long long numHomePod2ndGenStereoPairs; // @synthesize numHomePod2ndGenStereoPairs=_numHomePod2ndGenStereoPairs;
@property(readonly, nonatomic) unsigned long long numHomePodMiniStereoPairs; // @synthesize numHomePodMiniStereoPairs=_numHomePodMiniStereoPairs;
@property(readonly, nonatomic) unsigned long long numHomePodStereoPairs; // @synthesize numHomePodStereoPairs=_numHomePodStereoPairs;
@property(readonly, nonatomic) unsigned long long numMediaSystems; // @synthesize numMediaSystems=_numMediaSystems;
@property(readonly, nonatomic) unsigned long long numHomePod2ndGen; // @synthesize numHomePod2ndGen=_numHomePod2ndGen;
@property(readonly, nonatomic) unsigned long long numHomePodMinis; // @synthesize numHomePodMinis=_numHomePodMinis;
@property(readonly, nonatomic) unsigned long long numHomePods; // @synthesize numHomePods=_numHomePods;
@property(readonly, nonatomic) long long currentMediaAccessoryFallbackMediaUserType; // @synthesize currentMediaAccessoryFallbackMediaUserType=_currentMediaAccessoryFallbackMediaUserType;
@property(readonly, nonatomic) NSArray *hapServices; // @synthesize hapServices=_hapServices;
@property(copy, nonatomic) NSArray *eventTriggers; // @synthesize eventTriggers=_eventTriggers;
@property(copy, nonatomic) NSArray *multiUserSettings; // @synthesize multiUserSettings=_multiUserSettings;
@property(readonly, nonatomic) unsigned long long numThreadBorderRouters; // @synthesize numThreadBorderRouters=_numThreadBorderRouters;
@property(readonly, nonatomic) unsigned long long numThreadAccessoryBorderRouterCapable; // @synthesize numThreadAccessoryBorderRouterCapable=_numThreadAccessoryBorderRouterCapable;
@property(readonly, nonatomic) unsigned long long numThreadAccessoryRouterCapable; // @synthesize numThreadAccessoryRouterCapable=_numThreadAccessoryRouterCapable;
@property(readonly, nonatomic) unsigned long long numThreadAccessoryFullCapable; // @synthesize numThreadAccessoryFullCapable=_numThreadAccessoryFullCapable;
@property(readonly, nonatomic) unsigned long long numThreadAccessorySleepCapable; // @synthesize numThreadAccessorySleepCapable=_numThreadAccessorySleepCapable;
@property(readonly, nonatomic) unsigned long long numThreadAccessoryMinCapable; // @synthesize numThreadAccessoryMinCapable=_numThreadAccessoryMinCapable;
@property(readonly) long long numConfiguredWidgets; // @synthesize numConfiguredWidgets=_numConfiguredWidgets;
@property(readonly, nonatomic) long long firstHAPAccessoryAddedCohortWeek; // @synthesize firstHAPAccessoryAddedCohortWeek=_firstHAPAccessoryAddedCohortWeek;
@property(readonly, nonatomic) long long homeCreationCohortWeek; // @synthesize homeCreationCohortWeek=_homeCreationCohortWeek;
@property(readonly, nonatomic) unsigned long long numAccessoryServiceGroups; // @synthesize numAccessoryServiceGroups=_numAccessoryServiceGroups;
@property(readonly, nonatomic) unsigned long long numZones; // @synthesize numZones=_numZones;
@property(readonly, nonatomic) unsigned long long numRooms; // @synthesize numRooms=_numRooms;
@property(readonly, nonatomic) unsigned long long numScenes; // @synthesize numScenes=_numScenes;
@property(readonly, nonatomic) unsigned long long numTriggerOwnedConfiguredScenes; // @synthesize numTriggerOwnedConfiguredScenes=_numTriggerOwnedConfiguredScenes;
@property(readonly, nonatomic) unsigned long long numConfiguredScenes; // @synthesize numConfiguredScenes=_numConfiguredScenes;
@property(readonly, nonatomic) unsigned long long userPrivilegeBitMask; // @synthesize userPrivilegeBitMask=_userPrivilegeBitMask;
@property(readonly, nonatomic) long long numRestrictedGuests; // @synthesize numRestrictedGuests=_numRestrictedGuests;
@property(readonly, nonatomic) long long numAdmins; // @synthesize numAdmins=_numAdmins;
@property(readonly, nonatomic) long long numUsers; // @synthesize numUsers=_numUsers;
@property(readonly, nonatomic) unsigned long long numCertifiedBridgedTargetControllers; // @synthesize numCertifiedBridgedTargetControllers=_numCertifiedBridgedTargetControllers;
@property(readonly, nonatomic) unsigned long long numBridgedTargetControllers; // @synthesize numBridgedTargetControllers=_numBridgedTargetControllers;
@property(readonly, nonatomic) unsigned long long numCertifiedTargetControllers; // @synthesize numCertifiedTargetControllers=_numCertifiedTargetControllers;
@property(readonly, nonatomic) unsigned long long numTargetControllers; // @synthesize numTargetControllers=_numTargetControllers;
@property(readonly, nonatomic) unsigned long long numShortcuts; // @synthesize numShortcuts=_numShortcuts;
@property(readonly, nonatomic) unsigned long long numTimerTriggers; // @synthesize numTimerTriggers=_numTimerTriggers;
@property(readonly, nonatomic) unsigned long long numEventTriggers; // @synthesize numEventTriggers=_numEventTriggers;
@property(readonly, nonatomic) unsigned long long numActiveTriggers; // @synthesize numActiveTriggers=_numActiveTriggers;
@property(readonly, nonatomic) unsigned long long numTriggers; // @synthesize numTriggers=_numTriggers;
@property(readonly, nonatomic) unsigned long long numServices; // @synthesize numServices=_numServices;
@property(readonly, nonatomic) unsigned long long enabledResidentsDeviceCapabilities; // @synthesize enabledResidentsDeviceCapabilities=_enabledResidentsDeviceCapabilities;
@property(readonly, nonatomic) unsigned long long numResidentsEnabled; // @synthesize numResidentsEnabled=_numResidentsEnabled;
@property(readonly, nonatomic) unsigned long long numMatterLightProfilesWithNaturalLightingUsed; // @synthesize numMatterLightProfilesWithNaturalLightingUsed=_numMatterLightProfilesWithNaturalLightingUsed;
@property(readonly, nonatomic) unsigned long long numMatterLightProfilesWithNaturalLightingEnabled; // @synthesize numMatterLightProfilesWithNaturalLightingEnabled=_numMatterLightProfilesWithNaturalLightingEnabled;
@property(readonly, nonatomic) unsigned long long numMatterLightProfilesWithNaturalLightingSupported; // @synthesize numMatterLightProfilesWithNaturalLightingSupported=_numMatterLightProfilesWithNaturalLightingSupported;
@property(readonly, nonatomic) unsigned long long numLightProfilesWithNaturalLightingUsed; // @synthesize numLightProfilesWithNaturalLightingUsed=_numLightProfilesWithNaturalLightingUsed;
@property(readonly, nonatomic) unsigned long long numLightProfilesWithNaturalLightingEnabled; // @synthesize numLightProfilesWithNaturalLightingEnabled=_numLightProfilesWithNaturalLightingEnabled;
@property(readonly, nonatomic) unsigned long long numLightProfilesWithNaturalLightingSupported; // @synthesize numLightProfilesWithNaturalLightingSupported=_numLightProfilesWithNaturalLightingSupported;
@property(readonly, nonatomic) unsigned long long numCameraAccessoriesWithActivityZonesEnabled; // @synthesize numCameraAccessoriesWithActivityZonesEnabled=_numCameraAccessoriesWithActivityZonesEnabled;
@property(readonly, nonatomic) unsigned long long numCameraAccessoriesReachabilityNotificationEnabled; // @synthesize numCameraAccessoriesReachabilityNotificationEnabled=_numCameraAccessoriesReachabilityNotificationEnabled;
@property(readonly, nonatomic) unsigned long long numCameraAccessoriesRecordingEnabled; // @synthesize numCameraAccessoriesRecordingEnabled=_numCameraAccessoriesRecordingEnabled;
@property(readonly, nonatomic) unsigned long long numCameraAccessoriesSupportRecording; // @synthesize numCameraAccessoriesSupportRecording=_numCameraAccessoriesSupportRecording;
@property(readonly, nonatomic) unsigned long long numCameraAccessories; // @synthesize numCameraAccessories=_numCameraAccessories;
@property(readonly, nonatomic) unsigned long long numAccessoriesNetworkProtectionHomeKitOnly; // @synthesize numAccessoriesNetworkProtectionHomeKitOnly=_numAccessoriesNetworkProtectionHomeKitOnly;
@property(readonly, nonatomic) unsigned long long numAccessoriesNetworkProtectionFullAccess; // @synthesize numAccessoriesNetworkProtectionFullAccess=_numAccessoriesNetworkProtectionFullAccess;
@property(readonly, nonatomic) unsigned long long numAccessoriesNetworkProtectionAutoProtectedHomeKitLAN; // @synthesize numAccessoriesNetworkProtectionAutoProtectedHomeKitLAN=_numAccessoriesNetworkProtectionAutoProtectedHomeKitLAN;
@property(readonly, nonatomic) unsigned long long numAccessoriesNetworkProtectionAutoProtectedMainLAN; // @synthesize numAccessoriesNetworkProtectionAutoProtectedMainLAN=_numAccessoriesNetworkProtectionAutoProtectedMainLAN;
@property(readonly, nonatomic) unsigned long long numAccessoriesNetworkProtectionAutoFullAccess; // @synthesize numAccessoriesNetworkProtectionAutoFullAccess=_numAccessoriesNetworkProtectionAutoFullAccess;
@property(readonly, nonatomic) unsigned long long numAccessoriesNetworkProtectionUnprotected; // @synthesize numAccessoriesNetworkProtectionUnprotected=_numAccessoriesNetworkProtectionUnprotected;
@property(readonly, nonatomic) unsigned long long numAccessoriesWiFiPPSKCredential; // @synthesize numAccessoriesWiFiPPSKCredential=_numAccessoriesWiFiPPSKCredential;
@property(readonly, nonatomic) unsigned long long numEnabledSiriEndpointAccessories; // @synthesize numEnabledSiriEndpointAccessories=_numEnabledSiriEndpointAccessories;
@property(readonly, nonatomic) unsigned long long numCapableSiriEndpointAccessories; // @synthesize numCapableSiriEndpointAccessories=_numCapableSiriEndpointAccessories;
@property(readonly, nonatomic) unsigned long long numWholeHouseAudioAccessories; // @synthesize numWholeHouseAudioAccessories=_numWholeHouseAudioAccessories;
@property(readonly, nonatomic) unsigned long long numPrimaryHAPSpeakerServiceAccessories; // @synthesize numPrimaryHAPSpeakerServiceAccessories=_numPrimaryHAPSpeakerServiceAccessories;
@property(readonly, nonatomic) unsigned long long numHAPSpeakerServiceAccessories; // @synthesize numHAPSpeakerServiceAccessories=_numHAPSpeakerServiceAccessories;
@property(readonly, nonatomic) unsigned long long numTelevisionStreamingStickAccessories; // @synthesize numTelevisionStreamingStickAccessories=_numTelevisionStreamingStickAccessories;
@property(readonly, nonatomic) unsigned long long numTelevisionSetTopBoxAccessories; // @synthesize numTelevisionSetTopBoxAccessories=_numTelevisionSetTopBoxAccessories;
@property(readonly, nonatomic) unsigned long long numTelevisionAccessories; // @synthesize numTelevisionAccessories=_numTelevisionAccessories;
@property(readonly, nonatomic) unsigned long long numAppleTV4K2ndGenAccessories; // @synthesize numAppleTV4K2ndGenAccessories=_numAppleTV4K2ndGenAccessories;
@property(readonly, nonatomic) unsigned long long numAppleTVAccessories; // @synthesize numAppleTVAccessories=_numAppleTVAccessories;
@property(readonly, nonatomic) unsigned long long numAppleAudioAccessories; // @synthesize numAppleAudioAccessories=_numAppleAudioAccessories;
@property(readonly, nonatomic) unsigned long long numHAPBatteryServiceAccessories; // @synthesize numHAPBatteryServiceAccessories=_numHAPBatteryServiceAccessories;
@property(readonly, nonatomic) unsigned long long numHAPBTAccessories; // @synthesize numHAPBTAccessories=_numHAPBTAccessories;
@property(readonly, nonatomic) unsigned long long numHAPIPAccessories; // @synthesize numHAPIPAccessories=_numHAPIPAccessories;
@property(readonly, nonatomic) unsigned long long numThreadAccessories; // @synthesize numThreadAccessories=_numThreadAccessories;
@property(readonly, nonatomic) unsigned long long numBTOnlyAccessories; // @synthesize numBTOnlyAccessories=_numBTOnlyAccessories;
@property(readonly, nonatomic) unsigned long long numBTAccessories; // @synthesize numBTAccessories=_numBTAccessories;
@property(readonly, nonatomic) unsigned long long numIPAccessories; // @synthesize numIPAccessories=_numIPAccessories;
@property(readonly, nonatomic) unsigned long long numCHIPAccessoriesFirmwareUpdateEligible; // @synthesize numCHIPAccessoriesFirmwareUpdateEligible=_numCHIPAccessoriesFirmwareUpdateEligible;
@property(readonly, nonatomic) unsigned long long numHAPAccessoriesFirmwareUpdateEligible; // @synthesize numHAPAccessoriesFirmwareUpdateEligible=_numHAPAccessoriesFirmwareUpdateEligible;
@property(readonly, nonatomic) unsigned long long numCHIPAccessories; // @synthesize numCHIPAccessories=_numCHIPAccessories;
@property(readonly, nonatomic) unsigned long long numHAPAccessories; // @synthesize numHAPAccessories=_numHAPAccessories;
@property(readonly, nonatomic) unsigned long long numAppleMediaAccessories; // @synthesize numAppleMediaAccessories=_numAppleMediaAccessories;
@property(readonly, nonatomic) unsigned long long numThirdPartyMediaAccessories; // @synthesize numThirdPartyMediaAccessories=_numThirdPartyMediaAccessories;
@property(readonly, nonatomic) unsigned long long numSmartHomeAccessories; // @synthesize numSmartHomeAccessories=_numSmartHomeAccessories;
@property(readonly, nonatomic) unsigned long long numNotCertifiedAccessories; // @synthesize numNotCertifiedAccessories=_numNotCertifiedAccessories;
@property(readonly, nonatomic) unsigned long long numBridgedAccessories; // @synthesize numBridgedAccessories=_numBridgedAccessories;
@property(readonly, nonatomic) unsigned long long numCertifiedAccessories; // @synthesize numCertifiedAccessories=_numCertifiedAccessories;
@property(readonly, nonatomic) unsigned long long numAccessories; // @synthesize numAccessories=_numAccessories;
@property(readonly) unsigned long long thirdPartyMediaCategoryBitMask; // @synthesize thirdPartyMediaCategoryBitMask=_thirdPartyMediaCategoryBitMask;
@property(readonly) unsigned long long appleMediaCategoryBitMask; // @synthesize appleMediaCategoryBitMask=_appleMediaCategoryBitMask;
@property(readonly) unsigned long long homeCategoryBitMask; // @synthesize homeCategoryBitMask=_homeCategoryBitMask;
@property(readonly, nonatomic) _Bool isActivityHistoryEnabled; // @synthesize isActivityHistoryEnabled=_isActivityHistoryEnabled;
@property(readonly, nonatomic) _Bool isActivityHistoryEligible; // @synthesize isActivityHistoryEligible=_isActivityHistoryEligible;
@property(readonly, nonatomic) _Bool networkProtectionEnabled; // @synthesize networkProtectionEnabled=_networkProtectionEnabled;
@property(readonly) _Bool isResidentElectionV2Enabled; // @synthesize isResidentElectionV2Enabled=_isResidentElectionV2Enabled;
@property(readonly) _Bool isResidentFirstEnabled; // @synthesize isResidentFirstEnabled=_isResidentFirstEnabled;
@property(readonly, nonatomic) _Bool isCurrentDeviceLocalToHome; // @synthesize isCurrentDeviceLocalToHome=_isCurrentDeviceLocalToHome;
@property(readonly, nonatomic) _Bool isCurrentDevicePrimaryResident; // @synthesize isCurrentDevicePrimaryResident=_isCurrentDevicePrimaryResident;
@property(readonly, nonatomic) _Bool isCurrentDeviceResidentEnabled; // @synthesize isCurrentDeviceResidentEnabled=_isCurrentDeviceResidentEnabled;
@property(readonly, nonatomic) _Bool isCurrentDeviceResidentCapable; // @synthesize isCurrentDeviceResidentCapable=_isCurrentDeviceResidentCapable;
@property(readonly, nonatomic) _Bool primaryReportingDevice; // @synthesize primaryReportingDevice=_primaryReportingDevice;
@property(readonly, nonatomic) _Bool isAutomaticThirdPartyAccessorySoftwareUpdateEnabled; // @synthesize isAutomaticThirdPartyAccessorySoftwareUpdateEnabled=_isAutomaticThirdPartyAccessorySoftwareUpdateEnabled;
@property(readonly, nonatomic) _Bool isResidentAvailable; // @synthesize isResidentAvailable=_isResidentAvailable;
@property(readonly, nonatomic) int networkProtectionStatus; // @synthesize networkProtectionStatus=_networkProtectionStatus;
@property(readonly, getter=isAccessToHomeAllowed) _Bool accessToHomeAllowed; // @synthesize accessToHomeAllowed=_accessToHomeAllowed;
@property(readonly, nonatomic) unsigned long long currentUserPrivilege; // @synthesize currentUserPrivilege=_currentUserPrivilege;
@property(readonly, nonatomic, getter=isOwnerUser) _Bool ownerUser; // @synthesize ownerUser=_ownerUser;
@property unsigned long long homeIndex; // @synthesize homeIndex=_homeIndex;
- (id)initWithIsOwnerUser:(_Bool)arg1 isResidentAvailable:(_Bool)arg2 isPrimaryReportingDevice:(_Bool)arg3 isCurrentDeviceResidentEnabled:(_Bool)arg4 isPrimaryResident:(_Bool)arg5 isCurrentDeviceLocalToHome:(_Bool)arg6 isNetworkProtectionEnabled:(_Bool)arg7 isUserRoeProvisioned:(_Bool)arg8 isResidentFirstEnabled:(_Bool)arg9 isResidentElectionV2Enabled:(_Bool)arg10 isSmokeAlarmEnabled:(_Bool)arg11;	// IMP=0x00000000006eca59
- (id)initForUnitTesting;	// IMP=0x00000000006ec9f3
- (_Bool)isSubmitted;	// IMP=0x00000000006ec9eb
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property(readonly, nonatomic) unsigned long long currentUserPrivilegeBitMask;
@property(readonly, nonatomic) unsigned long long numThirdPartyAudioAccessories;
@property(readonly, nonatomic) unsigned long long numTelevisionServiceAccessories;
- (void)updateConfigWithAccessory:(id)arg1 reportNetworkProtectionMetrics:(_Bool)arg2 networkProtectionEnabled:(_Bool)arg3 hapServiceTypes:(id)arg4 primaryHAPServiceTypes:(id)arg5;	// IMP=0x00000000006e884c
- (id)initWithDataSource:(id)arg1 home:(id)arg2 configuredWidgetsCount:(long long)arg3;	// IMP=0x00000000006e6267
- (id)initWithHome:(id)arg1 configuredWidgetsCount:(long long)arg2;	// IMP=0x00000000006e624f
- (long long)weeksSinceDate:(id)arg1 trimAtMaximumValue:(unsigned long long)arg2;	// IMP=0x00000000006e61e9
- (long long)daysSinceDate:(id)arg1 trimAtMaximumValue:(unsigned long long)arg2;	// IMP=0x00000000006e6122
- (void)setHomeConfigurationBitMasks;	// IMP=0x00000000006e6006

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSUUID",?,R,N

@property(readonly) Class superclass;

@end

