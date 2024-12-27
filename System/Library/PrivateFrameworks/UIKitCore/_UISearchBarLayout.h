//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIBarButtonItem, UIFont, UIImageView, UISearchBarTextField, UIView, _UISearchBarPromptContainerView, _UISearchBarScopeContainerLayout, _UISearchBarScopeContainerView, _UISearchBarSearchContainerLayout, _UISearchBarSearchContainerView;

__attribute__((visibility("hidden")))
@interface _UISearchBarLayout
{
    struct {
        unsigned int hasCancelButton:1;
        unsigned int hasDeleteButton:1;
        unsigned int hasLeftButton:1;
        unsigned int hasFloatingSearchIconBackgroundView:1;
        unsigned int hasScopeBar:1;
        unsigned int hasPromptLabel:1;
        unsigned int hasSearchBarBackground:1;
        unsigned int hasSearchBarBackdrop:1;
        unsigned int hasSeparator:1;
        unsigned int isHostedInlineByNavigationBar:1;
        unsigned int isTextFieldManagedInNSToolbar:1;
        unsigned int allowSearchFieldShrinkage:1;
        unsigned int searchFieldUsesCustomBackgroundImage:1;
        unsigned int searchFieldEffectivelySupportsDynamicType:1;
        unsigned int isProspective:1;
        unsigned int isHostingNavBarTransitionActive:1;
    } _searchBarLayoutFlags;	// 8 = 0x8
    double _cachedFontValueBeforeScaling;	// 16 = 0x10
    double _cachedFontValueAfterScaling;	// 24 = 0x18
    UIView *_searchBarBackground;	// 32 = 0x20
    UIView *_searchBarBackdrop;	// 40 = 0x28
    UIView *_separator;	// 48 = 0x30
    _UISearchBarScopeContainerView *_scopeBarContainer;	// 56 = 0x38
    _UISearchBarSearchContainerView *_searchFieldContainer;	// 64 = 0x40
    _UISearchBarPromptContainerView *_promptContainer;	// 72 = 0x48
    double _backgroundExtension;	// 80 = 0x50
    double _searchBarReadableWidth;	// 88 = 0x58
    unsigned long long _numberOfScopeTitles;	// 96 = 0x60
    CDUnknownBlockType _hostedScopeBarHeightForBarMetrics;	// 104 = 0x68
    CDUnknownBlockType _hostedScopeBarTopInsetForBarMetrics;	// 112 = 0x70
    UIFont *_searchFieldFont;	// 120 = 0x78
    double _leftContentInsetForInlineSearch;	// 128 = 0x80
    double _rightContentInsetForInlineSearch;	// 136 = 0x88
    long long _representedLayoutState;	// 144 = 0x90
    _UISearchBarScopeContainerLayout *_scopeContainerLayout;	// 152 = 0x98
    _UISearchBarSearchContainerLayout *_searchContainerLayout;	// 160 = 0xa0
    struct UIOffset _searchFieldBackgroundPositionAdjustment;	// 168 = 0xa8
    CDStruct_ef18196a _heightRange;	// 184 = 0xb8
    struct CGRect _promptContainerLayoutFrame;	// 200 = 0xc8
    struct CGRect _searchFieldContainerLayoutFrame;	// 232 = 0xe8
    struct CGRect _scopeBarContainerLayoutFrame;	// 264 = 0x108
    struct CGRect _searchBarBackgroundLayoutFrame;	// 296 = 0x128
    struct CGRect _separatorLayoutFrame;	// 328 = 0x148
    struct UIEdgeInsets _defaultScopeBarInsets;	// 360 = 0x168
}

- (void).cxx_destruct;	// IMP=0x000000000041870f
@property(retain, nonatomic) _UISearchBarSearchContainerLayout *searchContainerLayout; // @synthesize searchContainerLayout=_searchContainerLayout;
@property(retain, nonatomic) _UISearchBarScopeContainerLayout *scopeContainerLayout; // @synthesize scopeContainerLayout=_scopeContainerLayout;
@property(readonly, nonatomic) CDStruct_c3b9c2ee heightRange; // @synthesize heightRange=_heightRange;
@property(nonatomic) long long representedLayoutState; // @synthesize representedLayoutState=_representedLayoutState;
@property(nonatomic) double rightContentInsetForInlineSearch; // @synthesize rightContentInsetForInlineSearch=_rightContentInsetForInlineSearch;
@property(nonatomic) double leftContentInsetForInlineSearch; // @synthesize leftContentInsetForInlineSearch=_leftContentInsetForInlineSearch;
@property(retain, nonatomic) UIFont *searchFieldFont; // @synthesize searchFieldFont=_searchFieldFont;
@property(copy, nonatomic) CDUnknownBlockType hostedScopeBarTopInsetForBarMetrics; // @synthesize hostedScopeBarTopInsetForBarMetrics=_hostedScopeBarTopInsetForBarMetrics;
@property(copy, nonatomic) CDUnknownBlockType hostedScopeBarHeightForBarMetrics; // @synthesize hostedScopeBarHeightForBarMetrics=_hostedScopeBarHeightForBarMetrics;
@property(nonatomic) struct UIEdgeInsets defaultScopeBarInsets; // @synthesize defaultScopeBarInsets=_defaultScopeBarInsets;
@property(nonatomic) unsigned long long numberOfScopeTitles; // @synthesize numberOfScopeTitles=_numberOfScopeTitles;
@property(nonatomic) double searchBarReadableWidth; // @synthesize searchBarReadableWidth=_searchBarReadableWidth;
@property(nonatomic) struct UIOffset searchFieldBackgroundPositionAdjustment; // @synthesize searchFieldBackgroundPositionAdjustment=_searchFieldBackgroundPositionAdjustment;
@property(nonatomic) double backgroundExtension; // @synthesize backgroundExtension=_backgroundExtension;
@property(retain, nonatomic) _UISearchBarPromptContainerView *promptContainer; // @synthesize promptContainer=_promptContainer;
@property(retain, nonatomic) _UISearchBarSearchContainerView *searchFieldContainer; // @synthesize searchFieldContainer=_searchFieldContainer;
@property(retain, nonatomic) _UISearchBarScopeContainerView *scopeBarContainer; // @synthesize scopeBarContainer=_scopeBarContainer;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UIView *searchBarBackdrop; // @synthesize searchBarBackdrop=_searchBarBackdrop;
@property(retain, nonatomic) UIView *searchBarBackground; // @synthesize searchBarBackground=_searchBarBackground;
@property(nonatomic) double additionalPaddingForSearchFieldAtLeadingEdge;
@property(nonatomic) double additionalPaddingForCancelButtonAtLeadingEdge;
- (void)setLayoutCustomizationDelegateSearchFieldContainerWillLayoutSubviewsCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000000041833e
- (void)setDelegateSearchFieldFrameManipulationBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000004182e4
@property(readonly, copy) NSString *description;
- (void)cleanUpLayout;	// IMP=0x00000000004174d6
- (void)applyScopeContainerSublayout;	// IMP=0x0000000000417474
- (void)applyLayout;	// IMP=0x0000000000416b46
- (void)ensureCorrectContainerViewOrdering;	// IMP=0x0000000000416aa7
- (double)minimumLayoutWidth;	// IMP=0x0000000000416a6f
- (void)updateLayout;	// IMP=0x0000000000416690
- (double)layout:(id)arg1 fontScaledValueForValue:(double)arg2;	// IMP=0x00000000004165dd
- (void)containerLayoutWillUpdateLayout:(id)arg1;	// IMP=0x0000000000416574
- (void)prepareSublayouts;	// IMP=0x0000000000416546
- (void)prepareScopeContainerLayout;	// IMP=0x00000000004163b8
- (void)prepareSearchContainerLayout;	// IMP=0x0000000000415fbe
- (void)prepareBaseConfigurationForSublayout:(id)arg1;	// IMP=0x0000000000415f32
- (void)setUpSearchContainerLayout;	// IMP=0x0000000000415e0d
- (void)setUpScopeContainerLayout;	// IMP=0x0000000000415d8e
@property(readonly, nonatomic) double naturalTotalHeight;
@property(readonly, nonatomic) double naturalPromptContainerHeight;
@property(readonly, nonatomic) struct UIEdgeInsets scopeContainerSpecificInsets;
@property(readonly, nonatomic) double prescribedSearchContainerWidth;
@property(nonatomic) double overrideActiveWidth;
@property(nonatomic) double overrideInactiveWidth;
@property(nonatomic) double defaultActiveWidth;
@property(nonatomic) double defaultInactiveWidth;
@property(readonly, nonatomic) double naturalScopeContainerHeight;
@property(readonly, nonatomic) double naturalSearchFieldHeight;
@property(readonly, nonatomic) double naturalSearchFieldContainerHeight;
@property(readonly, nonatomic) struct CGRect separatorLayoutFrame; // @synthesize separatorLayoutFrame=_separatorLayoutFrame;
@property(readonly, nonatomic) struct CGRect searchBarBackgroundLayoutFrame; // @synthesize searchBarBackgroundLayoutFrame=_searchBarBackgroundLayoutFrame;
@property(readonly, nonatomic) struct CGRect scopeBarContainerLayoutFrame; // @synthesize scopeBarContainerLayoutFrame=_scopeBarContainerLayoutFrame;
@property(readonly, nonatomic) struct CGRect searchFieldContainerLayoutFrame; // @synthesize searchFieldContainerLayoutFrame=_searchFieldContainerLayoutFrame;
@property(readonly, nonatomic) struct CGRect promptContainerLayoutFrame; // @synthesize promptContainerLayoutFrame=_promptContainerLayoutFrame;
@property(nonatomic, getter=isHostingNavBarTransitionActive) _Bool hostingNavBarTransitionActive;
@property(nonatomic, getter=isProspective) _Bool prospective;
@property(nonatomic) _Bool searchFieldEffectivelySupportsDynamicType;
@property(nonatomic) _Bool searchFieldUsesCustomBackgroundImage;
@property(nonatomic, getter=isTextFieldManagedInNSToolbar) _Bool textFieldManagedInNSToolbar;
@property(nonatomic, getter=isHostedInlineByNavigationBar) _Bool hostedInlineByNavigationBar;
@property(nonatomic) _Bool allowSearchFieldShrinkage;
@property(retain, nonatomic) UIView *scopeBar;
@property(retain, nonatomic) UIBarButtonItem *searchIconBarButtonItem;
@property(retain, nonatomic) UIView *floatingSearchIconBackgroundView;
@property(retain, nonatomic) UIImageView *floatingSearchIconView;
@property(retain, nonatomic) UIView *leftButton;
@property(retain, nonatomic) UIView *deleteButton;
@property(retain, nonatomic) UIView *cancelButton;
@property(retain, nonatomic) UISearchBarTextField *searchField;
@property(nonatomic) _Bool hasSeparator;
@property(nonatomic) _Bool hasSearchBarBackdrop;
@property(nonatomic) _Bool hasSearchBarBackground;
@property(nonatomic) _Bool hasPromptLabel;
@property(nonatomic) _Bool hasScopeBar;
@property(nonatomic) _Bool hasFloatingSearchIconBackgroundView;
@property(nonatomic) _Bool hasLeftButton;
@property(nonatomic) _Bool hasDeleteButton;
@property(nonatomic) _Bool hasCancelButton;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000414d3d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

