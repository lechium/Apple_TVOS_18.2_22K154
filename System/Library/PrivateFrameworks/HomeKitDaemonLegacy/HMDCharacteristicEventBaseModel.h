//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDCharacteristicEventBaseModel
{
}

+ (id)eventModelWithDictionary:(id)arg1 home:(id)arg2 eventTriggerUUID:(id)arg3 className:(Class)arg4 message:(id)arg5 checkForSupport:(_Bool)arg6 outCharateristic:(id *)arg7;	// IMP=0x00600000008139e1
+ (id)properties;	// IMP=0x006000000081397e
- (id)dependentUUIDs;	// IMP=0x0000000000813e39

// Remaining properties
@property(retain, nonatomic) NSString *accessory; // @dynamic accessory;
@property(retain, nonatomic) NSNumber *characteristicID; // @dynamic characteristicID;
@property(retain, nonatomic) NSNumber *serviceID; // @dynamic serviceID;

@end

