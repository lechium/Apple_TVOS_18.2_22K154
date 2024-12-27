//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface HMDNotificationRegistryCoreDataAdapter : HMFObject
{
    HMDHome *_home;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x0010000000cf4560
- (void).cxx_destruct;	// IMP=0x0000000000ceac7f
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
- (id)shortDescription;	// IMP=0x0000000000ceab26
- (_Bool)_insertNotificationRegistrationForMKFActionSet:(id)arg1 deviceIdsDestination:(id)arg2 homeMember:(id)arg3 context:(id)arg4;	// IMP=0x0000000000cea7f8
- (_Bool)_insertNotificationRegistrationForMediaProperty:(id)arg1 mediaProfile:(id)arg2 deviceIdsDestination:(id)arg3 homeMember:(id)arg4 accessory:(id)arg5 context:(id)arg6;	// IMP=0x0000000000cea3f4
- (_Bool)_insertNotificationRegistrationForCharacteristic:(id)arg1 notificationThreshold:(id)arg2 deviceIdsDestination:(id)arg3 homeMember:(id)arg4 mkfCharacteristic:(id)arg5 context:(id)arg6;	// IMP=0x0000000000cea1a8
- (_Bool)_updateThresholdRegistration:(id)arg1 threshold:(id)arg2;	// IMP=0x0000000000cea114
- (_Bool)_disableRegistration:(id)arg1;	// IMP=0x0000000000cea062
- (_Bool)_enableRegistration:(id)arg1;	// IMP=0x0000000000ce9fac
@property(readonly, copy) NSSet *actionSetRegistrations;
- (_Bool)hasEnabledRegistrationForActionSetUUID:(id)arg1;	// IMP=0x0000000000ce9cfa
- (id)disableAllActionSetRegistrations;	// IMP=0x0000000000ce9b0d
- (id)removeActionSetRegistrationsWithoutAllowedDestinations:(id)arg1;	// IMP=0x0000000000ce98c5
- (id)removeAllActionSetRegistrations;	// IMP=0x0000000000ce96d8
- (id)destinationsToNotifyForActionSetUUID:(id)arg1;	// IMP=0x0000000000ce951a
- (_Bool)removeRegistrationsForActionSetUUID:(id)arg1;	// IMP=0x0000000000ce93a4
- (_Bool)disableNotificationForActionSetUUID:(id)arg1 user:(id)arg2 deviceIdsDestination:(id)arg3;	// IMP=0x0000000000ce91da
- (_Bool)enableNotificationForActionSetUUID:(id)arg1 user:(id)arg2 deviceIdsDestination:(id)arg3;	// IMP=0x0000000000ce9010
@property(readonly, copy) NSSet *mediaRegistrations;
- (id)removeMediaRegistrationsWithoutAllowedDestinations:(id)arg1;	// IMP=0x0000000000ce8c67
- (id)disableAllMediaProfileRegistrations;	// IMP=0x0000000000ce8a83
- (id)removeAllMediaProfileRegistrations;	// IMP=0x0000000000ce8855
- (id)mediaPropertiesRegisteredForMediaProfileUniqueIdentifier:(id)arg1;	// IMP=0x0000000000ce869a
- (id)destinationsToNotifyForMediaPropertyResponse:(id)arg1;	// IMP=0x0000000000ce84dd
- (_Bool)removeRegistrationsForMediaProfile:(id)arg1;	// IMP=0x0000000000ce8367
- (_Bool)disableNotificationForMediaProfile:(id)arg1 mediaProperties:(id)arg2 user:(id)arg3 deviceIdsDestination:(id)arg4;	// IMP=0x0000000000ce816d
- (_Bool)enableNotificationForMediaProfile:(id)arg1 mediaProperties:(id)arg2 user:(id)arg3 deviceIdsDestination:(id)arg4;	// IMP=0x0000000000ce7f73
@property(readonly, copy) NSSet *characteristicRegistrations;
@property(readonly, copy) NSSet *enabledCharacteristicRegistrations;
- (id)removeCharacteristicRegistrationsWithoutAllowedDestinations:(id)arg1;	// IMP=0x0000000000ce7bdd
- (void)disableAllCharacteristicRegistrations;	// IMP=0x0000000000ce7af6
- (void)removeAllCharacteristicRegistrations;	// IMP=0x0000000000ce7a0f
- (id)_filterCharacteristicRegistrations:(id)arg1 home:(id)arg2;	// IMP=0x0000000000ce796d
- (id)destinationsToNotifyForCharacteristic:(id)arg1;	// IMP=0x0000000000ce77a1
- (void)removeRegistrationsForCharacteristics:(id)arg1;	// IMP=0x0000000000ce7668
- (id)_processDisableCharacteristicsRequest:(id)arg1 registrationsForAccessory:(id)arg2 context:(id)arg3;	// IMP=0x0000000000ce741c
- (id)_processEnableCharacteristicsRequest:(id)arg1 homeMember:(id)arg2 registrationsForAccessory:(id)arg3 context:(id)arg4;	// IMP=0x0000000000ce7091
- (id)_processGroupedCharacteristicsRequests:(id)arg1 user:(id)arg2 destination:(id)arg3 context:(id)arg4;	// IMP=0x0000000000ce6a46
- (id)processCharacteristicsRequests:(id)arg1;	// IMP=0x0000000000ce680b
- (id)disableNotificationForCharacteristics:(id)arg1 user:(id)arg2 deviceIdsDestination:(id)arg3;	// IMP=0x0000000000ce658d
- (_Bool)enableNotificationsForCharacteristics:(id)arg1 user:(id)arg2 deviceIdsDestination:(id)arg3;	// IMP=0x0000000000ce6348
- (id)_fetchRequestForAllActionSetRegistrations;	// IMP=0x0000000000ce6223
- (id)_fetchRequestForAllMediaProfileRegistrations;	// IMP=0x0000000000ce60fe
- (id)_fetchRequestForAllCharacteristicRegistrations;	// IMP=0x0000000000ce5ef8
- (id)_fetchRequestForActionSetRegistrationsWithoutAllowedDestinations:(id)arg1;	// IMP=0x0000000000ce5c99
- (id)_fetchRequestForMediaProfileRegistrationsWithoutAllowedDestinations:(id)arg1;	// IMP=0x0000000000ce5a3a
- (id)_fetchRequestForCharacteristicRegistrationsWithoutAllowedDestinations:(id)arg1;	// IMP=0x0000000000ce57db
- (id)_fetchMKFUserAndRegistrationsWithUserUUID:(id)arg1 actionSetUUID:(id)arg2 deviceIdsDestination:(id)arg3 prefetchPaths:(id)arg4 isRestrictedGuest:(_Bool)arg5 outHomeMember:(id *)arg6 context:(id)arg7;	// IMP=0x0000000000ce564f
- (id)_fetchMKFRegistrationsWithUserUUID:(id)arg1 actionSetUUID:(id)arg2 deviceIdsDestination:(id)arg3 prefetchPaths:(id)arg4 isRestrictedGuest:(_Bool)arg5 context:(id)arg6;	// IMP=0x0000000000ce5302
- (id)_fetchMKFUserAndRegistrationsWithUserUUID:(id)arg1 withMediaProfileUUID:(id)arg2 withMediaPropertyIn:(id)arg3 withDeviceIdsDestination:(id)arg4 withAccessoryUUID:(id)arg5 withPrefetchPaths:(id)arg6 isRestrictedGuest:(_Bool)arg7 outHomeMember:(id *)arg8 context:(id)arg9;	// IMP=0x0000000000ce5141
- (id)_fetchMKFRegistrationsWithUserUUID:(id)arg1 withMediaProfileUUID:(id)arg2 withMediaPropertyIn:(id)arg3 withDeviceIdsDestination:(id)arg4 withAccessoryUUID:(id)arg5 withPrefetchPaths:(id)arg6 isRestrictedGuest:(_Bool)arg7 context:(id)arg8;	// IMP=0x0000000000ce4d20
- (id)_fetchMKFUserAndRegistrationsWithUserUUID:(id)arg1 withCharacteristicIIDs:(id)arg2 withAccessoryUUIDs:(id)arg3 withDeviceIdsDestination:(id)arg4 withPrefetchPaths:(id)arg5 isRestrictedGuest:(_Bool)arg6 outHomeMember:(id *)arg7 context:(id)arg8;	// IMP=0x0000000000ce4a12
- (id)homeMemberForRegistrations:(id)arg1 userUUID:(id)arg2 isRestrictedGuest:(_Bool)arg3 context:(id)arg4;	// IMP=0x0000000000ce4824
- (id)_fetchMKFUserAndRegistrationsWithUserUUID:(id)arg1 withCharacteristicIIDs:(id)arg2 withAccessoryUUID:(id)arg3 withDeviceIdsDestination:(id)arg4 withPrefetchPaths:(id)arg5 isRestrictedGuest:(_Bool)arg6 outHomeMember:(id *)arg7 context:(id)arg8;	// IMP=0x0000000000ce4539
- (id)_fetchMKFRegistrationsWithUserUUID:(id)arg1 withCharacteristicIIDs:(id)arg2 withAccessoryUUIDs:(id)arg3 withDeviceIdsDestination:(id)arg4 withPrefetchPaths:(id)arg5 isRestrictedGuest:(_Bool)arg6 context:(id)arg7;	// IMP=0x0000000000ce413c
- (id)_fetchMKFRegistrationsWithUserUUID:(id)arg1 withCharacteristicIIDs:(id)arg2 withAccessoryUUID:(id)arg3 withDeviceIdsDestination:(id)arg4 withPrefetchPaths:(id)arg5 isRestrictedGuest:(_Bool)arg6 context:(id)arg7;	// IMP=0x0000000000ce3d44
- (id)_fetchMKFCharacteristicsFromHMDCharacteristics:(id)arg1 context:(id)arg2;	// IMP=0x0000000000ce3474
- (id)_fetchEnabledMKFRegistrationsForHMDCharacteristics:(id)arg1 context:(id)arg2;	// IMP=0x0000000000ce2df4
- (_Bool)_deleteAllMKFRegistrationsForActionSetUUID:(id)arg1 hmcContext:(id)arg2;	// IMP=0x0000000000ce2b83
- (id)_fetchEnabledMKFRegistrationsForActionSetUUID:(id)arg1 context:(id)arg2;	// IMP=0x0000000000ce2919
- (id)_requestToFetchMKFRegistrationsWithActionSetUUID:(id)arg1 context:(id)arg2;	// IMP=0x0000000000ce281a
- (_Bool)_deleteAllMKFRegistrationsForMediaProfileUUID:(id)arg1 withMediaProperty:(id)arg2 hmcContext:(id)arg3;	// IMP=0x0000000000ce258b
- (id)_fetchEnabledMKFRegistrationsForMediaProfileUUID:(id)arg1 withMediaProperty:(id)arg2 context:(id)arg3;	// IMP=0x0000000000ce22a2
- (id)_requestToFetchMKFRegistrationsWithMediaProfileUUID:(id)arg1 withMediaProperty:(id)arg2 context:(id)arg3;	// IMP=0x0000000000ce2149
- (_Bool)_deleteAllRegistrationsForCharacteristicIIDs:(id)arg1 withAccessoryUUID:(id)arg2 hmcContext:(id)arg3;	// IMP=0x0000000000ce1ec4
- (id)_registrationsForCharacteristicIIDs:(id)arg1 accessoryUUID:(id)arg2 moc:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000ce1d10
- (_Bool)_deleteAllCharacteristicRegistrationsWithContext:(id)arg1;	// IMP=0x0000000000ce1bfb
- (_Bool)_deleteAllRegistrationsWithEntityName:(id)arg1 withHomeKeypath:(id)arg2 hmcContext:(id)arg3;	// IMP=0x0000000000ce18ee
- (id)_fetchMKFActionSetWithUUID:(id)arg1 context:(id)arg2;	// IMP=0x0000000000ce1664
- (id)_fetchMKFHAPAccessoryWithUUID:(id)arg1 context:(id)arg2;	// IMP=0x0000000000ce13da
- (id)_fetchHomeMemberWithUUID:(id)arg1 context:(id)arg2;	// IMP=0x0000000000ce13c1
- (id)initWithHome:(id)arg1;	// IMP=0x0000000000ce135a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

