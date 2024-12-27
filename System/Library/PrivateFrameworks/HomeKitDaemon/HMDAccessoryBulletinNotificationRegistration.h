//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAccessoryBulletinNotificationRegistration
{
    NSUUID *_accessoryUUID;	// 8 = 0x8
    NSNumber *_serviceInstanceID;	// 16 = 0x10
    NSNumber *_characteristicInstanceID;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000133c38
+ (id)type;	// IMP=0x0010000000133c2b
- (void).cxx_destruct;	// IMP=0x0000000000133be9
@property(readonly, copy) NSNumber *characteristicInstanceID; // @synthesize characteristicInstanceID=_characteristicInstanceID;
@property(readonly, copy) NSNumber *serviceInstanceID; // @synthesize serviceInstanceID=_serviceInstanceID;
@property(readonly, copy) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
- (id)attributeDescriptions;	// IMP=0x00000000001339d2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001335ea
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001334e1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001334d6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001332f2
- (id)serializedRegistrationForRemoteMessage;	// IMP=0x00000000001331b2
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000132fcc
- (id)initWithAccessoryUUID:(id)arg1 serviceInstanceID:(id)arg2 characteristicInstanceID:(id)arg3 conditions:(id)arg4;	// IMP=0x0000000000132e3c

@end

