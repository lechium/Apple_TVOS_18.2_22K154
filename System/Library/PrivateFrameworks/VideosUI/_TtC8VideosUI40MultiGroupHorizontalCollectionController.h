//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI40MultiGroupHorizontalCollectionController
{
    MISSING_TYPE *viewImpressioner;	// 8 = 0x8
    MISSING_TYPE *contextMenuInteractor;	// 48 = 0x30
    MISSING_TYPE *isApplyingSnapshot;	// 56 = 0x38
    MISSING_TYPE *cachedCellMetrics;	// 64 = 0x40
    MISSING_TYPE *$__lazy_storage_$_cachedHeaderViews;	// 152 = 0x98
    MISSING_TYPE *internalCollectionViewModel;	// 160 = 0xa0
    MISSING_TYPE *$__lazy_storage_$_shelfViewLayout;	// 168 = 0xa8
    MISSING_TYPE *$__lazy_storage_$_groupCollectionContainerView;	// 176 = 0xb0
    MISSING_TYPE *dataSource;	// 184 = 0xb8
    MISSING_TYPE *lastViewWidth;	// 192 = 0xc0
    MISSING_TYPE *lastFocusedIndexPath;	// 3134652225 = 0xbad6ff41
    MISSING_TYPE *supplementaryKindToReuseIdentifierMap;	// 1223657804 = 0x48ef894c
    MISSING_TYPE *playButtonRecognizer;	// 4282450128 = 0xff4100d0
    MISSING_TYPE *datasourceLoaded;	// 12716924 = 0xc20b7c
}

- (void).cxx_destruct;	// IMP=0x00000000008ec90d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000008ebf33
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000008ebd8e
- (id)init;	// IMP=0x00000000008ebbfa
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
- (void)vui_viewDidLoad;	// IMP=0x00000000008eb937
- (void)vui_loadView;	// IMP=0x00000000008eb28f
- (struct CGPoint)vuiCollectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;	// IMP=0x00000000008ee58d
- (void)vuiCollectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 at:(id)arg4;	// IMP=0x00000000008ee51f
- (void)vuiCollectionView:(id)arg1 didEndDisplaying:(id)arg2 for:(id)arg3;	// IMP=0x00000000008ee472
- (void)vuiCollectionView:(id)arg1 willDisplay:(id)arg2 for:(id)arg3;	// IMP=0x00000000008ee2ef
- (void)vuiCollectionView:(id)arg1 didSelectItemAt:(id)arg2;	// IMP=0x00000000008ee08d
- (void)vuiScrollViewDidScroll:(id)arg1;	// IMP=0x00000000008ee6e6
- (void)vuiScrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x00000000008ee5f6
- (void)vuiScrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;	// IMP=0x00000000008ee5f0
- (void)vuiScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x00000000008ee5ea
- (void)vuiScrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000000008ee5a2
- (void)vuiCollectionView:(id)arg1 didUpdateFocusIn:(id)arg2 with:(id)arg3;	// IMP=0x00000000008ef503
- (id)vuiIndexPathForPreferredFocusedViewIn:(id)arg1;	// IMP=0x00000000008ee872
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 selectionMarginsForItemAtIndexPath:(id)arg3;	// IMP=0x00000000008efd75
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x00000000008efb7c
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x00000000008efa8e
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000000008ef7c1
- (void)playButtonAction:(id)arg1;	// IMP=0x00000000008f0e21
- (void)vuiCollectionView:(id)arg1 willEndContextMenuInteraction:(id)arg2 animator:(id)arg3;	// IMP=0x00000000008f28ad
- (id)vuiCollectionView:(id)arg1 contextMenuConfigurationForItemAt:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x00000000008f270a
- (id)vuiCollectionView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;	// IMP=0x00000000008f25bd
- (id)vuiCollectionView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;	// IMP=0x00000000008f3630

@end

