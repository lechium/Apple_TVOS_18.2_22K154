//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessorySettingsController, HMDAccessorySetupMetricDispatcher, HMDAppleMediaAccessory, HMDApplicationData, HMDBackingStore, HMDCurrentAccessorySetupMetricDispatcher, HMDHome, HMDMediaDestinationsManager, HMDMediaSession, HMDRoom, HMFActivity, HMFMessageDispatcher, HMMediaDestination, HMMediaSystemData, NSArray, NSNotificationCenter, NSObject, NSString, NSUUID;
@protocol HMDMediaDestinationManager, HMDMediaGroupsAggregateConsumerDataProvider, HMDMediaSystemDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDMediaSystem : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _supportsUserMediaSettings;	// 12 = 0xc
    NSString *_name;	// 16 = 0x10
    NSArray *_components;	// 24 = 0x18
    HMDApplicationData *_appData;	// 32 = 0x20
    HMDMediaSession *_mediaSession;	// 40 = 0x28
    NSString *_configuredName;	// 48 = 0x30
    HMMediaDestination *_audioDestination;	// 56 = 0x38
    id <HMDMediaSystemDataSource> _dataSource;	// 64 = 0x40
    NSUUID *_uuid;	// 72 = 0x48
    HMDHome *_home;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_workQueue;	// 88 = 0x58
    HMFMessageDispatcher *_msgDispatcher;	// 96 = 0x60
    HMDAccessorySettingsController *_settingsController;	// 104 = 0x68
    HMMediaSystemData *_data;	// 112 = 0x70
    HMDMediaDestinationsManager *_audioDestinationsManager;	// 120 = 0x78
    id <HMDMediaGroupsAggregateConsumerDataProvider> _aggregateDataProvider;	// 128 = 0x80
    NSNotificationCenter *_notificationCenter;	// 136 = 0x88
    CDUnknownBlockType _audioDestinationsManagerFactory;	// 144 = 0x90
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000008ce8df
+ (id)sortMediaComponents:(id)arg1;	// IMP=0x00100000008ce7f3
+ (void)_configureMediaSystemComponents:(id)arg1 mediaSystem:(id)arg2;	// IMP=0x00100000008ce604
+ (id)logCategory;	// IMP=0x00100000008ce5d4
+ (id)destinationIdentifierForComponentRoleType:(unsigned long long)arg1 components:(id)arg2;	// IMP=0x00100000008ce4cb
+ (id)initalizeDataWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 name:(id)arg3 defaultName:(_Bool)arg4 components:(id)arg5;	// IMP=0x00100000008ce359
- (void).cxx_destruct;	// IMP=0x00000000008cc806
@property(copy) CDUnknownBlockType audioDestinationsManagerFactory; // @synthesize audioDestinationsManagerFactory=_audioDestinationsManagerFactory;
@property(retain) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) id <HMDMediaGroupsAggregateConsumerDataProvider> aggregateDataProvider; // @synthesize aggregateDataProvider=_aggregateDataProvider;
@property(retain) HMDMediaDestinationsManager *audioDestinationsManager; // @synthesize audioDestinationsManager=_audioDestinationsManager;
@property(retain) HMMediaSystemData *data; // @synthesize data=_data;
@property(readonly) HMDAccessorySettingsController *settingsController; // @synthesize settingsController=_settingsController;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property __weak id <HMDMediaSystemDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)componentsSupportsHomeLevelLocationServiceSetting;	// IMP=0x00000000008cc508
- (void)languagesChangedForAccessorySettingsController:(id)arg1;	// IMP=0x00000000008cc502
- (id)assistantAccessControlModelWithRemovedAccessoriesForAccessorySettingsController:(id)arg1;	// IMP=0x00000000008cc271
- (id)remoteMessageDestinationForAccessorySettingsController:(id)arg1 target:(id)arg2;	// IMP=0x00000000008cc19c
- (id)supportedMultiUserLanguageCodesForAccessorySettingsController:(id)arg1;	// IMP=0x00000000008cc14c
- (_Bool)isMultiUserEnabledForAccessorySettingsController:(id)arg1;	// IMP=0x00000000008cc108
- (void)accessorySettingsController:(id)arg1 saveWithReason:(id)arg2;	// IMP=0x00000000008cc04a
- (void)accessorySettingsController:(id)arg1 saveWithReason:(id)arg2 model:(id)arg3;	// IMP=0x00000000008cbfca
- (id)modelsToMigrateSettingsForController:(id)arg1;	// IMP=0x00000000008cba6a
- (id)modelsToMakeSettingsForController:(id)arg1 parentUUID:(id)arg2;	// IMP=0x00000000008cb38b
- (void)removeManagedConfigurationProfileWithProfileData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000008cb24c
@property(readonly) HMDCurrentAccessorySetupMetricDispatcher *currentAccessorySetupMetricDispatcher;
@property double setupStartTimestamp;
@property(retain) HMFActivity *setupActivity;
@property(readonly) HMDAccessorySetupMetricDispatcher *accessorySetupMetricDispatcher;
@property(readonly) HMDBackingStore *backingStore;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x00000000008cabe0
- (id)backingStoreObjectsForVersion:(long long)arg1;	// IMP=0x00000000008caae4
- (void)mergeMediaSystemData:(id)arg1;	// IMP=0x00000000008ca988
- (void)mergeAudioDestination:(id)arg1;	// IMP=0x00000000008ca91f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000008ca68f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000008ca34c
- (void)_appDataRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000008ca1f1
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000008c9f4e
- (void)_appDataUpdated:(id)arg1 message:(id)arg2;	// IMP=0x00000000008c9cd8
- (void)_transactionMediaSystemUpdated:(id)arg1 message:(id)arg2;	// IMP=0x00000000008c94d6
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000008c908f
- (id)targetAccessoryBySerial;	// IMP=0x00000000008c8c2c
@property(readonly, nonatomic) HMDAppleMediaAccessory *targetAccessory;
@property(retain, nonatomic) HMDApplicationData *appData; // @synthesize appData=_appData;
@property(retain, nonatomic) HMDMediaSession *mediaSession; // @synthesize mediaSession=_mediaSession;
@property(readonly, nonatomic) NSArray *accessories;
- (void)setComponents:(id)arg1;	// IMP=0x00000000008c877d
- (id)legacyComponents;	// IMP=0x00000000008c871d
- (id)generateComponents;	// IMP=0x00000000008c8629
@property(readonly, copy, nonatomic) NSArray *components; // @synthesize components=_components;
@property(copy, nonatomic) NSString *configuredName; // @synthesize configuredName=_configuredName;
- (id)legacyConfiguredName;	// IMP=0x00000000008c8500
@property(readonly) HMDRoom *room;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)legacyName;	// IMP=0x00000000008c82b0
- (id)serialize;	// IMP=0x00000000008c7e89
- (void)relayMessage:(id)arg1;	// IMP=0x00000000008c7888
- (void)handleAccessorySoftwareUpdated:(id)arg1;	// IMP=0x00000000008c77d0
- (void)handleRemovedAccessory:(id)arg1;	// IMP=0x00000000008c77be
- (void)_updateAppData:(id)arg1;	// IMP=0x00000000008c7439
- (void)_handleAppData:(id)arg1;	// IMP=0x00000000008c72ae
- (void)_routeUpdateMediaSystem:(id)arg1;	// IMP=0x00000000008c7227
- (void)_registerForNotifications;	// IMP=0x00000000008c717e
- (void)_registerForMessages;	// IMP=0x00000000008c6e81
- (void)auditMediaComponents;	// IMP=0x00000000008c6d20
- (void)unconfigureMediaSystemComponents:(id)arg1;	// IMP=0x00000000008c6c77
- (void)unconfigureMediaSystemComponents;	// IMP=0x00000000008c6c06
- (void)mediaDestinationsManager:(id)arg1 didUpdateDestination:(id)arg2;	// IMP=0x00000000008c6a59
- (id)mediaDestinationsManager:(id)arg1 destinationControllerWithIdentifier:(id)arg2;	// IMP=0x00000000008c69df
- (id)associatedDestinationManagersForMediaDestinationsManager:(id)arg1;	// IMP=0x00000000008c69cd
- (id)mediaGroupsAggregatorMessengerForMediaDestinationsManager:(id)arg1;	// IMP=0x00000000008c6838
- (id)targetAccessoryForMediaDestinationManager:(id)arg1;	// IMP=0x00000000008c6826
- (_Bool)isCurrentComponent;	// IMP=0x00000000008c67db
- (id)destinationControllerGroupedWithAssociatedDestination;	// IMP=0x00000000008c65ed
- (void)repairAnyPreExistingAudioGroups;	// IMP=0x00000000008c6355
- (id)createNewAudioDestination;	// IMP=0x00000000008c61f7
- (void)configureAudioDestinationsManager;	// IMP=0x00000000008c6075
@property(readonly, copy) NSArray *associatedAudioDestinationManagers;
- (id)legacyAudioDestination;	// IMP=0x00000000008c5e31
@property(readonly) HMMediaDestination *audioDestination; // @synthesize audioDestination=_audioDestination;
@property(readonly) id <HMDMediaDestinationManager> audioDestinationManager;
- (id)audioDestinationIdentifier;	// IMP=0x00000000008c5b73
- (void)configureMediaSystemComponents:(id)arg1;	// IMP=0x00000000008c5abb
- (void)configureWithMessageDispatcher:(id)arg1;	// IMP=0x00000000008c5564
@property(readonly) _Bool supportsUserMediaSettings; // @synthesize supportsUserMediaSettings=_supportsUserMediaSettings;
- (_Bool)isValid;	// IMP=0x00000000008c538f
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

- (id)messageDestination;	// IMP=0x00000000008c5314
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)dumpState;	// IMP=0x00000000008c52fa
- (void)dealloc;	// IMP=0x00000000008c51fb
- (id)logIdentifier;	// IMP=0x00000000008c51ab
- (id)attributeDescriptions;	// IMP=0x00000000008c4f29
- (id)privateDescription;	// IMP=0x00000000008c4f17
- (id)modelForMediaSystem;	// IMP=0x00000000008c4e92
- (id)initWithMediaSystemModel:(id)arg1 home:(id)arg2;	// IMP=0x00000000008c4bd6
- (id)initWithUUID:(id)arg1 configuredName:(id)arg2 home:(id)arg3 data:(id)arg4 components:(id)arg5 settingsControllerCreator:(CDUnknownBlockType)arg6;	// IMP=0x00000000008c48f4
- (id)initWithUUID:(id)arg1 configuredName:(id)arg2 home:(id)arg3 data:(id)arg4 components:(id)arg5;	// IMP=0x00000000008c465b
- (id)initWithMediaSystemData:(id)arg1 home:(id)arg2;	// IMP=0x00000000008c4595
- (id)assistantObject;	// IMP=0x00000000009ab6ce
- (id)urlString;	// IMP=0x00000000009ab67a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

