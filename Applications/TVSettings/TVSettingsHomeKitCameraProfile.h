//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HFCameraItem, NSString;

@interface TVSettingsHomeKitCameraProfile : NSObject
{
    _Bool _controlCenterAndSiriEnabled;	// 8 = 0x8
    _Bool _supportsDoorbellNotifications;	// 9 = 0x9
    _Bool _doorbellNotificationsEnabled;	// 10 = 0xa
    _Bool _supportsSmartNotifications;	// 11 = 0xb
    _Bool _supportsLegacyMotionNotifications;	// 12 = 0xc
    _Bool _legacyMotionNotificationsEnabled;	// 13 = 0xd
    _Bool _recordingDisabled;	// 14 = 0xe
    HFCameraItem *_cameraItem;	// 16 = 0x10
    long long _smartNotificationsState;	// 24 = 0x18
    unsigned long long _significantEventTypes;	// 32 = 0x20
    long long _triggerTime;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000008e883
@property(readonly, nonatomic) _Bool recordingDisabled; // @synthesize recordingDisabled=_recordingDisabled;
@property(nonatomic) _Bool legacyMotionNotificationsEnabled; // @synthesize legacyMotionNotificationsEnabled=_legacyMotionNotificationsEnabled;
@property(readonly, nonatomic) _Bool supportsLegacyMotionNotifications; // @synthesize supportsLegacyMotionNotifications=_supportsLegacyMotionNotifications;
@property(nonatomic) long long triggerTime; // @synthesize triggerTime=_triggerTime;
@property(readonly, nonatomic) unsigned long long significantEventTypes; // @synthesize significantEventTypes=_significantEventTypes;
@property(nonatomic) long long smartNotificationsState; // @synthesize smartNotificationsState=_smartNotificationsState;
@property(readonly, nonatomic) _Bool supportsSmartNotifications; // @synthesize supportsSmartNotifications=_supportsSmartNotifications;
@property(nonatomic) _Bool doorbellNotificationsEnabled; // @synthesize doorbellNotificationsEnabled=_doorbellNotificationsEnabled;
@property(readonly, nonatomic) _Bool supportsDoorbellNotifications; // @synthesize supportsDoorbellNotifications=_supportsDoorbellNotifications;
@property(nonatomic) _Bool controlCenterAndSiriEnabled; // @synthesize controlCenterAndSiriEnabled=_controlCenterAndSiriEnabled;
@property(retain, nonatomic) HFCameraItem *cameraItem; // @synthesize cameraItem=_cameraItem;
- (id)_conditionForTriggerTime:(long long)arg1;	// IMP=0x001000000008e7cc
- (id)_legacyMotionBulletinNotification;	// IMP=0x001000000008e721
- (id)_smartDetectionBulletinNotification;	// IMP=0x001000000008e6a7
- (id)_doorbellBulletinNotification;	// IMP=0x001000000008e5fc
- (void)toggledSignificantEventType:(unsigned long long)arg1;	// IMP=0x001000000008d8ba
@property(readonly, copy, nonatomic) NSString *profileIdentifier;
@property(readonly, nonatomic) NSString *name;
- (id)cameraProfile;	// IMP=0x001000000008cf42
- (id)initWithCameraItem:(id)arg1 controlCenterAndSiriEnabled:(_Bool)arg2;	// IMP=0x001000000008cabe

@end

