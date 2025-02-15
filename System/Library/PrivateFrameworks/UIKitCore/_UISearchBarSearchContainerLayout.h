//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIBarButtonItem, UIImageView, UISearchBarTextField, UIView;
@protocol _UISearchBarContainerSublayoutDelegate;

__attribute__((visibility("hidden")))
@interface _UISearchBarSearchContainerLayout
{
    struct {
        unsigned int hasCancelButton:1;
        unsigned int hasDeleteButton:1;
        unsigned int hasLeftButton:1;
        unsigned int hasFloatingSearchIconBackgroundView:1;
        unsigned int isHostedInlineByNavigationBar:1;
        unsigned int isTextFieldManagedInNSToolbar:1;
        unsigned int drawsSearchIconOnly:1;
        unsigned int allowSearchFieldShrinkage:1;
        unsigned int searchFieldUsesCustomBackgroundImage:1;
        unsigned int searchFieldEffectivelySupportsDynamicType:1;
        unsigned int searchFieldRespectsReadableWidth:1;
        unsigned int searchFieldWidthIsReduced:1;
    } _searchContainerLayoutFlags;	// 8 = 0x8
    double _searchFieldForegroundFadeAlpha;	// 16 = 0x10
    double _searchFieldBackgroundFadeAlpha;	// 24 = 0x18
    id <_UISearchBarContainerSublayoutDelegate> _delegate;	// 32 = 0x20
    double _defaultInactiveWidth;	// 40 = 0x28
    double _defaultActiveWidth;	// 48 = 0x30
    double _overrideInactiveWidth;	// 56 = 0x38
    double _overrideActiveWidth;	// 64 = 0x40
    UISearchBarTextField *_searchField;	// 72 = 0x48
    UIImageView *_floatingSearchIconView;	// 80 = 0x50
    UIView *_floatingSearchIconBackgroundView;	// 88 = 0x58
    UIView *_cancelButton;	// 96 = 0x60
    UIView *_deleteButton;	// 104 = 0x68
    UIView *_leftButton;	// 112 = 0x70
    double _searchBarReadableWidth;	// 120 = 0x78
    UIBarButtonItem *_searchIconBarButtonItem;	// 128 = 0x80
    long long _representedLayoutState;	// 136 = 0x88
    double _searchBarFieldHeight;	// 144 = 0x90
    double _floatingSearchIconAlpha;	// 152 = 0x98
    double _floatingSearchIconBackgroundAlpha;	// 160 = 0xa0
    double _mainContentAlpha;	// 168 = 0xa8
    CDUnknownBlockType _delegateSearchFieldFrameForProposedFrame;	// 176 = 0xb0
    CDUnknownBlockType _layoutCustomizationDelegateSearchFieldContainerWillLayoutSubviewsCallback;	// 184 = 0xb8
    double _additionalPaddingForCancelButtonAtLeadingEdge;	// 192 = 0xc0
    double _additionalPaddingForSearchFieldAtLeadingEdge;	// 200 = 0xc8
    struct UIOffset _searchFieldBackgroundPositionAdjustment;	// 208 = 0xd0
    struct CGRect _searchFieldLayoutFrame;	// 224 = 0xe0
    struct CGRect _cancelButtonLayoutFrame;	// 256 = 0x100
    struct CGRect _deleteButtonLayoutFrame;	// 288 = 0x120
    struct CGRect _leftButtonLayoutFrame;	// 320 = 0x140
    struct CGRect _visibleCancelButtonSearchFieldLayoutFrame;	// 352 = 0x160
    struct CGRect _floatingSearchIconLayoutFrame;	// 384 = 0x180
    struct CGRect _floatingSearchIconBackgroundLayoutFrame;	// 416 = 0x1a0
}

- (void).cxx_destruct;	// IMP=0x000000000041c12d
@property(nonatomic) double additionalPaddingForSearchFieldAtLeadingEdge; // @synthesize additionalPaddingForSearchFieldAtLeadingEdge=_additionalPaddingForSearchFieldAtLeadingEdge;
@property(nonatomic) double additionalPaddingForCancelButtonAtLeadingEdge; // @synthesize additionalPaddingForCancelButtonAtLeadingEdge=_additionalPaddingForCancelButtonAtLeadingEdge;
@property(copy, nonatomic) CDUnknownBlockType layoutCustomizationDelegateSearchFieldContainerWillLayoutSubviewsCallback; // @synthesize layoutCustomizationDelegateSearchFieldContainerWillLayoutSubviewsCallback=_layoutCustomizationDelegateSearchFieldContainerWillLayoutSubviewsCallback;
@property(copy, nonatomic) CDUnknownBlockType delegateSearchFieldFrameForProposedFrame; // @synthesize delegateSearchFieldFrameForProposedFrame=_delegateSearchFieldFrameForProposedFrame;
@property(readonly, nonatomic) double mainContentAlpha; // @synthesize mainContentAlpha=_mainContentAlpha;
@property(readonly, nonatomic) double floatingSearchIconBackgroundAlpha; // @synthesize floatingSearchIconBackgroundAlpha=_floatingSearchIconBackgroundAlpha;
@property(readonly, nonatomic) struct CGRect floatingSearchIconBackgroundLayoutFrame; // @synthesize floatingSearchIconBackgroundLayoutFrame=_floatingSearchIconBackgroundLayoutFrame;
@property(readonly, nonatomic) double floatingSearchIconAlpha; // @synthesize floatingSearchIconAlpha=_floatingSearchIconAlpha;
@property(readonly, nonatomic) struct CGRect floatingSearchIconLayoutFrame; // @synthesize floatingSearchIconLayoutFrame=_floatingSearchIconLayoutFrame;
@property(nonatomic) double searchBarFieldHeight; // @synthesize searchBarFieldHeight=_searchBarFieldHeight;
@property(nonatomic) long long representedLayoutState; // @synthesize representedLayoutState=_representedLayoutState;
@property(retain, nonatomic) UIBarButtonItem *searchIconBarButtonItem; // @synthesize searchIconBarButtonItem=_searchIconBarButtonItem;
@property(nonatomic) struct UIOffset searchFieldBackgroundPositionAdjustment; // @synthesize searchFieldBackgroundPositionAdjustment=_searchFieldBackgroundPositionAdjustment;
@property(nonatomic) double searchBarReadableWidth; // @synthesize searchBarReadableWidth=_searchBarReadableWidth;
@property(retain, nonatomic) UIView *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UIView *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIView *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *floatingSearchIconBackgroundView; // @synthesize floatingSearchIconBackgroundView=_floatingSearchIconBackgroundView;
@property(retain, nonatomic) UIImageView *floatingSearchIconView; // @synthesize floatingSearchIconView=_floatingSearchIconView;
@property(retain, nonatomic) UISearchBarTextField *searchField; // @synthesize searchField=_searchField;
@property(nonatomic) double overrideActiveWidth; // @synthesize overrideActiveWidth=_overrideActiveWidth;
@property(nonatomic) double overrideInactiveWidth; // @synthesize overrideInactiveWidth=_overrideInactiveWidth;
@property(nonatomic) double defaultActiveWidth; // @synthesize defaultActiveWidth=_defaultActiveWidth;
@property(nonatomic) double defaultInactiveWidth; // @synthesize defaultInactiveWidth=_defaultInactiveWidth;
@property(nonatomic) __weak id <_UISearchBarContainerSublayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sendWillLayoutSubviewsForSearchFieldContainerView:(id)arg1;	// IMP=0x000000000041bd41
- (id)description;	// IMP=0x000000000041b873
- (void)applyLayout;	// IMP=0x000000000041b461
- (void)updateLayout;	// IMP=0x000000000041a503
- (double)searchFieldHeightUpdatingShrinkageAndFadeAlphas;	// IMP=0x000000000041a3d8
@property(readonly, nonatomic) double prescribedWidth;
- (double)_effectiveActiveWidth;	// IMP=0x000000000041a219
- (double)_effectiveInactiveWidth;	// IMP=0x000000000041a1d0
@property(readonly, nonatomic) double naturalSearchFieldHeight;
@property(readonly, nonatomic) double naturalContainerHeight;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000419d37
@property(nonatomic) _Bool searchFieldRespectsReadableWidth;
@property(nonatomic) _Bool searchFieldEffectivelySupportsDynamicType;
@property(nonatomic) _Bool searchFieldUsesCustomBackgroundImage;
@property(nonatomic) _Bool allowSearchFieldShrinkage;
@property(nonatomic) _Bool hasFloatingSearchIconBackgroundView;
@property(nonatomic) _Bool hasLeftButton;
@property(nonatomic) _Bool hasDeleteButton;
@property(nonatomic) _Bool hasCancelButton;
@property(nonatomic) _Bool drawsSearchIconOnly;
@property(nonatomic, getter=isTextFieldManagedInNSToolbar) _Bool textFieldManagedInNSToolbar;
@property(nonatomic, getter=isHostedInlineByNavigationBar) _Bool hostedInlineByNavigationBar;
@property(readonly, nonatomic) _Bool searchFieldWidthIsReduced;
@property(readonly, nonatomic) struct CGRect visibleCancelButtonSearchFieldLayoutFrame; // @synthesize visibleCancelButtonSearchFieldLayoutFrame=_visibleCancelButtonSearchFieldLayoutFrame;
@property(readonly, nonatomic) struct CGRect leftButtonLayoutFrame; // @synthesize leftButtonLayoutFrame=_leftButtonLayoutFrame;
@property(readonly, nonatomic) struct CGRect deleteButtonLayoutFrame; // @synthesize deleteButtonLayoutFrame=_deleteButtonLayoutFrame;
@property(readonly, nonatomic) struct CGRect cancelButtonLayoutFrame; // @synthesize cancelButtonLayoutFrame=_cancelButtonLayoutFrame;
@property(readonly, nonatomic) struct CGRect searchFieldLayoutFrame; // @synthesize searchFieldLayoutFrame=_searchFieldLayoutFrame;

@end

