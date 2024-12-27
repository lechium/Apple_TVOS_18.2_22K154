//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSString;

@interface GKProfileServicePrivate
{
}

+ (id)cacheKeyForScopedIDsWithGameBundleID:(id)arg1 playerID:(id)arg2;	// IMP=0x0020000000032adb
+ (id)cacheKeyForScopedIDs:(id)arg1;	// IMP=0x0010000000032a31
+ (id)makeGKScopedIDsFromInternal:(id)arg1;	// IMP=0x00100000000322cd
+ (id)scopedIDsFetchRequestWithPlayerIDs:(id)arg1 gameBundleIDs:(id)arg2;	// IMP=0x0010000000031037
+ (unsigned long long)requiredEntitlements;	// IMP=0x001000000002a86d
+ (Class)interfaceClass;	// IMP=0x001000000002a85c
+ (id)parseContactAssociationIDsFromRelationships:(id)arg1 contactAssociationIDMap:(id)arg2 contacts:(id)arg3;	// IMP=0x00100000001d076c
- (oneway void)getContextualPromptStatesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x002000000003439a
- (oneway void)clearScopedIdsCacheWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000003409a
- (oneway void)fetchAndCacheScopedPlayerIDsForRequest:(id)arg1 scopedIDsCacheKeys:(id)arg2 cacheOnly:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000335ec
- (MISSING_TYPE *)fetchAndCacheScopedPlayerIDs:gameBundleIDs:scopedIDsCacheKeys:cacheOnly:handler: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000032bfe
- (oneway void)fetchAndCacheScopedPlayerIDs:(id)arg1 gameBundleIDs:(id)arg2 cachedScopedIDs:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000032b03
- (id)loadCachedScopedPlayerIDs:(id)arg1 gameBundleIDs:(id)arg2 error:(id *)arg3 moc:(id)arg4;	// IMP=0x001000000003244c
- (oneway void)loadScopedPlayerIDs:(id)arg1 gameBundleIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000031a43
- (id)fetchScopedIDsCacheKeysWithPlayerIDs:(id)arg1 gameBundleIDs:(id)arg2 moc:(id)arg3;	// IMP=0x00100000000316d9
- (id)filterPlayerIDsThatNeedPreloading:(id)arg1 gameBundleIDs:(id)arg2 moc:(id)arg3;	// IMP=0x00100000000310f9
- (oneway void)preloadInstalledGamesScopedPlayerIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003088d
- (void)loadProfileForPlayer:(id)arg1 pieces:(unsigned char)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x001000000002fc9d
- (oneway void)getProfilesForPlayerIDs:(id)arg1 fetchOptions:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002f88a
- (oneway void)getProfilePrivacyWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002f561
- (oneway void)invalidateCachedProfileForLocalPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002f379
- (oneway void)setProfileSettings:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002ef16
- (oneway void)setProfilePrivacy:(int)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002e848
- (oneway void)setPrivacyNoticeVersion:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002e510
- (void)setFriendInvitesAllowedFlag:(id)arg1 source:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002e1d2
- (oneway void)denyFriendInvitesFrom:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002e1b3
- (oneway void)allowFriendInvitesFrom:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002e194
- (oneway void)setArcadeSubscriptionExpiration:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002ddcd
- (oneway void)setGlobalFriendListAccess:(int)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002d8d6
- (oneway void)getTermsAndConditionsURLWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002d3be
- (oneway void)getNicknameSuggestions:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002ce7a
- (oneway void)setPlayerNickname:(id)arg1 suggestionsCount:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002c56e
- (oneway void)setFindable:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002c05f
- (oneway void)deletePhotoWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002bb4b
- (oneway void)setPhotoData:(id)arg1 avatarType:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002b487
- (oneway void)cachePhotos:(id)arg1 avatarType:(id)arg2 fileNames:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x001000000002ae6e
- (oneway void)setStatus:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002a878

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

