//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/CKXPCShareDaemon-Protocol.h>
#import <GameCenterFoundation/NSObject-Protocol.h>

@class CKShareMetadata, GKGameInternal, GKPlayerInternal, NSDictionary, NSString, NSURL;

@protocol GKDaemonProtocol <NSObject, CKXPCShareDaemon>
- (void)handleCloudKitShareMetadata:(CKShareMetadata *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)resetLoginCancelCount;
- (oneway void)loadRemoteImageDataForURL:(NSURL *)arg1 reply:(void (^)(NSData *))arg2;
- (oneway void)localizedMessageFromDictionary:(NSDictionary *)arg1 forBundleID:(NSString *)arg2 handler:(void (^)(NSString *))arg3;
- (oneway void)getGamedFiredUpWithHandler:(void (^)(NSString *, NSError *))arg1;
- (oneway void)getPreferenceForKey:(NSString *)arg1 handler:(void (^)(_Bool, _Bool))arg2;
- (oneway void)getAuthenticatedLocalPlayersWithStatus:(unsigned long long)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)getAuthenticatedPlayerCredential:(void (^)(GKAuthenticateCredential *))arg1;
- (oneway void)getAuthenticatedPlayerInfo:(void (^)(GKAuthenticateResponse *, NSError *))arg1;
- (oneway void)getAuthenticatedPlayerIDWithHandler:(void (^)(NSString *))arg1;
- (oneway void)getAccountNameWithHandler:(void (^)(NSString *))arg1;
- (oneway void)getPrivateServicesForPID:(int)arg1 localPlayer:(GKPlayerInternal *)arg2 reply:(void (^)(NSError *, id <GKAccountServicePrivate>, id <GKProfileServicePrivate>, id <GKFriendServicePrivate>, id <GKGameServicePrivate>, id <GKGameStatServicePrivate>, id <GKChallengeServicePrivate>, id <GKMultiplayerServicePrivate>, id <GKTurnBasedServicePrivate>, id <GKUtilityServicePrivate>, id <GKBulletinServicePrivate>))arg3;
- (oneway void)getServicesForPID:(int)arg1 localPlayer:(GKPlayerInternal *)arg2 reply:(void (^)(id <GKAccountService>, id <GKProfileService>, id <GKFriendService>, id <GKGameService>, id <GKGameStatService>, id <GKChallengeService>, id <GKMultiplayerService>, id <GKTurnBasedService>, id <GKUtilityService>, id <GKBulletinService>))arg3;
- (oneway void)messagesDidReceiveGameCenterURL:(NSURL *)arg1 senderHandle:(NSString *)arg2 contactID:(NSString *)arg3;
- (oneway void)setTestGame:(GKGameInternal *)arg1 protocolVersion:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (oneway void)setHostPID:(int)arg1 reply:(void (^)(void))arg2;
@end

