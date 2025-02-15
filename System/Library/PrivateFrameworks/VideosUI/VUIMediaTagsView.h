//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSString, UIImage, VUIMediaTagsViewLayout;

__attribute__((visibility("hidden")))
@interface VUIMediaTagsView
{
    _Bool _isSelected;	// 8 = 0x8
    double vuiBaselineHeight;	// 16 = 0x10
    VUIMediaTagsViewLayout *_tagsViewLayout;	// 24 = 0x18
    NSDictionary *_viewsMap;	// 32 = 0x20
    NSArray *_groupedSubviews;	// 40 = 0x28
    double _totalSubviewsWidth;	// 48 = 0x30
    UIImage *_commonSenseLightImage;	// 56 = 0x38
    UIImage *_commonSenseDarkImage;	// 64 = 0x40
}

+ (id)tagsViewWithMetadata:(id)arg1 layout:(id)arg2 existingView:(id)arg3;	// IMP=0x001000000011258c
- (void).cxx_destruct;	// IMP=0x000000000011b937
@property(retain, nonatomic) UIImage *commonSenseDarkImage; // @synthesize commonSenseDarkImage=_commonSenseDarkImage;
@property(retain, nonatomic) UIImage *commonSenseLightImage; // @synthesize commonSenseLightImage=_commonSenseLightImage;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) double totalSubviewsWidth; // @synthesize totalSubviewsWidth=_totalSubviewsWidth;
@property(retain, nonatomic) NSArray *groupedSubviews; // @synthesize groupedSubviews=_groupedSubviews;
@property(copy, nonatomic) NSDictionary *viewsMap; // @synthesize viewsMap=_viewsMap;
@property(readonly, nonatomic) VUIMediaTagsViewLayout *tagsViewLayout; // @synthesize tagsViewLayout=_tagsViewLayout;
@property(readonly, nonatomic) double vuiBaselineHeight; // @synthesize vuiBaselineHeight;
- (void)transparencySettingsDidChange;	// IMP=0x000000000011b7e6
- (void)contrastSettingsDidChange;	// IMP=0x000000000011b78d
- (void)_addGenreLabelAndSeparator;	// IMP=0x000000000011b613
- (void)_removeGenreLabelAndSeparator;	// IMP=0x000000000011b44d
- (double)_totalSubviewsWidth;	// IMP=0x000000000011a76f
- (void)_removeSeparatorsFromGroupsIfNeeded:(_Bool)arg1;	// IMP=0x000000000011a31e
- (void)_updateAppearanceWithUserInterfaceStyle:(unsigned long long)arg1;	// IMP=0x000000000011a2ee
- (void)_updateImageAppearanceWithUserInterfaceStyle:(unsigned long long)arg1;	// IMP=0x0000000000119e4f
- (_Bool)elementsArePlacedOnIndividualLines;	// IMP=0x0000000000119e47
- (id)_newRentalExpirationlabel:(id)arg1 exisitingLabel:(id)arg2;	// IMP=0x0000000000119cfb
- (id)_newTextBadgeViewAsSubview:(id)arg1 layout:(id)arg2 withString:(id)arg3;	// IMP=0x0000000000119be2
- (id)_newImageViewAsSubview:(_Bool)arg1;	// IMP=0x0000000000119b23
- (void)vui_setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000000119ac0
- (_Bool)_shouldApplyTintColor:(id)arg1 forImage:(id)arg2;	// IMP=0x00000000001199cf
- (id)_newLabelAsSubview:(id)arg1 withAttributedString:(id)arg2 textLayout:(id)arg3;	// IMP=0x0000000000119973
- (id)_newLabelAsSubview:(id)arg1 textLayout:(id)arg2;	// IMP=0x0000000000119919
- (id)_textLayoutForKey:(id)arg1;	// IMP=0x0000000000119831
- (id)_firstLabelSubview;	// IMP=0x00000000001196d1
- (void)rentalExpirationLabelNeedsRelayout:(id)arg1;	// IMP=0x00000000001196bf
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000011958a
- (void)updateWithMetadata:(id)arg1;	// IMP=0x0000000000117a75
- (double)bottomMarginWithBaselineMargin:(double)arg1;	// IMP=0x00000000001179c1
- (double)bottomMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;	// IMP=0x000000000011793d
- (double)vui_baselineOffsetFromBottom;	// IMP=0x00000000001178eb
- (double)firstBaselineOffsetFromTop;	// IMP=0x0000000000117899
- (double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;	// IMP=0x000000000011757f
- (double)topMarginWithBaselineMargin:(double)arg1;	// IMP=0x00000000001171f9
- (void)_adjustViewsPositionFor:(id)arg1 topPadding:(double)arg2;	// IMP=0x0000000000116eee
- (void)_adjustViewsPositionFor:(id)arg1 preferredSize:(struct CGSize)arg2;	// IMP=0x00000000001169cb
- (struct CGSize)_layoutSubviewsForSize:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x0000000000112ea5
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x0000000000112da0
- (void)dealloc;	// IMP=0x0000000000112cd4
- (void)reset;	// IMP=0x0000000000112cce
- (id)initWithFrame:(struct CGRect)arg1 layout:(id)arg2;	// IMP=0x00000000001126b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

