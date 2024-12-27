//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SagaSDKCreatePlaylistOperation
{
    NSString *_requestingBundleID;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000251ac
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000002512f
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000025094
- (_Bool)waitForLibraryUpdate;	// IMP=0x001000000002508c
- (id)requestWithDatabaseID:(unsigned int)arg1 databaseRevision:(unsigned int)arg2 playlistProperties:(id)arg3 trackList:(id)arg4;	// IMP=0x0010000000025058
- (id)initWithConfiguration:(id)arg1 playlistPersistentID:(long long)arg2 properties:(id)arg3 trackList:(id)arg4 requestingBundleID:(id)arg5 clientIdentity:(id)arg6;	// IMP=0x0010000000024faf

@end

