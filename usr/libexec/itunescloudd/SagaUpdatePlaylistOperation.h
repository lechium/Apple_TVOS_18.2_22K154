//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICCloudItemIDList, NSDictionary;

@interface SagaUpdatePlaylistOperation
{
    long long _playlistPersistentID;	// 8 = 0x8
    NSDictionary *_properties;	// 16 = 0x10
    ICCloudItemIDList *_trackList;	// 24 = 0x18
    _Bool _libraryUpdateRequired;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000000c1019
- (void).cxx_destruct;	// IMP=0x00200000000c0f2a
@property(readonly, nonatomic) _Bool libraryUpdateRequired; // @synthesize libraryUpdateRequired=_libraryUpdateRequired;
- (void)main;	// IMP=0x00100000000c0317
- (_Bool)isPersistent;	// IMP=0x00100000000c030f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000c0238
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000bfe2b
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 playlistPersistentID:(long long)arg3 properties:(id)arg4 trackList:(id)arg5;	// IMP=0x00100000000bfd47
- (id)initWithClientIdentity:(id)arg1 playlistPersistentID:(long long)arg2 properties:(id)arg3 trackList:(id)arg4;	// IMP=0x00100000000bfc9c

@end

