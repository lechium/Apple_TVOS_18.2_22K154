//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/NSObject-Protocol.h>

@class GKPlayerInternal, NSArray, NSString;

@protocol GKFriendService <NSObject>
- (oneway void)createFriendRequestWithIdentifier:(NSString *)arg1 handler:(void (^)(NSString *, NSError *))arg2;
- (oneway void)establishNearbyRelationshipsUsingPlayerTokens:(NSArray *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)getNearbyTokenForLocalPlayerWithHandler:(void (^)(NSString *, NSError *))arg1;
- (oneway void)getChallengableFriendsForPlayer:(GKPlayerInternal *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)getFriendsForPlayer:(GKPlayerInternal *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
@end

