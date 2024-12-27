//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDCharacteristicWriteActionModel
{
}

+ (id)properties;	// IMP=0x0010000000a145db
+ (Class)cd_entityClass;	// IMP=0x0010000000865e0c
- (id)dependentUUIDs;	// IMP=0x0000000000a143e6
- (void)loadModelWithActionInformation:(id)arg1;	// IMP=0x0000000000a1425c
- (id)cd_generateValueForProperty:(id)arg1 managedObjectField:(id)arg2 context:(id)arg3;	// IMP=0x0000000000865a61
- (id)cd_generateValueForModelObjectFromManagedObject:(id)arg1 modelObjectField:(id)arg2 modelFieldInfo:(id)arg3;	// IMP=0x0000000000865748
- (_Bool)cd_updateManagedObjectInContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000000086564d

// Remaining properties
@property(retain, nonatomic) NSString *accessory; // @dynamic accessory;
@property(retain, nonatomic) NSNumber *characteristicID; // @dynamic characteristicID;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSNumber *serviceID; // @dynamic serviceID;
@property(readonly) Class superclass;
@property(retain, nonatomic) id targetValue; // @dynamic targetValue;

@end

