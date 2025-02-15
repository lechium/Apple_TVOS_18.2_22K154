//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPPlaybackArchive, NSNumber, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface HMDMediaPlaybackActionModel
{
}

+ (id)properties;	// IMP=0x0010000000ddbce0
+ (id)schemaHashRoot;	// IMP=0x0010000000ddbcd3
+ (Class)cd_entityClass;	// IMP=0x0010000000dea23a
- (id)dependentUUIDs;	// IMP=0x0000000000dd6bf3
- (id)validate;	// IMP=0x0000000000dd6b08
- (_Bool)validForStorage;	// IMP=0x0000000000dd69dd
- (void)loadModelWithActionInformation:(id)arg1;	// IMP=0x0000000000dd680b
- (id)cd_generateValueForProperty:(id)arg1 managedObjectField:(id)arg2 context:(id)arg3;	// IMP=0x0000000000de9d56
- (id)_profilesFromManagedObject:(id)arg1;	// IMP=0x0000000000de9c2f
- (id)cd_generateValueForModelObjectFromManagedObject:(id)arg1 modelObjectField:(id)arg2 modelFieldInfo:(id)arg3;	// IMP=0x0000000000de99fc

// Remaining properties
@property(retain, nonatomic) NSSet *accessories; // @dynamic accessories;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(retain, nonatomic) MPPlaybackArchive *encodedPlaybackArchive; // @dynamic encodedPlaybackArchive;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSSet *profiles; // @dynamic profiles;
@property(retain, nonatomic) NSSet *services; // @dynamic services;
@property(retain, nonatomic) NSNumber *state; // @dynamic state;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSNumber *volume; // @dynamic volume;

@end

