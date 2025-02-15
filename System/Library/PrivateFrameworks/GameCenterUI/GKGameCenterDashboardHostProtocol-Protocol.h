//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterUI/GKExtensionHostProtocol-Protocol.h>

@class GKChallengeInternal, GKTurnBasedMatchInternal, NSNumber, NSString;

@protocol GKGameCenterDashboardHostProtocol <GKExtensionHostProtocol>

@optional
- (void)requestImagesForLeaderboardsInSet:(NSString *)arg1 handler:(void (^)(NSError *))arg2;
- (void)requestImagesForLeaderboardSetsWithHandler:(void (^)(NSError *))arg1;
- (void)requestDashboardLogoImageWithHandler:(void (^)(NSError *))arg1;
- (void)playerQuitMatch:(GKTurnBasedMatchInternal *)arg1;
- (void)finishWithMatch:(GKTurnBasedMatchInternal *)arg1;
- (void)getMethodsImplementedByChallengeEventHandlerDelegate:(void (^)(NSArray *, NSError *))arg1;
- (void)playPressedForChallenge:(GKChallengeInternal *)arg1;
- (void)remoteControllerDidSelectLeaderboardPlayerScope:(NSNumber *)arg1;
- (void)remoteControllerDidSelectLeaderboardTimeScope:(NSNumber *)arg1;
- (void)remoteControllerDidSelectLeaderboardIdentifier:(NSString *)arg1;
- (void)remoteControllerDidChangeViewState:(NSNumber *)arg1;
@end

