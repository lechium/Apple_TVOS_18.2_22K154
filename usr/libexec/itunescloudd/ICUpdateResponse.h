//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface ICUpdateResponse
{
    _Bool _hasAddToPlaylistBehavior;	// 8 = 0x8
    _Bool _hasAddToLibraryWhenFavoritingBehavior;	// 9 = 0x9
    _Bool _hasNeedsResetSync;	// 10 = 0xa
    _Bool _hasClientFeaturesVersion;	// 11 = 0xb
    unsigned char _addToPlaylistBehavior;	// 12 = 0xc
    unsigned char _addToLibraryWhenFavoritingBehavior;	// 13 = 0xd
    unsigned char _needsResetSync;	// 14 = 0xe
    unsigned int _databaseRevision;	// 16 = 0x10
    NSString *_clientFeaturesVersion;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000002106a
@property(retain, nonatomic) NSString *clientFeaturesVersion; // @synthesize clientFeaturesVersion=_clientFeaturesVersion;
@property(nonatomic) unsigned char needsResetSync; // @synthesize needsResetSync=_needsResetSync;
@property(nonatomic) unsigned char addToLibraryWhenFavoritingBehavior; // @synthesize addToLibraryWhenFavoritingBehavior=_addToLibraryWhenFavoritingBehavior;
@property(nonatomic) unsigned char addToPlaylistBehavior; // @synthesize addToPlaylistBehavior=_addToPlaylistBehavior;
@property(nonatomic) _Bool hasClientFeaturesVersion; // @synthesize hasClientFeaturesVersion=_hasClientFeaturesVersion;
- (_Bool);	// IMP=0x0010000000020fc2
@property(nonatomic) _Bool hasNeedsResetSync; // @synthesize hasNeedsResetSync=_hasNeedsResetSync;
@property(nonatomic) _Bool hasAddToLibraryWhenFavoritingBehavior; // @synthesize hasAddToLibraryWhenFavoritingBehavior=_hasAddToLibraryWhenFavoritingBehavior;
@property(nonatomic) _Bool hasAddToPlaylistBehavior; // @synthesize hasAddToPlaylistBehavior=_hasAddToPlaylistBehavior;
@property(nonatomic) unsigned int databaseRevision; // @synthesize databaseRevision=_databaseRevision;

@end

