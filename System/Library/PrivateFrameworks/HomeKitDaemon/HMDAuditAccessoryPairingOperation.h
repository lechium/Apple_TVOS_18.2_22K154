//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDAuditAccessoryPairingOperation
{
}

+ (id)logCategory;	// IMP=0x001000000098f121
- (id)logIdentifier;	// IMP=0x000000000098e4ba
- (id)usersOnHomeWhosePairingsNeedsToBeAddedOrRemoved:(id)arg1;	// IMP=0x000000000098e42f
- (id)getPairingsFromAirPlayAccessory:(id)arg1;	// IMP=0x000000000098e109
- (id)getPairingsFromAccessory:(id)arg1;	// IMP=0x000000000098dd72
- (void)scheduleAuditOperations:(id)arg1;	// IMP=0x000000000098db28
- (void)auditPairings:(id)arg1 forAccessory:(id)arg2;	// IMP=0x000000000098d0ad
- (_Bool)mainWithError:(id *)arg1;	// IMP=0x000000000098cd11
- (id)initWithAccessoryUUID:(id)arg1 accessoryIdentifier:(id)arg2 homeUUIDWhereAccessoryWasPaired:(id)arg3;	// IMP=0x000000000098cb46

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

