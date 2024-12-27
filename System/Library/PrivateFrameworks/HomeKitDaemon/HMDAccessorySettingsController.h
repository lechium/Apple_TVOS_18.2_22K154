//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessorySettingGroup, HMDHome, HMFTimer, NSArray, NSMapTable, NSMutableArray, NSMutableSet, NSNotificationCenter, NSObject, NSOperationQueue, NSString, NSUUID;
@protocol HMDAccessorySettingsControllerDataSource, HMDAccessorySettingsControllerDelegate, HMDAccessorySettingsControllerDependencyFactory, HMDAccessorySettingsMessageHandler, HMDBackingStoreObjectProtocol, HMDLegacyAccessorySettingsAdaptor, HMMLogEventSubmitting, OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface HMDAccessorySettingsController : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSObject<OS_os_log> *_logger;	// 16 = 0x10
    _Bool _hasCreatedUnprocessedRootGroup;	// 24 = 0x18
    _Bool _isSettingOwner;	// 25 = 0x19
    _Bool _isMigrationOwner;	// 26 = 0x1a
    _Bool _didInitiateSettingsCreationForOlderSoftwareCounterpart;	// 27 = 0x1b
    NSMapTable *_groupsMap;	// 32 = 0x20
    NSMapTable *_settingsMap;	// 40 = 0x28
    HMDAccessorySettingGroup *_rootGroup;	// 48 = 0x30
    id <HMDBackingStoreObjectProtocol> _transactionReceiver;	// 56 = 0x38
    id <HMDAccessorySettingsControllerDependencyFactory> _factory;	// 64 = 0x40
    NSMutableArray *_allChildrenIdentifiers;	// 72 = 0x48
    id <HMDAccessorySettingsControllerDelegate> _delegate;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_workQueue;	// 88 = 0x58
    NSString *_codingKey;	// 96 = 0x60
    NSMutableSet *_dependantControllers;	// 104 = 0x68
    HMDAccessorySettingsController *_ownerController;	// 112 = 0x70
    HMFTimer *_fixupSettingsTimer;	// 120 = 0x78
    HMFTimer *_auditSettingsTimer;	// 128 = 0x80
    NSNotificationCenter *_notificationCenter;	// 136 = 0x88
    NSMutableSet *_constraintItemsMarkedForRemoval;	// 144 = 0x90
    NSOperationQueue *_constraintModifyOperationQueue;	// 152 = 0x98
    HMFTimer *_languageChangeDebounceTimer;	// 160 = 0xa0
    id <HMDLegacyAccessorySettingsAdaptor> _legacySettingsAdaptor;	// 168 = 0xa8
    id <HMDAccessorySettingsControllerDataSource> _dataSource;	// 176 = 0xb0
    NSUUID *_parentUUID;	// 184 = 0xb8
    id <HMDAccessorySettingsMessageHandler> _messageHandler;	// 192 = 0xc0
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 200 = 0xc8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000c0ed12
+ (id)logCategory;	// IMP=0x0010000000c0ece2
- (void).cxx_destruct;	// IMP=0x0000000000c097dc
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly) id <HMDAccessorySettingsMessageHandler> messageHandler; // @synthesize messageHandler=_messageHandler;
@property(readonly, copy) NSUUID *parentUUID; // @synthesize parentUUID=_parentUUID;
@property __weak id <HMDAccessorySettingsControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) id <HMDLegacyAccessorySettingsAdaptor> legacySettingsAdaptor; // @synthesize legacySettingsAdaptor=_legacySettingsAdaptor;
@property(retain, nonatomic) HMFTimer *languageChangeDebounceTimer; // @synthesize languageChangeDebounceTimer=_languageChangeDebounceTimer;
@property(retain, nonatomic) NSOperationQueue *constraintModifyOperationQueue; // @synthesize constraintModifyOperationQueue=_constraintModifyOperationQueue;
@property(nonatomic) _Bool didInitiateSettingsCreationForOlderSoftwareCounterpart; // @synthesize didInitiateSettingsCreationForOlderSoftwareCounterpart=_didInitiateSettingsCreationForOlderSoftwareCounterpart;
@property(retain, nonatomic) NSMutableSet *constraintItemsMarkedForRemoval; // @synthesize constraintItemsMarkedForRemoval=_constraintItemsMarkedForRemoval;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain) HMFTimer *auditSettingsTimer; // @synthesize auditSettingsTimer=_auditSettingsTimer;
@property(retain) HMFTimer *fixupSettingsTimer; // @synthesize fixupSettingsTimer=_fixupSettingsTimer;
@property _Bool isMigrationOwner; // @synthesize isMigrationOwner=_isMigrationOwner;
@property __weak HMDAccessorySettingsController *ownerController; // @synthesize ownerController=_ownerController;
@property(readonly) NSMutableSet *dependantControllers; // @synthesize dependantControllers=_dependantControllers;
@property(readonly) NSString *codingKey; // @synthesize codingKey=_codingKey;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) __weak id <HMDAccessorySettingsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSMutableArray *allChildrenIdentifiers; // @synthesize allChildrenIdentifiers=_allChildrenIdentifiers;
@property(readonly) id <HMDAccessorySettingsControllerDependencyFactory> factory; // @synthesize factory=_factory;
@property(readonly) id <HMDBackingStoreObjectProtocol> transactionReceiver; // @synthesize transactionReceiver=_transactionReceiver;
- (id)languageValueList;	// IMP=0x0000000000c092a6
- (void)legacySettingsAdaptor:(id)arg1 didUpdateSettingKeyPath:(id)arg2 selectedLanguageValue:(id)arg3 availableLanguageList:(id)arg4;	// IMP=0x0000000000c0914f
- (void)legacySettingsAdaptor:(id)arg1 didLoadSettingKeyPath:(id)arg2 selectedLanguageValue:(id)arg3 availableLanguageList:(id)arg4;	// IMP=0x0000000000c08fd6
- (void)legacySettingsAdaptor:(id)arg1 didUpdateSettingKeyPath:(id)arg2 numberValue:(id)arg3;	// IMP=0x0000000000c08ac2
- (void)legacySettingsAdaptor:(id)arg1 didLoadSettingKeyPath:(id)arg2 numberValue:(id)arg3;	// IMP=0x0000000000c08ab0
- (void)legacySettingsAdaptor:(id)arg1 didUpdateSettingKeyPath:(id)arg2 boolValue:(_Bool)arg3;	// IMP=0x0000000000c087aa
- (void)legacySettingsAdaptor:(id)arg1 didLoadSettingKeyPath:(id)arg2 boolValue:(_Bool)arg3;	// IMP=0x0000000000c08798
- (void)boolSettingForKeyPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000c086ba
- (void)didDetectCounterpartUsesSoftwareVersionBasedMigrationOwner;	// IMP=0x0000000000c08649
- (void)updateSettingOwner:(_Bool)arg1;	// IMP=0x0000000000c085cf
- (void)auditOnFirstFetch;	// IMP=0x0000000000c08535
- (void)removeAllDependants;	// IMP=0x0000000000c084c4
- (void)removeDependant:(id)arg1;	// IMP=0x0000000000c0840c
- (void)addDependant:(id)arg1;	// IMP=0x0000000000c08354
- (id)modelObjectsForSettings;	// IMP=0x0000000000c082f0
- (void)configureIsSettingOwner:(_Bool)arg1 migrationOwner:(_Bool)arg2 home:(id)arg3 legacySettingsAdaptor:(id)arg4;	// IMP=0x0000000000c07eee
- (void)configureIsSettingOwner:(_Bool)arg1 home:(id)arg2 legacySettingsAdaptor:(id)arg3;	// IMP=0x0000000000c07ed4
- (void)configureIsSettingOwner:(_Bool)arg1 home:(id)arg2;	// IMP=0x0000000000c07ebf
@property(readonly, copy) NSArray *childrenIdentifiers;
@property(readonly, copy) NSString *siriLanguage;
- (void)setNestedGroupsDataSourcesWithGroup:(id)arg1;	// IMP=0x0000000000c07b05
- (void)decodeWithCoder:(id)arg1;	// IMP=0x0000000000c07924
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000c0789a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000c0788c
- (void)didBecomeIndependantOwner;	// IMP=0x0000000000c0781b
- (void)didChangeDependantSettings:(id)arg1 ownerSettingsKeyPaths:(id)arg2;	// IMP=0x0000000000c0773d
- (void)didUpdateSettingConstraints:(id)arg1;	// IMP=0x0000000000c07589
- (void)didChangeSetting:(id)arg1;	// IMP=0x0000000000c07552
- (void)_didRemoveSetting:(id)arg1;	// IMP=0x0000000000c074c6
- (void)_didAddSetting:(id)arg1;	// IMP=0x0000000000c0743a
- (void)_didRemoveGroup:(id)arg1;	// IMP=0x0000000000c073ae
- (void)_didAddGroup:(id)arg1;	// IMP=0x0000000000c07322
- (void)handleLanguageChangeTimerFired;	// IMP=0x0000000000c0720c
- (void)handleRemovedSettingConstraintModel:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000c06def
- (void)handleUpdatedSettingConstraintModel:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000c0684a
- (void)handleRemovedSettingModel:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000c06563
- (void)addedSettingModel:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000c06251
- (void)updatedSetting:(id)arg1 model:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000c05d78
- (void)handleUpdatedSettingModel:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000c05c21
- (void)handleRemovedGroupModel:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000c0589b
- (void)handleUpdatedGroupModel:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000c05151
- (void)_removeManagedConfigurationProfile:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000c04e22
@property(readonly) __weak HMDHome *home;
- (id)settingForUUID:(id)arg1;	// IMP=0x0000000000c04d49
- (_Bool)canUser:(id)arg1 editConstraintsForSetting:(id)arg2;	// IMP=0x0000000000c04b98
- (_Bool)canUser:(id)arg1 editConstraintsForSettingWithKeyPath:(id)arg2;	// IMP=0x0000000000c049e7
- (void)_replaceConstraintsOnMessageToChildWithAdditions:(id)arg1 removedChildConstraints:(id)arg2 settingKeyPath:(id)arg3 senderProductClass:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000c04125
- (void)_replaceConstraintsOnSetting:(id)arg1 additions:(id)arg2 removals:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000c03387
- (void)onMessageReplaceConstraintsWithAdditions:(id)arg1 constraintIdsToRemove:(id)arg2 keyPath:(id)arg3 senderProductClass:(long long)arg4 isRemote:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000c024e7
- (void)onMessageReplaceConstraintsWithAdditions:(id)arg1 constraintIdsToRemove:(id)arg2 settingIdentifier:(id)arg3 senderProductClass:(long long)arg4 isRemote:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000c0238d
@property(readonly, copy) NSUUID *messageTargetUUID;
- (void)_cacheConstraintAdditions:(id)arg1 removals:(id)arg2 setting:(id)arg3;	// IMP=0x0000000000c0221d
- (void)onMessageUpdateConstraints:(id)arg1 keyPath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000c01a55
- (void)onMessageRemoveConstraint:(id)arg1 keyPath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000c0173a
- (void)onMessageAddConstraint:(id)arg1 keyPath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000c0141f
- (void)_runUpdateTransactionWithValue:(id)arg1 setting:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000c00ec8
- (void)_updateValue:(id)arg1 forSetting:(id)arg2 senderVersion:(id)arg3 senderProductClass:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000c00567
- (void)_onMessageUpdateValue:(id)arg1 settingKeyPath:(id)arg2 senderVersion:(id)arg3 senderProductClass:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000c0034d
- (void)onMessageUpdateValue:(id)arg1 settingKeyPath:(id)arg2 senderVersion:(id)arg3 senderProductClass:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000c00133
- (void)onMessageUpdateValue:(id)arg1 settingIdentifier:(id)arg2 senderVersion:(id)arg3 senderProductClass:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000bffef2
- (id)groupForKeyPath:(id)arg1;	// IMP=0x0000000000bffcc0
- (id)settingForKeyPath:(id)arg1;	// IMP=0x0000000000bffa8e
- (_Bool)haveGroupWithUUID:(id)arg1;	// IMP=0x0000000000bff9ec
- (void)owner:(id)arg1 didUpdateSettings:(id)arg2;	// IMP=0x0000000000bff90e
- (void)scheduleDependantFixup;	// IMP=0x0000000000bff875
- (void)_performDependantFixup;	// IMP=0x0000000000bff40c
- (void)_removeDependant:(id)arg1;	// IMP=0x0000000000bff367
- (id)mergeWithSettingsMetadata:(id)arg1;	// IMP=0x0000000000bff2d2
- (void)_migrateSettingsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000bfee89
- (void)_createSettings;	// IMP=0x0000000000bfe930
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000bfe83d
- (void)_reevaluateDependantSettings;	// IMP=0x0000000000bfe640
- (void)_performSettingsAudit;	// IMP=0x0000000000bfe40b
- (void)scheduleAuditWithReason:(unsigned long long)arg1 from:(id)arg2;	// IMP=0x0000000000bfe309
- (void)_scheduleAuditWithReason:(unsigned long long)arg1;	// IMP=0x0000000000bfdf88
- (void)settingsHierarchyDidChange;	// IMP=0x0000000000bfdcf2
- (id)_keyPathsForSettings;	// IMP=0x0000000000bfdae2
@property(retain) HMDAccessorySettingGroup *rootGroup; // @synthesize rootGroup=_rootGroup;
@property(retain) NSMapTable *settingsMap; // @synthesize settingsMap=_settingsMap;
@property(retain) NSMapTable *groupsMap; // @synthesize groupsMap=_groupsMap;
- (_Bool)hasDependants;	// IMP=0x0000000000bfd8cc
- (_Bool)isProxy;	// IMP=0x0000000000bfd8b7
@property _Bool hasCreatedUnprocessedRootGroup; // @synthesize hasCreatedUnprocessedRootGroup=_hasCreatedUnprocessedRootGroup;
@property _Bool isSettingOwner; // @synthesize isSettingOwner=_isSettingOwner;
@property(readonly, copy) NSString *description;
- (id)logIdentifier;	// IMP=0x0000000000bfd682
- (_Bool)shouldEncodeForXPCTransportForSetting:(id)arg1;	// IMP=0x0000000000bfd28e
- (_Bool)shouldEncodeForNonAdminSharedUserForSetting:(id)arg1;	// IMP=0x0000000000bfd240
- (_Bool)shouldEncodeSetting:(id)arg1 withCoder:(id)arg2 forAccessorySettingGroup:(id)arg3;	// IMP=0x0000000000bfd1aa
- (id)initWithParentUUID:(id)arg1 codingKey:(id)arg2;	// IMP=0x0000000000bfd080
- (id)initWithQueue:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3 parentUUID:(id)arg4 codingKey:(id)arg5 logEventSubmitter:(id)arg6;	// IMP=0x0000000000bfcf3f
- (id)initWithQueue:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3 parentUUID:(id)arg4 codingKey:(id)arg5 logEventSubmitter:(id)arg6 settingOwner:(_Bool)arg7 migrationOwner:(_Bool)arg8 factory:(id)arg9 rootGroup:(id)arg10 notificationCenter:(id)arg11;	// IMP=0x0000000000bfcb74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

