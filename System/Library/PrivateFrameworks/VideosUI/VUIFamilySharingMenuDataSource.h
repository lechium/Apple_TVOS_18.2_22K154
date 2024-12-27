//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, VUIMediaAPIClient;

__attribute__((visibility("hidden")))
@interface VUIFamilySharingMenuDataSource
{
    _Bool _hasFetchedGenres;	// 8 = 0x8
    _Bool _hasFetchedRecentPurchases;	// 9 = 0x9
    _Bool _hasFetchedMovies;	// 10 = 0xa
    _Bool _hasFetchedShows;	// 11 = 0xb
    _Bool _hasRecentPurchases;	// 12 = 0xc
    _Bool _hasMovies;	// 13 = 0xd
    _Bool _hasShows;	// 14 = 0xe
    NSString *_ownerIdentifier;	// 16 = 0x10
    NSArray *_genres;	// 24 = 0x18
    VUIMediaAPIClient *_mediaClient;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003a1f1
@property(retain, nonatomic) VUIMediaAPIClient *mediaClient; // @synthesize mediaClient=_mediaClient;
@property(nonatomic) _Bool hasShows; // @synthesize hasShows=_hasShows;
@property(nonatomic) _Bool hasMovies; // @synthesize hasMovies=_hasMovies;
@property(nonatomic) _Bool hasRecentPurchases; // @synthesize hasRecentPurchases=_hasRecentPurchases;
@property(nonatomic) _Bool hasFetchedShows; // @synthesize hasFetchedShows=_hasFetchedShows;
@property(nonatomic) _Bool hasFetchedMovies; // @synthesize hasFetchedMovies=_hasFetchedMovies;
@property(nonatomic) _Bool hasFetchedRecentPurchases; // @synthesize hasFetchedRecentPurchases=_hasFetchedRecentPurchases;
@property(nonatomic) _Bool hasFetchedGenres; // @synthesize hasFetchedGenres=_hasFetchedGenres;
@property(retain, nonatomic) NSArray *genres; // @synthesize genres=_genres;
@property(retain, nonatomic) NSString *ownerIdentifier; // @synthesize ownerIdentifier=_ownerIdentifier;
- (void)_notifyDelegatesFetchDidComplete;	// IMP=0x0000000000039f5f
- (CDUnknownBlockType)_categoryTypesSortComparator;	// IMP=0x0000000000039f3d
- (id)_constructGenreTypes;	// IMP=0x0000000000039cd8
- (id)_constructGenreMenuItems;	// IMP=0x0000000000039b14
- (id)_constructMainMenuItems;	// IMP=0x0000000000039a14
- (id)_constructVUIMenuDataSource;	// IMP=0x0000000000039956
- (_Bool)_hasCompletedAllFetches;	// IMP=0x0000000000039917
- (void)_fetchShows;	// IMP=0x00000000000396ca
- (void)_fetchMovies;	// IMP=0x000000000003947d
- (void)_fetchRecentPurchases;	// IMP=0x0000000000039232
- (void)_fetchGenres;	// IMP=0x0000000000038ff9
- (id)getGenreByGenreTitle:(id)arg1;	// IMP=0x0000000000038e26
- (void)startFetch;	// IMP=0x0000000000038dde
- (id)initWithValidCategories:(id)arg1;	// IMP=0x0000000000038d0c

@end

