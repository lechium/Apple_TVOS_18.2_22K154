//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMAccessory.h>

@class HFAccessoryType, HFServiceNameComponents, HFUserNotificationServiceSettings, HMHome, HMResidentDevice, HMRoom, HMSymptomsHandler, NAFuture, NSArray, NSDate, NSSet, NSString, NSUUID;
@protocol HFAccessoryLikeObjectRootHomeKitObjectProvider><HFAccessoryRepresentable><HFFavoritable><HFShowInHomeDashboard><HFIncludedContextProtocol, HFHomeContainedObject;

@interface HMAccessory (AbstractionAdditions)
+ (id)hf_minimumDescriptionsOfAccessories:(id)arg1;	// IMP=0x0010000000202bc6
+ (_Bool)hf_isSuspendedStateSupported:(unsigned long long)arg1;	// IMP=0x0010000000202293
+ (_Bool)hf_isSuspendedStateSuspended:(unsigned long long)arg1;	// IMP=0x00100000002021e3
+ (id)hf_userFriendlyLocalizedLowercaseDescription:(id)arg1;	// IMP=0x0010000000201cfa
+ (id)hf_userFriendlyLocalizedCapitalizedDescription:(id)arg1;	// IMP=0x0010000000201ba2
+ (id)hf_userFriendlyLocalizedCapitalizedPluralDescription:(id)arg1;	// IMP=0x0010000000201a4a
+ (id)hf_getUserFriendlyDescriptionKey:(id)arg1;	// IMP=0x0010000000201506
+ (CDUnknownBlockType)hf_softwareUpdateComparator;	// IMP=0x00100000002ad899
- (id)hf_setTileSize:(id)arg1;	// IMP=0x00100000000da40a
@property(readonly, nonatomic) NSString *hf_tileSize;
- (id)hf_updateShowInHomeDashboard:(_Bool)arg1;	// IMP=0x00100000000da3d7
@property(readonly, nonatomic) _Bool hf_effectiveShowInHomeDashboard;
@property(readonly, nonatomic) _Bool hf_hasSetShowInHomeDashboard;
@property(readonly, nonatomic) _Bool hf_showInHomeDashboard;
- (id)hf_updateIsVisibleInHomeStatus:(_Bool)arg1;	// IMP=0x00100000000da37b
@property(readonly, nonatomic) _Bool hf_isForcedVisibleInHomeStatus;
@property(readonly, nonatomic) _Bool hf_hasSetVisibleInHomeStatus;
@property(readonly, nonatomic) _Bool hf_isVisibleInHomeStatus;
@property(readonly, nonatomic) _Bool hf_supportsHomeStatus;
- (id)hf_updateIsFavorite:(_Bool)arg1;	// IMP=0x00100000000da28d
@property(readonly, nonatomic) _Bool hf_effectiveIsFavorite;
@property(readonly, nonatomic) _Bool hf_shouldShowInFavorites;
@property(readonly, nonatomic) _Bool hf_hasSetFavorite;
@property(readonly, nonatomic) _Bool hf_isFavorite;
@property(readonly, nonatomic) _Bool hf_canShowInControlCenter;
- (id)hf_moveToRoom:(id)arg1;	// IMP=0x00100000000da0fa
@property(readonly, nonatomic) _Bool hf_isIdentifiable;
@property(readonly, nonatomic) _Bool hf_canSpanMultipleRooms;
@property(readonly, nonatomic) HMRoom *hf_safeRoom;
- (_Bool)hf_isInRoom:(id)arg1;	// IMP=0x00100000000d9ff2
@property(readonly, nonatomic) NSSet *hf_containedCharacteristics;
@property(readonly, nonatomic) NSSet *hf_associatedAccessories;
@property(readonly, nonatomic) NSSet *hf_containedProfiles;
@property(readonly, nonatomic) NSSet *hf_containedServices;
@property(readonly, nonatomic) Class hf_itemClass;
@property(readonly, nonatomic) id <HFHomeContainedObject> hf_homeKitObject;
@property(readonly, nonatomic) HFAccessoryType *hf_accessoryType;
@property(readonly, nonatomic) NSSet *hf_accessoryLikeObjects;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;	// IMP=0x00100000001229d6
@property(readonly, nonatomic) NSSet *hf_fakeDebugSymptoms;
- (void)_pushSymptomUpdate;	// IMP=0x001000000014991e
@property(readonly, nonatomic) _Bool hf_fakeNetworkStrengthError;
@property(readonly, nonatomic) _Bool hf_fakeNetworkNotShareableSymptom;
@property(readonly, nonatomic) _Bool hf_fakeNetworkProfileInstallSymptom;
@property(readonly, nonatomic) _Bool hf_fakeNetworkProfileFixSymptom;
@property(readonly, nonatomic) _Bool hf_fake8021xNetworkSymptom;
@property(readonly, nonatomic) _Bool hf_fakeVPNProfileExpired;
@property(nonatomic, setter=hf_setFakeCaptiveLeaseRenewalSymptom:) _Bool hf_fakeCaptiveLeaseRenewalSymptom;
@property(nonatomic, setter=hf_setFakeWiFiMismatchSymptom:) _Bool hf_fakeWiFiMismatchSymptom;
@property(readonly, nonatomic) _Bool hf_fakeShouldDisplayManualFixOption;
@property(readonly, nonatomic) _Bool hf_fakeCDPSymptom;
@property(readonly, nonatomic) _Bool hf_fakeITunesSymptom;
@property(readonly, nonatomic) _Bool hf_fakeICloudSymptom;
@property(readonly, nonatomic) _Bool hf_fakeHomeKitSymptom;
@property(readonly, nonatomic) _Bool hf_fakeGeneralFixSymptom;
@property(readonly, nonatomic) _Bool hf_fakeHardwareFixSymptom;
@property(readonly, nonatomic) _Bool hf_fakeInternetFixSymptom;
@property(readonly, nonatomic) _Bool hf_fakeWiFiPerformanceSymptom;
@property(readonly, nonatomic) _Bool hf_fakeWiFiSymptom;
@property(readonly, nonatomic) _Bool hf_fakeUnreachableError;
- (_Bool)hf_shouldDisplayManualFixOptionForSymptom:(long long)arg1;	// IMP=0x0010000000148bd9
- (_Bool)hf_shouldShowSoftwareUpdateInfo;	// IMP=0x0010000000148ba0
- (id)hf_identifyHomePod;	// IMP=0x0010000000148b31
@property(readonly, nonatomic) _Bool hf_needsSoftwareUpdateToSupportBeingAddedToMediaSystem;
@property(readonly, nonatomic) unsigned long long hf_mediaAccessControlCapabilities;
- (_Bool)hf_supportsMultiUserLanguage:(id)arg1;	// IMP=0x0010000000148839
@property(readonly, nonatomic) _Bool hf_supportsRMVOnAppleTV;
@property(readonly, nonatomic) _Bool hf_isSiriEndpoint;
@property(readonly, nonatomic) _Bool hf_isAudioReceiver;
@property(readonly, nonatomic) _Bool hf_isSpeaker;
@property(readonly, nonatomic) _Bool hf_isDumbSpeaker;
@property(readonly, nonatomic) _Bool hf_isAirPortExpressSpeaker;
@property(readonly, nonatomic) _Bool hf_isAppleTV;
@property(readonly, nonatomic) _Bool hf_isHomePod;
@property(readonly, nonatomic) _Bool hf_isHomeMediaAccessory;
- (_Bool)hf_isCategorizedAsMediaAccessory;	// IMP=0x00100000001484d2
@property(readonly, nonatomic) _Bool hf_isMediaAccessory;
- (id)hf_minimumDescription;	// IMP=0x0010000000202b33
@property(readonly, nonatomic) NAFuture *hf_allConnectedHomeToCHIPAccessoryPairingFuture;
- (_Bool)hf_shouldHideNearbyAccessoryService:(id)arg1;	// IMP=0x0010000000202661
- (_Bool)hf_supportsUserLevelUpdateListeningHistorySetting;	// IMP=0x001000000020264f
- (id)hf_errorForCurrentSessionState;	// IMP=0x0010000000202470
- (_Bool)hf_needsOnboarding;	// IMP=0x001000000020242c
- (id)hf_siriEndpointProfile;	// IMP=0x0010000000202343
@property(readonly, nonatomic) NSString *hf_userFriendlyLocalizedLowercaseDescription;
@property(readonly, nonatomic) NSString *hf_userFriendlyLocalizedCapitalizedDescription;
- (id)_hf_categoryType;	// IMP=0x0010000000201f1e
@property(readonly, nonatomic) NSString *hf_effectiveCategoryType;
@property(readonly, nonatomic) NSString *hf_categoryOrPrimaryServiceType;
@property(readonly, nonatomic) _Bool hf_isDirectlyReachable;
@property(readonly, nonatomic) _Bool hf_needsReprovisioningCheck;
@property(readonly, nonatomic) _Bool hf_hasManagedNetworkCredential;
@property(readonly, nonatomic) NSArray *hf_networkConfigurationProfiles;
@property(readonly, nonatomic) HMAccessory *hf_owningBridgeAccessory;
@property(readonly, nonatomic) NSArray *hf_bridgedAccessories;
@property(readonly, nonatomic) NSSet *hf_servicesBehindBridge;
@property(readonly, nonatomic) NSSet *hf_programmableSwitchNamespaceServices;
@property(readonly, nonatomic) NSSet *hf_programmableSwitchServices;
- (id)hf_serviceOfType:(id)arg1;	// IMP=0x0010000000200ac0
@property(readonly, nonatomic) unsigned long long hf_numberOfProgrammableSwitches;
@property(readonly, nonatomic) long long hf_appPunchOutReason;
@property(readonly, copy, nonatomic) NSSet *hf_displayNamesForVisibleTiles;
@property(readonly, copy, nonatomic) NSSet *hf_componentServices;
@property(readonly, nonatomic) _Bool hf_hasInputSourceService;
- (id)hf_primaryService;	// IMP=0x00100000002001d3
@property(readonly, nonatomic) NSArray *hf_irrigationSystemServices;
@property(readonly, nonatomic) NSSet *hf_groupableServices;
@property(readonly, copy, nonatomic) NSSet *hf_visibleServices;
@property(readonly, copy, nonatomic) NSSet *hf_standardServices;
@property(readonly, nonatomic) HMResidentDevice *hf_linkedResidentDevice;
- (id)hf_setShowAsIndividualServices:(_Bool)arg1;	// IMP=0x00100000001ffaad
@property(readonly, nonatomic) _Bool hf_isSupportedAccessory;
@property(readonly, nonatomic) _Bool hf_isMatterOnlyAccessory;
@property(readonly, nonatomic) _Bool hf_showAsIndividualServices;
@property(readonly, nonatomic) _Bool hf_showAsAccessoryTile;
@property(readonly, nonatomic) _Bool hf_shouldSeparateAccessoryName;
@property(readonly, nonatomic) _Bool hf_isMultiSensorAccessory;
@property(readonly, nonatomic) _Bool hf_isSingleSensorAccessory;
@property(readonly, nonatomic) _Bool hf_showsAsAccessoryInControlCentre;
@property(readonly, nonatomic) _Bool hf_isSensorAccessory;
- (_Bool)hf_isRestrictedGuestAllowedAccessory;	// IMP=0x00100000001ff3b8
@property(readonly, nonatomic) _Bool hf_isNonServiceBasedAccessory;
@property(readonly, nonatomic) _Bool hf_isVisibleAccessory;
@property(readonly, nonatomic) _Bool hf_canShowAsIndividualServices;
@property(readonly, nonatomic) _Bool hf_isMultiServiceAccessory;
@property(readonly, nonatomic) _Bool hf_isSingleServiceLikeAccessory;
@property(readonly, nonatomic) _Bool hf_isSingleServiceAccessory;
@property(readonly, nonatomic) _Bool hf_areAllServicesInGroups;
@property(readonly, nonatomic) _Bool hf_isAudioAnalysisSupportedDevice;
@property(readonly, nonatomic) _Bool hf_isTelevision;
@property(readonly, nonatomic) _Bool hf_isSprinkler;
@property(readonly, nonatomic) _Bool hf_isRemoteControl;
@property(readonly, nonatomic) _Bool hf_isProgrammableSwitch;
@property(readonly, nonatomic) _Bool hf_isPowerStrip;
- (id)hf_servicesWithBulletinBoardNotificationTurnedOff;	// IMP=0x00100000001fe91e
@property(readonly, nonatomic) _Bool hf_isNotificationSupportedCamera;
@property(readonly, nonatomic) _Bool hf_isNetworkRouterSatellite;
@property(readonly, nonatomic) _Bool hf_isNetworkRouter;
@property(readonly, nonatomic) _Bool hf_isDoorbell;
@property(readonly, nonatomic) _Bool hf_isCamera;
@property(readonly, nonatomic) _Bool hf_isCeilingFanWithLight;
@property(readonly, nonatomic) _Bool hf_isVisibleAsBridgedAccessory;
@property(readonly, nonatomic) _Bool hf_isVisibleAsBridge;
@property(readonly, nonatomic) _Bool hf_isPureProgrammableSwitch;
@property(readonly, nonatomic) _Bool hf_isPureBridge;
@property(readonly, nonatomic) _Bool hf_isCategorizedAsBridge;
@property(readonly, nonatomic) _Bool hf_isBridge;
@property(readonly, nonatomic) _Bool hf_canSyncExternalSettings;
@property(readonly, nonatomic) _Bool hf_supportsSuspendedState;
@property(readonly, nonatomic) _Bool hf_isSuspended;
@property(readonly, nonatomic) _Bool hf_requiresFirmwareUpdate;
@property(readonly, nonatomic) NSSet *accessories;
- (_Bool)_areAllSensorServices;	// IMP=0x00100000002470f0
- (_Bool)hf_anyNonSensorServiceIsOnForContextType:(unsigned long long)arg1;	// IMP=0x0010000000247017
- (id)hf_updateValueForCurrentObjectOnly:(_Bool)arg1 forContextType:(unsigned long long)arg2;	// IMP=0x0010000000246b0d
- (id)hf_updateValue:(_Bool)arg1 forContextType:(unsigned long long)arg2;	// IMP=0x001000000024670c
- (_Bool)hf_shouldHideForContextType:(unsigned long long)arg1;	// IMP=0x00100000002463b4
- (_Bool)hf_shouldBeOnForContextType:(unsigned long long)arg1;	// IMP=0x0010000000246188
- (_Bool)hf_hasSetForContextType:(unsigned long long)arg1;	// IMP=0x0010000000245ef4
- (_Bool)hf_isOnForContextType:(unsigned long long)arg1;	// IMP=0x0010000000245da0
- (_Bool)hf_isValidObject;	// IMP=0x001000000028ab56
@property(readonly, nonatomic) __weak HMRoom *hf_parentRoom;
- (id)hf_softwareUpdateDependentClasses;	// IMP=0x00100000002ae4a4
- (id)hf_softwareUpdateDependentObjects;	// IMP=0x00100000002ae3e3
- (id)hf_softwareUpdateHash;	// IMP=0x00100000002ae30a
- (id)hf_startSoftwareUpdate;	// IMP=0x00100000002ae283
- (id)hf_fetchAvailableSoftwareUpdateWithOptions:(unsigned long long)arg1;	// IMP=0x00100000002ae1ed
- (id)hf_softwareUpdatePortionComplete;	// IMP=0x00100000002ae166
- (unsigned long long)hf_softwareUpdateDownloadSize;	// IMP=0x00100000002ae0eb
- (id)hf_softwareUpdateReleaseDate;	// IMP=0x00100000002ae064
- (id)hf_softwareUpdateDisplayableVersion;	// IMP=0x00100000002adfdd
- (id)hf_softwareUpdateVersion;	// IMP=0x00100000002adf56
- (id)hf_softwareUpdateDocumentation;	// IMP=0x00100000002adecf
- (_Bool)hf_softwareUpdatePossessesNecessaryDocumentation;	// IMP=0x00100000002ade56
- (_Bool)hf_isSoftwareUpdateInstalled;	// IMP=0x00100000002adddd
- (_Bool)hf_isSoftwareUpdateInProgress;	// IMP=0x00100000002add64
- (_Bool)hf_isInstallingSoftwareUpdate;	// IMP=0x00100000002adceb
- (_Bool)hf_isDownloadingSoftwareUpdate;	// IMP=0x00100000002adc72
- (_Bool)hf_isReadyToInstallSoftwareUpdate;	// IMP=0x00100000002adbf9
- (_Bool)hf_hasRequestedSoftwareUpdate;	// IMP=0x00100000002adb80
- (_Bool)hf_hasNewValidSoftwareUpdate;	// IMP=0x00100000002adb07
- (_Bool)hf_hasValidSoftwareUpdate;	// IMP=0x00100000002ada8e
- (_Bool)hf_hasSoftwareUpdate;	// IMP=0x00100000002ada15
- (_Bool)hf_hasNewValidSoftwareOrFirmwareUpdate;	// IMP=0x00100000002ad9dc
- (_Bool)hf_hasValidSoftwareOrFirmwareUpdate;	// IMP=0x00100000002ad9a3
- (_Bool)hf_supportsSoftwareUpdate;	// IMP=0x00100000002ad970
- (id)_hf_audioAnalysisEventBulletinBoardNotification;	// IMP=0x00100000002bdc90
- (id)hf_updateUserNotificationSettings:(id)arg1;	// IMP=0x00100000002bdb16
@property(readonly, copy, nonatomic) HFUserNotificationServiceSettings *hf_userNotificationSettings;
- (id)_audioAnalysisEventBulletinNotifications;	// IMP=0x00100000002bd9b5
- (void)hf_updateApplicationData:(id)arg1 handleError:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000002d8b80
- (void)_hf_didUpdateApplicationData:(id)arg1;	// IMP=0x00100000002d8a61
@property(readonly, nonatomic) id <HFAccessoryLikeObjectRootHomeKitObjectProvider><HFAccessoryRepresentable><HFFavoritable><HFShowInHomeDashboard><HFIncludedContextProtocol> hf_rootAccessoryLikeHomeKitObject;
- (id)hf_updateDateAdded:(id)arg1;	// IMP=0x00100000003a525a
@property(readonly, copy, nonatomic) NSDate *hf_dateAdded;
@property(readonly, nonatomic) HFServiceNameComponents *hf_serviceNameComponents;
@property(readonly, copy, nonatomic) NSString *hf_displayName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak HMHome *home;
@property(readonly) Class superclass;
@property(readonly, nonatomic) HMSymptomsHandler *symptomsHandler;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end

