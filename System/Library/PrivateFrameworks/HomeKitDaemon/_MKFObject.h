//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFObjectDatabaseID, NSString;

__attribute__((visibility("hidden")))
@interface _MKFObject
{
}

+ (id)backingModelProtocol;	// IMP=0x0010000000b5ab73
@property(readonly, copy, nonatomic) MKFObjectDatabaseID *databaseID;
- (id)castIfZone;	// IMP=0x0000000000d42386
- (id)castIfYearDayScheduleRule;	// IMP=0x0000000000d4237e
- (id)castIfWeekDayScheduleRule;	// IMP=0x0000000000d42376
- (id)castIfUserActivityStatus;	// IMP=0x0000000000d4236e
- (id)castIfUserAccessCode;	// IMP=0x0000000000d42366
- (id)castIfUser;	// IMP=0x0000000000d4235e
- (id)castIfTrigger;	// IMP=0x0000000000d42356
- (id)castIfTimerTrigger;	// IMP=0x0000000000d4234e
- (id)castIfTimePeriodBulletinCondition;	// IMP=0x0000000000d42346
- (id)castIfTimeOfDayTimeSpecification;	// IMP=0x0000000000d4233e
- (id)castIfSunriseSunsetTimeSpecification;	// IMP=0x0000000000d42336
- (id)castIfStringCharacteristic;	// IMP=0x0000000000d4232e
- (id)castIfSoftwareUpdate;	// IMP=0x0000000000d42326
- (id)castIfSignificantTimeEvent;	// IMP=0x0000000000d4231e
- (id)castIfShortcutAction;	// IMP=0x0000000000d42316
- (id)castIfServiceGroup;	// IMP=0x0000000000d4230e
- (id)castIfService;	// IMP=0x0000000000d42306
- (id)castIfRoom;	// IMP=0x0000000000d422fe
- (id)castIfResidentSelection;	// IMP=0x0000000000d422f6
- (id)castIfResident;	// IMP=0x0000000000d422ee
- (id)castIfRemovedUserAccessCode;	// IMP=0x0000000000d422e6
- (id)castIfPresenceEvent;	// IMP=0x0000000000d422de
- (id)castIfPresenceBulletinCondition;	// IMP=0x0000000000d422d6
- (id)castIfPhotosPerson;	// IMP=0x0000000000d422ce
- (id)castIfPerson;	// IMP=0x0000000000d422c6
- (id)castIfOutgoingInvitation;	// IMP=0x0000000000d422be
- (id)castIfNotificationRegistrationMediaProperty;	// IMP=0x0000000000d422b6
- (id)castIfNotificationRegistrationCharacteristic;	// IMP=0x0000000000d422ae
- (id)castIfNotificationRegistrationActionSet;	// IMP=0x0000000000d422a6
- (id)castIfNotificationRegistration;	// IMP=0x0000000000d4229e
- (id)castIfNaturalLightingAction;	// IMP=0x0000000000d42296
- (id)castIfMediaPlaybackAction;	// IMP=0x0000000000d4228e
- (id)castIfMediaAccessory;	// IMP=0x0000000000d42286
- (id)castIfMatterLocalKeyValuePair;	// IMP=0x0000000000d4227e
- (id)castIfMatterPath;	// IMP=0x0000000000d42276
- (id)castIfMatterBulletinRegistration;	// IMP=0x0000000000d4226e
- (id)castIfMatterCommandAction;	// IMP=0x0000000000d42266
- (id)castIfMatterAttributeValueEvent;	// IMP=0x0000000000d4225e
- (id)castIfMatterAttributeEvent;	// IMP=0x0000000000d42256
- (id)castIfLocationEvent;	// IMP=0x0000000000d4224e
- (id)castIfInvitation;	// IMP=0x0000000000d42246
- (id)castIfIntegerCharacteristic;	// IMP=0x0000000000d4223e
- (id)castIfIncomingInvitation;	// IMP=0x0000000000d42236
- (id)castIfHomeThreadNetwork;	// IMP=0x0000000000d4222e
- (id)castIfHomeSoftwareUpdateSetting;	// IMP=0x0000000000d42226
- (id)castIfHomeSetting;	// IMP=0x0000000000d4221e
- (id)castIfHomePersonManagerSetting;	// IMP=0x0000000000d42216
- (id)castIfHomePerson;	// IMP=0x0000000000d4220e
- (id)castIfHomeNetworkRouterSetting;	// IMP=0x0000000000d42206
- (id)castIfHomeNetworkRouterManagingDeviceSetting;	// IMP=0x0000000000d421fe
- (id)castIfHomeMediaSetting;	// IMP=0x0000000000d421f6
- (id)castIfHomeManagerHome;	// IMP=0x0000000000d421ee
- (id)castIfHomeManager;	// IMP=0x0000000000d421e6
- (id)castIfHomeAccessCode;	// IMP=0x0000000000d421de
- (id)castIfHome;	// IMP=0x0000000000d421d6
- (id)castIfHAPMetadata;	// IMP=0x0000000000d421ce
- (id)castIfHAPAccessory;	// IMP=0x0000000000d421c6
- (id)castIfGuestAccessCode;	// IMP=0x0000000000d421be
- (id)castIfGuest;	// IMP=0x0000000000d421b6
- (id)castIfFloatCharacteristic;	// IMP=0x0000000000d421ae
- (id)castIfEventTrigger;	// IMP=0x0000000000d421a6
- (id)castIfEvent;	// IMP=0x0000000000d4219e
- (id)castIfDurationEvent;	// IMP=0x0000000000d42196
- (id)castIfDevice;	// IMP=0x0000000000d4218e
- (id)castIfCharacteristicWriteAction;	// IMP=0x0000000000d42186
- (id)castIfCharacteristicValueEvent;	// IMP=0x0000000000d4217e
- (id)castIfCharacteristicRangeEvent;	// IMP=0x0000000000d42176
- (id)castIfCharacteristicEvent;	// IMP=0x0000000000d4216e
- (id)castIfCharacteristicBulletinRegistration;	// IMP=0x0000000000d42166
- (id)castIfCharacteristic;	// IMP=0x0000000000d4215e
- (id)castIfCameraSignificantEventBulletinRegistration;	// IMP=0x0000000000d42156
- (id)castIfCameraReachabilityBulletinRegistration;	// IMP=0x0000000000d4214e
- (id)castIfCameraAccessModeBulletinRegistration;	// IMP=0x0000000000d42146
- (id)castIfCalendarEvent;	// IMP=0x0000000000d4213e
- (id)castIfBulletinTimeSpecification;	// IMP=0x0000000000d42136
- (id)castIfBulletinRegistration;	// IMP=0x0000000000d4212e
- (id)castIfBulletinCondition;	// IMP=0x0000000000d42126
- (id)castIfApplicationData;	// IMP=0x0000000000d4211e
- (id)castIfAppleMediaAccessoryPowerAction;	// IMP=0x0000000000d42116
- (id)castIfAppleMediaAccessory;	// IMP=0x0000000000d4210e
- (id)castIfAnalysisEventBulletinRegistration;	// IMP=0x0000000000d42106
- (id)castIfAirPlayAccessory;	// IMP=0x0000000000d420fe
- (id)castIfActionSet;	// IMP=0x0000000000d420f6
- (id)castIfAction;	// IMP=0x0000000000d420ee
- (id)castIfAccountHandle;	// IMP=0x0000000000d420e6
- (id)castIfAccount;	// IMP=0x0000000000d420de
- (id)castIfAccessoryNetworkProtectionGroup;	// IMP=0x0000000000d420d6
- (id)castIfAccessory;	// IMP=0x0000000000d420ce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

