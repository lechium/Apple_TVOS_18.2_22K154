//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SagaCloudSDKAddItemToPlaylistOperation
{
    unsigned long long _playlistPersistentID;	// 32 = 0x20
}

- (id)requestWithDatabaseID:(int)arg1 databaseRevision:(int)arg2 opaqueID:(id)arg3 bundleID:(id)arg4;	// IMP=0x00200000000ecc79
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 opaqueID:(id)arg3 bundleID:(id)arg4 playlistPersistentID:(long long)arg5;	// IMP=0x00100000000ecc36
- (id)initWithClientIdentity:(id)arg1 opaqueID:(id)arg2 bundleID:(id)arg3 playlistPersistentID:(long long)arg4;	// IMP=0x00100000000ecb88

@end

