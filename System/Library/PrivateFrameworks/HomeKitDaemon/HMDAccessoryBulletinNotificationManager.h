//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAppleAccountManager, HMDBulletinNotificationRegistrationSource, HMDHome, HMDNotificationConditionEvaluator, HMFTimer, NSArray, NSNotificationCenter, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessoryBulletinNotificationManager : HMFObject
{
    _Bool _currentPrimary;	// 8 = 0x8
    HMDAppleAccountManager *_accountManager;	// 16 = 0x10
    NSNotificationCenter *_notificationCenter;	// 24 = 0x18
    CDUnknownBlockType _synchronizeWithPrimaryDebounceTimerFactory;	// 32 = 0x20
    HMDHome *_home;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    HMFTimer *_synchronizeWithPrimaryDebounceTimer;	// 56 = 0x38
    HMDNotificationConditionEvaluator *_evaluator;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x0010000000aafd9a
+ (id)_characteristicBulletinRegistrationsForSource:(id)arg1 context:(id)arg2;	// IMP=0x0010000000aaf921
+ (id)matterBulletinRegistrationsForSource:(id)arg1 context:(id)arg2;	// IMP=0x001000000084b9a2
- (void).cxx_destruct;	// IMP=0x0000000000aa8d18
@property(readonly) HMDNotificationConditionEvaluator *evaluator; // @synthesize evaluator=_evaluator;
@property(retain) HMFTimer *synchronizeWithPrimaryDebounceTimer; // @synthesize synchronizeWithPrimaryDebounceTimer=_synchronizeWithPrimaryDebounceTimer;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
@property(copy) CDUnknownBlockType synchronizeWithPrimaryDebounceTimerFactory; // @synthesize synchronizeWithPrimaryDebounceTimerFactory=_synchronizeWithPrimaryDebounceTimerFactory;
@property _Bool currentPrimary; // @synthesize currentPrimary=_currentPrimary;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) HMDAppleAccountManager *accountManager; // @synthesize accountManager=_accountManager;
- (id)logIdentifier;	// IMP=0x0000000000aa8bbd
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000aa8a25
- (void)handleCurrentDeviceOrAccountUpdatedNotification:(id)arg1;	// IMP=0x0000000000aa896d
- (void)handlePrimaryResidentUpdateNotification:(id)arg1;	// IMP=0x0000000000aa88b5
- (id)_accessoryRegistrationFromMKFRegistrationSafe:(id)arg1;	// IMP=0x0000000000aa829e
- (id)_mkfLocalServiceRegistrationsWithManagedObjectContext:(id)arg1;	// IMP=0x0000000000aa807a
- (id)_mkfLocalCharacteristicRegistrationsWithManagedObjectContext:(id)arg1;	// IMP=0x0000000000aa7e56
- (id)currentHomeAccessoryUUIDs;	// IMP=0x0000000000aa7da7
- (void)_updateRegistrationsOnPrimaryWithEnabledRegistrations:(id)arg1 disabledRegistrations:(id)arg2;	// IMP=0x0000000000aa79de
- (void)_handleCurrentDeviceOrAccountUpdatedNotification:(id)arg1;	// IMP=0x0000000000aa78aa
- (void)_handlePrimaryResidentUpdateNotification:(id)arg1;	// IMP=0x0000000000aa7671
- (void)_synchronizeLocalRegistrationsWithPrimaryResident;	// IMP=0x0000000000aa6a96
- (void)requestSynchronizeRegistrations;	// IMP=0x0000000000aa6908
- (void)_handleDeviceBecameNotPrimary;	// IMP=0x0000000000aa678c
- (void)_handleDeviceBecamePrimary;	// IMP=0x0000000000aa660d
- (void)_handleAccessoryBulletinNotificationRegistration:(id)arg1 removed:(_Bool)arg2;	// IMP=0x0000000000aa6256
- (id)_updateReasonsByCharacteristicFromMessage:(id)arg1;	// IMP=0x0000000000aa5bd7
- (id)_characteristicsWithPassingLocalRegistrationForCharacteristics:(id)arg1;	// IMP=0x0000000000aa5aff
- (id)_devicesToNotifyForCharacteristic:(id)arg1;	// IMP=0x0000000000aa59eb
- (void)handleRemovedAccessory:(id)arg1;	// IMP=0x0000000000aa576b
- (void)handleRemovedService:(id)arg1;	// IMP=0x0000000000aa54ed
- (void)handleEnabledRegistrations:(id)arg1;	// IMP=0x0000000000aa5435
- (void)handleDisabledRegistrations:(id)arg1;	// IMP=0x0000000000aa537d
- (id)conditionsFromPredicate:(id)arg1;	// IMP=0x0000000000aa5364
- (id)bulletinCharacteristicsFromChangedCharacteristics:(id)arg1 message:(id)arg2;	// IMP=0x0000000000aa4656
- (id)characteristicsByDestinationForCharacteristics:(id)arg1;	// IMP=0x0000000000aa4582
- (id)accessoryBulletinNotificationRegistrationsForCharacteristic:(id)arg1;	// IMP=0x0000000000aa43ec
- (void)updateRegistrationsWithEnabledCharacteristics:(id)arg1 disabledCharacteristics:(id)arg2 conditions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000aa4039
- (void)updateServiceGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000aa3d66
- (void)disableBulletinForService:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000aa3b37
- (void)enableBulletinForService:(id)arg1 conditions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000aa38b8
- (id)bulletinBoardNotificationForService:(id)arg1;	// IMP=0x0000000000aa33f5
- (void)configureWithDeviceIsResidentCapable:(_Bool)arg1;	// IMP=0x0000000000aa2b6b
@property(readonly) HMDBulletinNotificationRegistrationSource *source;
@property(readonly) NSArray *accessoryRegistrationsForCurrentDevice;
@property(readonly) NSArray *accessoryRegistrations;
- (id)_characteristicsRegistrationsFromBulletinRegistrations:(id)arg1;	// IMP=0x0000000000aa24d0
@property(readonly) NSArray *serviceRegistrationsForCurrentDevice;
- (id)initWithHome:(id)arg1 workQueue:(id)arg2 accountManager:(id)arg3 evaluator:(id)arg4 notificationCenter:(id)arg5;	// IMP=0x0000000000aa2200
- (id)matterRegistrationFromMKFRegistrationSafe:(id)arg1;	// IMP=0x00000000008478bd
- (id)mkfLocalMatterRegistrationsWithManagedObjectContext:(id)arg1;	// IMP=0x0000000000847699
- (void)updateEndpointRegistrationsForAccessory:(id)arg1 endpoints:(id)arg2;	// IMP=0x0000000000847527
- (id)devicesToNotifyForMatterPath:(id)arg1;	// IMP=0x0000000000847413
- (void)handleRemovedEndpoint:(id)arg1 fromAccessory:(id)arg2;	// IMP=0x00000000008471a1
- (id)matterBulletinNotificationRegistrationsForMatterPath:(id)arg1;	// IMP=0x000000000084700b
- (void)updateRegistrationsWithEnabledMatterPaths:(id)arg1 disabledMatterPaths:(id)arg2 conditions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000846c4f
- (void)disableBulletinForAccessory:(id)arg1 endpointID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000846a17
- (void)enableBulletinForAccessory:(id)arg1 endpointID:(id)arg2 conditions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000008467a6
- (id)bulletinBoardNotificationForAccessory:(id)arg1 endpointID:(id)arg2;	// IMP=0x000000000084643a
@property(readonly) NSArray *matterRegistrations;
- (id)_matterRegistrationsFromBulletinRegistrations:(id)arg1;	// IMP=0x00000000008461ff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

