//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKFriendService
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x0020000000035242
+ (Class)interfaceClass;	// IMP=0x0010000000035231
+ (id)filterFriends:(id)arg1 filter:(int)arg2;	// IMP=0x0010000000177cfc
- (oneway void)createFriendRequestWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0020000000037550
- (oneway void)establishNearbyRelationshipsUsingPlayerTokens:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000370da
- (id)predicateForFriendPredicate:(id)arg1 withFilter:(id)arg2;	// IMP=0x0010000000036fa1
- (oneway void)getNearbyTokenForLocalPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000036ab3
- (void)getFriendIDsForPlayer:(id)arg1 withPredicate:(CDUnknownBlockType)arg2 withFilter:(int)arg3 commonFriends:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000356e6
- (void)getFriendIDsForPlayer:(id)arg1 withPredicate:(CDUnknownBlockType)arg2 commonFriends:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000356be
- (oneway void)getChallengableFriendsForPlayer:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000035539
- (void)getChallengableFriendIDsForPlayer:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000354f5
- (void)getFriendIDsForPlayer:(id)arg1 commonFriends:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000354b1
- (void)getFriendsForPlayer:(id)arg1 commonFriends:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000035315
- (void)updateFriendsOfLocalPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000003526a
- (oneway void)getFriendsForPlayer:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000035253
- (oneway void)notifyWidgetFriendListUpdated;	// IMP=0x001000000003524d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

