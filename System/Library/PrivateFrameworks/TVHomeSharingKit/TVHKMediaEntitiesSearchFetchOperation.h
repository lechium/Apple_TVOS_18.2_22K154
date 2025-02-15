//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVHKAsynchronousOperation.h"

@class NSDictionary, NSError, NSOperation, NSString, TVHKMediaEntitiesFetchResponse, TVHKMediaEntitiesSearchFetchResponse, TVHKMediaLibraryRequestSession, TVHKMediaLibrarySessionState, TVHKMediaServerIdentifier;

__attribute__((visibility("hidden")))
@interface TVHKMediaEntitiesSearchFetchOperation : TVHKAsynchronousOperation
{
    TVHKMediaEntitiesSearchFetchResponse *_response;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    NSString *_searchText;	// 24 = 0x18
    TVHKMediaServerIdentifier *_mediaServerIdentifier;	// 32 = 0x20
    unsigned long long _fromRevision;	// 40 = 0x28
    unsigned long long _toRevision;	// 48 = 0x30
    TVHKMediaLibrarySessionState *_sessionState;	// 56 = 0x38
    TVHKMediaLibraryRequestSession *_requestSession;	// 64 = 0x40
    unsigned long long _databaseID;	// 72 = 0x48
    unsigned long long _basePlaylistID;	// 80 = 0x50
    NSOperation *_currentSubOperation;	// 88 = 0x58
    NSDictionary *_mediaCategoryByAlbumPersistentID;	// 96 = 0x60
    NSDictionary *_mediaCategoryByAlbumArtistPersistentID;	// 104 = 0x68
    TVHKMediaEntitiesFetchResponse *_mediaItemsResponse;	// 112 = 0x70
    TVHKMediaEntitiesFetchResponse *_albumsResponse;	// 120 = 0x78
    TVHKMediaEntitiesFetchResponse *_albumArtistsResponse;	// 128 = 0x80
}

+ (id)_mediaEntityCollectionProperties;	// IMP=0x0060000000025826
+ (id)_mediaItemProperties;	// IMP=0x00600000000256d0
+ (void)_updateMediaCategoryDictionary:(id)arg1 withMediaItem:(id)arg2 forMediaEntityCollectionType:(unsigned long long)arg3;	// IMP=0x00600000000252c2
+ (id)new;	// IMP=0x0060000000023d65
- (void).cxx_destruct;	// IMP=0x0000000000025aa2
@property(retain, nonatomic) TVHKMediaEntitiesFetchResponse *albumArtistsResponse; // @synthesize albumArtistsResponse=_albumArtistsResponse;
@property(retain, nonatomic) TVHKMediaEntitiesFetchResponse *albumsResponse; // @synthesize albumsResponse=_albumsResponse;
@property(retain, nonatomic) TVHKMediaEntitiesFetchResponse *mediaItemsResponse; // @synthesize mediaItemsResponse=_mediaItemsResponse;
@property(retain, nonatomic) NSDictionary *mediaCategoryByAlbumArtistPersistentID; // @synthesize mediaCategoryByAlbumArtistPersistentID=_mediaCategoryByAlbumArtistPersistentID;
@property(retain, nonatomic) NSDictionary *mediaCategoryByAlbumPersistentID; // @synthesize mediaCategoryByAlbumPersistentID=_mediaCategoryByAlbumPersistentID;
@property(retain, nonatomic) NSOperation *currentSubOperation; // @synthesize currentSubOperation=_currentSubOperation;
@property(readonly, nonatomic) unsigned long long basePlaylistID; // @synthesize basePlaylistID=_basePlaylistID;
@property(readonly, nonatomic) unsigned long long databaseID; // @synthesize databaseID=_databaseID;
@property(readonly, nonatomic) TVHKMediaLibraryRequestSession *requestSession; // @synthesize requestSession=_requestSession;
@property(readonly, copy, nonatomic) TVHKMediaLibrarySessionState *sessionState; // @synthesize sessionState=_sessionState;
@property(readonly, nonatomic) unsigned long long toRevision; // @synthesize toRevision=_toRevision;
@property(readonly, nonatomic) unsigned long long fromRevision; // @synthesize fromRevision=_fromRevision;
@property(readonly, copy, nonatomic) TVHKMediaServerIdentifier *mediaServerIdentifier; // @synthesize mediaServerIdentifier=_mediaServerIdentifier;
@property(readonly, copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) TVHKMediaEntitiesSearchFetchResponse *response; // @synthesize response=_response;
- (void)_finishExecution;	// IMP=0x0000000000025591
- (void)_startSubOperation:(id)arg1;	// IMP=0x000000000002553f
- (void)_populateMediaCategoryDictionaries;	// IMP=0x000000000002504e
- (void)_startAlbumArtistsFetchOperation;	// IMP=0x0000000000024b2d
- (void)_startAlbumsFetchOperation;	// IMP=0x0000000000024670
- (void)_startMediaItemsFetchOperation;	// IMP=0x0000000000024202
- (void)_updateFetchRequest:(id)arg1 properties:(id)arg2;	// IMP=0x0000000000024114
- (void)cancel;	// IMP=0x000000000002401a
- (void)executionDidBegin;	// IMP=0x0000000000023f7c
- (id)initWithMediaServerIdentifier:(id)arg1 searchText:(id)arg2 fromRevision:(unsigned long long)arg3 toRevision:(unsigned long long)arg4 sessionState:(id)arg5 requestSession:(id)arg6;	// IMP=0x0000000000023e03
- (id)init;	// IMP=0x0000000000023d94

@end

