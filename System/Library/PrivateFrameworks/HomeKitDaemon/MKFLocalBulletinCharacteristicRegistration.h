//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MKFLocalBulletinCharacteristicRegistration
{
}

+ (id)fetchCharacteristicRegistrationForAccessoryUUID:(id)arg1 serviceInstanceID:(id)arg2 characteristicInstanceID:(id)arg3 managedObjectContext:(id)arg4;	// IMP=0x00800000007f1d27
+ (id)fetchRequest;	// IMP=0x0080000000efd004

// Remaining properties
@property(nonatomic) long long characteristicInstanceID; // @dynamic characteristicInstanceID;
@property(nonatomic) long long serviceInstanceID; // @dynamic serviceInstanceID;

@end

