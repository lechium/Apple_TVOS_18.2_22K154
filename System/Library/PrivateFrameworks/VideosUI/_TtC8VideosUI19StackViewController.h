//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI19StackViewController
{
    MISSING_TYPE *peekingEnabled;	// 17 = 0x11
    MISSING_TYPE *logForMissingUpNextCell;	// 18 = 0x12
    MISSING_TYPE *collectionImpressioner;	// 24 = 0x18
    MISSING_TYPE *minYOffsetForPeeking;	// 64 = 0x40
    MISSING_TYPE *maxYOffsetForPeeking;	// 80 = 0x50
    MISSING_TYPE *cardTransitionInProgress;	// 89 = 0x59
    MISSING_TYPE *stackType;	// 90 = 0x5a
    MISSING_TYPE *$__lazy_storage_$_collectionView;	// 96 = 0x60
    MISSING_TYPE *supplementaryHeaderTypeToKindMap;	// 104 = 0x68
    MISSING_TYPE *supplementaryFooterTypeToKindMap;	// 112 = 0x70
    MISSING_TYPE *supplementaryKindToReuseIdentifierMap;	// 120 = 0x78
    MISSING_TYPE *$__lazy_storage_$_dataSource;	// 128 = 0x80
    MISSING_TYPE *templateViewModel;	// 136 = 0x88
    MISSING_TYPE *collectionViewModel;	// 144 = 0x90
    MISSING_TYPE *$__lazy_storage_$_prototypeCells;	// 152 = 0x98
    MISSING_TYPE *$__lazy_storage_$_supplementaryCells;	// 160 = 0xa0
    MISSING_TYPE *sectionViewModels;	// 168 = 0xa8
    MISSING_TYPE *$__lazy_storage_$_hostingCellViewControllers;	// 176 = 0xb0
    MISSING_TYPE *cellConfigurator;	// 184 = 0xb8
    MISSING_TYPE *cellActionInterceptor;	// 200 = 0xc8
    MISSING_TYPE *sectionMetrics;	// 216 = 0xd8
    MISSING_TYPE *currentFocusedIndexPath;	// 1918989649 = 0x72617551
    MISSING_TYPE *lastFocusedIndexPath;	// 25970 = 0x6572
    MISSING_TYPE *lastFocusedIndexPathContentOffset;	// 12 = 0xc
    MISSING_TYPE *dynamicSectionMetricsWidthMap;	// 24 = 0x18
    MISSING_TYPE *$__lazy_storage_$_pendingHeaderAdjustments;	// 688914431 = 0x290fffff
    MISSING_TYPE *focusedIndexPathForHeaderAdjustment;	// 63772163 = 0x3cd1603
    MISSING_TYPE *scrollViewBeingObservedForHeaderAdjustment;	// 1937330991 = 0x7379532f
    MISSING_TYPE *headerAdjustmentOnScrollWorkItem;	// 1919052108 = 0x7262694c
    MISSING_TYPE *_showcasePercentage;	// 2692557071 = 0xa07d290f
    MISSING_TYPE *showcasePercentageContentTopAdjustment;	// 1986622032 = 0x76697250
    MISSING_TYPE *_showcaseHeight;	// 1208009143 = 0x4800c1b7
    MISSING_TYPE *verticalPaginationMonitor;	// 2370361413 = 0x8d48d845
    MISSING_TYPE *nextFocusedViewFromCollectionView;	// 2370310259 = 0x8d481073
    MISSING_TYPE *contextMenuInteractor;	// 3091728451 = 0xb8480843
    MISSING_TYPE *signpostID;	// 48 = 0x30
    MISSING_TYPE *didTrackFirstDisplay;	// 2607955339 = 0x9b723d8b
    MISSING_TYPE *didAppearOnce;	// 1701667186 = 0x656d6172
}

- (void).cxx_destruct;	// IMP=0x00000000009bf597
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000009bfc9f
- (void)dealloc;	// IMP=0x00000000009bf57a
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x00000000009bdaca
- (void)vui_viewDidLayoutSubviews;	// IMP=0x00000000009bc9c5
- (void)vui_viewDidAppear:(_Bool)arg1;	// IMP=0x00000000009bc1c3
- (void)vui_viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000009bbeb9
- (void)vui_viewDidLoad;	// IMP=0x00000000009bbe02
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000009bb6ec
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
- (void)_observeScrollViewDidScroll:(id)arg1;	// IMP=0x000000000087f33b
- (void)vuiCollectionView:(id)arg1 orthogonalScrollViewDidScroll:(id)arg2 section:(long long)arg3;	// IMP=0x00000000009c1719
- (struct CGPoint)vuiCollectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;	// IMP=0x00000000009c0cb2
- (void)vuiCollectionView:(id)arg1 didSelectItemAt:(id)arg2;	// IMP=0x00000000009c0a76
- (void)vuiCollectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 at:(id)arg4;	// IMP=0x00000000009c07c7
- (void)vuiCollectionView:(id)arg1 didEndDisplaying:(id)arg2 for:(id)arg3;	// IMP=0x00000000009c06ef
- (void)vuiCollectionView:(id)arg1 willDisplay:(id)arg2 for:(id)arg3;	// IMP=0x00000000009c0620
- (void)vuiCollectionView:(id)arg1 willEndContextMenuInteraction:(id)arg2 animator:(id)arg3;	// IMP=0x00000000009c1ab8
- (id)vuiCollectionView:(id)arg1 contextMenuConfigurationForItemAt:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x00000000009c1915
- (id)vuiCollectionView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;	// IMP=0x00000000009c17b3
- (id)vuiCollectionView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;	// IMP=0x00000000009c52b1
- (void)vuiScrollViewDidScroll:(id)arg1;	// IMP=0x00000000009c237c
- (void)vuiScrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;	// IMP=0x00000000009c21ec
- (void)vuiScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x00000000009c1e48
- (void)vuiScrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000000009c1dfe
- (void)vuiScrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x00000000009c1c23
- (void)vuiCollectionView:(id)arg1 didUpdateFocusIn:(id)arg2 with:(id)arg3;	// IMP=0x00000000009c2625
- (id)vuiIndexPathForPreferredFocusedViewIn:(id)arg1;	// IMP=0x00000000009c23ed
- (void)didUpdateContentSize:(id)arg1;	// IMP=0x00000000009c2b91
- (_Bool)shouldRubberbandElementWithCategory:(unsigned long long)arg1 in:(id)arg2 at:(id)arg3;	// IMP=0x00000000009c2bda
- (_Bool)vui_handleActionInCell:(id)arg1 fromSubview:(id)arg2 details:(id)arg3;	// IMP=0x00000000009c302f
- (void)vui_cellNeedsReloading:(id)arg1;	// IMP=0x00000000009c2f81

@end

