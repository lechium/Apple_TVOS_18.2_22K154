//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface HMDHAPMetadataModel
{
}

+ (id)allowedTypes;	// IMP=0x006000000025c098
+ (id)modelWithDictionary:(id)arg1;	// IMP=0x006000000025be42
+ (id)metadataModelObjectUUID;	// IMP=0x006000000025be12
+ (id)properties;	// IMP=0x006000000025bde2
- (id)metadataDictionary;	// IMP=0x000000000025bc59

// Remaining properties
@property(retain, nonatomic) NSData *legacyCloudData; // @dynamic legacyCloudData;
@property(retain, nonatomic) NSData *legacyIDSData; // @dynamic legacyIDSData;
@property(retain, nonatomic) NSNumber *metadataVersion; // @dynamic metadataVersion;
@property(retain, nonatomic) NSDictionary *rawPlist; // @dynamic rawPlist;
@property(retain, nonatomic) NSNumber *schemaVersion; // @dynamic schemaVersion;

@end

