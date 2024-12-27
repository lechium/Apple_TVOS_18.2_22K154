//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UISearchSuggestionController.h"

@class NSArray, NSString, UICollectionView;

__attribute__((visibility("hidden")))
@interface _UISearchSuggestionControllerTVOS : _UISearchSuggestionController
{
    _Bool _shouldDisplayDefaultSuggestion;	// 8 = 0x8
    _Bool _showSearchSuggestionPreview;	// 9 = 0x9
    NSString *_searchSuggestionsTitle;	// 16 = 0x10
    UICollectionView *_collectionView;	// 24 = 0x18
    NSString *_suggestionCellIdentifier;	// 32 = 0x20
    NSString *_suggestionsTitleIdentifier;	// 40 = 0x28
    NSArray *_allSuggestions;	// 48 = 0x30
    NSString *_searchString;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000162abec
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(copy, nonatomic) NSArray *allSuggestions; // @synthesize allSuggestions=_allSuggestions;
@property(retain, nonatomic) NSString *suggestionsTitleIdentifier; // @synthesize suggestionsTitleIdentifier=_suggestionsTitleIdentifier;
@property(retain, nonatomic) NSString *suggestionCellIdentifier; // @synthesize suggestionCellIdentifier=_suggestionCellIdentifier;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) NSString *searchSuggestionsTitle; // @synthesize searchSuggestionsTitle=_searchSuggestionsTitle;
@property(nonatomic) _Bool showSearchSuggestionPreview; // @synthesize showSearchSuggestionPreview=_showSearchSuggestionPreview;
@property(nonatomic) _Bool shouldDisplayDefaultSuggestion; // @synthesize shouldDisplayDefaultSuggestion=_shouldDisplayDefaultSuggestion;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x000000000162aa1d
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000000162a979
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000162a8a1
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000162a7c9
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000000162a4fa
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x000000000162a4f2
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000162a44b
- (void)updateCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000001629f74
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000001629e80
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000001629dcc
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000001629d88
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000001629d7d
- (void)update;	// IMP=0x0000000001629b4c
- (void)updateSearchString:(id)arg1;	// IMP=0x0000000001629989
- (void)updateSuggestions:(id)arg1 userInitiated:(_Bool)arg2;	// IMP=0x0000000001629729
- (void)updateSuggestionGroups:(id)arg1 userInitiated:(_Bool)arg2;	// IMP=0x00000000016296df
- (void)setDelegate:(id)arg1;	// IMP=0x0000000001629642
- (id)makeCollectionView;	// IMP=0x0000000001629467
- (id)init;	// IMP=0x000000000162940e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

