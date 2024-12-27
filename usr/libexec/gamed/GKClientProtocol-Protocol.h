//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class GKAchievementInternal, GKAuthenticateResponse, GKChallengeInternal, GKFriendRequestInternal, GKGameInternal, GKScoreInternal, NSArray, NSData, NSDictionary, NSError, NSString;

@protocol GKClientProtocol <NSObject>
- (oneway void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(NSDictionary *)arg2;
- (oneway void)setBadgeCount:(unsigned long long)arg1 forType:(unsigned long long)arg2;
- (oneway void)achievementSelected:(GKAchievementInternal *)arg1;
- (oneway void)scoreSelected:(GKScoreInternal *)arg1;
- (oneway void)challengeCompleted:(GKChallengeInternal *)arg1;
- (oneway void)challengeReceived:(GKChallengeInternal *)arg1;
- (oneway void)completedChallengeSelected:(GKChallengeInternal *)arg1;
- (oneway void)receivedChallengeSelected:(GKChallengeInternal *)arg1;
- (oneway void)fetchTurnBasedData;
- (oneway void)didReceiveData:(NSData *)arg1 reliably:(_Bool)arg2 forRecipients:(NSArray *)arg3 fromSender:(NSString *)arg4;
- (oneway void)didDisconnectFromParticipantWithID:(NSString *)arg1;
- (oneway void)didConnectToParticipantWithID:(NSString *)arg1;
- (oneway void)nearbyDataReceivedForPlayerID:(NSString *)arg1 deviceID:(NSString *)arg2 data:(NSData *)arg3;
- (oneway void)nearbyPlayerLostForPlayerID:(NSString *)arg1 deviceID:(NSString *)arg2;
- (oneway void)nearbyPlayerFoundForPlayerID:(NSString *)arg1 deviceID:(NSString *)arg2 discoveryInfo:(NSDictionary *)arg3;
- (oneway void)relayPushNotification:(NSDictionary *)arg1;
- (oneway void)cancelGameInvite:(NSString *)arg1;
- (oneway void)cancelInviteWithNotification:(NSDictionary *)arg1;
- (oneway void)updateInviteWithNotification:(NSDictionary *)arg1;
- (oneway void)declineInviteWithNotification:(NSDictionary *)arg1;
- (oneway void)acceptInviteWithNotification:(NSDictionary *)arg1;
- (oneway void)acceptMultiplayerGameInvite;
- (oneway void)presentBannerWithNotification:(NSData *)arg1;
- (oneway void)metricsValuesChanged;
- (oneway void)respondedToNearbyInvite:(NSDictionary *)arg1;
- (oneway void)friendRequestSelected:(GKFriendRequestInternal *)arg1;
- (oneway void)requestSandboxExtension:(void (^)(NSString *))arg1;
- (oneway void)completedOptimisticAuthenticationWithResponse:(GKAuthenticateResponse *)arg1 error:(NSError *)arg2;
- (oneway void)authenticatedPlayersDidChange:(NSArray *)arg1 authenticatingBundleID:(NSString *)arg2 reply:(void (^)(void))arg3;
- (oneway void)setCurrentGame:(GKGameInternal *)arg1 serverEnvironment:(long long)arg2 reply:(void (^)(void))arg3;
- (oneway void)setPreferencesValues:(NSDictionary *)arg1;
- (oneway void)resetNetworkActivity;
- (oneway void)endNetworkActivity;
- (oneway void)beginNetworkActivity;
@end

