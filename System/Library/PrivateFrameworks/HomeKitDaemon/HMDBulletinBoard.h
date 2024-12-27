//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHomeManager, HMDUserNotificationCenter, NAFuture, NSMutableDictionary, NSObject, NSSet, NSString;
@protocol HMDDoorbellBulletinUtilities, HMDFileManager, HMDUserNotificationCenterSettingsProviding, HMMLogEventSubmitting, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDBulletinBoard : HMFObject
{
    id <HMDFileManager> _fileManager;	// 8 = 0x8
    NSSet *_notificationCategories;	// 16 = 0x10
    NAFuture *_isConfiguredFuture;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    HMDUserNotificationCenter *_notificationCenter;	// 40 = 0x28
    NSMutableDictionary *_notificationRequests;	// 48 = 0x30
    NSMutableDictionary *_characteristicTuples;	// 56 = 0x38
    HMDHomeManager *_homeManager;	// 64 = 0x40
    Class _persistentStoreClass;	// 72 = 0x48
    id <HMDDoorbellBulletinUtilities> _doorbellBulletinUtilities;	// 80 = 0x50
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 88 = 0x58
}

+ (id)logCategory;	// IMP=0x00100000004487b4
+ (void)messageAndTitleForLockUserChangeEvent:(id *)arg1 title:(id *)arg2 accessory:(id)arg3 lockDataType:(unsigned char)arg4 dataOperationType:(unsigned char)arg5 ecosystemName:(id)arg6 isAffectedUser:(_Bool)arg7;	// IMP=0x00100000004477b7
+ (id)messageForLockOperationEvent:(id)arg1 personName:(id)arg2 lockOperationType:(unsigned char)arg3 ecosystemName:(id)arg4;	// IMP=0x0010000000446fac
+ (id)messageForDoorLockAlarmEvent:(id)arg1 alarmCode:(unsigned char)arg2;	// IMP=0x0010000000446abc
+ (_Bool)presentationValueOfCharacteristic:(id)arg1 equalTo:(id)arg2;	// IMP=0x001000000044697b
+ (id)characteristicTupleKeyFromServiceContextID:(id)arg1 currentType:(id)arg2;	// IMP=0x0010000000446953
+ (unsigned long long)interruptionLevelForChangedCharacteristic:(id)arg1;	// IMP=0x00100000004466bd
+ (id)createImageAttachmentByHardLinkingFile:(id)arg1 fileManager:(id)arg2;	// IMP=0x00100000004461ee
+ (id)attachmentsWithFileURL:(id)arg1;	// IMP=0x0010000000445fca
+ (id)bulletinSupportedMatterPathsForAccessory:(id)arg1 endpointID:(id)arg2;	// IMP=0x0010000000445e81
+ (id)bulletinSupportedCharacteristicsForService:(id)arg1;	// IMP=0x0010000000445adb
+ (_Bool)isCriticalNonSecureServiceType:(id)arg1;	// IMP=0x0010000000445a7b
+ (_Bool)isBulletinSupportedForNonSecureCharacteristicType:(id)arg1 serviceType:(id)arg2;	// IMP=0x00100000004459b2
+ (_Bool)isBulletinSupportedForCharacteristicType:(id)arg1 serviceType:(id)arg2;	// IMP=0x00100000004458d5
+ (id)_supportedNonSecureServices;	// IMP=0x00100000004458a5
+ (id)_supportedSecureServices;	// IMP=0x0010000000445875
+ (id)notificationCategories;	// IMP=0x00100000004453e8
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000004453e0
+ (id)sharedBulletinBoard;	// IMP=0x00100000004453b0
- (void).cxx_destruct;	// IMP=0x0000000000437866
@property(retain) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(retain) id <HMDDoorbellBulletinUtilities> doorbellBulletinUtilities; // @synthesize doorbellBulletinUtilities=_doorbellBulletinUtilities;
@property(retain) Class persistentStoreClass; // @synthesize persistentStoreClass=_persistentStoreClass;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly) NSMutableDictionary *characteristicTuples; // @synthesize characteristicTuples=_characteristicTuples;
@property(retain) NSMutableDictionary *notificationRequests; // @synthesize notificationRequests=_notificationRequests;
@property(readonly) HMDUserNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) NAFuture *isConfiguredFuture; // @synthesize isConfiguredFuture=_isConfiguredFuture;
@property(readonly, copy) NSSet *notificationCategories; // @synthesize notificationCategories=_notificationCategories;
@property(readonly) id <HMDFileManager> fileManager; // @synthesize fileManager=_fileManager;
- (void)notificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000043763b
- (void)_handleDidReceiveNotificationResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000436e85
- (void)_updateDoorbellUserInfo:(id)arg1 withSignificantEventUserInfo:(id)arg2;	// IMP=0x0000000000436be9
- (void)_submitCameraClipSignificantEventDetailsFromBulletin:(id)arg1;	// IMP=0x0000000000436a30
- (void)_submitDoorbellEventDetailsFromBulletinWithDate:(id)arg1 significantEvents:(id)arg2;	// IMP=0x000000000043679d
- (id)_copyItemAtURL:(id)arg1 toDirectory:(id)arg2;	// IMP=0x00000000004363bd
- (id)_doorbellPressNotificationsNearDate:(id)arg1 forCameraProfile:(id)arg2;	// IMP=0x0000000000436275
- (id)notificationRequestsForCameraClipUUIDs:(id)arg1;	// IMP=0x000000000043616f
- (void)updateMessageForDoorbellPressNotificationRequestWithIdentifier:(id)arg1 cameraProfile:(id)arg2;	// IMP=0x0000000000435bc8
- (_Bool)_updateDoorbellPressNotificationsWithSignificantEventBulletin:(id)arg1;	// IMP=0x0000000000434d35
- (_Bool)_shouldPostBulletinOnCurrentValueChangeForCharacteristic:(id)arg1 includeChangeFromNil:(_Bool)arg2;	// IMP=0x0000000000434100
- (_Bool)_shouldSkipBulletinForChangedCharacteristic:(id)arg1;	// IMP=0x0000000000433c4a
- (void)_updateCharacteristicTupleFor:(id)arg1 withCurrentType:(id)arg2 changedByThisDevice:(_Bool)arg3;	// IMP=0x00000000004336fa
- (_Bool)_hasDuplicateBulletinForSnapshotCharacteristic:(id)arg1;	// IMP=0x0000000000433421
- (_Bool)_hasDuplicateBulletinForCharacteristic:(id)arg1;	// IMP=0x0000000000432fe3
- (id)_insertRequestWithTitle:(id)arg1 snapshotData:(id)arg2 message:(id)arg3 requestIdentifier:(id)arg4 date:(id)arg5 bulletinType:(unsigned long long)arg6 actionURL:(id)arg7 bulletinContext:(id)arg8 actionContext:(id)arg9 interruptionLevel:(unsigned long long)arg10 logEventTopic:(long long)arg11;	// IMP=0x0000000000432777
- (void)removeImageFilesForNotificationRequests:(id)arg1;	// IMP=0x00000000004323d8
- (id)matterEventBulletinMessageFor:(id)arg1 eventPath:(id)arg2 eventFields:(id)arg3;	// IMP=0x0000000000431676
- (void)insertBulletinForMatterEventWithAccessory:(id)arg1 eventPath:(id)arg2 eventFields:(id)arg3;	// IMP=0x00000000004314b3
- (void)insertUserPreferredHomeHubReachabilityBulletinForHome:(id)arg1 reachable:(_Bool)arg2 electedPrimary:(id)arg3 previousPrimary:(id)arg4;	// IMP=0x000000000043129c
- (void)insertBulletinForLockUserChange:(id)arg1 lockDataType:(unsigned char)arg2 dataOperationType:(unsigned char)arg3 ecosystemName:(id)arg4 isAffectedUser:(_Bool)arg5 flow:(id)arg6;	// IMP=0x000000000043116f
- (void)insertBulletinForLockOperation:(id)arg1 userDisplayName:(id)arg2 lockOperationType:(unsigned char)arg3 ecosystemName:(id)arg4 flow:(id)arg5;	// IMP=0x000000000043101b
- (void)insertBulletinForDoorLockAlarm:(id)arg1 alarmCode:(unsigned char)arg2 flow:(id)arg3;	// IMP=0x0000000000430f34
- (id)messageForWindowCharacteristic:(id)arg1 personName:(id)arg2;	// IMP=0x0000000000430840
- (id)messageForSecuritySystemCharacteristic:(id)arg1 personName:(id)arg2;	// IMP=0x00000000004300de
- (id)messageForGarageDoorCharacteristic:(id)arg1 personName:(id)arg2;	// IMP=0x000000000042f9d9
- (void)resolveDisplayNameForChangedCharacteristic:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000042f80e
- (void)insertBulletinForChangedSecureClassCharacteristic:(id)arg1 attributedUser:(id)arg2;	// IMP=0x000000000042f6fd
- (void)_insertImageBulletinsForChangedCharacteristics:(id)arg1 attributedUsers:(id)arg2 snapshotData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000042d8d0
- (id)removeRedundantSignificantEventNotificationsForSignificantEvents:(id)arg1;	// IMP=0x000000000042d6a4
- (id)titleNameForChangedCharacteristic:(id)arg1;	// IMP=0x000000000042d3c6
- (id)messageForLockCharacteristic:(id)arg1 personName:(id)arg2;	// IMP=0x000000000042cd32
- (id)messageForChangedCharacteristic:(id)arg1 withSignificantEvents:(id)arg2;	// IMP=0x000000000042c92a
- (void)addNotificationRequest:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x000000000042c776
- (void)removeNotificationRequestsWithIdentifiers:(id)arg1 shouldDeleteAttachments:(_Bool)arg2;	// IMP=0x000000000042c162
- (void)removeBulletinsUsingPredicate:(id)arg1;	// IMP=0x000000000042c04b
- (void)cullBulletinsToCount:(unsigned long long)arg1;	// IMP=0x000000000042bcfd
- (void)updateContent:(id)arg1 forNotificationWithRequestIdentifier:(id)arg2;	// IMP=0x000000000042ba7b
- (id)threadIdentifierForNotificationGroupWithHomeContextID:(id)arg1;	// IMP=0x000000000042b51d
- (id)notificationRequestsSortedByDate;	// IMP=0x000000000042b41a
- (void)removeAllBulletins;	// IMP=0x000000000042b3a9
- (void)removeBulletinWithRecordID:(id)arg1;	// IMP=0x000000000042b2f1
- (void)removeCameraClipBulletinsForCameraProfile:(id)arg1;	// IMP=0x000000000042b239
- (void)removeBulletinsForTrigger:(id)arg1;	// IMP=0x000000000042b181
- (void)removeBulletinsForService:(id)arg1;	// IMP=0x000000000042b0c9
- (void)removeBulletinsForAccessory:(id)arg1;	// IMP=0x000000000042b011
- (void)removeBulletinsForHome:(id)arg1;	// IMP=0x000000000042af59
- (void)refreshHomeBadgeNumber;	// IMP=0x000000000042ae64
- (void)insertNewRMVLanguageBulletinForHome:(id)arg1 language:(id)arg2;	// IMP=0x000000000042ad03
- (void)fetchAreUserNotificationsEnabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000042ac4b
- (void)updateDoorbellPressNotificationsWithSignificantEventBulletin:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000042ab6d
- (id)updateBulletinForFirmwareUpdateInHome:(id)arg1;	// IMP=0x000000000042a832
- (void)insertHH2DuplicateUserModelBulletinForHome:(id)arg1 user:(id)arg2;	// IMP=0x000000000042a754
- (void)insertHH2SoftwareUpdateCompleteEventBulletinForAccessory:(id)arg1;	// IMP=0x000000000042a69c
- (void)updateAudioAnalysisEventNotification:(id)arg1;	// IMP=0x000000000042a5e4
- (void)insertAudioAnalysisEventNotification:(id)arg1;	// IMP=0x000000000042a50c
- (void)insertConnectedCHIPEcosystemsChangedBulletin:(id)arg1;	// IMP=0x000000000042a424
- (void)insertCameraAccessModeChangedBulletin:(id)arg1;	// IMP=0x000000000042a33c
- (void)insertCameraClipSignificantEventBulletin:(id)arg1;	// IMP=0x000000000042a284
- (void)removeWalletKeyOnboardingBulletinForHome:(id)arg1;	// IMP=0x000000000042a1cc
- (void)insertWalletKeyExpressModeSetUpBulletinForHome:(id)arg1;	// IMP=0x000000000042a114
- (void)insertWalletKeySupportAddedBulletinForAccessory:(id)arg1;	// IMP=0x000000000042a05c
- (void)insertLockOnboardingBulletinForHome:(id)arg1 serviceType:(id)arg2;	// IMP=0x0000000000429f7e
- (void)insertAccessCodeRemovedBulletinForHome:(id)arg1;	// IMP=0x0000000000429ec6
- (void)insertAccessCodeChangedBulletinForHome:(id)arg1;	// IMP=0x0000000000429e0e
- (void)insertAccessCodeAddedBulletinForHome:(id)arg1;	// IMP=0x0000000000429d56
- (void)insertHomeHubReachabilityBulletinForHome:(id)arg1 reachable:(_Bool)arg2 hasMultipleResidents:(_Bool)arg3;	// IMP=0x0000000000429c95
- (void)insertReachabilityEventBulletinForAccessory:(id)arg1 reachable:(_Bool)arg2 date:(id)arg3;	// IMP=0x0000000000429bae
- (id)insertBulletinForSecureTrigger:(id)arg1;	// IMP=0x0000000000429a92
- (void)insertBulletinForIncompatibleInvitationFromInviterName:(id)arg1 homeName:(id)arg2;	// IMP=0x00000000004299b4
- (id)insertBulletinForIncomingInvitation:(id)arg1;	// IMP=0x000000000042972b
- (void)insertBulletinsForChangedCharacteristics:(id)arg1 modifiedCharacteristics:(id)arg2 changedByThisDevice:(_Bool)arg3 changeNotificationFromPrimary:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000004295de
- (void)insertImageBulletinsForChangedCharacteristics:(id)arg1 snapshotData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000004294ae
- (void)archive;	// IMP=0x000000000042947d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000042940d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004291b0
@property(readonly) long long bulletinNotificationsGroupTimeInterval;
- (void)configureWithHomeManager:(id)arg1;	// IMP=0x0000000000428f8f
@property(readonly, nonatomic) id <HMDUserNotificationCenterSettingsProviding> notificationCenterSettingsProvider;
- (id)initWithNotificationCenter:(id)arg1 fileManager:(id)arg2 workQueue:(id)arg3 doorbellBulletinUtilities:(id)arg4 logEventSubmitter:(id)arg5;	// IMP=0x0000000000428da9
- (id)init;	// IMP=0x0000000000428c58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

