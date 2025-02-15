//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterUI/NSObject-Protocol.h>

@class GKChallenge, GKPlayerInternal, GKTurnBasedMatch, NSString;

@protocol GKDashboardServiceInterface <NSObject>
- (void)finish;

@optional
- (void)dismissWithGameController;
- (void)requestRecipientProperties:(GKPlayerInternal *)arg1;
- (void)requestImagesForLeaderboardsInSet:(NSString *)arg1 handler:(void (^)(NSError *))arg2;
- (void)requestImagesForLeaderboardSetsWithHandler:(void (^)(NSError *))arg1;
- (void)requestDashboardLogoImageWithHandler:(void (^)(NSError *))arg1;
- (void)dashboardDidChangeToLeaderboardIdentifier:(NSString *)arg1;
- (void)dashboardDidChangeToLeaderboardPlayerScope:(long long)arg1;
- (void)dashboardDidChangeToLeaderboardTimeScope:(long long)arg1;
- (void)dashboardDidChangeToViewState:(long long)arg1;
- (void)quitTurnBasedMatch:(GKTurnBasedMatch *)arg1;
- (void)finishWithTurnBasedMatch:(GKTurnBasedMatch *)arg1;
- (void)finishAndPlayChallenge:(GKChallenge *)arg1;
- (void)setToDarkBackground;
- (void)setToLightBackground;
@end

