//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GKCloudKitMultiplayer : NSObject
{
}

+ (void)deleteInviteRecordWithRecordID:(id)arg1 fromDatabase:(id)arg2;	// IMP=0x00400000000c3d33
+ (void)searchAndSaveIdentityForRecord:(id)arg1 database:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c3d2d
+ (void)getAssociatedAccountsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c3d27
+ (id)msgServiceQueue;	// IMP=0x00100000000c3cd0
+ (void)generateAndStoreInviteBulletinForRecord:(id)arg1 database:(id)arg2;	// IMP=0x00100000000c3428
+ (id)packFakeTurnBasedBulletinWithZoneData:(id)arg1;	// IMP=0x00100000000c2e6b
+ (id)packFakeRealTimeBulletinWithZoneData:(id)arg1;	// IMP=0x00100000000c20a9
+ (void)acceptShareMetadata:(id)arg1 retryCount:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c196e
+ (void)handleLegacyShareMetadata:(id)arg1 needsAccept:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c1173
+ (void)handleCloudKitShareMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c0b33
+ (void)bundleIDsForContainerName:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c04e8
+ (id)databaseForZoneID:(id)arg1;	// IMP=0x00100000000c049c
+ (_Bool)isOwnZoneID:(id)arg1;	// IMP=0x00100000000c037c
+ (void)primaryPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c0030
+ (void)updateUserWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bffc7
+ (id)sessionCache;	// IMP=0x00100000000bff72

@end

