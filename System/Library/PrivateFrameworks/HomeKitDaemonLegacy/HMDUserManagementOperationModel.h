//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HAPPairingIdentity, HMFPairingIdentity, NSArray, NSDate, NSNumber;

__attribute__((visibility("hidden")))
@interface HMDUserManagementOperationModel
{
}

+ (id)properties;	// IMP=0x006000000074b8dc
- (id)dependentUUIDs;	// IMP=0x000000000074b6bf

// Remaining properties
@property(retain, nonatomic) HMFPairingIdentity *accessoryPairingIdentity; // @dynamic accessoryPairingIdentity;
@property(retain, nonatomic) NSArray *dependencies; // @dynamic dependencies;
@property(retain, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(retain, nonatomic) NSNumber *operationType; // @dynamic operationType;
@property(retain, nonatomic) HAPPairingIdentity *ownerPairingIdentity; // @dynamic ownerPairingIdentity;
@property(retain, nonatomic) HAPPairingIdentity *userPairingIdentity; // @dynamic userPairingIdentity;

@end

