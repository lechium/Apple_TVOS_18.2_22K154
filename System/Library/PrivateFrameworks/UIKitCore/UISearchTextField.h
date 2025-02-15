//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextField.h"

@class NSMutableDictionary, NSString, NSValue, UIImage, UIImageView, UISearchBar, _UISearchBarSearchFieldBackgroundView, _UISearchTextFieldVisualStyle;

__attribute__((visibility("hidden")))
@interface UISearchTextField : UITextField
{
    NSMutableDictionary *_customClearButtons;	// 160 = 0xa0
    NSMutableDictionary *_iconOffsets;	// 168 = 0xa8
    NSValue *_searchTextOffsetValue;	// 176 = 0xb0
    _UISearchBarSearchFieldBackgroundView *_effectBackgroundTop;	// 184 = 0xb8
    _UISearchBarSearchFieldBackgroundView *_effectBackgroundBottom;	// 192 = 0xc0
    UIImageView *_defaultLeftView;	// 200 = 0xc8
    _Bool _deferringFirstResponder;	// 208 = 0xd0
    _Bool _animatePlaceholderOnResignFirstResponder;	// 209 = 0xd1
    struct {
        unsigned int searchBarWantsShouldSendContentChangedNotificationsIfOnlyMarkedTextChanged:1;
        unsigned int alwaysHidesMagnifyingGlassForAccessibilityContentSizeCategory:1;
        unsigned int needsDelayedSearchControllerPresentation:1;
    } _searchBarTextFieldFlags;	// 212 = 0xd4
    _UISearchTextFieldVisualStyle *_visualStyle;	// 216 = 0xd8
    UIImage *_magnifyingGlassImage;	// 224 = 0xe0
    _Bool __preventSelectionViewActivation;	// 232 = 0xe8
    UISearchBar *_searchBar;	// 240 = 0xf0
}

+ (id)visualStyleRegistryIdentity;	// IMP=0x0010000000409098
- (void).cxx_destruct;	// IMP=0x0000000000408ecd
@property(nonatomic, setter=_setPreventSelectionViewActivation:) _Bool _preventSelectionViewActivation; // @synthesize _preventSelectionViewActivation=__preventSelectionViewActivation;
@property(nonatomic, setter=_setSearchBar:) __weak UISearchBar *_searchBar; // @synthesize _searchBar;
- (void)fieldEditorDidChange:(id)arg1;	// IMP=0x0000000000408e04
@property(nonatomic, setter=_setAlwaysHidesMagnifyingGlassForAccessibilityContentSizeCategory:) _Bool _alwaysHidesMagnifyingGlassForAccessibilityContentSizeCategory;
- (void)_didSetFont:(id)arg1;	// IMP=0x0000000000408c98
- (void)_updateDefaultLeftViewForFont:(id)arg1;	// IMP=0x0000000000408b3e
- (_Bool)_scalesMagnifyingGlassForDynamicTypeWithFont:(id)arg1;	// IMP=0x0000000000408a54
- (_Bool)_supportsDynamicType;	// IMP=0x0000000000408a40
- (_Bool)_shouldOverrideEditingFont;	// IMP=0x0000000000408a38
- (_Bool)_textShouldFillFieldEditorHeight;	// IMP=0x0000000000408a30
- (long long)_blurEffectStyle;	// IMP=0x0000000000408a1e
- (_Bool)_shouldDetermineInterfaceStyleTextColor;	// IMP=0x0000000000408a16
- (void)insertTextSuggestion:(id)arg1;	// IMP=0x00000000004089a5
- (void)_defaultInsertTextSuggestion:(id)arg1;	// IMP=0x00000000004088bf
- (id)textInputTraits;	// IMP=0x000000000040883e
- (void)_setBottomEffectBackgroundVisible:(_Bool)arg1;	// IMP=0x00000000004087e5
- (void)_setEnabled:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000004085fc
- (double)_placeholderLabelAlphaForForegroundViewsAlpha:(double)arg1;	// IMP=0x00000000004085c4
- (_Bool)_delegateShouldChangeCharactersInTextStorageRange:(struct _NSRange)arg1 replacementString:(id)arg2 delegateCares:(_Bool *)arg3;	// IMP=0x0000000000408511
- (_Bool)_delegateShouldClear;	// IMP=0x00000000004084a2
- (_Bool)_delegateShouldScrollToVisibleWhenBecomingFirstResponder;	// IMP=0x0000000000408417
- (_Bool)_delegateShouldEndEditing;	// IMP=0x000000000040838c
- (_Bool)_delegateShouldBeginEditing;	// IMP=0x000000000040831d
- (void)_resetNeedsDelayedSearchControllerPresentation;	// IMP=0x000000000040830c
@property(readonly, nonatomic) _Bool _needsDelayedSearchControllerPresentation;
- (_Bool)canBecomeFirstResponder;	// IMP=0x000000000040822a
- (_Bool)canResignFirstResponder;	// IMP=0x00000000004081b8
- (_Bool)resignFirstResponder;	// IMP=0x0000000000407fc9
- (void)_becomeFirstResponder;	// IMP=0x0000000000407b74
- (void)_animateForFirstResponderChangeWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000407b42
- (void)_animateForFirstResponderChangeWithAnimations:(CDUnknownBlockType)arg1;	// IMP=0x0000000000407b2e
- (void)layoutSubviews;	// IMP=0x0000000000407ad9
- (void)setText:(id)arg1;	// IMP=0x0000000000407a4b
- (void)_activateSelectionView;	// IMP=0x0000000000407a09
- (void)_removeEffectsBackgroundViews;	// IMP=0x0000000000407997
- (void)_clearBackgroundViews;	// IMP=0x0000000000407956
- (void)updateForBackdropStyle:(long long)arg1;	// IMP=0x000000000040766d
- (void)__highlightedDidChangeAnimated:(_Bool)arg1;	// IMP=0x000000000040758e
- (void)_applyHighlightedAnimated:(_Bool)arg1;	// IMP=0x0000000000407545
- (void)_highlightedDidChangeAnimated:(_Bool)arg1;	// IMP=0x00000000004074fc
- (void)_setBackgroundViewsAlpha:(double)arg1;	// IMP=0x00000000004074a9
- (void)_setAnimatesBackgroundCornerRadius:(_Bool)arg1;	// IMP=0x000000000040745d
- (id)_createEffectsBackgroundViewWithStyle:(long long)arg1 applyFilter:(id)arg2;	// IMP=0x000000000040732a
- (void)_updateBackgroundView:(id)arg1 withStyle:(long long)arg2 filter:(id)arg3;	// IMP=0x000000000040727f
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000406ee5
- (id)_placeholderColor;	// IMP=0x0000000000406e53
- (Class)_placeholderLabelClass;	// IMP=0x0000000000406e42
- (void)tintColorDidChange;	// IMP=0x0000000000406d4d
- (long long)_suffixLabelTextAlignment;	// IMP=0x0000000000406d42
- (struct CGRect)_suffixFrame;	// IMP=0x0000000000406c82
- (struct CGRect)_availableTextRectForBounds:(struct CGRect)arg1 forEditing:(_Bool)arg2;	// IMP=0x0000000000406bb5
- (_Bool)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;	// IMP=0x0000000000406ac0
- (_Bool)_becomeFirstResponderWhenPossible;	// IMP=0x00000000004069d1
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;	// IMP=0x000000000040654d
- (struct CGSize)_clearButtonSize;	// IMP=0x00000000004064ba
- (double)_clearButtonMarginX;	// IMP=0x0000000000406383
- (struct CGRect)_bookmarkViewRectForBounds:(struct CGRect)arg1;	// IMP=0x000000000040616d
- (struct CGRect)_searchIconViewRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000405e5c
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000405e0e
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000405dc0
- (_Bool)_shouldCenterPlaceholder;	// IMP=0x0000000000405d3f
- (struct CGRect)_adjustmentsForSearchIconViewRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000405bdb
- (_Bool)_shouldHideMagnifyingGlassWhenEditingOrHasContent;	// IMP=0x0000000000405b2c
- (_Bool)_isEditingOrHasContent;	// IMP=0x0000000000405af3
- (double)_maximumAlphaForLeadingView;	// IMP=0x0000000000405a52
- (void)_updateColorForMagnifyingGlass;	// IMP=0x00000000004059d9
- (void)_updateAlphaForMagnifyingGlass;	// IMP=0x000000000040597a
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;	// IMP=0x00000000004058ed
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000405860
- (struct CGRect)_adjustedTextOrEditingRect:(struct CGRect)arg1 forBounds:(struct CGRect)arg2;	// IMP=0x00000000004053fb
- (void)_updateHelpMessageOverrideWithMessage:(id)arg1;	// IMP=0x0000000000405392
- (_Bool)_shouldIgnoreBaseWritingDirectionChanges;	// IMP=0x000000000040538a
- (_Bool)_shouldResignOnEditingDidEndOnExit;	// IMP=0x0000000000405382
@property(retain, nonatomic, setter=_setSearchTextOffetValue:) NSValue *_searchTextOffsetValue;
- (id)_offsetValueForIcon:(long long)arg1;	// IMP=0x000000000040527b
- (void)_setOffsetValue:(id)arg1 forIcon:(long long)arg2;	// IMP=0x0000000000405155
- (_Bool)_hasCustomClearButtonImage;	// IMP=0x0000000000405131
- (id)_clearButtonImageForState:(unsigned long long)arg1;	// IMP=0x0000000000404df2
- (void)_setClearButtonImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000404c1d
- (double)_defaultHeightForBarMetrics:(long long)arg1;	// IMP=0x0000000000404c00
@property(nonatomic, setter=_setIgnoresDynamicType:) _Bool _ignoresDynamicType;
- (void)_updateLeftViewForMagnifyingGlassImage;	// IMP=0x0000000000404a44
- (void)_setMagnifyingGlassImage:(id)arg1;	// IMP=0x00000000004049bd
- (_Bool)canBecomeFocused;	// IMP=0x0000000000404979
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000404897
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000404868
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000404798
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000404769
- (id)_initWithFrame:(struct CGRect)arg1 textLayoutManagerEnabled:(_Bool)arg2 defersSearchImageConfiguration:(_Bool)arg3;	// IMP=0x0000000000404485
- (id)_initWithFrame:(struct CGRect)arg1 textLayoutManagerEnabled:(_Bool)arg2;	// IMP=0x0000000000404471
- (id)_initWithDeferredSearchIconImageConfiguration;	// IMP=0x0000000000404415
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;	// IMP=0x00000000004043e6
- (void)setDelegate:(id)arg1;	// IMP=0x000000000040430b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

