//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface HMDMatterBulletinNotificationRegistration
{
    NSArray *_matterPaths;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000006e2cad
+ (id)type;	// IMP=0x00100000006e2ca0
- (void).cxx_destruct;	// IMP=0x00000000006e27d7
@property(readonly, copy) NSArray *matterPaths; // @synthesize matterPaths=_matterPaths;
- (id)attributeDescriptions;	// IMP=0x00000000006e26a2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006e24bb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000006e2420
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006e2415
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006e2315
- (id)serializedRegistrationForRemoteMessage;	// IMP=0x00000000006e2244
- (id)initWithDictionary:(id)arg1 withHome:(id)arg2;	// IMP=0x00000000006e2085
- (id)initWithMatterPaths:(id)arg1 conditions:(id)arg2;	// IMP=0x00000000006e1fe1

@end

