//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMCPartition, HMDBackingStore, HMDManagedObjectContext, NSString;
@protocol MKFHomeManager;

__attribute__((visibility("hidden")))
@interface HMCContext : HMFObject
{
    _Bool _isExecuting;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_transactionAuthor;	// 24 = 0x18
    HMDManagedObjectContext *_managedObjectContext;	// 32 = 0x20
    HMCPartition *_partition;	// 40 = 0x28
    HMDBackingStore *_backingStore;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x001000000040e1ae
+ (id)findModelObjectOfType:(id)arg1 parentObjectID:(id)arg2 template:(id)arg3 substitutions:(id)arg4 error:(id *)arg5;	// IMP=0x001000000040e191
+ (id)findModelObjectOfType:(id)arg1 template:(id)arg2 substitutions:(id)arg3 error:(id *)arg4;	// IMP=0x001000000040e179
+ (id)findModelObjectOfType:(id)arg1 databaseID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000040e060
+ (id)findAllModelsOfType:(id)arg1 error:(id *)arg2;	// IMP=0x001000000040dff6
+ (id)findModelWithModelID:(id)arg1 ofType:(id)arg2 error:(id *)arg3;	// IMP=0x001000000040dec8
+ (Class)managedObjectClassFromProtocol:(id)arg1;	// IMP=0x001000000040de3d
+ (_Bool)managedObjectIsMKF:(id)arg1;	// IMP=0x001000000040dddd
+ (id)currentContext;	// IMP=0x001000000040dd7a
+ (id)findServiceGroupWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001387da
+ (id)findServiceGroupWithModelID:(id)arg1;	// IMP=0x00100000001387bf
+ (id)findServiceGroupWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000138799
+ (id)findServiceGroupWithDatabaseID:(id)arg1;	// IMP=0x0010000000138773
+ (id)findAccountWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000165174
+ (id)findAccountWithModelID:(id)arg1;	// IMP=0x0010000000165159
+ (id)findAccountWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000165133
+ (id)findAccountWithDatabaseID:(id)arg1;	// IMP=0x001000000016510d
+ (id)findCharacteristicWriteActionWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001884c3
+ (id)findCharacteristicWriteActionWithModelID:(id)arg1;	// IMP=0x00100000001884a8
+ (id)findCharacteristicWriteActionWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000188482
+ (id)findCharacteristicWriteActionWithDatabaseID:(id)arg1;	// IMP=0x001000000018845c
+ (id)findDurationEventWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001c38f6
+ (id)findDurationEventWithModelID:(id)arg1;	// IMP=0x00100000001c38db
+ (id)findDurationEventWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001c38b5
+ (id)findDurationEventWithDatabaseID:(id)arg1;	// IMP=0x00100000001c388f
+ (id)findPhotosPersonWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001d117c
+ (id)findPhotosPersonWithModelID:(id)arg1;	// IMP=0x00100000001d1161
+ (id)findPhotosPersonWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001d113b
+ (id)findPhotosPersonWithDatabaseID:(id)arg1;	// IMP=0x00100000001d1115
+ (id)findHomePersonManagerSettingWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001d358a
+ (id)findHomePersonManagerSettingWithModelID:(id)arg1;	// IMP=0x00100000001d356f
+ (id)findHomePersonManagerSettingWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001d3549
+ (id)findHomePersonManagerSettingWithDatabaseID:(id)arg1;	// IMP=0x00100000001d3523
+ (id)findHomeManagerHomeWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000002feb92
+ (id)findHomeManagerHomeWithModelID:(id)arg1;	// IMP=0x00100000002feb77
+ (id)findHomeManagerHomeWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000002feb51
+ (id)findHomeManagerHomeWithDatabaseID:(id)arg1;	// IMP=0x00100000002feb2b
+ (id)findAccessoryWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000035dc56
+ (id)findAccessoryWithModelID:(id)arg1;	// IMP=0x001000000035dc3b
+ (id)findAccessoryWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000035dc15
+ (id)findAccessoryWithDatabaseID:(id)arg1;	// IMP=0x001000000035dbef
+ (id)findMediaPlaybackActionWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000037e603
+ (id)findMediaPlaybackActionWithModelID:(id)arg1;	// IMP=0x001000000037e5e8
+ (id)findMediaPlaybackActionWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000037e5c2
+ (id)findMediaPlaybackActionWithDatabaseID:(id)arg1;	// IMP=0x001000000037e59c
+ (id)findMatterAttributeValueEventWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000003a207f
+ (id)findMatterAttributeValueEventWithModelID:(id)arg1;	// IMP=0x00100000003a2064
+ (id)findMatterAttributeValueEventWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000003a203e
+ (id)findMatterAttributeValueEventWithDatabaseID:(id)arg1;	// IMP=0x00100000003a2018
+ (id)findSignificantTimeEventWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000003e4410
+ (id)findSignificantTimeEventWithModelID:(id)arg1;	// IMP=0x00100000003e43f5
+ (id)findSignificantTimeEventWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000003e43cf
+ (id)findSignificantTimeEventWithDatabaseID:(id)arg1;	// IMP=0x00100000003e43a9
+ (id)synchronizationTokenFromLegacyModelID:(id)arg1;	// IMP=0x001000000040e873
+ (id)findInvitationWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000004259cb
+ (id)findInvitationWithModelID:(id)arg1;	// IMP=0x00100000004259b0
+ (id)findInvitationWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000042598a
+ (id)findInvitationWithDatabaseID:(id)arg1;	// IMP=0x0010000000425964
+ (id)findTimePeriodBulletinConditionWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000461267
+ (id)findTimePeriodBulletinConditionWithModelID:(id)arg1;	// IMP=0x001000000046124c
+ (id)findTimePeriodBulletinConditionWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000461226
+ (id)findTimePeriodBulletinConditionWithDatabaseID:(id)arg1;	// IMP=0x0010000000461200
+ (id)findPresenceBulletinConditionWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000491ada
+ (id)findPresenceBulletinConditionWithModelID:(id)arg1;	// IMP=0x0010000000491abf
+ (id)findPresenceBulletinConditionWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000491a99
+ (id)findPresenceBulletinConditionWithDatabaseID:(id)arg1;	// IMP=0x0010000000491a73
+ (id)findIncomingInvitationWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000495839
+ (id)findIncomingInvitationWithModelID:(id)arg1;	// IMP=0x001000000049581e
+ (id)findIncomingInvitationWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000004957f8
+ (id)findIncomingInvitationWithDatabaseID:(id)arg1;	// IMP=0x00100000004957d2
+ (id)findTimeOfDayTimeSpecificationWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000049a21f
+ (id)findTimeOfDayTimeSpecificationWithModelID:(id)arg1;	// IMP=0x001000000049a204
+ (id)findTimeOfDayTimeSpecificationWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000049a1de
+ (id)findTimeOfDayTimeSpecificationWithDatabaseID:(id)arg1;	// IMP=0x001000000049a1b8
+ (id)findCalendarEventWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000004a738b
+ (id)findCalendarEventWithModelID:(id)arg1;	// IMP=0x00100000004a7370
+ (id)findCalendarEventWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000004a734a
+ (id)findCalendarEventWithDatabaseID:(id)arg1;	// IMP=0x00100000004a7324
+ (id)findHomeWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000004b3abc
+ (id)findHomeWithModelID:(id)arg1;	// IMP=0x00100000004b3aa1
+ (id)findHomeWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000004b3a7b
+ (id)findHomeWithDatabaseID:(id)arg1;	// IMP=0x00100000004b3a55
+ (id)findLocationEventWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000004b3f18
+ (id)findLocationEventWithModelID:(id)arg1;	// IMP=0x00100000004b3efd
+ (id)findLocationEventWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000004b3ed7
+ (id)findLocationEventWithDatabaseID:(id)arg1;	// IMP=0x00100000004b3eb1
+ (id)findHomeThreadNetworkWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000004cab91
+ (id)findHomeThreadNetworkWithModelID:(id)arg1;	// IMP=0x00100000004cab76
+ (id)findHomeThreadNetworkWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000004cab50
+ (id)findHomeThreadNetworkWithDatabaseID:(id)arg1;	// IMP=0x00100000004cab2a
+ (id)findIntegerCharacteristicWithInstanceID:(id)arg1 serviceDatabaseID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000004f4e3c
+ (id)findIntegerCharacteristicWithInstanceID:(id)arg1 serviceDatabaseID:(id)arg2;	// IMP=0x00100000004f4e20
+ (id)findIntegerCharacteristicWithInstanceID:(id)arg1 service:(id)arg2 error:(id *)arg3;	// IMP=0x00100000004f4cbe
+ (id)findIntegerCharacteristicWithInstanceID:(id)arg1 service:(id)arg2;	// IMP=0x00100000004f4ca2
+ (id)findIntegerCharacteristicWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000004f4c7c
+ (id)findIntegerCharacteristicWithDatabaseID:(id)arg1;	// IMP=0x00100000004f4c56
+ (id)findHomeSettingWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000005037be
+ (id)findHomeSettingWithModelID:(id)arg1;	// IMP=0x00100000005037a3
+ (id)findHomeSettingWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000050377d
+ (id)findHomeSettingWithDatabaseID:(id)arg1;	// IMP=0x0010000000503757
+ (id)findUserWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000052f344
+ (id)findUserWithModelID:(id)arg1;	// IMP=0x001000000052f329
+ (id)findUserWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000052f303
+ (id)findUserWithDatabaseID:(id)arg1;	// IMP=0x001000000052f2dd
+ (id)findDeviceWithDeviceIdentifier:(id)arg1;	// IMP=0x001000000054125c
+ (id)findDeviceWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000005413da
+ (id)findDeviceWithModelID:(id)arg1;	// IMP=0x00100000005413bf
+ (id)findDeviceWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000541399
+ (id)findDeviceWithDatabaseID:(id)arg1;	// IMP=0x0010000000541373
+ (id)findBulletinTimeSpecificationWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000541c76
+ (id)findBulletinTimeSpecificationWithModelID:(id)arg1;	// IMP=0x0010000000541c5b
+ (id)findBulletinTimeSpecificationWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000541c35
+ (id)findBulletinTimeSpecificationWithDatabaseID:(id)arg1;	// IMP=0x0010000000541c0f
+ (id)findAppleMediaAccessoryPowerActionWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000054209b
+ (id)findAppleMediaAccessoryPowerActionWithModelID:(id)arg1;	// IMP=0x0010000000542080
+ (id)findAppleMediaAccessoryPowerActionWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000054205a
+ (id)findAppleMediaAccessoryPowerActionWithDatabaseID:(id)arg1;	// IMP=0x0010000000542034
+ (id)findHomeNetworkRouterManagingDeviceSettingWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000054cab1
+ (id)findHomeNetworkRouterManagingDeviceSettingWithModelID:(id)arg1;	// IMP=0x001000000054ca96
+ (id)findHomeNetworkRouterManagingDeviceSettingWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000054ca70
+ (id)findHomeNetworkRouterManagingDeviceSettingWithDatabaseID:(id)arg1;	// IMP=0x001000000054ca4a
+ (id)findAirPlayAccessoryWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000005655ca
+ (id)findAirPlayAccessoryWithModelID:(id)arg1;	// IMP=0x00100000005655af
+ (id)findAirPlayAccessoryWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000565589
+ (id)findAirPlayAccessoryWithDatabaseID:(id)arg1;	// IMP=0x0010000000565563
+ (id)findHomeAccessCodeWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000565f49
+ (id)findHomeAccessCodeWithModelID:(id)arg1;	// IMP=0x0010000000565f2e
+ (id)findHomeAccessCodeWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000565f08
+ (id)findHomeAccessCodeWithDatabaseID:(id)arg1;	// IMP=0x0010000000565ee2
+ (id)findMatterBulletinRegistrationWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000573934
+ (id)findMatterBulletinRegistrationWithModelID:(id)arg1;	// IMP=0x0010000000573919
+ (id)findMatterBulletinRegistrationWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000005738f3
+ (id)findMatterBulletinRegistrationWithDatabaseID:(id)arg1;	// IMP=0x00100000005738cd
+ (id)findPresenceEventWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000057402a
+ (id)findPresenceEventWithModelID:(id)arg1;	// IMP=0x001000000057400f
+ (id)findPresenceEventWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000573fe9
+ (id)findPresenceEventWithDatabaseID:(id)arg1;	// IMP=0x0010000000573fc3
+ (id)findPersonWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000059005d
+ (id)findPersonWithModelID:(id)arg1;	// IMP=0x0010000000590042
+ (id)findPersonWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000059001c
+ (id)findPersonWithDatabaseID:(id)arg1;	// IMP=0x001000000058fff6
+ (id)findGuestAccessCodeWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000594151
+ (id)findGuestAccessCodeWithModelID:(id)arg1;	// IMP=0x0010000000594136
+ (id)findGuestAccessCodeWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000594110
+ (id)findGuestAccessCodeWithDatabaseID:(id)arg1;	// IMP=0x00100000005940ea
+ (id)findRoomWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000005961ff
+ (id)findRoomWithModelID:(id)arg1;	// IMP=0x00100000005961e4
+ (id)findRoomWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000005961be
+ (id)findRoomWithDatabaseID:(id)arg1;	// IMP=0x0010000000596198
+ (id)findServiceWithInstanceID:(id)arg1 accessoryDatabaseID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000063ff21
+ (id)findServiceWithInstanceID:(id)arg1 accessoryDatabaseID:(id)arg2;	// IMP=0x001000000063ff05
+ (id)findServiceWithInstanceID:(id)arg1 accessory:(id)arg2 error:(id *)arg3;	// IMP=0x001000000063fda3
+ (id)findServiceWithInstanceID:(id)arg1 accessory:(id)arg2;	// IMP=0x001000000063fd87
+ (id)findServiceWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000063fc57
+ (id)findServiceWithModelID:(id)arg1;	// IMP=0x001000000063fc3c
+ (id)findServiceWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000063fc16
+ (id)findServiceWithDatabaseID:(id)arg1;	// IMP=0x001000000063fbf0
+ (id)findHAPMetadataWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000650f85
+ (id)findHAPMetadataWithModelID:(id)arg1;	// IMP=0x0010000000650f6a
+ (id)findHAPMetadataWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000650f44
+ (id)findHAPMetadataWithDatabaseID:(id)arg1;	// IMP=0x0010000000650f1e
+ (id)findHomeNetworkRouterSettingWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000651446
+ (id)findHomeNetworkRouterSettingWithModelID:(id)arg1;	// IMP=0x001000000065142b
+ (id)findHomeNetworkRouterSettingWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000651405
+ (id)findHomeNetworkRouterSettingWithDatabaseID:(id)arg1;	// IMP=0x00100000006513df
+ (id)findCameraAccessModeBulletinRegistrationWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000654893
+ (id)findCameraAccessModeBulletinRegistrationWithModelID:(id)arg1;	// IMP=0x0010000000654878
+ (id)findCameraAccessModeBulletinRegistrationWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000654852
+ (id)findCameraAccessModeBulletinRegistrationWithDatabaseID:(id)arg1;	// IMP=0x001000000065482c
+ (id)findCameraSignificantEventBulletinRegistrationWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000069021d
+ (id)findCameraSignificantEventBulletinRegistrationWithModelID:(id)arg1;	// IMP=0x0010000000690202
+ (id)findCameraSignificantEventBulletinRegistrationWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000006901dc
+ (id)findCameraSignificantEventBulletinRegistrationWithDatabaseID:(id)arg1;	// IMP=0x00100000006901b6
+ (id)findResidentSelectionWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000699c29
+ (id)findResidentSelectionWithModelID:(id)arg1;	// IMP=0x0010000000699c0e
+ (id)findResidentSelectionWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000699be8
+ (id)findResidentSelectionWithDatabaseID:(id)arg1;	// IMP=0x0010000000699bc2
+ (id)findCharacteristicValueEventWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000006c2315
+ (id)findCharacteristicValueEventWithModelID:(id)arg1;	// IMP=0x00100000006c22fa
+ (id)findCharacteristicValueEventWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000006c22d4
+ (id)findCharacteristicValueEventWithDatabaseID:(id)arg1;	// IMP=0x00100000006c22ae
+ (id)findResidentWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000006f6f6d
+ (id)findResidentWithModelID:(id)arg1;	// IMP=0x00100000006f6f52
+ (id)findResidentWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000006f6f2c
+ (id)findResidentWithDatabaseID:(id)arg1;	// IMP=0x00100000006f6f06
+ (id)findAppleMediaAccessoryWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000070c898
+ (id)findAppleMediaAccessoryWithModelID:(id)arg1;	// IMP=0x001000000070c87d
+ (id)findAppleMediaAccessoryWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000070c857
+ (id)findAppleMediaAccessoryWithDatabaseID:(id)arg1;	// IMP=0x001000000070c831
+ (id)findUserAccessCodeWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000714a5f
+ (id)findUserAccessCodeWithModelID:(id)arg1;	// IMP=0x0010000000714a44
+ (id)findUserAccessCodeWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000714a1e
+ (id)findUserAccessCodeWithDatabaseID:(id)arg1;	// IMP=0x00100000007149f8
+ (id)findActionWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000071623c
+ (id)findActionWithModelID:(id)arg1;	// IMP=0x0010000000716221
+ (id)findActionWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000007161fb
+ (id)findActionWithDatabaseID:(id)arg1;	// IMP=0x00100000007161d5
+ (id)findHomeManagerWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000079829a
+ (id)findHomeManagerWithModelID:(id)arg1;	// IMP=0x001000000079827f
+ (id)findHomeManagerWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000798259
+ (id)findHomeManagerWithDatabaseID:(id)arg1;	// IMP=0x0010000000798233
+ (id)findBulletinConditionWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000798918
+ (id)findBulletinConditionWithModelID:(id)arg1;	// IMP=0x00100000007988fd
+ (id)findBulletinConditionWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000007988d7
+ (id)findBulletinConditionWithDatabaseID:(id)arg1;	// IMP=0x00100000007988b1
+ (id)findCharacteristicWithInstanceID:(id)arg1 serviceDatabaseID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000007b7051
+ (id)findCharacteristicWithInstanceID:(id)arg1 serviceDatabaseID:(id)arg2;	// IMP=0x00100000007b7035
+ (id)findCharacteristicWithInstanceID:(id)arg1 service:(id)arg2 error:(id *)arg3;	// IMP=0x00100000007b6ed3
+ (id)findCharacteristicWithInstanceID:(id)arg1 service:(id)arg2;	// IMP=0x00100000007b6eb7
+ (id)findCharacteristicWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000007b6e91
+ (id)findCharacteristicWithDatabaseID:(id)arg1;	// IMP=0x00100000007b6e6b
+ (id)findUserActivityStatusWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000007cd7cb
+ (id)findUserActivityStatusWithModelID:(id)arg1;	// IMP=0x00100000007cd7b0
+ (id)findUserActivityStatusWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000007cd78a
+ (id)findUserActivityStatusWithDatabaseID:(id)arg1;	// IMP=0x00100000007cd764
+ (id)findBulletinRegistrationWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000007ea7bf
+ (id)findBulletinRegistrationWithModelID:(id)arg1;	// IMP=0x00100000007ea7a4
+ (id)findBulletinRegistrationWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000007ea77e
+ (id)findBulletinRegistrationWithDatabaseID:(id)arg1;	// IMP=0x00100000007ea758
+ (id)findMatterAttributeEventWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000007f733a
+ (id)findMatterAttributeEventWithModelID:(id)arg1;	// IMP=0x00100000007f731f
+ (id)findMatterAttributeEventWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000007f72f9
+ (id)findMatterAttributeEventWithDatabaseID:(id)arg1;	// IMP=0x00100000007f72d3
+ (id)findTimerTriggerWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000811abf
+ (id)findTimerTriggerWithModelID:(id)arg1;	// IMP=0x0010000000811aa4
+ (id)findTimerTriggerWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000811a7e
+ (id)findTimerTriggerWithDatabaseID:(id)arg1;	// IMP=0x0010000000811a58
+ (id)findCameraReachabilityBulletinRegistrationWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000084c14e
+ (id)findCameraReachabilityBulletinRegistrationWithModelID:(id)arg1;	// IMP=0x001000000084c133
+ (id)findCameraReachabilityBulletinRegistrationWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000084c10d
+ (id)findCameraReachabilityBulletinRegistrationWithDatabaseID:(id)arg1;	// IMP=0x001000000084c0e7
+ (id)findEventWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000086b15c
+ (id)findEventWithModelID:(id)arg1;	// IMP=0x001000000086b141
+ (id)findEventWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000086b11b
+ (id)findEventWithDatabaseID:(id)arg1;	// IMP=0x001000000086b0f5
+ (id)findShortcutActionWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000008c3f9c
+ (id)findShortcutActionWithModelID:(id)arg1;	// IMP=0x00100000008c3f81
+ (id)findShortcutActionWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000008c3f5b
+ (id)findShortcutActionWithDatabaseID:(id)arg1;	// IMP=0x00100000008c3f35
+ (id)findSoftwareUpdateWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000008cef34
+ (id)findSoftwareUpdateWithModelID:(id)arg1;	// IMP=0x00100000008cef19
+ (id)findSoftwareUpdateWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000008ceef3
+ (id)findSoftwareUpdateWithDatabaseID:(id)arg1;	// IMP=0x00100000008ceecd
+ (id)findMediaAccessoryWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000008e8b08
+ (id)findMediaAccessoryWithModelID:(id)arg1;	// IMP=0x00100000008e8aed
+ (id)findMediaAccessoryWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000008e8ac7
+ (id)findMediaAccessoryWithDatabaseID:(id)arg1;	// IMP=0x00100000008e8aa1
+ (id)findGuestWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000008ee107
+ (id)findGuestWithModelID:(id)arg1;	// IMP=0x00100000008ee0ec
+ (id)findGuestWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000008ee0c6
+ (id)findGuestWithDatabaseID:(id)arg1;	// IMP=0x00100000008ee0a0
+ (id)findHomePersonWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000094231f
+ (id)findHomePersonWithModelID:(id)arg1;	// IMP=0x0010000000942304
+ (id)findHomePersonWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000009422de
+ (id)findHomePersonWithDatabaseID:(id)arg1;	// IMP=0x00100000009422b8
+ (id)findStringCharacteristicWithInstanceID:(id)arg1 serviceDatabaseID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000009625c8
+ (id)findStringCharacteristicWithInstanceID:(id)arg1 serviceDatabaseID:(id)arg2;	// IMP=0x00100000009625ac
+ (id)findStringCharacteristicWithInstanceID:(id)arg1 service:(id)arg2 error:(id *)arg3;	// IMP=0x001000000096244a
+ (id)findStringCharacteristicWithInstanceID:(id)arg1 service:(id)arg2;	// IMP=0x001000000096242e
+ (id)findStringCharacteristicWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000962408
+ (id)findStringCharacteristicWithDatabaseID:(id)arg1;	// IMP=0x00100000009623e2
+ (id)findMatterLocalKeyValuePairWithKey:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000997f3f
+ (id)findMatterLocalKeyValuePairWithKey:(id)arg1;	// IMP=0x0010000000997f24
+ (id)findMatterLocalKeyValuePairWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000997efe
+ (id)findMatterLocalKeyValuePairWithDatabaseID:(id)arg1;	// IMP=0x0010000000997ed8
+ (id)findHAPAccessoryWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000099c1e2
+ (id)findHAPAccessoryWithModelID:(id)arg1;	// IMP=0x001000000099c1c7
+ (id)findHAPAccessoryWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000099c1a1
+ (id)findHAPAccessoryWithDatabaseID:(id)arg1;	// IMP=0x001000000099c17b
+ (id)findOutgoingInvitationWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000009eb509
+ (id)findOutgoingInvitationWithModelID:(id)arg1;	// IMP=0x00100000009eb4ee
+ (id)findOutgoingInvitationWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000009eb4c8
+ (id)findOutgoingInvitationWithDatabaseID:(id)arg1;	// IMP=0x00100000009eb4a2
+ (id)findAccountHandleWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000a3c52f
+ (id)findAccountHandleWithModelID:(id)arg1;	// IMP=0x0010000000a3c514
+ (id)findAccountHandleWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000a3c4ee
+ (id)findAccountHandleWithDatabaseID:(id)arg1;	// IMP=0x0010000000a3c4c8
+ (id)findNotificationRegistrationWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000ab3216
+ (id)findNotificationRegistrationWithModelID:(id)arg1;	// IMP=0x0010000000ab31fb
+ (id)findNotificationRegistrationWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000ab31d5
+ (id)findNotificationRegistrationWithDatabaseID:(id)arg1;	// IMP=0x0010000000ab31af
+ (id)findZoneWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000ab908d
+ (id)findZoneWithModelID:(id)arg1;	// IMP=0x0010000000ab9072
+ (id)findZoneWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000ab904c
+ (id)findZoneWithDatabaseID:(id)arg1;	// IMP=0x0010000000ab9026
+ (id)findAnalysisEventBulletinRegistrationWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000aba11d
+ (id)findAnalysisEventBulletinRegistrationWithModelID:(id)arg1;	// IMP=0x0010000000aba102
+ (id)findAnalysisEventBulletinRegistrationWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000aba0dc
+ (id)findAnalysisEventBulletinRegistrationWithDatabaseID:(id)arg1;	// IMP=0x0010000000aba0b6
+ (id)findAccessoryNetworkProtectionGroupWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000abf90b
+ (id)findAccessoryNetworkProtectionGroupWithModelID:(id)arg1;	// IMP=0x0010000000abf8f0
+ (id)findAccessoryNetworkProtectionGroupWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000abf8ca
+ (id)findAccessoryNetworkProtectionGroupWithDatabaseID:(id)arg1;	// IMP=0x0010000000abf8a4
+ (id)findNotificationRegistrationMediaPropertyWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000b01f42
+ (id)findNotificationRegistrationMediaPropertyWithModelID:(id)arg1;	// IMP=0x0010000000b01f27
+ (id)findNotificationRegistrationMediaPropertyWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000b01f01
+ (id)findNotificationRegistrationMediaPropertyWithDatabaseID:(id)arg1;	// IMP=0x0010000000b01edb
+ (id)findYearDayScheduleRuleWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000b0b612
+ (id)findYearDayScheduleRuleWithModelID:(id)arg1;	// IMP=0x0010000000b0b5f7
+ (id)findYearDayScheduleRuleWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000b0b5d1
+ (id)findYearDayScheduleRuleWithDatabaseID:(id)arg1;	// IMP=0x0010000000b0b5ab
+ (id)findMatterPathWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000b19f0f
+ (id)findMatterPathWithModelID:(id)arg1;	// IMP=0x0010000000b19ef4
+ (id)findMatterPathWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000b19ece
+ (id)findMatterPathWithDatabaseID:(id)arg1;	// IMP=0x0010000000b19ea8
+ (id)findActionSetWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000b4d376
+ (id)findActionSetWithModelID:(id)arg1;	// IMP=0x0010000000b4d35b
+ (id)findActionSetWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000b4d335
+ (id)findActionSetWithDatabaseID:(id)arg1;	// IMP=0x0010000000b4d30f
+ (id)findApplicationDataWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000b52490
+ (id)findApplicationDataWithModelID:(id)arg1;	// IMP=0x0010000000b52475
+ (id)findApplicationDataWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000b5244f
+ (id)findApplicationDataWithDatabaseID:(id)arg1;	// IMP=0x0010000000b52429
+ (id)findSunriseSunsetTimeSpecificationWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000b59d71
+ (id)findSunriseSunsetTimeSpecificationWithModelID:(id)arg1;	// IMP=0x0010000000b59d56
+ (id)findSunriseSunsetTimeSpecificationWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000b59d30
+ (id)findSunriseSunsetTimeSpecificationWithDatabaseID:(id)arg1;	// IMP=0x0010000000b59d0a
+ (id)findHomeMediaSettingWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000b5e9ed
+ (id)findHomeMediaSettingWithModelID:(id)arg1;	// IMP=0x0010000000b5e9d2
+ (id)findHomeMediaSettingWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000b5e9ac
+ (id)findHomeMediaSettingWithDatabaseID:(id)arg1;	// IMP=0x0010000000b5e986
+ (id)findTriggerWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000bd6d4d
+ (id)findTriggerWithModelID:(id)arg1;	// IMP=0x0010000000bd6d32
+ (id)findTriggerWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000bd6d0c
+ (id)findTriggerWithDatabaseID:(id)arg1;	// IMP=0x0010000000bd6ce6
+ (id)findNaturalLightingActionWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000c3560c
+ (id)findNaturalLightingActionWithModelID:(id)arg1;	// IMP=0x0010000000c355f1
+ (id)findNaturalLightingActionWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000c355cb
+ (id)findNaturalLightingActionWithDatabaseID:(id)arg1;	// IMP=0x0010000000c355a5
+ (id)findEventTriggerWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000c37671
+ (id)findEventTriggerWithModelID:(id)arg1;	// IMP=0x0010000000c37656
+ (id)findEventTriggerWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000c37630
+ (id)findEventTriggerWithDatabaseID:(id)arg1;	// IMP=0x0010000000c3760a
+ (id)findCharacteristicBulletinRegistrationWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000cbef1e
+ (id)findCharacteristicBulletinRegistrationWithModelID:(id)arg1;	// IMP=0x0010000000cbef03
+ (id)findCharacteristicBulletinRegistrationWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000cbeedd
+ (id)findCharacteristicBulletinRegistrationWithDatabaseID:(id)arg1;	// IMP=0x0010000000cbeeb7
+ (id)findFloatCharacteristicWithInstanceID:(id)arg1 serviceDatabaseID:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000cc3c92
+ (id)findFloatCharacteristicWithInstanceID:(id)arg1 serviceDatabaseID:(id)arg2;	// IMP=0x0010000000cc3c76
+ (id)findFloatCharacteristicWithInstanceID:(id)arg1 service:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000cc3b14
+ (id)findFloatCharacteristicWithInstanceID:(id)arg1 service:(id)arg2;	// IMP=0x0010000000cc3af8
+ (id)findFloatCharacteristicWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000cc3ad2
+ (id)findFloatCharacteristicWithDatabaseID:(id)arg1;	// IMP=0x0010000000cc3aac
+ (id)findRemovedUserAccessCodeWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000ddc755
+ (id)findRemovedUserAccessCodeWithModelID:(id)arg1;	// IMP=0x0010000000ddc73a
+ (id)findRemovedUserAccessCodeWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000ddc714
+ (id)findRemovedUserAccessCodeWithDatabaseID:(id)arg1;	// IMP=0x0010000000ddc6ee
+ (id)findHomeSoftwareUpdateSettingWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000e3c978
+ (id)findHomeSoftwareUpdateSettingWithModelID:(id)arg1;	// IMP=0x0010000000e3c95d
+ (id)findHomeSoftwareUpdateSettingWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000e3c937
+ (id)findHomeSoftwareUpdateSettingWithDatabaseID:(id)arg1;	// IMP=0x0010000000e3c911
+ (id)findCharacteristicEventWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000e68c4b
+ (id)findCharacteristicEventWithModelID:(id)arg1;	// IMP=0x0010000000e68c30
+ (id)findCharacteristicEventWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000e68c0a
+ (id)findCharacteristicEventWithDatabaseID:(id)arg1;	// IMP=0x0010000000e68be4
+ (id)findNotificationRegistrationActionSetWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000e6e328
+ (id)findNotificationRegistrationActionSetWithModelID:(id)arg1;	// IMP=0x0010000000e6e30d
+ (id)findNotificationRegistrationActionSetWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000e6e2e7
+ (id)findNotificationRegistrationActionSetWithDatabaseID:(id)arg1;	// IMP=0x0010000000e6e2c1
+ (id)findMatterCommandActionWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000e70652
+ (id)findMatterCommandActionWithModelID:(id)arg1;	// IMP=0x0010000000e70637
+ (id)findMatterCommandActionWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000e70611
+ (id)findMatterCommandActionWithDatabaseID:(id)arg1;	// IMP=0x0010000000e705eb
+ (id)findCharacteristicRangeEventWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000e829a8
+ (id)findCharacteristicRangeEventWithModelID:(id)arg1;	// IMP=0x0010000000e8298d
+ (id)findCharacteristicRangeEventWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000e82967
+ (id)findCharacteristicRangeEventWithDatabaseID:(id)arg1;	// IMP=0x0010000000e82941
+ (id)findWeekDayScheduleRuleWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000e8942b
+ (id)findWeekDayScheduleRuleWithModelID:(id)arg1;	// IMP=0x0010000000e89410
+ (id)findWeekDayScheduleRuleWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000e893ea
+ (id)findWeekDayScheduleRuleWithDatabaseID:(id)arg1;	// IMP=0x0010000000e893c4
+ (id)findNotificationRegistrationCharacteristicWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000ee7f47
+ (id)findNotificationRegistrationCharacteristicWithModelID:(id)arg1;	// IMP=0x0010000000ee7f2c
+ (id)findNotificationRegistrationCharacteristicWithDatabaseID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000ee7f06
+ (id)findNotificationRegistrationCharacteristicWithDatabaseID:(id)arg1;	// IMP=0x0010000000ee7ee0
- (void).cxx_destruct;	// IMP=0x000000000040dbf4
@property(nonatomic) __weak HMDBackingStore *backingStore; // @synthesize backingStore=_backingStore;
@property(readonly, nonatomic) HMCPartition *partition; // @synthesize partition=_partition;
@property(readonly, nonatomic) HMDManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
@property(readonly, nonatomic) NSString *transactionAuthor; // @synthesize transactionAuthor=_transactionAuthor;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)reset;	// IMP=0x000000000040db24
- (void)rollback;	// IMP=0x000000000040daa3
- (_Bool)save;	// IMP=0x000000000040da8f
- (_Bool)save:(id *)arg1;	// IMP=0x000000000040d9ee
- (void)deleteObject:(id)arg1;	// IMP=0x000000000040d960
- (void)unsafeSynchronousBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000040d89b
- (id)createNewModelOfClass:(Class)arg1;	// IMP=0x000000000040d7dc
@property(readonly) id <MKFHomeManager> homeManager;
- (void)_executeBlockWithPinnedQueryGeneration:(CDUnknownBlockType)arg1;	// IMP=0x000000000040d3ce
- (void)performBlockAndWaitWithPinnedQueryGeneration:(CDUnknownBlockType)arg1;	// IMP=0x000000000040d309
- (void)performBlockWithPinnedQueryGeneration:(CDUnknownBlockType)arg1;	// IMP=0x000000000040d246
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000040d183
- (void)assertIsExecuting;	// IMP=0x000000000040d160
- (id)initWithContext:(id)arg1 partition:(id)arg2;	// IMP=0x000000000040d040
- (id)findHomeManagerWithError:(id *)arg1;	// IMP=0x0000000000420b0f
- (id)findRemoteAccountsWithError:(id *)arg1;	// IMP=0x0000000000420a5b
- (id)findLocalAccountWithError:(id *)arg1;	// IMP=0x000000000042084d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

