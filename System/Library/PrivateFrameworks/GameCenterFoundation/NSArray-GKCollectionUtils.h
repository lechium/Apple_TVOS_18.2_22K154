//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (GKCollectionUtils)
- (unsigned long long)_gkIndexOfObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00600000000042d9
- (_Bool)_gkContainsObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00600000000042b6
- (id)_gkFoldWithInitialValue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00600000000040de
- (id)_gkFirstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x006000000000408c
- (id)_gkFirstObject;	// IMP=0x006000000000407a
- (id)_gkDistinctValuesForKeyPath:(id)arg1;	// IMP=0x0060000000003ea6
- (id)_gkValuesForKeyPath:(id)arg1;	// IMP=0x0060000000003cd2
- (id)_gkMapDictionaryWithKeyPath:(id)arg1 valueKeyPath:(id)arg2;	// IMP=0x00600000000039f2
- (id)_gkMapDictionaryWithKeyPath:(id)arg1;	// IMP=0x00600000000039de
- (id)_gkSubarraysByKeyWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00600000000037f7
- (id)_gkFilterWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00600000000036be
- (id)_gkMapWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0060000000003560
- (id)_gkMapConcurrentlyWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0060000000003410
- (id)_gkDescriptionWithChildren:(long long)arg1;	// IMP=0x0060000000025cb9
- (void)_gkUpdateInternalPlayersScopedIDs:(CDUnknownBlockType)arg1;	// IMP=0x006000000007e691
- (void)_gkValidatePlayersForReturnFromAPI;	// IMP=0x006000000007f349
- (id)_gkInternalsFromUncheckedPlayers;	// IMP=0x006000000007f31b
- (id)_gkInternalsFromPlayers;	// IMP=0x006000000007f0b8
- (id)_gkPlayersFromInternals;	// IMP=0x006000000007ef1f
- (id)_gkPlayersIDsFromInternals;	// IMP=0x006000000007ed8d
- (id)_gkPlayersIDsFromPlayers;	// IMP=0x006000000007ebd5
- (id)_gkIncompletePlayersFromPlayerIDs;	// IMP=0x006000000007ea3c
- (id)_gkGuestPlayersFromPlayers;	// IMP=0x006000000007f790
- (id)_gkNonGuestPlayersFromPlayers;	// IMP=0x006000000007f716
@end

