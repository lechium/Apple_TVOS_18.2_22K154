//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPPlaybackArchive, NSNumber, NSSet;

__attribute__((visibility("hidden")))
@interface HMDMediaPlaybackActionModel
{
}

+ (id)properties;	// IMP=0x0060000000b04145
+ (id)schemaHashRoot;	// IMP=0x0060000000b04138
- (id)dependentUUIDs;	// IMP=0x0000000000aff060
- (id)validate;	// IMP=0x0000000000afef75
- (_Bool)validForStorage;	// IMP=0x0000000000afee4a
- (void)loadModelWithActionInformation:(id)arg1;	// IMP=0x0000000000afec78

// Remaining properties
@property(retain, nonatomic) NSSet *accessories; // @dynamic accessories;
@property(retain, nonatomic) MPPlaybackArchive *encodedPlaybackArchive; // @dynamic encodedPlaybackArchive;
@property(retain, nonatomic) NSSet *profiles; // @dynamic profiles;
@property(retain, nonatomic) NSSet *services; // @dynamic services;
@property(retain, nonatomic) NSNumber *state; // @dynamic state;
@property(retain, nonatomic) NSNumber *volume; // @dynamic volume;

@end

