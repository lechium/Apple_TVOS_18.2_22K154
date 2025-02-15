//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMHome.h>

@class NSArray, NSDate, NSSet, NSString, NSUUID;

@interface HMHome (Home)
+ (_Bool)hf_prefersAutoSynthesizedDescription;	// IMP=0x00100000001221fb
+ (id)hf_minimumDescriptionsOfHomes:(id)arg1;	// IMP=0x00100000001944b8
+ (id)_hf_appDataKeyForColorPaletteOfType:(unsigned long long)arg1;	// IMP=0x001000000018d43f
+ (id)_hf_standaloneTopicNameLocalizationKeyForPrimaryServiceType:(id)arg1;	// IMP=0x0010000000294b3c
+ (id)_hf_groupedServiceTypeTopics;	// IMP=0x001000000029435b
- (_Bool)activityLogAvailable;	// IMP=0x001000000008f090
- (_Bool)userSupportsActivityLog;	// IMP=0x001000000008efe0
- (_Bool)hasActivityLogPrerequisites;	// IMP=0x001000000008eee0
- (_Bool)hasCompatibleActivityLogAccessories;	// IMP=0x001000000008ee30
@property(readonly, nonatomic) NSSet *hf_accessoryLikeObjects;
- (id)hf_handleForUser:(id)arg1;	// IMP=0x001000000010c884
- (id)hf_userForHandle:(id)arg1;	// IMP=0x001000000010c6a0
- (id)hf_stateDumpBuilderWithContext:(id)arg1;	// IMP=0x0010000000122203
- (id)hf_home;	// IMP=0x001000000012c4cd
- (unsigned long long)hf_favoriteCameraCountExcludingHomeKitObjects:(id)arg1;	// IMP=0x001000000013eccd
- (id)hf_minimumDescription;	// IMP=0x00100000001943fb
- (_Bool)hf_atleastOneMediaAccessoryHasSiriEnabled;	// IMP=0x00100000001941d3
- (id)hf_accessoryRepresentableUsageCountsByRoomWithFilter:(CDUnknownBlockType)arg1;	// IMP=0x0010000000194145
- (id)hf_shortcutsComponentActionSetWithActions:(id)arg1;	// IMP=0x0010000000194126
- (_Bool)hf_canUpdateToHH2;	// IMP=0x001000000019407e
- (_Bool)hf_hasFavorites;	// IMP=0x001000000019401e
- (id)hf_setShowPredictedScenesOnDashboard:(_Bool)arg1;	// IMP=0x0010000000193dad
- (_Bool)hf_showPredictedScenesOnDashboard;	// IMP=0x0010000000193d22
- (id)hf_ecosystemAccessoryUUIDMapFuture;	// IMP=0x0010000000193444
- (id)hf_fetchExistingWalletKeyEncodedPKPass;	// IMP=0x0010000000193131
- (id)hf_fetchAvailableWalletKeyEncodedPKPass;	// IMP=0x0010000000192e1e
- (void)hf_clearCachedWalletKeyDeviceStateForCurrentDevice;	// IMP=0x0010000000192de6
- (id)hf_walletKeyDeviceStatesOfCompatiblePairedWatches;	// IMP=0x00100000001928a1
- (id)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;	// IMP=0x001000000019256f
- (id)hf_hasWalletKeyCompatibleDevice;	// IMP=0x00100000001921f7
- (_Bool)hf_hasHomeHubSupportingAccessCodes;	// IMP=0x0010000000192190
- (id)hf_setHasOnboardedForAccessCode;	// IMP=0x0010000000191d16
- (_Bool)hf_canAddAccessCode;	// IMP=0x0010000000191cac
- (id)hf_accessoriesSupportingAccessCodes;	// IMP=0x0010000000191c40
- (id)hf_walletKeyColorToDisplay;	// IMP=0x0010000000191af3
- (id)_hf_existingWalletKeyColorForCurrentDevice;	// IMP=0x0010000000191915
- (id)_hf_fetchWalletKeyColorFromAccessories;	// IMP=0x0010000000191688
- (id)hf_fetchWalletKeyDeviceStateForPairedWatches;	// IMP=0x0010000000191397
- (id)hf_formattedErrorForWalletKeyDeviceStateForCurrentDevice;	// IMP=0x0010000000190f91
- (_Bool)hf_hasHomeHubSupportingWalletKey;	// IMP=0x0010000000190f2a
- (id)hf_setHasOnboardedForWalletKey;	// IMP=0x0010000000190ab0
- (id)hf_addWalletKeyToPairedWatchesWithOptions:(long long)arg1;	// IMP=0x001000000019052f
- (id)hf_addWalletKeyWithOptions:(long long)arg1;	// IMP=0x001000000018ff1f
- (id)hf_accessoriesSupportingUWBUnlock;	// IMP=0x001000000018fdfe
- (_Bool)hf_containsWalletKeyUWBAccessory;	// IMP=0x001000000018fd08
- (id)hf_enableUWBForWalletKeyWithAuthData:(id)arg1 enableNFCExpress:(_Bool)arg2;	// IMP=0x001000000018f7b2
- (id)hf_enableExpressModeForWalletKeyWithAuthData:(id)arg1;	// IMP=0x001000000018f33a
- (id)hf_walletKeyInWalletAppURL;	// IMP=0x001000000018ec0b
- (id)hf_walletKeyUUID;	// IMP=0x001000000018ea79
- (id)hf_hasWalletKey;	// IMP=0x001000000018e8a2
- (id)hf_fetchWalletKeyDeviceStateForCurrentDeviceIfNecessary;	// IMP=0x001000000018e82a
- (id)_hf_cachedWalletKeyDeviceStateForCurrentDevice;	// IMP=0x001000000018e819
- (id)hf_fetchWalletKeyDeviceStateForCurrentDevice;	// IMP=0x001000000018e3d7
- (id)hf_walletKeyAccessories;	// IMP=0x001000000018e36b
- (id)hf_restrictedGuestAllowedAccessories;	// IMP=0x001000000018e2ff
- (id)hf_updateAccessControlDescriptor:(id)arg1;	// IMP=0x001000000018d92d
- (id)hf_accessControlDescriptor;	// IMP=0x001000000018d7f7
- (id)hf_updateColorPalette:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x001000000018d664
- (id)hf_colorPaletteOfType:(unsigned long long)arg1;	// IMP=0x001000000018d459
@property(readonly, nonatomic) _Bool hf_hasAutomatableProfiles;
@property(readonly, nonatomic) _Bool hf_hasAutomatableServices;
- (_Bool)hf_isAutomatable;	// IMP=0x001000000018d27f
- (_Bool)hf_userCanCreateTrigger;	// IMP=0x001000000018d145
- (_Bool)hf_userIsAllowedToEditTrigger;	// IMP=0x001000000018d133
- (_Bool)hf_userIsAllowedToCreateTrigger;	// IMP=0x001000000018d121
@property(readonly, nonatomic) _Bool hf_isAbleToAddTrigger;
- (_Bool)hf_hasAnyVisibleTriggers;	// IMP=0x001000000018cec3
- (_Bool)hf_hasEnabledAndReachableResident;	// IMP=0x001000000018cd26
- (_Bool)hf_hasEnabledResident;	// IMP=0x001000000018cbd7
- (void)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;	// IMP=0x001000000018cb0c
- (_Bool)hf_cameraRecordingHasBeenOnboarded;	// IMP=0x001000000018cafa
- (_Bool)hf_atLeastOneMediaAccessoryWithSupportingJustSiriLanguage;	// IMP=0x001000000018c951
- (_Bool)hf_atleastOneMediaAccessorySupportingJustSiri;	// IMP=0x001000000018c8f1
- (_Bool)hf_hasAtleastOneOasisEnabledHomePod;	// IMP=0x001000000018c80f
- (_Bool)hf_shouldShowActivityLogSetting;	// IMP=0x001000000018c5ae
- (_Bool)hf_activityLogAvailable;	// IMP=0x001000000018c59c
- (_Bool)hf_hasActivityLogPrerequisites;	// IMP=0x001000000018c58a
- (_Bool)hf_hasCompatibleActivityLogAccessories;	// IMP=0x001000000018c578
- (_Bool)hf_canEnableAudioAnalysisAfterHH2Upgrade;	// IMP=0x001000000018c3e3
- (_Bool)hf_hasAtleastOneSafetyAndSecuritySupportedAccessory;	// IMP=0x001000000018c39b
- (id)hf_safetyAndSecuritySupportedAccessories;	// IMP=0x001000000018c389
- (_Bool)hf_hasAtleastOneAudioAnalysisSupportedAccessory;	// IMP=0x001000000018c341
- (id)hf_audioAnalysisSupportedAccessories;	// IMP=0x001000000018c2d5
- (_Bool)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;	// IMP=0x001000000018c243
- (_Bool)hf_hasAtLeastOneReachableHomeMediaAccessory;	// IMP=0x001000000018c1a8
- (_Bool)hf_atleastOneMediaAccessorySupportsAndHasAnnounceEnabled;	// IMP=0x001000000018bed8
- (_Bool)hf_atleastOneHomePodSupportsAnnounce;	// IMP=0x001000000018be3d
- (_Bool)hf_shouldShowAnnounceFeatureForThisHome;	// IMP=0x001000000018be35
- (_Bool)hf_shouldShowAnnounceButtonForThisHome;	// IMP=0x001000000018be2d
- (void)hf_startReprovisioningAccessory:(id)arg1;	// IMP=0x001000000018bc5f
- (_Bool)hf_supportsReachabilityNotifications;	// IMP=0x001000000018bbf8
- (_Bool)hf_hasCameraRecordingResident;	// IMP=0x001000000018bb91
- (_Bool)hf_hasRMVCapableAppleTV;	// IMP=0x001000000018bb89
- (_Bool)hf_hasAppleTVs;	// IMP=0x001000000018bb29
- (_Bool)hf_allHomePodsSupportRemoteProfileInstallation;	// IMP=0x001000000018b9fb
- (unsigned long long)hf_numberOfHomePods;	// IMP=0x001000000018b901
- (_Bool)hf_hasHomePods;	// IMP=0x001000000018b8a1
- (_Bool)hf_hasMediaAccessories;	// IMP=0x001000000018b841
- (_Bool)hf_supportsSharedEventAutomation;	// IMP=0x001000000018b7b1
- (_Bool)hf_isMediaAccessoryProfileValid:(id)arg1;	// IMP=0x001000000018b694
- (_Bool)hf_isPresenceAuthorizedForUser:(id)arg1;	// IMP=0x001000000018b5c0
- (_Bool)hf_hasAtLeastOneRestrictedGuest;	// IMP=0x001000000018b4f3
- (id)hf_allNonOwnerUsers;	// IMP=0x001000000018b414
- (id)hf_allNonAdminUsers;	// IMP=0x001000000018b2d1
- (id)hf_allUsersIncludingCurrentUser;	// IMP=0x001000000018b224
- (_Bool)hf_hasEnabledResidentSupportingThirdPartySoftwareUpdate;	// IMP=0x001000000018b21c
- (_Bool)hf_enabledResidentsSupportsNaturalLight;	// IMP=0x001000000018b1b5
- (_Bool)hf_enabledResidentsSupportsMediaActions;	// IMP=0x001000000018b14e
- (_Bool)hf_supportsRemoteAccessRestrictions;	// IMP=0x001000000018b0e7
- (_Bool)hf_supportsPerUserRemoteAccess;	// IMP=0x001000000018b081
- (id)hf_markTermsAndConditionsAsAcceptedForHomePodWithLicenseAgreementVersion:(id)arg1;	// IMP=0x001000000018ae09
- (_Bool)hf_hasAcceptedTermsAndConditionsForHomePodVersion:(id)arg1;	// IMP=0x001000000018aa93
- (id)hf_setHomeHasMigratedForRedesign:(_Bool)arg1;	// IMP=0x001000000018a94c
- (_Bool)hf_homeHasMigratedForRedesign;	// IMP=0x001000000018a8bf
- (id)hf_setHomeHasMigratedServicesToAccessories:(_Bool)arg1;	// IMP=0x001000000018a778
- (_Bool)hf_homeHasMigratedServicesToAccessories;	// IMP=0x001000000018a6eb
- (id)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:(_Bool)arg1;	// IMP=0x001000000018a5a4
- (_Bool)hf_homeHasMigratedIntoHomeApp;	// IMP=0x001000000018a517
- (id)hf_setNotesApplicationData:(id)arg1;	// IMP=0x001000000018a35f
- (id)hf_notesApplicationData;	// IMP=0x001000000018a29d
- (CDUnknownBlockType)hf_dashboardSectionReorderableHomeKitObjectComparator;	// IMP=0x001000000018a0dc
- (CDUnknownBlockType)hf_dashboardSectionReorderableItemComparator;	// IMP=0x0010000000189fae
- (CDUnknownBlockType)hf_dashboardSectionReorderableUUIDStringComparator;	// IMP=0x0010000000189e80
- (id)hf_reorderableDashboardSectionList;	// IMP=0x0010000000189e43
- (CDUnknownBlockType)hf_accessoryCategoriesReorderableItemComparator;	// IMP=0x0010000000189d15
- (id)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;	// IMP=0x0010000000189cd8
- (id)hf_reorderableCamerasList;	// IMP=0x0010000000189c9b
- (id)hf_reorderableActionSetsList;	// IMP=0x0010000000189c5e
- (id)hf_reorderableServicesList;	// IMP=0x0010000000189c21
- (id)hf_reorderableRoomsList;	// IMP=0x0010000000189be4
- (id)hf_allSiriEndPointProfileContainersThatWillChime;	// IMP=0x0010000000189ab3
- (id)hf_allSiriEndPointProfileContainers;	// IMP=0x0010000000189967
- (id)hf_siriEndPointAccessories;	// IMP=0x00100000001898da
- (_Bool)hf_canShowTvViewingInfoForUser:(id)arg1;	// IMP=0x00100000001898c5
- (id)hf_tvViewingProfilesAccessories;	// IMP=0x0010000000189852
- (id)hf_personalRequestAccessories;	// IMP=0x00100000001897df
- (id)hf_allResidentAccessories;	// IMP=0x0010000000189752
- (id)hf_siriEndpointCapableAccessoriesToOnboard;	// IMP=0x001000000018969b
- (id)hf_homePods;	// IMP=0x001000000018962f
- (id)hf_appleTVs;	// IMP=0x00100000001895c3
- (id)hf_mediaAccessories;	// IMP=0x0010000000189557
- (id)hf_updateAutomaticThirdPartyAccessorySoftwareUpdateEnabled:(_Bool)arg1;	// IMP=0x001000000018953e
- (id)hf_updateAutomaticSoftwareUpdateEnabled:(_Bool)arg1;	// IMP=0x00100000001894b3
- (id)hf_accessoriesRequiringManualWiFiReconfiguration;	// IMP=0x00100000001893f9
- (id)hf_resetAllNetworkConfigurationProfiles;	// IMP=0x0010000000189369
- (id)hf_setPhotosLibrarySettingsForUser:(id)arg1 importPhotosLibraryEnabled:(_Bool)arg2 shareFacesEnabled:(_Bool)arg3;	// IMP=0x0010000000188dac
- (id)hf_setSharePhotosLibraryEnabled:(_Bool)arg1 forUser:(id)arg2;	// IMP=0x0010000000188c95
- (id)hf_setImportPhotosLibraryEnabled:(_Bool)arg1 forUser:(id)arg2;	// IMP=0x0010000000188c79
- (id)hf_personWithIdentifier:(id)arg1;	// IMP=0x00100000001889b9
- (id)hf_allPersons;	// IMP=0x0010000000188795
- (id)hf_personManagerWithIdentifier:(id)arg1;	// IMP=0x001000000018866d
- (id)hf_allPhotosPersonManagers;	// IMP=0x0010000000188601
- (id)hf_allPersonManagers;	// IMP=0x0010000000188554
- (id)hf_setFaceRecognitionEnabled:(_Bool)arg1;	// IMP=0x0010000000187cd2
- (_Bool)hf_isFaceRecognitionAvailable;	// IMP=0x0010000000187ad0
- (id)hf_allHomePodsOrStereoPairsThatWillChime;	// IMP=0x0010000000187a5d
- (id)hf_allHomePodProfileContainers;	// IMP=0x0010000000187911
- (id)hf_allHomePodsOrStereoPairs;	// IMP=0x00100000001876ea
- (id)hf_allUniqueMediaProfileContainers;	// IMP=0x00100000001874e0
- (id)hf_allUniqueMediaProfileContainersExcludingMediaGroups;	// IMP=0x00100000001873a2
- (id)hf_allMediaProfileContainers;	// IMP=0x001000000018726c
- (_Bool)hf_hasSecureRecordingCameras;	// IMP=0x0010000000187118
- (id)hf_unitaryCameraProfile;	// IMP=0x00100000001870ad
- (id)hf_allCameraProfilesWithSmartMotionRecordingEnabled;	// IMP=0x0010000000186e3b
- (id)hf_allCameraProfilesWithDoorbellService;	// IMP=0x0010000000186d74
- (id)hf_allCameraProfilesSupportingRecording;	// IMP=0x0010000000186ccf
- (id)hf_allCameraProfiles;	// IMP=0x0010000000186c63
- (id)hf_cameraProfileForSignificantEvent:(id)arg1;	// IMP=0x0010000000186b18
- (id)hf_cameraProfileWithIdentifier:(id)arg1;	// IMP=0x00100000001868a7
- (id)hf_allLightProfilesSupportingNaturalLighting;	// IMP=0x00100000001867dc
- (id)hf_allLightProfiles;	// IMP=0x0010000000186732
- (id)hf_allNetworkConfigurationProfiles;	// IMP=0x001000000018666b
- (id)hf_accessoryProfilesWithClass:(Class)arg1;	// IMP=0x00100000001865c4
- (id)hf_allAccessoryProfiles;	// IMP=0x0010000000186558
- (id)hf_allVisibleServices;	// IMP=0x00100000001864b8
- (_Bool)hf_hasVisibleServies;	// IMP=0x0010000000186422
- (id)hf_allServices;	// IMP=0x001000000018627c
- (id)hf_serviceWithIdentifier:(id)arg1;	// IMP=0x0010000000185f63
- (_Bool)hf_containsActionableAccessories;	// IMP=0x0010000000185e5b
- (id)hf_homeKitObjectsSupportingNaturalLighting;	// IMP=0x0010000000185cb6
- (id)hf_accessoriesSupportingNaturalLighting;	// IMP=0x0010000000185bf0
- (id)hf_accessoriesWithValidSoftwareOrFirmwareUpdates;	// IMP=0x0010000000185b50
- (_Bool)hf_isAutomaticThirdPartyAccessorySoftwareUpdateEnabled;	// IMP=0x0010000000185b48
- (_Bool)hf_shouldShowSoftwareUpdateSettings;	// IMP=0x0010000000185ae3
- (_Bool)hf_hasThirdPartyAccessoriesSupportingSoftwareUpdate;	// IMP=0x0010000000185a44
- (_Bool)hf_hasFirstPartyAccessoriesSupportingSoftwareUpdate;	// IMP=0x00100000001859ab
- (_Bool)hf_hasAccessoriesSupportingSoftwareUpdate;	// IMP=0x001000000018594b
- (id)accessoriesSupportingSoftwareUpdate;	// IMP=0x00100000001858ab
- (id)hf_appleTVsSupportingHomeTheater;	// IMP=0x00100000001857df
- (id)hf_relatedHomeTheaterMediaProfileContainerFor:(id)arg1;	// IMP=0x00100000001853b6
- (id)hf_appleTVUsingAudioDestination:(id)arg1;	// IMP=0x0010000000185244
- (id)hf_mediaSystemWithIdentifier:(id)arg1;	// IMP=0x001000000018511c
- (id)hf_mediaSystemForAccessory:(id)arg1;	// IMP=0x0010000000184f2d
- (id)hf_serviceGroupWithIdentifier:(id)arg1;	// IMP=0x0010000000184e05
- (id)hf_serviceGroupsForService:(id)arg1;	// IMP=0x0010000000184ca6
- (_Bool)hf_hasReachableResidents;	// IMP=0x0010000000184b2b
- (unsigned long long)hf_blockCurrentUserFromHomeReason;	// IMP=0x0010000000184ab7
- (_Bool)hf_shouldBlockCurrentUserFromHomeForRoarUpgrade;	// IMP=0x001000000018496e
- (_Bool)hf_shouldBlockCurrentUserFromHome;	// IMP=0x0010000000184935
- (id)hf_residentDevicesAddedToHome;	// IMP=0x0010000000184712
- (_Bool)hf_hasResidentDeviceCapableOfSupportingEnhancedDetectionModes;	// IMP=0x00100000001846ab
- (_Bool)hf_hasResidentDeviceCapableOfSupportingActivityZones;	// IMP=0x0010000000184644
- (_Bool)hf_hasResidentDeviceCapableOfSupportingCHIP;	// IMP=0x00100000001845dd
- (_Bool)hf_hasResidentDeviceCapableOfSupportingMatterSharedAdmin;	// IMP=0x0010000000184576
- (_Bool)hf_hasResidentDeviceCapableOfSupportingThreadBorderRouter;	// IMP=0x001000000018450f
- (id)hf_actionSetWithUUID:(id)arg1;	// IMP=0x00100000001843e7
- (id)hf_enabledResidentDevices;	// IMP=0x001000000018433c
- (id)hf_primaryResidentDevice;	// IMP=0x00100000001842ca
- (id)hf_allTargetControlAccessories;	// IMP=0x001000000018425e
- (id)hf_allProgrammableSwitchAccessories;	// IMP=0x0010000000184086
- (id)hf_allNetworkRouterAccessories;	// IMP=0x001000000018401a
- (id)hf_allBridgeAccessories;	// IMP=0x0010000000183e8e
- (id)hf_accessoriesMatchingCategoryType:(id)arg1;	// IMP=0x0010000000183c54
- (id)hf_mediaProfileContainerForSymptomsHandler:(id)arg1;	// IMP=0x0010000000183bba
- (_Bool)hf_hasVisibleAccessories;	// IMP=0x0010000000183b5a
- (id)hf_visibleAccessories;	// IMP=0x0010000000183aee
- (id)hf_mediaSystemForSymptomsHandler:(id)arg1;	// IMP=0x0010000000183920
- (id)hf_accessoryForSymptomsHandler:(id)arg1;	// IMP=0x001000000018374d
- (id)hf_accessoryWithMatterNodeID:(id)arg1;	// IMP=0x0010000000183625
- (id)hf_accessoryWithDeviceIdentifier:(id)arg1;	// IMP=0x0010000000183394
- (id)hf_accessoryWithIdentifier:(id)arg1;	// IMP=0x00100000001831c1
- (id)hf_allNonEmptyActionSets;	// IMP=0x0010000000182fb7
- (id)hf_updateNetworkProtection:(long long)arg1;	// IMP=0x0010000000182c40
- (_Bool)hf_isNetworkRouterSupported;	// IMP=0x0010000000182c28
- (_Bool)hf_isNetworkCredentialManagementEnabled;	// IMP=0x0010000000182be0
- (_Bool)hf_isNetworkProtectionEnabled;	// IMP=0x0010000000182b71
- (id)hf_localizedDescriptionForNetworkProtectionSupport;	// IMP=0x0010000000182b09
- (_Bool)hf_isNetworkProtectionSupportedForHome;	// IMP=0x0010000000182af1
- (_Bool)hf_isNetworkProtectionSupportedForAccessories;	// IMP=0x0010000000182ad9
- (id)hf_zoneWithIdentifier:(id)arg1;	// IMP=0x00100000001829b1
- (id)hf_orderedActionSets;	// IMP=0x00100000001828fa
- (void)hf_setSelectedRoom:(id)arg1;	// IMP=0x0010000000182629
- (id)hf_orderedRooms;	// IMP=0x001000000018247d
- (id)hf_selectedRoom;	// IMP=0x0010000000182340
- (id)hf_roomWithName:(id)arg1;	// IMP=0x0010000000182218
- (id)hf_roomWithIdentifier:(id)arg1;	// IMP=0x00100000001820f0
- (_Bool)hf_userIsOwner:(id)arg1;	// IMP=0x00100000001820ac
- (_Bool)hf_userIsAdministrator:(id)arg1;	// IMP=0x0010000000182068
- (_Bool)hf_shouldHideResidentDeviceReachabilityIssues;	// IMP=0x0010000000181f6b
- (_Bool)hf_shouldShowNoAccessOutsideOfScheduleForRestrictedGuest:(id)arg1;	// IMP=0x0010000000181cc2
- (_Bool)hf_shouldShowNoAccessForRestrictedGuest:(id)arg1;	// IMP=0x0010000000181cb0
- (_Bool)hf_shouldBlockCurrentRestrictedGuestFromHome;	// IMP=0x0010000000181c29
- (_Bool)hf_isCurrentRestrictedGuestAwayFromHome;	// IMP=0x0010000000181a22
- (_Bool)hf_isCurrentUserInRestrictedGuestAllowedPeriod;	// IMP=0x00100000001819d1
- (_Bool)hf_isInRestrictedGuestAllowedPeriodForUser:(id)arg1;	// IMP=0x00100000001815a8
- (_Bool)hf_currentUserIsRestrictedGuest;	// IMP=0x0010000000181557
- (_Bool)hf_userIsRestrictedGuest:(id)arg1;	// IMP=0x0010000000181513
- (_Bool)hf_canAddRestrictedGuest;	// IMP=0x0010000000181313
- (_Bool)hf_canAddHomeMember;	// IMP=0x001000000018123c
- (_Bool)hf_currentUserIsOwner;	// IMP=0x00100000001811a0
- (_Bool)hf_currentUserIsAdministrator;	// IMP=0x0010000000181104
- (_Bool)hf_hasResident;	// IMP=0x00100000001810bc
- (id)hf_safeUniqueIdentifier;	// IMP=0x00100000001810aa
- (_Bool)hf_isEmpty;	// IMP=0x0010000000181015
- (_Bool)hf_isUserAtHome;	// IMP=0x0010000000181003
- (_Bool)hf_isCurrentLocationHome;	// IMP=0x0010000000180e82
- (unsigned long long)hf_remoteAccessState;	// IMP=0x0010000000180cb4
- (id)hf_suspendedStateOverrideValueProvider;	// IMP=0x0010000000180c54
- (_Bool)hf_isHomeEnergyHomeEmpty;	// IMP=0x0010000000180c1b
- (void)hf_setTemporaryEnergyLocation:(id)arg1;	// IMP=0x0010000000180bb2
- (_Bool)hf_isHomeEnergyVisible;	// IMP=0x0010000000180b6e
- (_Bool)hf_hasUtilitySubscription;	// IMP=0x0010000000180b2a
- (_Bool)hf_cachedHasEnergySite;	// IMP=0x0010000000180ae6
- (_Bool)hf_isHomeElectricitySupported;	// IMP=0x0010000000180aa2
- (_Bool)hf_isGridForecastVisible;	// IMP=0x0010000000180a5e
- (void)hf_setIsGridForecastEnabled:(_Bool)arg1;	// IMP=0x0010000000180a14
- (_Bool)hf_isGridForecastEnabled;	// IMP=0x00100000001809d0
- (_Bool)hf_isGridForecastAvailable;	// IMP=0x001000000018098c
- (_Bool)hf_isGridForecastAvailableForNewFeaturesView;	// IMP=0x0010000000180948
- (id)hf_energyManager;	// IMP=0x001000000018080f
- (id)hf_characteristicValueManagerIfCreated;	// IMP=0x00100000001807fe
- (id)hf_characteristicValueManager;	// IMP=0x00100000001806d3
- (id)hf_activeRooms;	// IMP=0x00100000001805d9
- (id)hf_allRooms;	// IMP=0x001000000018052c
@property(retain, nonatomic) NSArray *cachedPredictions;
- (id)hf_allObjectsAffectedByServiceTopic:(id)arg1;	// IMP=0x00100000002964b0
- (id)hf_applianceAccessories;	// IMP=0x001000000029635b
- (id)hf_vacuumAccessoriesAffectedByServiceTopic:(id)arg1;	// IMP=0x00100000002962ca
- (id)hf_safetyAndSecurityAccessoriesAffectedByServiceTopic:(id)arg1;	// IMP=0x0010000000296124
- (id)hf_cameraProfilesAffectedByServiceTopic:(id)arg1;	// IMP=0x0010000000295e8e
- (id)hf_servicesAffectedByServiceTopic:(id)arg1;	// IMP=0x0010000000295c25
- (id)hf_userNotificationTopicForObject:(id)arg1;	// IMP=0x0010000000295af8
- (id)hf_userNotificationTopicForCameraProfile:(id)arg1;	// IMP=0x00100000002958f8
- (id)hf_userNotificationTopicForService:(id)arg1;	// IMP=0x0010000000295782
@property(readonly, copy, nonatomic) NSArray *hf_userNotificationServiceTopics;
- (id)_hf_accessoryTopics:(_Bool)arg1;	// IMP=0x0010000000294c25
@property(readonly, nonatomic) NSArray *hf_demoModeAccessories;
- (void)hf_updateApplicationData:(id)arg1 handleError:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000002d9445
- (void)_hf_updateApplicationData:(id)arg1;	// IMP=0x00100000002d9326
- (id)hf_updateDateAdded:(id)arg1;	// IMP=0x00100000003a55af
@property(readonly, copy, nonatomic) NSDate *hf_dateAdded;
@property(readonly, copy, nonatomic) NSString *hf_displayName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end

