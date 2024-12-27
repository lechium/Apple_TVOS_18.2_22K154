//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBCloudZoneConfiguration, HMDHomeKitVersion, NSSet;

__attribute__((visibility("hidden")))
@interface HMDDatabaseZoneManagerConfiguration : HMFObject
{
    _Bool _zoneOwner;	// 8 = 0x8
    _Bool _shouldCreateZone;	// 9 = 0x9
    NSSet *_externalRecordTypesForSubscriptions;	// 16 = 0x10
    HMDHomeKitVersion *_minimumHomeKitVersion;	// 24 = 0x18
    NSSet *_requiredSupportedFeatures;	// 32 = 0x20
    HMBCloudZoneConfiguration *_cloudZoneConfiguration;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000657717
@property(copy) HMBCloudZoneConfiguration *cloudZoneConfiguration; // @synthesize cloudZoneConfiguration=_cloudZoneConfiguration;
@property(copy) NSSet *requiredSupportedFeatures; // @synthesize requiredSupportedFeatures=_requiredSupportedFeatures;
@property(copy) HMDHomeKitVersion *minimumHomeKitVersion; // @synthesize minimumHomeKitVersion=_minimumHomeKitVersion;
@property(copy) NSSet *externalRecordTypesForSubscriptions; // @synthesize externalRecordTypesForSubscriptions=_externalRecordTypesForSubscriptions;
@property _Bool shouldCreateZone; // @synthesize shouldCreateZone=_shouldCreateZone;
@property(getter=isZoneOwner) _Bool zoneOwner; // @synthesize zoneOwner=_zoneOwner;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006574f3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006574e8
- (unsigned long long)hash;	// IMP=0x00000000006573c5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000657144
- (id)attributeDescriptions;	// IMP=0x0000000000656e22
- (id)init;	// IMP=0x0000000000656d18

@end

