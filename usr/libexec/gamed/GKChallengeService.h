//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKChallengeService
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x00200000000819a8
+ (Class)interfaceClass;	// IMP=0x0010000000081997
- (oneway void)abortChallenges:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x002000000008687a
- (oneway void)issueChallenge:(id)arg1 toPlayers:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008648e
- (void)getChallengeDetailsForChallengeIDs:(id)arg1 receiverID:(id)arg2 clientBundleID:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000845a8
- (oneway void)getChallengeDetailsForChallengeIDs:(id)arg1 receiverID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000084590
- (oneway void)getChallengeDetailsForChallengeIDs:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000084576
- (oneway void)getChallengesForGameDescriptor:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000834c5
- (void)loadChallengesForGameDescriptor:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000082d46
- (void)fetchChallengesForGameDescriptor:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000829b0
- (void)_updateGamesForChallenges:(id)arg1 dispatchGroup:(id)arg2;	// IMP=0x001000000008262a
- (void)_determineCompatibleGamesForChallenges:(id)arg1 dispatchGroup:(id)arg2;	// IMP=0x0010000000082098
- (id)_filterChallenges:(id)arg1 compatibleWithBundleID:(id)arg2;	// IMP=0x0010000000081f22
- (void)_updatePlayersForChallenges:(id)arg1 dispatchGroup:(id)arg2;	// IMP=0x00100000000819b3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

