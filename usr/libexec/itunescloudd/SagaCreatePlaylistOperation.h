//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICCloudItemIDList, NSDictionary;

@interface SagaCreatePlaylistOperation
{
    long long _playlistPersistentID;	// 8 = 0x8
    NSDictionary *_properties;	// 16 = 0x10
    ICCloudItemIDList *_trackList;	// 24 = 0x18
    unsigned long long _playlistSagaID;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000024fa7
- (void);	// IMP=0x0020000000024eb2
@property(readonly, nonatomic) unsigned long long playlistSagaID; // @synthesize playlistSagaID=_playlistSagaID;
- (void)main;	// IMP=0x00100000000241d7
- (_Bool)isPersistent;	// IMP=0x00100000000241cf
@property(readonly, nonatomic) _Bool waitForLibraryUpdate;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000024109
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000023f87
- (id)requestWithDatabaseID:(unsigned int)arg1 databaseRevision:(unsigned int)arg2 playlistProperties:(id)arg3 trackList:(id)arg4;	// IMP=0x0010000000023f6e
- (id)initWithConfiguration:(id)arg1 playlistPersistentID:(long long)arg2 properties:(id)arg3 trackList:(id)arg4 clientIdentity:(id)arg5;	// IMP=0x0010000000023eaf
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 playlistPersistentID:(long long)arg3 properties:(id)arg4 trackList:(id)arg5;	// IMP=0x0010000000023e83

@end

