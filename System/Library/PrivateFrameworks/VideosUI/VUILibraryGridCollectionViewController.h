//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewController.h>

@class NSArray, NSDictionary, NSIndexPath, NSMutableDictionary, NSString, UIBarButtonItem, UICollectionViewCell, UICollectionViewDiffableDataSource, VUICollectionHeaderView, VUIFamilyMember, VUIMediaEntitiesDataSource, VUIMediaEntity, VUIMediaEntityFetchRequest, VUIViewControllerContentPresenter;
@protocol VUILibraryGridCollectionViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUILibraryGridCollectionViewController : UICollectionViewController
{
    _Bool _requiresRelayout;	// 8 = 0x8
    struct CGSize _cellSize;	// 16 = 0x10
    NSMutableDictionary *_cellMetrics;	// 32 = 0x20
    VUICollectionHeaderView *_sizingHeaderView;	// 40 = 0x28
    _Bool _hideLockupTitles;	// 48 = 0x30
    _Bool _forceBackButton;	// 49 = 0x31
    _Bool _waitingForFetch;	// 50 = 0x32
    VUIFamilyMember *_familyMember;	// 56 = 0x38
    id <VUILibraryGridCollectionViewControllerDelegate> _delegate;	// 64 = 0x40
    long long _gridFilter;	// 72 = 0x48
    UIBarButtonItem *_libraryBarButton;	// 80 = 0x50
    NSString *_pageType;	// 88 = 0x58
    long long _categoryType;	// 96 = 0x60
    VUIMediaEntitiesDataSource *_entitiesDataSource;	// 104 = 0x68
    VUIMediaEntityFetchRequest *_fetchRequest;	// 112 = 0x70
    UICollectionViewCell *_sizingCell;	// 120 = 0x78
    double _cellWidth;	// 128 = 0x80
    UIBarButtonItem *_currentNavBarButtonItem;	// 136 = 0x88
    VUIViewControllerContentPresenter *_contentPresenter;	// 144 = 0x90
    UICollectionViewDiffableDataSource *_diffableDataSource;	// 152 = 0x98
    NSArray *_mediaEntities;	// 160 = 0xa0
    long long _gridStyle;	// 168 = 0xa8
    long long _gridType;	// 176 = 0xb0
    VUIMediaEntity *_currentlySelectedMediaEntity;	// 184 = 0xb8
    NSIndexPath *_indexPathForCurrentFocusedTVLockup;	// 192 = 0xc0
    NSDictionary *_artworkInfoDictionary;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x0000000000189b29
@property(retain, nonatomic) NSDictionary *artworkInfoDictionary; // @synthesize artworkInfoDictionary=_artworkInfoDictionary;
@property(retain, nonatomic) NSIndexPath *indexPathForCurrentFocusedTVLockup; // @synthesize indexPathForCurrentFocusedTVLockup=_indexPathForCurrentFocusedTVLockup;
@property(retain, nonatomic) VUIMediaEntity *currentlySelectedMediaEntity; // @synthesize currentlySelectedMediaEntity=_currentlySelectedMediaEntity;
@property(nonatomic) long long gridType; // @synthesize gridType=_gridType;
@property(nonatomic) long long gridStyle; // @synthesize gridStyle=_gridStyle;
@property(retain, nonatomic) NSArray *mediaEntities; // @synthesize mediaEntities=_mediaEntities;
@property(nonatomic) _Bool waitingForFetch; // @synthesize waitingForFetch=_waitingForFetch;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter; // @synthesize contentPresenter=_contentPresenter;
@property(retain, nonatomic) UIBarButtonItem *currentNavBarButtonItem; // @synthesize currentNavBarButtonItem=_currentNavBarButtonItem;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(retain, nonatomic) UICollectionViewCell *sizingCell; // @synthesize sizingCell=_sizingCell;
@property(retain, nonatomic) VUIMediaEntityFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
@property(retain, nonatomic) VUIMediaEntitiesDataSource *entitiesDataSource; // @synthesize entitiesDataSource=_entitiesDataSource;
@property(nonatomic) long long categoryType; // @synthesize categoryType=_categoryType;
@property(retain, nonatomic) NSString *pageType; // @synthesize pageType=_pageType;
@property(nonatomic) _Bool forceBackButton; // @synthesize forceBackButton=_forceBackButton;
@property(retain, nonatomic) UIBarButtonItem *libraryBarButton; // @synthesize libraryBarButton=_libraryBarButton;
@property(nonatomic) _Bool hideLockupTitles; // @synthesize hideLockupTitles=_hideLockupTitles;
@property(nonatomic) long long gridFilter; // @synthesize gridFilter=_gridFilter;
@property(nonatomic) __weak id <VUILibraryGridCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) VUIFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
- (id)noContentErrorMessage;	// IMP=0x0000000000189734
- (id)noContentTitle;	// IMP=0x0000000000189618
- (void)_updateVisibleCellsWithArtwork;	// IMP=0x0000000000189212
- (void)_applySnapshotFromEntitiesAndAnimateDifferences:(_Bool)arg1;	// IMP=0x000000000018908f
- (void)_applyInitialSnapshot;	// IMP=0x0000000000188d3f
- (id)_deviceMediaLibrary;	// IMP=0x0000000000188c4b
- (_Bool)_didFailUpdateCloudLibrary;	// IMP=0x0000000000188bfe
- (_Bool)_isDeviceMediaLibraryInitialUpdateInProgress;	// IMP=0x0000000000188bb1
- (void)_updateCurrentViewIfNeeded;	// IMP=0x0000000000188aa9
- (void)_updateLayoutForSize:(struct CGSize)arg1;	// IMP=0x000000000018891e
- (void)_updateNavigationBarPadding;	// IMP=0x0000000000188753
- (double)_computeBottomMargin;	// IMP=0x0000000000188745
- (void)_configureSizingCellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000001884a3
- (id)_getEntityIdentifiersFromEntities;	// IMP=0x00000000001882d7
- (id)_createDiffableDataSourceSnapshot;	// IMP=0x0000000000188170
- (id)_createDiffableDataSource;	// IMP=0x0000000000187e9a
- (id)_createCollectionViewFlowLayout;	// IMP=0x0000000000187e3a
- (id)_createCollectionView;	// IMP=0x0000000000187c1a
- (void)scrollToTop:(_Bool)arg1 needsFocusUpdate:(_Bool)arg2;	// IMP=0x0000000000187b66
- (void)_tvOSHandleCellSelectionAtIndexPath:(id)arg1;	// IMP=0x000000000018768d
- (void)_showExtrasForMediaItem:(id)arg1;	// IMP=0x00000000001872f6
- (void)_startPlaybackWithMediaItem:(id)arg1;	// IMP=0x0000000000186f8b
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000000186d77
- (void)_playPausePressed:(id)arg1;	// IMP=0x0000000000186b71
- (void)_addPlayPauseHandler;	// IMP=0x0000000000186adc
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000001869f3
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000001869de
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000018688d
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000000001867fc
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x0000000000186784
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x0000000000186772
- (void)dataSourceDidFinishFetchingArtwork:(id)arg1;	// IMP=0x000000000018667f
- (void)dataSourceDidFinishFetching:(id)arg1;	// IMP=0x00000000001864ee
- (void)viewDidLayoutSubviews;	// IMP=0x00000000001863f2
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000186329
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000018627a
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000018620b
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000018619f
- (void)viewDidLoad;	// IMP=0x00000000001859cb
- (void)loadView;	// IMP=0x000000000018595a
- (void)updateWithLatestMediaEntities:(id)arg1;	// IMP=0x00000000001858ce
- (void)dealloc;	// IMP=0x0000000000185883
- (id)initWithDataSource:(id)arg1 categoryType:(long long)arg2;	// IMP=0x00000000001854ab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

