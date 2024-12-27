//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

__attribute__((visibility("hidden")))
@interface HMDCameraAccessModeBulletinNotificationRegistration
{
    NSUUID *_accessoryUUID;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000614a08
+ (id)type;	// IMP=0x00100000006149fb
- (void).cxx_destruct;	// IMP=0x00000000006149e8
@property(readonly, copy) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
- (id)attributeDescriptions;	// IMP=0x00000000006148b3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006146cc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000614631
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000614626
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000614526
- (id)serializedRegistrationForRemoteMessage;	// IMP=0x000000000061445c
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000061430f
- (id)initWithAccessoryUUID:(id)arg1 conditions:(id)arg2;	// IMP=0x000000000061425f

@end

