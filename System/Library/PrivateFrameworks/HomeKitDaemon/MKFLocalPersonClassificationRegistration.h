//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFLocalPersonClassificationSettings, NSUUID;

__attribute__((visibility("hidden")))
@interface MKFLocalPersonClassificationRegistration
{
}

+ (id)fetchPersonClassificationRegistrationForPersonUUID:(id)arg1 settingsModelUUID:(id)arg2 managedObjectContext:(id)arg3;	// IMP=0x008000000039d89a
+ (id)fetchRequest;	// IMP=0x0080000000efd1c4

// Remaining properties
@property(nonatomic) _Bool enabled; // @dynamic enabled;
@property(copy, nonatomic) NSUUID *personUUID; // @dynamic personUUID;
@property(retain, nonatomic) MKFLocalPersonClassificationSettings *settings; // @dynamic settings;

@end

