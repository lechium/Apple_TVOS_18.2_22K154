//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDAddAccessoryPairingSharedUserOperation
{
}

+ (id)logCategory;	// IMP=0x0010000000dbc499
- (id)logIdentifier;	// IMP=0x0000000000dbbf82
- (id)attributeDescriptions;	// IMP=0x0000000000dbbe36
- (_Bool)mainWithError:(id *)arg1;	// IMP=0x0000000000dbb979
- (id)initWithAccessoryUUID:(id)arg1 accessoryIdentifier:(id)arg2 forSharedUser:(id)arg3 sharedUserPairingIdentity:(id)arg4 asOwner:(_Bool)arg5 asSharedAdmin:(_Bool)arg6 homeUUIDWhereAccessoryWasPaired:(id)arg7;	// IMP=0x0000000000dbb704
- (id)initWithAccessory:(id)arg1 forSharedUser:(id)arg2 sharedUserPairingIdentity:(id)arg3 asOwner:(_Bool)arg4 asSharedAdmin:(_Bool)arg5;	// IMP=0x0000000000dbb563

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

