//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDHomePersonManagerSettingsModel
{
}

+ (id)defaultModelForHomeUUID:(id)arg1;	// IMP=0x006000000099be0e
+ (id)modelIDForHomeUUID:(id)arg1;	// IMP=0x006000000099bd55
+ (id)properties;	// IMP=0x006000000099bd25
- (id)createSettings;	// IMP=0x000000000099bca1
@property(retain) NSUUID *zoneUUID;
- (id)initWithHomeUUID:(id)arg1;	// IMP=0x000000000099bb39

// Remaining properties
@property(retain) NSString *zoneUUIDString; // @dynamic zoneUUIDString;

@end

