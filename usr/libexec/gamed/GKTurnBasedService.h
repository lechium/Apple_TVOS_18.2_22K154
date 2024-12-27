//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKTurnBasedService
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x00200000000a06a9
+ (Class)interfaceClass;	// IMP=0x00100000000a0698
- (void)saveRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00200000000b33d8
- (id)privateDatabase;	// IMP=0x00100000000b337a
- (oneway void)reserveShareParticipantSlots:(long long)arg1 minPlayerCount:(long long)arg2 maxPlayerCount:(long long)arg3 andInvitePlayers:(id)arg4 withMessage:(id)arg5 forMatch:(id)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x00100000000b2b02
- (oneway void)loadURLWithTBGMatch:(id)arg1 player:(id)arg2 matchRequest:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b2239
- (oneway void)sendReminderToParticipants:(id)arg1 message:(id)arg2 match:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b1cf5
- (oneway void)getNextTurnBasedEventWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b1a3b
- (oneway void)replyToExchange:(id)arg1 withMessage:(id)arg2 data:(id)arg3 match:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000b1844
- (oneway void)cancelExchange:(id)arg1 withMessage:(id)arg2 match:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b16d5
- (oneway void)sendRequest:(id)arg1 forBagKey:(id)arg2 exchange:(id)arg3 matchID:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000b0ba4
- (oneway void)sendExchangeToParticipants:(id)arg1 data:(id)arg2 message:(id)arg3 timeout:(double)arg4 match:(id)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000afddb
- (oneway void)completeTurnBasedMatch:(id)arg1 scores:(id)arg2 achievements:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000ae8a5
- (id)_requestForTurnBasedSubmitValues:(id)arg1 withServerLabel:(id)arg2 sessionID:(id)arg3;	// IMP=0x00100000000ae487
- (oneway void)resignFromTurnBasedGame:(id)arg1 outcome:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ad7db
- (oneway void)saveDataForTurnBasedMatch:(id)arg1 resolvedExchangeIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000acae8
- (oneway void)submitTurnForTurnBasedMatch:(id)arg1 nextParticipantIndexes:(id)arg2 turnTimeout:(double)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000abb6b
- (oneway void)removeTurnBasedMatch:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ab15e
- (oneway void)declineInviteForTurnBasedMatch:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000aa384
- (oneway void)acceptInviteForTurnBasedMatch:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a90b0
- (oneway void)getDetailsForTurnBasedMatchIDs:(id)arg1 includeGameData:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a9098
- (oneway void)getDetailsForTurnBasedMatchIDs:(id)arg1 includeGameData:(_Bool)arg2 prefetchOnly:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a8525
- (void)loadDetailsForTurnBasedMatchIDs:(id)arg1 includeGameData:(_Bool)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a799f
- (void)fetchDetailsForTurnBasedMatchIDs:(id)arg1 includeGameData:(_Bool)arg2 responseKind:(int)arg3 context:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000a6faf
- (void)_updatePlayersForMatches:(id)arg1 group:(id)arg2;	// IMP=0x00100000000a66ee
- (oneway void)getTurnBasedMatchesAndCompatibleBundleID:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a55e4
- (void)fetchTurnBasedMatchesForGame:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a4efc
- (void)loadTurnBasedMatchesForGame:(id)arg1 loadDetails:(_Bool)arg2 prefetchOnly:(_Bool)arg3 context:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000a4404
- (void)_determineTurnBasedBadgeCountFromList:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a3d61
- (void)_determineCompatibleBundleIDForAppID:(id)arg1 bundleVersion:(id)arg2 shortBundleVersion:(id)arg3 platform:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000a3137
- (void)_determineCompatibleGamesForMatches:(id)arg1 dispatchGroup:(id)arg2;	// IMP=0x00100000000a229c
- (void)_updateGamesForTurnBasedMatches:(id)arg1 dispatchGroup:(id)arg2;	// IMP=0x00100000000a1e7c
- (oneway void)createTurnBasedGameForMatchRequest:(id)arg1 individualMessages:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a0935
- (id)turnsForParticipantIndexes:(id)arg1 turnTimeout:(double)arg2;	// IMP=0x00100000000a06cb
- (void)getTurnBasedMatchesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a06b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

