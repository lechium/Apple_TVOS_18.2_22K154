//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/GKGameService-Protocol.h>

@class GKPlayerInternal, NSArray, NSDictionary, NSNumber, NSString;

@protocol GKGameServicePrivate <GKGameService>
- (oneway void)removeAllGameActivitiesWithHandler:(void (^)(void))arg1;
- (oneway void)removeAllGameActivitiesForBundleID:(NSString *)arg1 handler:(void (^)(void))arg2;
- (oneway void)fetchActivitiesForBundleID:(NSString *)arg1 ascending:(_Bool)arg2 handler:(void (^)(NSArray *))arg3;
- (oneway void)addGameActivityForActivityType:(NSString *)arg1 BundleID:(NSString *)arg2 userInfo:(NSDictionary *)arg3 handler:(void (^)(void))arg4;
- (oneway void)triggerGameActivityForChallenge:(NSString *)arg1 bundleID:(NSString *)arg2 handler:(void (^)(void))arg3;
- (oneway void)clearAppMetadataCacheWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)getAppMetadataForBundleIDs:(NSArray *)arg1 adamIDs:(NSArray *)arg2 withCompletion:(void (^)(NSDictionary *, NSError *))arg3;
- (oneway void)getGameInstallDataForBundleIDs:(NSArray *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)clearGlobalGameCacheWithHandler:(void (^)(NSError *))arg1;
- (oneway void)submitFriendListAccess:(NSString *)arg1 value:(NSString *)arg2 handler:(void (^)(NSError *))arg3;
- (oneway void)getFriendListAccessForAllGames:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)getGamesPlayedMetaData:(NSString *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)getGamesPlayedSummaries:(NSString *)arg1 limit:(NSNumber *)arg2 withinSecs:(NSNumber *)arg3 handler:(void (^)(NSArray *, NSError *))arg4;
- (oneway void)getGamesPlayedSummaries:(NSString *)arg1 limit:(NSNumber *)arg2 handler:(void (^)(NSArray *, NSError *))arg3;
- (oneway void)getGameMetadataForBundleIDs:(NSArray *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)getGamesWithAchievementStatsForPlayer:(GKPlayerInternal *)arg1 handler:(void (^)(NSArray *, NSString *, NSError *))arg2;
- (oneway void)getGameStatsForPlayer:(GKPlayerInternal *)arg1 bundleIDs:(NSArray *)arg2 handler:(void (^)(NSArray *, NSError *))arg3;
- (oneway void)getGamesForPlayer:(GKPlayerInternal *)arg1 includeInstalled:(_Bool)arg2 handler:(void (^)(NSArray *, NSString *, NSError *))arg3;
- (oneway void)removeGameForBundleID:(NSString *)arg1 handler:(void (^)(void))arg2;
- (oneway void)getOnDeviceMultiplayerGamesForBundleIDs:(NSArray *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)getTopGamesWithHandler:(void (^)(NSArray *, NSError *))arg1;
@end

