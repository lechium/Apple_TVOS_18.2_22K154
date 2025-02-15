//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, UIBarButtonItem, UIButton, UIColor, UIDictationSearchButton, UIImageView, UILabel, UINavigationButton, UINavigationItem, UISearchBarBackground, UISearchBarTextField, UISegmentedControl, UIView, UIVisualEffectView, _UIBackdropView, _UINavigationBarTitleViewOverlayRects, _UISearchBarAppearanceStorage, _UISearchBarLayout, _UISearchBarPromptContainerView, _UISearchBarScopeBarBackground, _UISearchBarScopeContainerView, _UISearchBarSearchContainerView, _UISearchBarTransitionerBase;
@protocol _UINavigationBarTitleViewDataSource;

__attribute__((visibility("hidden")))
@interface _UISearchBarVisualProviderIOS
{
    UIDictationSearchButton *_dictationButton;	// 8 = 0x8
    _UISearchBarSearchContainerView *_searchFieldContainerView;	// 16 = 0x10
    _UISearchBarPromptContainerView *_promptContainerView;	// 24 = 0x18
    _UISearchBarScopeContainerView *_scopeBarContainerView;	// 32 = 0x20
    UIImageView *_floatingSearchIconView;	// 40 = 0x28
    struct UIEdgeInsets _effectiveContentInset;	// 48 = 0x30
    unsigned long long _overriddenContentInsetEdges;	// 80 = 0x50
    _UISearchBarAppearanceStorage *_appearanceStorage;	// 88 = 0x58
    UIBarButtonItem *_animatedAppearanceBarButtonItem;	// 96 = 0x60
    UINavigationItem *_searchNavigationItem;	// 104 = 0x68
    NSArray *_inlineWidthConstraints;	// 112 = 0x70
    struct {
        unsigned int barStyle:3;
        unsigned int searchBarStyle:3;
        unsigned int barTranslucence:3;
        unsigned int searchFieldLeftViewMode:2;
        unsigned int centerPlaceholder:1;
        unsigned int disabled:1;
        unsigned int reliesOnNavigationBarBackdrop:1;
        unsigned int hideBackground:1;
        unsigned int backgroundLayoutNeedsUpdate:1;
        unsigned int isFrozenForDismissalCrossfade:1;
        unsigned int usesEmbeddedAppearance:1;
        unsigned int showsCancelButton:1;
        unsigned int autoDisableCancelButton:1;
        unsigned int showsDeleteButton:1;
        unsigned int showsSearchResultsButton:1;
        unsigned int searchResultsButtonSelected:1;
        unsigned int showsBookmarkButton:1;
        unsigned int isPlacedInNavigationBar:1;
        unsigned int isPlacedInToolbar:1;
        unsigned int isHostedByNavigationBar:1;
        unsigned int isHostedInlineByNavigationBar:1;
        unsigned int isTextFieldManagedInNSToolbar:1;
        unsigned int providesRestingMeasurementValues:1;
        unsigned int showsScopeBar:1;
        unsigned int activeSearchDeferringScopeBar:1;
        unsigned int showDictationButton:1;
        unsigned int allowedToShowDictationButton:1;
        unsigned int dictationButtonSetupComplete:1;
        unsigned int hasSearchFieldContainerLayoutCustomizationDelegate:1;
        unsigned int floatingSearchIconViewHasBeenSetUp:1;
        unsigned int requiresSearchTextField:1;
    } _searchBarVisualProviderFlags;	// 120 = 0x78
    UISearchBarTextField *_searchField;	// 128 = 0x80
    UISearchBarBackground *_searchBarBackground;	// 136 = 0x88
    _UIBackdropView *_backdrop;	// 144 = 0x90
    UIVisualEffectView *_backdropVisualEffectView;	// 152 = 0x98
    UIView *_searchBarClippingView;	// 160 = 0xa0
    UIButton *_cancelButton;	// 168 = 0xa8
    UIBarButtonItem *_cancelBarButtonItem;	// 176 = 0xb0
    NSString *_cancelButtonText;	// 184 = 0xb8
    UINavigationButton *_leftButton;	// 192 = 0xc0
    UILabel *_promptLabel;	// 200 = 0xc8
    UIImageView *_separator;	// 208 = 0xd0
    UISegmentedControl *_scopeBar;	// 216 = 0xd8
    _UISearchBarScopeBarBackground *_scopeBarBackgroundView;	// 224 = 0xe0
    NSArray *_scopeTitles;	// 232 = 0xe8
    long long _selectedScope;	// 240 = 0xf0
    long long _backdropStyle;	// 248 = 0xf8
    UIColor *_barTintColor;	// 256 = 0x100
    long long _barPosition;	// 264 = 0x108
    unsigned long long _scopeBarPosition;	// 272 = 0x110
    double _tableViewIndexWidth;	// 280 = 0x118
    long long _navBarTitleViewLocation;	// 288 = 0x120
    _UINavigationBarTitleViewOverlayRects *_navBarTitleViewOverlayRects;	// 296 = 0x128
    id <_UINavigationBarTitleViewDataSource> _navBarTitleViewDataSource;	// 304 = 0x130
    long long _layoutState;	// 312 = 0x138
    UIBarButtonItem *_searchIconBarButtonItem;	// 320 = 0x140
    double _leftInsetForInlineSearch;	// 328 = 0x148
    double _rightInsetForInlineSearch;	// 336 = 0x150
    long long _previousLayoutState;	// 344 = 0x158
    double _backgroundExtension;	// 352 = 0x160
    _UISearchBarLayout *_currentLayout;	// 360 = 0x168
    _UISearchBarLayout *_prospectiveLayout;	// 368 = 0x170
    _UISearchBarTransitionerBase *_transitioner;	// 376 = 0x178
    struct UIEdgeInsets _contentInsetPrivateMinOrOverride;	// 384 = 0x180
}

- (void).cxx_destruct;	// IMP=0x000000000042e64c
@property(retain, nonatomic) _UISearchBarTransitionerBase *transitioner; // @synthesize transitioner=_transitioner;
@property(retain, nonatomic) _UISearchBarLayout *prospectiveLayout; // @synthesize prospectiveLayout=_prospectiveLayout;
@property(retain, nonatomic) _UISearchBarLayout *currentLayout; // @synthesize currentLayout=_currentLayout;
@property(nonatomic) double backgroundExtension; // @synthesize backgroundExtension=_backgroundExtension;
@property(readonly, nonatomic) long long previousLayoutState; // @synthesize previousLayoutState=_previousLayoutState;
- (double)rightInsetForInlineSearch;	// IMP=0x000000000042e5a8
- (double)leftInsetForInlineSearch;	// IMP=0x000000000042e596
- (long long)layoutState;	// IMP=0x000000000042e585
- (id)animatedAppearanceBarButtonItem;	// IMP=0x000000000042e574
- (void)setNavBarTitleViewDataSource:(id)arg1;	// IMP=0x000000000042e560
- (id)navBarTitleViewDataSource;	// IMP=0x000000000042e547
- (void)setNavBarTitleViewOverlayRects:(id)arg1;	// IMP=0x000000000042e533
- (id)navBarTitleViewOverlayRects;	// IMP=0x000000000042e522
- (void)setNavBarTitleViewLocation:(long long)arg1;	// IMP=0x000000000042e511
- (long long)navBarTitleViewLocation;	// IMP=0x000000000042e500
- (void)setTableViewIndexWidth:(double)arg1;	// IMP=0x000000000042e4ee
- (double)tableViewIndexWidth;	// IMP=0x000000000042e4dc
- (struct UIEdgeInsets)minimumContentInset;	// IMP=0x000000000042e4bc
- (struct UIEdgeInsets)effectiveContentInset;	// IMP=0x000000000042e49c
- (void)setScopeBarPosition:(unsigned long long)arg1;	// IMP=0x000000000042e48b
- (unsigned long long)scopeBarPosition;	// IMP=0x000000000042e47a
- (void)setBarTintColor:(id)arg1;	// IMP=0x000000000042e466
- (id)barTintColor;	// IMP=0x000000000042e455
- (long long)backdropStyle;	// IMP=0x000000000042e444
- (void)setSelectedScope:(long long)arg1;	// IMP=0x000000000042e433
- (long long)selectedScope;	// IMP=0x000000000042e422
- (id)scopeTitles;	// IMP=0x000000000042e411
- (void)setScopeBarBackgroundView:(id)arg1;	// IMP=0x000000000042e3fd
- (id)scopeBarBackgroundView;	// IMP=0x000000000042e3ec
- (id)scopeBarContainerView;	// IMP=0x000000000042e3db
- (void)setScopeBar:(id)arg1;	// IMP=0x000000000042e3c7
- (id)scopeBar;	// IMP=0x000000000042e3b6
- (void)setSeparator:(id)arg1;	// IMP=0x000000000042e3a2
- (id)separator;	// IMP=0x000000000042e391
- (void)setPromptLabel:(id)arg1;	// IMP=0x000000000042e37d
- (id)promptLabel;	// IMP=0x000000000042e36c
- (void)setCancelButtonText:(id)arg1;	// IMP=0x000000000042e35b
- (id)cancelButtonText;	// IMP=0x000000000042e34a
- (id)cancelButton;	// IMP=0x000000000042e339
- (id)searchBarClippingView;	// IMP=0x000000000042e328
- (void)setBackdropVisualEffectView:(id)arg1;	// IMP=0x000000000042e314
- (id)backdropVisualEffectView;	// IMP=0x000000000042e303
- (void)setBackdrop:(id)arg1;	// IMP=0x000000000042e2ef
- (id)backdrop;	// IMP=0x000000000042e2de
- (void)setSearchBarBackground:(id)arg1;	// IMP=0x000000000042e2ca
- (id)searchBarBackground;	// IMP=0x000000000042e2b9
- (void)setSearchField:(id)arg1;	// IMP=0x000000000042e2a5
- (double)defaultInactiveSearchFieldWidth;	// IMP=0x000000000042e297
- (double)defaultActiveSearchFieldWidth;	// IMP=0x000000000042e289
- (void)setHelperPlaceholderHidden:(_Bool)arg1;	// IMP=0x000000000042e283
- (void)setHelperPlaceholderOverride:(id)arg1;	// IMP=0x000000000042e27d
- (void)setHelperPlaceholder:(id)arg1;	// IMP=0x000000000042e277
- (void)setUpSearchNavigationItem;	// IMP=0x000000000042e10b
- (id)searchNavigationItem;	// IMP=0x000000000042e043
- (id)searchDisplayController;	// IMP=0x000000000042e03b
- (void)setSearchDisplayController:(id)arg1;	// IMP=0x000000000042df63
- (void)setSearchDisplayControllerShowsCancelButton:(_Bool)arg1;	// IMP=0x000000000042de8b
- (void)setShadowVisibleIfNecessary:(_Bool)arg1;	// IMP=0x000000000042ddb3
- (id)makeShadowView;	// IMP=0x000000000042dcd9
- (id)shadowView;	// IMP=0x000000000042dbff
- (void)setBackgroundLayoutNeedsUpdate;	// IMP=0x000000000042db14
- (void)updateBackgroundToBackdropStyle:(long long)arg1;	// IMP=0x000000000042da3c
@property(nonatomic) double additionalPaddingForSearchFieldAtLeadingEdge;
@property(nonatomic) double additionalPaddingForCancelButtonAtLeadingEdge;
- (void)setLayoutCustomizationDelegateSearchFieldContainerWillLayoutSubviewsCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000000042d84d
- (void)setDelegateSearchFieldFrameManipulationBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000042d7e0
@property(readonly, nonatomic) double minimumHorizontalMargin;
- (double)hostedScopeBarTopInsetForBarMetrics:(long long)arg1;	// IMP=0x000000000042d7c4
- (double)hostedScopeBarHeightForBarMetrics:(long long)arg1;	// IMP=0x000000000042d797
@property(readonly, nonatomic) struct UIEdgeInsets defaultScopeBarInsets;
- (id)description;	// IMP=0x000000000042d2e4
- (void)layoutBackgroundViewConsideringTopBarStatusAndChangedHeight:(_Bool)arg1;	// IMP=0x000000000042d110
- (_Bool)isAtTop;	// IMP=0x000000000042ce77
- (void)layoutSubviewsInBounds:(struct CGRect)arg1;	// IMP=0x000000000042ca9e
- (struct CGRect)boundsForSearchBarAndUpdateIfNecessaryFromSuggestedBounds:(struct CGRect)arg1;	// IMP=0x000000000042c7d3
- (void)layoutSubviews;	// IMP=0x000000000042c75a
- (void)configureLayout:(id)arg1 forState:(long long)arg2;	// IMP=0x000000000042b9b7
- (void)setRightInsetForInlineSearch:(double)arg1;	// IMP=0x000000000042b937
- (void)setLeftInsetForInlineSearch:(double)arg1;	// IMP=0x000000000042b8b7
- (double)effectiveBackgroundExtension;	// IMP=0x000000000042b3c7
- (void)configureLayout:(id)arg1;	// IMP=0x000000000042b3aa
- (void)invalidateLayout;	// IMP=0x000000000042b38d
- (double)idealInlineWidthForLayoutState:(long long)arg1;	// IMP=0x000000000042b299
- (_Bool)requiresSearchTextField;	// IMP=0x000000000042b264
- (void)setRequiresSearchTextField:(_Bool)arg1;	// IMP=0x000000000042b199
- (id)existingSearchIconBarButtonItem;	// IMP=0x000000000042b184
- (id)searchIconBarButtonItem;	// IMP=0x000000000042b098
- (id)viewStackedInNavigationBar;	// IMP=0x000000000042b028
- (_Bool)isFrozenForDismissalCrossfade;	// IMP=0x000000000042b015
- (_Bool)wouldCombineLandscapeBarsForSize:(struct CGSize)arg1;	// IMP=0x000000000042b00d
- (_Bool)shouldCombineLandscapeBarsForOrientation:(long long)arg1;	// IMP=0x000000000042b005
- (double)availableBoundsWidthForSize:(struct CGSize)arg1;	// IMP=0x000000000042ae44
- (double)availableBoundsWidth;	// IMP=0x000000000042adc2
- (void)displayNavBarCancelButton:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000042ac4a
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000042aaad
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000042a83e
- (void)updateNavigationBarLayoutInsertDataForSearchBar:(id)arg1 collapsibleScopeBar:(id)arg2 forLayoutState:(long long)arg3;	// IMP=0x000000000042a65b
- (double)navigationBarContentHeight;	// IMP=0x000000000042a625
- (double)defaultHeightForOrientation:(long long)arg1;	// IMP=0x000000000042a470
- (long long)barMetricsForOrientation:(long long)arg1;	// IMP=0x000000000042a31e
- (double)allowedHeightInNavigationContentView;	// IMP=0x000000000042a310
- (double)barHeightForBarMetrics:(long long)arg1;	// IMP=0x000000000042a2dc
- (double)barHeightForBarMetrics:(long long)arg1 barPosition:(long long)arg2;	// IMP=0x000000000042a22e
- (double)searchFieldHeight;	// IMP=0x000000000042a1eb
- (double)barHeightForBarMetrics:(long long)arg1 withEffectiveInsets:(struct UIEdgeInsets)arg2;	// IMP=0x000000000042a084
- (_Bool)scopeBarIsVisible;	// IMP=0x000000000042a041
- (_Bool)containsScopeBar;	// IMP=0x0000000000429fe6
- (double)scopeBarHeight;	// IMP=0x0000000000429fa3
- (struct UIEdgeInsets)scopeBarInsets;	// IMP=0x0000000000429f46
- (struct UIEdgeInsets)recalculatedEffectiveContentInsetForLayoutState:(long long)arg1 forcingInlineCalculation:(_Bool)arg2;	// IMP=0x0000000000429aca
- (struct UIEdgeInsets)recalculatedEffectiveContentInsetForLayoutState:(long long)arg1;	// IMP=0x0000000000429aa8
- (void)getOverrideContentInsets:(struct UIEdgeInsets *)arg1 overriddenEdges:(unsigned long long *)arg2;	// IMP=0x0000000000429a5e
- (void)setOverrideContentInsets:(struct UIEdgeInsets)arg1 forRectEdges:(unsigned long long)arg2;	// IMP=0x0000000000429819
- (void)updateEffectiveContentInset;	// IMP=0x00000000004296a9
- (_Bool)alwaysUsesLayoutMarginsForHorizontalContentInset;	// IMP=0x0000000000429695
- (void)getTopInset:(double *)arg1 bottomInset:(double *)arg2 forBarMetrics:(long long)arg3 barPosition:(long long)arg4 layoutState:(long long)arg5 forcingInlineCalculation:(_Bool)arg6;	// IMP=0x000000000042946f
- (void)getTopInset:(double *)arg1 bottomInset:(double *)arg2 forBarMetrics:(long long)arg3 barPosition:(long long)arg4 layoutState:(long long)arg5;	// IMP=0x0000000000429453
- (void)getTopInset:(double *)arg1 bottomInset:(double *)arg2 forBarMetrics:(long long)arg3 barPosition:(long long)arg4;	// IMP=0x000000000042938d
- (void)getDefaultTopInset:(double *)arg1 bottomInset:(double *)arg2;	// IMP=0x0000000000429377
- (void)getTopAttachedTopInset:(double *)arg1 bottomInset:(double *)arg2 isCompact:(_Bool)arg3;	// IMP=0x000000000042926f
- (void)getNavigationBarHostedTopInset:(double *)arg1 bottomInset:(double *)arg2 forActive:(_Bool)arg3 isCompact:(_Bool)arg4;	// IMP=0x00000000004291ea
- (_Bool)_getNavigationTitleLeadingInset:(double *)arg1 trailingInset:(double *)arg2 isRTL:(_Bool)arg3;	// IMP=0x0000000000428c6b
- (void)navigationBarTransitionCompleted:(long long)arg1 willBeDisplayed:(_Bool)arg2;	// IMP=0x0000000000428b9d
- (void)navigationBarTransitionWillBegin:(long long)arg1 willBeDisplayed:(_Bool)arg2;	// IMP=0x0000000000428a2f
- (_Bool)isInBarButNotHosted;	// IMP=0x00000000004289e1
- (void)setClippingViewBounds:(struct CGRect)arg1;	// IMP=0x00000000004288c2
- (void)setClippingViewActive:(_Bool)arg1;	// IMP=0x000000000042878b
- (void)setShowsDeleteButton:(_Bool)arg1;	// IMP=0x0000000000428548
- (void)setShowsSeparator:(_Bool)arg1;	// IMP=0x000000000042843c
- (void)navigationBarSlideTransitionDidEnd;	// IMP=0x000000000042841d
- (void)navigationBarSlideTransitionWillBegin;	// IMP=0x0000000000428300
- (void)shrinkToButtonIfNecessary;	// IMP=0x0000000000428271
- (void)growToSearchFieldIfNecessary;	// IMP=0x00000000004281e1
- (void)cancelTransitionToSearchLayoutState:(long long)arg1;	// IMP=0x00000000004280f2
- (void)completeTransitionToSearchLayoutState:(long long)arg1;	// IMP=0x0000000000427f61
- (_Bool)searchFieldContainerViewNeedsLayoutForTransitionFromLayoutState:(id)arg1 toLayout:(id)arg2;	// IMP=0x0000000000427e01
- (void)animateTransitionToSearchLayoutState:(long long)arg1;	// IMP=0x0000000000427c86
- (void)freezeForAnimatedTransitionToSearchLayoutState:(long long)arg1;	// IMP=0x0000000000427a3a
- (void)prepareForTransitionToSearchLayoutState:(long long)arg1;	// IMP=0x0000000000427367
- (void)driveTransitionToSearchLayoutState:(long long)arg1;	// IMP=0x00000000004271a7
- (void)resetLayoutState;	// IMP=0x000000000042715e
- (void)setUpFloatingSearchIconView;	// IMP=0x0000000000427078
- (id)floatingSearchIconViewSuitableForMeasuring;	// IMP=0x0000000000426fcc
- (void)setUpSearchField;	// IMP=0x0000000000426b48
- (void)setUpSearchBarSearchContainerIfNecessary;	// IMP=0x0000000000426a5d
- (void)setUpScopeBar;	// IMP=0x0000000000426723
- (void)setUpPromptLabel;	// IMP=0x0000000000426267
- (void)setUpLeftButton;	// IMP=0x0000000000426113
- (void)setUpCancelButtonWithAppearance:(id)arg1;	// IMP=0x0000000000425e94
- (void)setUpCancelButton;	// IMP=0x0000000000425e80
- (void)setShowDictationButton:(_Bool)arg1 shouldUpdateView:(_Bool)arg2;	// IMP=0x0000000000425e1a
- (_Bool)wantsDictationButton;	// IMP=0x0000000000425e07
- (void)updateForAllowedToShowDictationChange;	// IMP=0x0000000000425cd4
- (void)updateDictationButtonActiveState;	// IMP=0x0000000000425ca5
- (_Bool)canShowDictationButton;	// IMP=0x0000000000425c43
- (void)setDisableDictationButton:(_Bool)arg1;	// IMP=0x0000000000425c26
- (void)cleanUpDictationMicsWithSearchField:(id)arg1;	// IMP=0x0000000000425b60
- (void)setUpDictationMicWithSearchField:(id)arg1;	// IMP=0x00000000004259ff
- (void)dictationButtonPressed:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000425808
- (void)dictationControllerDidFinish:(id)arg1;	// IMP=0x0000000000425741
- (void)dictationAvailabilityDidChange:(id)arg1;	// IMP=0x00000000004256b7
- (void)updateSearchFieldArt;	// IMP=0x00000000004253a0
- (void)updateSearchBarOpacity;	// IMP=0x000000000042533d
- (void)updateScopeBarForSelectedScope;	// IMP=0x0000000000425312
- (void)updateScopeBarBackground;	// IMP=0x0000000000425103
- (void)updateRightView;	// IMP=0x0000000000424aa1
- (void)updatePlaceholderColor;	// IMP=0x0000000000424953
- (void)updateNeedForBackdrop;	// IMP=0x000000000042482f
- (_Bool)usesBackdrop;	// IMP=0x00000000004247cf
- (void)removeBackdropVisualEffectView;	// IMP=0x0000000000424797
- (void)removeLegacyBackdropView;	// IMP=0x000000000042475f
- (void)updateDictationButton;	// IMP=0x000000000042474d
- (void)updateMagnifyingGlassView;	// IMP=0x0000000000424693
- (void)updateIfNecessaryForOldSize:(struct CGSize)arg1;	// IMP=0x000000000042454a
- (void)updateForDrawsBackgroundInPalette;	// IMP=0x0000000000424472
- (void)updateForSemanticContext;	// IMP=0x0000000000424460
- (void)updateForDynamicType;	// IMP=0x00000000004243e5
- (void)updateDictationButtonForDynamicTypeWithSearchField:(id)arg1;	// IMP=0x000000000042422d
- (void)updateSearchFieldControlSize;	// IMP=0x000000000042417f
- (void)updateCancelButtonForDynamicType;	// IMP=0x0000000000424179
- (void)updateSearchFieldForDynamicType;	// IMP=0x000000000042409d
- (_Bool)supportsDynamicType;	// IMP=0x0000000000424059
- (void)applySearchBarStyle;	// IMP=0x0000000000423d9b
- (id)effectiveBarTintColor;	// IMP=0x0000000000423d86
- (void)effectiveBarTintColorDidChange:(_Bool)arg1;	// IMP=0x0000000000423c06
- (void)setBarTintColor:(id)arg1 forceUpdate:(_Bool)arg2;	// IMP=0x0000000000423bba
- (void)_setBarTintColor:(id)arg1;	// IMP=0x0000000000423b33
- (id)textColor;	// IMP=0x00000000004239ee
- (id)colorForComponent:(unsigned long long)arg1 disabled:(_Bool)arg2;	// IMP=0x0000000000423809
- (_Bool)hasDarkUIAppearance;	// IMP=0x0000000000423753
- (id)backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2;	// IMP=0x0000000000423736
- (void)setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3;	// IMP=0x00000000004236fd
- (struct UIOffset)searchFieldBackgroundPositionAdjustment;	// IMP=0x0000000000423689
- (void)setSearchFieldBackgroundPositionAdjustment:(struct UIOffset)arg1;	// IMP=0x0000000000423526
- (id)scopeBarBackgroundImage;	// IMP=0x0000000000423509
- (void)setScopeBarBackgroundImage:(id)arg1;	// IMP=0x0000000000423453
- (id)imageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2;	// IMP=0x0000000000423429
- (void)setImage:(id)arg1 forSearchBarIcon:(long long)arg2 state:(unsigned long long)arg3;	// IMP=0x00000000004232ad
- (id)internalImageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2 customImage:(_Bool *)arg3;	// IMP=0x00000000004231b8
- (id)internalImageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2;	// IMP=0x00000000004231a3
- (id)searchFieldBackgroundImageForState:(unsigned long long)arg1;	// IMP=0x0000000000423178
- (void)setSearchFieldBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000004230ae
- (void)setSeparatorImage:(id)arg1;	// IMP=0x0000000000422fcf
- (id)separatorImage;	// IMP=0x0000000000422fb2
- (id)currentSeparatorImage;	// IMP=0x0000000000422eab
- (void)destroyPromptLabel;	// IMP=0x0000000000422e39
- (void)destroyCancelButton;	// IMP=0x0000000000422dc5
- (void)revertViewHierarchyIfNecessary;	// IMP=0x0000000000422bf1
- (void)teardown;	// IMP=0x0000000000422a36
- (id)runtimeOnlyViews;	// IMP=0x0000000000422900
- (void)prepare;	// IMP=0x00000000004225f9
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000042255c
- (id)cancelBarButtonItemIfExists;	// IMP=0x0000000000422547
- (id)cancelBarButtonItem;	// IMP=0x0000000000422459
- (id)leftButtonIfExists;	// IMP=0x0000000000422444
- (id)leftButton;	// IMP=0x0000000000422418
@property(readonly, nonatomic) UIView *floatingSearchIconBackgroundView;
- (id)floatingSearchIconViewIfExists;	// IMP=0x00000000004223fb
- (id)floatingSearchIconView;	// IMP=0x00000000004223b6
- (id)searchFieldIfExists;	// IMP=0x00000000004223a1
- (id)searchField;	// IMP=0x000000000042236a
- (id)prompt;	// IMP=0x00000000004222d0
- (void)setPrompt:(id)arg1;	// IMP=0x0000000000422146
- (long long)barPosition;	// IMP=0x0000000000422114
- (void)setBarPosition:(long long)arg1;	// IMP=0x0000000000422005
- (void)setBackdropStyle:(long long)arg1;	// IMP=0x0000000000421de2
- (void)setMinimumContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000421d8a
- (void)setScopeTitles:(id)arg1;	// IMP=0x0000000000421b2d
- (void)setCancelButton:(id)arg1;	// IMP=0x0000000000421aba
@property(readonly, nonatomic) UIView *searchFieldContainerView;
- (_Bool)isInNavigationPalette;	// IMP=0x0000000000421a9d
- (void)setInNavigationPalette:(_Bool)arg1;	// IMP=0x00000000004219b3
- (_Bool)backgroundLayoutNeedsUpdate;	// IMP=0x000000000042199f
- (_Bool)allowsInlineScopeBar;	// IMP=0x0000000000421997
- (void)setAllowsInlineScopeBar:(_Bool)arg1;	// IMP=0x0000000000421991
- (_Bool)showsScopeBar;	// IMP=0x000000000042187d
- (void)setDeferredAutomaticShowsScopeBarInNavigationBar:(id)arg1 hasContent:(_Bool)arg2;	// IMP=0x000000000042161d
- (void)_setShowsScopeBar:(_Bool)arg1;	// IMP=0x00000000004215f8
- (void)setShowsScopeBar:(_Bool)arg1;	// IMP=0x00000000004215e4
- (void)setShowsScopeBar:(_Bool)arg1 animateOpacity:(_Bool)arg2;	// IMP=0x00000000004213d4
- (void)setShowsBookmarkButton:(_Bool)arg1;	// IMP=0x0000000000420eaf
- (void)setSearchResultsButtonSelected:(_Bool)arg1;	// IMP=0x0000000000420e6e
- (void)setShowsSearchResultsButton:(_Bool)arg1;	// IMP=0x0000000000420e2d
- (void)setAutoDisableCancelButton:(_Bool)arg1;	// IMP=0x0000000000420de6
- (_Bool)showsCancelButton;	// IMP=0x0000000000420d4b
- (void)_setShowsCancelButton:(_Bool)arg1;	// IMP=0x0000000000420d26
- (void)setShowsCancelButton:(_Bool)arg1;	// IMP=0x0000000000420d12
- (void)setShowsCancelButton:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000004207d9
- (void)allowCursorToAppear:(_Bool)arg1;	// IMP=0x0000000000420707
- (_Bool)usesEmbeddedAppearance;	// IMP=0x00000000004206f2
- (void)setUsesEmbeddedAppearance:(_Bool)arg1;	// IMP=0x0000000000420635
- (_Bool)drawsBackground;	// IMP=0x0000000000420620
- (void)_setHideBackground:(_Bool)arg1;	// IMP=0x00000000004205fb
- (void)setDrawsBackground:(_Bool)arg1;	// IMP=0x00000000004205aa
- (_Bool)drawsBackgroundInPalette;	// IMP=0x00000000004205a2
- (void)setDrawsBackgroundInPalette:(_Bool)arg1;	// IMP=0x00000000004204b8
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000420079
- (_Bool)isEnabled;	// IMP=0x0000000000420064
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000000420050
- (_Bool)centerPlaceholder;	// IMP=0x000000000042003a
- (void)setCenterPlaceholder:(_Bool)arg1;	// IMP=0x000000000041ff93
- (long long)searchFieldLeftViewMode;	// IMP=0x000000000041ff5c
- (void)setSearchFieldLeftViewMode:(long long)arg1;	// IMP=0x000000000041ff14
- (long long)barTranslucence;	// IMP=0x000000000041fefe
- (void)_setBarTranslucence:(long long)arg1;	// IMP=0x000000000041fed9
- (void)setBarTranslucence:(long long)arg1;	// IMP=0x000000000041fe62
- (_Bool)isTranslucent;	// IMP=0x000000000041fe47
- (unsigned long long)searchBarStyle;	// IMP=0x000000000041fe31
- (void)setSearchBarStyle:(unsigned long long)arg1;	// IMP=0x000000000041fdb2
- (long long)barStyle;	// IMP=0x000000000041fd9e
- (void)_setBarStyle:(long long)arg1;	// IMP=0x000000000041fd7f
- (void)setBarStyle:(long long)arg1;	// IMP=0x000000000041faf8
- (_Bool)isActiveSearchDeferringScopeBar;	// IMP=0x000000000041fae4
- (void)setActiveSearchDeferringScopeBar:(_Bool)arg1;	// IMP=0x000000000041fabc
- (_Bool)reliesOnNavigationBarBackdrop;	// IMP=0x000000000041faa6
- (void)setReliesOnNavigationBarBackdrop:(_Bool)arg1;	// IMP=0x000000000041fa81
- (_Bool)autoDisableCancelButton;	// IMP=0x000000000041fa6b
- (void)_setAutoDisableCancelButton:(_Bool)arg1;	// IMP=0x000000000041fa46
- (_Bool)showsSearchResultsButton;	// IMP=0x000000000041fa30
- (void)_setShowsSearchResultsButton:(_Bool)arg1;	// IMP=0x000000000041fa0b
- (_Bool)showsBookmarkButton;	// IMP=0x000000000041f9f7
- (void)_setShowsBookmarkButton:(_Bool)arg1;	// IMP=0x000000000041f9d2
- (_Bool)isSearchResultsButtonSelected;	// IMP=0x000000000041f9bc
- (void)_setSearchResultsButtonSelected:(_Bool)arg1;	// IMP=0x000000000041f997
- (_Bool)isPlacedInToolbar;	// IMP=0x000000000041f982
- (void)setPlacedInToolbar:(_Bool)arg1;	// IMP=0x000000000041f95d
- (_Bool)isPlacedInNavigationBar;	// IMP=0x000000000041f94a
- (void)setPlacedInNavigationBar:(_Bool)arg1;	// IMP=0x000000000041f925
- (_Bool)providesRestingMeasurementValues;	// IMP=0x000000000041f90f
- (void)setProvidesRestingMeasurementValues:(_Bool)arg1;	// IMP=0x000000000041f8ea
- (_Bool)isTextFieldManagedInNSToolbar;	// IMP=0x000000000041f8d4
- (void)setTextFieldManagedInNSToolbar:(_Bool)arg1;	// IMP=0x000000000041f871
@property(readonly, nonatomic) _Bool isHostedInlineByNavigationBar;
- (void)setHostedInlineByNavigationBar:(_Bool)arg1;	// IMP=0x000000000041f6b9
- (_Bool)isHostedByNavigationBar;	// IMP=0x000000000041f5fc
- (void)setHostedByNavigationBar:(_Bool)arg1;	// IMP=0x000000000041f5d7
- (int)visualProviderType;	// IMP=0x000000000041f5cc

@end

