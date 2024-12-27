//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKAchievementDescriptionCacheObject, GKGameCacheObject, GKPlayerProfileCacheObject;

@interface GKAchievementThatAFriendHasListCacheObject
{
}

+ (id)dateFromMillisecondsSinceEpoch:(double)arg1;	// IMP=0x00400000000fb384
+ (id)friendsForAchievement:(id)arg1 plist:(id)arg2 profileProvider:(CDUnknownBlockType)arg3;	// IMP=0x00100000000fae95
+ (id)entityName;	// IMP=0x00100000000fae88
- (_Bool)isValid;	// IMP=0x00200000000fb5ce
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2 playerId:(id)arg3 achievementId:(id)arg4;	// IMP=0x00100000000fb3e3

// Remaining properties
@property(retain, nonatomic) GKAchievementDescriptionCacheObject *achievementDescription; // @dynamic achievementDescription;
@property(retain, nonatomic) GKGameCacheObject *game; // @dynamic game;
@property(retain, nonatomic) GKPlayerProfileCacheObject *player; // @dynamic player;

@end

