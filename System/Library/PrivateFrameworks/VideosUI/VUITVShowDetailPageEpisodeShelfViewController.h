//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSIndexPath, NSString, UICollectionViewDiffableDataSource, UIView, VUIMediaCollection, VUITVLibraryEpisodeListCell, VUIVisualEffectLabel;

__attribute__((visibility("hidden")))
@interface VUITVShowDetailPageEpisodeShelfViewController
{
    double _cellWidth;	// 8 = 0x8
    NSArray *_episodes;	// 16 = 0x10
    NSIndexPath *_currentFocusedIndexPath;	// 24 = 0x18
    NSIndexPath *_lastFocusedIndexPath;	// 32 = 0x20
    UIView *_shelfTitleView;	// 40 = 0x28
    VUIVisualEffectLabel *_seasonVisualEffectLabel;	// 48 = 0x30
    VUIMediaCollection *_season;	// 56 = 0x38
    VUITVLibraryEpisodeListCell *_sizingCell;	// 64 = 0x40
    UICollectionViewDiffableDataSource *_diffableDataSource;	// 72 = 0x48
    struct CGSize _cellSize;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000895b1
@property(retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(retain, nonatomic) VUITVLibraryEpisodeListCell *sizingCell; // @synthesize sizingCell=_sizingCell;
@property(retain, nonatomic) VUIMediaCollection *season; // @synthesize season=_season;
@property(retain, nonatomic) VUIVisualEffectLabel *seasonVisualEffectLabel; // @synthesize seasonVisualEffectLabel=_seasonVisualEffectLabel;
@property(retain, nonatomic) UIView *shelfTitleView; // @synthesize shelfTitleView=_shelfTitleView;
@property(retain, nonatomic) NSIndexPath *lastFocusedIndexPath; // @synthesize lastFocusedIndexPath=_lastFocusedIndexPath;
@property(retain, nonatomic) NSIndexPath *currentFocusedIndexPath; // @synthesize currentFocusedIndexPath=_currentFocusedIndexPath;
@property(retain, nonatomic) NSArray *episodes; // @synthesize episodes=_episodes;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
- (id)_entityIdentifiersFromEpisodes;	// IMP=0x0000000000089269
- (void)_startPlaybackWithMediaItem:(id)arg1;	// IMP=0x0000000000088f29
- (void)_updateShelfViewFrameAnimated:(_Bool)arg1;	// IMP=0x0000000000088bd5
- (void)_configureSizingCellForEpisodes:(id)arg1;	// IMP=0x00000000000889bc
- (void)_setupViews;	// IMP=0x00000000000886a0
- (id)_createDiffableDataSourceSnapshot;	// IMP=0x00000000000884a2
- (id)_createDiffableDataSourceForCollectionView:(id)arg1;	// IMP=0x000000000008825e
- (void)didTapOnInformationViewWithTitle:(id)arg1 description:(id)arg2;	// IMP=0x00000000000881c5
- (void)didTapOnImageViewWithMediaItem:(id)arg1;	// IMP=0x00000000000881b3
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000000008819c
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000000000880a3
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x0000000000088004
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000000087fec
- (struct CGSize)_layoutWithSize:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;	// IMP=0x0000000000087942
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000008792b
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000087907
- (void)viewDidLoad;	// IMP=0x0000000000087862
- (void)updateWithEpisodes:(id)arg1;	// IMP=0x00000000000877c4
- (void)configureWithCollectionView:(id)arg1;	// IMP=0x0000000000087736
- (id)initWithEpisodes:(id)arg1 season:(id)arg2;	// IMP=0x0000000000087645

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

