//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDRemoveAccessoryPairingOperation
{
}

+ (id)logCategory;	// IMP=0x0010000000ef4e3c
- (id)logIdentifier;	// IMP=0x0000000000ef4b45
@property(readonly, nonatomic) NSString *pairingIdentifierToRemove;
- (_Bool)mainWithError:(id *)arg1;	// IMP=0x0000000000ef3cc6
- (id)initWithAccessory:(id)arg1 accessoryIdentifier:(id)arg2 homeUUIDWhereAccessoryWasPaired:(id)arg3 isOwnerIdentity:(_Bool)arg4 identityToRemove:(id)arg5 userData:(id)arg6;	// IMP=0x0000000000ef39af
- (id)initWithAccessory:(id)arg1 isOwnerIdentity:(_Bool)arg2 identityToRemove:(id)arg3 userData:(id)arg4;	// IMP=0x0000000000ef3846
- (id)initWithAccessory:(id)arg1 isOwnerIdentity:(_Bool)arg2 identityToRemove:(id)arg3;	// IMP=0x0000000000ef382d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

