//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFAccessory-Protocol.h>
#import <HomeKitDaemon/MKFHAPAccessoryPublicExtensions-Protocol.h>

@class HMFConnectivityInfo, MKFHAPAccessoryDatabaseID, NSArray, NSData, NSDate, NSNumber, NSSet, NSString, NSUUID;
@protocol MKFHomeNetworkRouterSetting, MKFMatterPath, MKFNaturalLightingAction, MKFService, MKFUser;

@protocol MKFHAPAccessory <MKFAccessory, MKFHAPAccessoryPublicExtensions>
@property(readonly, copy, nonatomic) MKFHAPAccessoryDatabaseID *databaseID;
@property(readonly, retain, nonatomic) NSArray *matterPaths;
@property(retain, nonatomic) id <MKFHomeNetworkRouterSetting> settingNetworkRouter;
@property(readonly, retain, nonatomic) NSArray *services;
@property(readonly, retain, nonatomic) NSArray *pairedUsers;
@property(readonly, retain, nonatomic) NSArray *naturalLightingActions;
@property(readonly, retain, nonatomic) NSArray *actionCharacteristicWrites;
@property(copy, nonatomic) NSNumber *wiFiTransportCapabilities;
@property(copy, nonatomic) NSNumber *visionVoiceOverEnabled;
@property(copy, nonatomic) NSNumber *visionVoiceOverAudioDuckingEnabled;
@property(copy, nonatomic) NSNumber *visionSpeakingRate;
@property(copy, nonatomic) NSNumber *visionDoubleTapSettingsTimeoutInterval;
@property(copy, nonatomic) NSString *uniqueIdentifier;
@property(retain, nonatomic) NSArray *transportInformation;
@property(retain, nonatomic) NSArray *targetUUIDs;
@property(copy, nonatomic) NSNumber *suspendedState;
@property(copy, nonatomic) NSNumber *supportsNaturalLighting;
@property(copy, nonatomic) NSNumber *supportsNativeMatter;
@property(copy, nonatomic) NSNumber *matterYearDayScheduleCapacity;
@property(copy, nonatomic) NSNumber *matterWeekDayScheduleCapacity;
@property(copy, nonatomic) NSNumber *supportsMatterYearDaySchedule;
@property(copy, nonatomic) NSNumber *supportsMatterWeekDaySchedule;
@property(copy, nonatomic) NSNumber *mfiCertifiedACWG;
@property(copy, nonatomic) NSNumber *supportsMatterWalletKey;
@property(copy, nonatomic) NSNumber *supportsMatterAccessCode;
@property(copy, nonatomic) NSNumber *supportsMatCredACP;
@property(copy, nonatomic) NSNumber *supportsMatCredACB;
@property(copy, nonatomic) NSNumber *supportedLinkLayerTypes;
@property(copy, nonatomic) NSNumber *soundAlertEnabled;
@property(retain, nonatomic) NSData *smartBulletinBoardNotificationData;
@property(copy, nonatomic) NSNumber *sleepInterval;
@property(copy, nonatomic) NSString *siriLanguageVoiceName;
@property(copy, nonatomic) NSString *siriLanguageVoiceGenderCode;
@property(copy, nonatomic) NSString *siriLanguageVoiceCode;
@property(copy, nonatomic) NSString *siriLanguageCode;
@property(copy, nonatomic) NSNumber *siriEndpointEnabled;
@property(copy, nonatomic) NSNumber *siriEnabled;
@property(copy, nonatomic) NSNumber *shareSpeakerAnalytics;
@property(copy, nonatomic) NSNumber *shareSiriAnalytics;
@property(copy, nonatomic) NSNumber *reachabilityEventNotificationEnabled;
@property(retain, nonatomic) NSData *publicKey;
@property(copy, nonatomic) NSNumber *preferredUserSelectionType;
@property(copy, nonatomic) NSUUID *preferredMediaUserUUID;
@property(retain, nonatomic) NSData *preexistingMatCredRPK;
@property(retain, nonatomic) NSData *preexistingMatCredRGI;
@property(retain, nonatomic) NSData *preexistingMatCredGRK;
@property(retain, nonatomic) NSSet *pairingsToRemove;
@property(copy, nonatomic) NSString *pairingUsername;
@property(copy, nonatomic) NSNumber *needsPairingAudit;
@property(copy, nonatomic) NSNumber *needsOnboarding;
@property(copy, nonatomic) NSNumber *naturalLightingEnabled;
@property(copy, nonatomic) NSNumber *matterWEDSupport;
@property(copy, nonatomic) NSNumber *matterVendorID;
@property(copy, nonatomic) NSNumber *matterSoftwareVersionNumber;
@property(copy, nonatomic) NSNumber *matterProductID;
@property(retain, nonatomic) NSSet *matterPairings;
@property(copy, nonatomic) NSNumber *matterNodeID;
@property(copy, nonatomic) NSString *matterExtendedMACAddress;
@property(retain, nonatomic) NSData *matCredRGSI;
@property(copy, nonatomic) NSNumber *lightWhenUsingSiriEnabled;
@property(copy, nonatomic) NSDate *lastPairingAuditTime;
@property(copy, nonatomic) NSDate *keyUpdatedTime;
@property(copy, nonatomic) NSNumber *keyUpdatedStateNumber;
@property(copy, nonatomic) NSNumber *interactionTouchAccommodationsEnabled;
@property(copy, nonatomic) NSNumber *interactionIgnoreRepeatSeconds;
@property(copy, nonatomic) NSNumber *interactionIgnoreRepeatEnabled;
@property(copy, nonatomic) NSNumber *interactionHoldDurationSeconds;
@property(copy, nonatomic) NSNumber *interactionHoldDurationEnabled;
@property(retain, nonatomic) NSArray *initialServiceTypes;
@property(copy, nonatomic) NSNumber *hasOnboardedForNaturalLighting;
@property(copy, nonatomic) NSNumber *hasDismissedHomePodHasNonMemberMediaAccountWarning;
@property(copy, nonatomic) NSNumber *hardwareSupport;
@property(copy, nonatomic) NSNumber *enhancedAuthMethod;
@property(copy, nonatomic) NSNumber *enhancedAuthConfigNumber;
@property(copy, nonatomic) NSNumber *doorbellChimeEnabled;
@property(retain, nonatomic) HMFConnectivityInfo *connectivityInfo;
@property(copy, nonatomic) NSNumber *communicationProtocol;
@property(copy, nonatomic) NSNumber *certificationStatus;
@property(copy, nonatomic) NSNumber *cameraRecordingEventTriggers;
@property(copy, nonatomic) NSNumber *cameraCurrentAccessModeChangeReason;
@property(copy, nonatomic) NSDate *cameraCurrentAccessModeChangeDate;
@property(copy, nonatomic) NSNumber *cameraCurrentAccessMode;
@property(copy, nonatomic) NSNumber *cameraActivityZonesIncludedForSignificantEventDetection;
@property(retain, nonatomic) NSSet *cameraActivityZones;
@property(copy, nonatomic) NSNumber *cameraAccessModeNotAtHome;
@property(copy, nonatomic) NSNumber *cameraAccessModeAtHome;
@property(retain, nonatomic) NSData *broadcastKey;
@property(copy, nonatomic) NSNumber *announceEnabled;
@property(copy, nonatomic) NSNumber *airPlayEnabled;
@property(retain, nonatomic) NSData *accessorySetupHash;
@property(copy, nonatomic) NSNumber *accessoryFlags;
@property(copy, nonatomic) NSNumber *accessModeChangeNotificationEnabled;
- (void)removeMatterPathsObject:(id <MKFMatterPath>)arg1;
- (void)addMatterPathsObject:(id <MKFMatterPath>)arg1;
- (id <MKFMatterPath>)findMatterPathsRelationWithModelID:(NSUUID *)arg1;
- (id <MKFMatterPath>)materializeOrCreateMatterPathsRelationWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (void)synchronizeServicesRelationWith:(NSArray *)arg1;
- (id <MKFService>)findServicesRelationWithInstanceID:(NSNumber *)arg1;
- (id <MKFService>)materializeOrCreateServicesRelationWithInstanceID:(NSNumber *)arg1 createdNew:(_Bool *)arg2;
- (void)removePairedUsersObject:(id <MKFUser>)arg1;
- (void)addPairedUsersObject:(id <MKFUser>)arg1;
- (id <MKFNaturalLightingAction>)materializeOrCreateNaturalLightingActionsRelation:(_Bool *)arg1;
@end

