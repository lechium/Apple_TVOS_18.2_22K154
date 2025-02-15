//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSArray, NSLayoutConstraint, NSString, VUIAnimatedLabel;

__attribute__((visibility("hidden")))
@interface VUIStackingPosterView : UIView
{
    _Bool _requiresReconfiguration;	// 8 = 0x8
    NSLayoutConstraint *_topAnchorConstraint;	// 16 = 0x10
    NSLayoutConstraint *_bottomAnchorConstraint;	// 24 = 0x18
    NSLayoutConstraint *_topImageConstraint;	// 32 = 0x20
    NSLayoutConstraint *_bottomImageConstraint;	// 40 = 0x28
    double _topAnchorConstant;	// 48 = 0x30
    double _bottomAnchorConstant;	// 56 = 0x38
    double _topImageConstant;	// 64 = 0x40
    double _bottomImageConstant;	// 72 = 0x48
    double _labelWidthExpansionAmount;	// 80 = 0x50
    NSArray *_labelWidthConstraints;	// 88 = 0x58
    _Bool _configuresForCollectionViewCell;	// 96 = 0x60
    _Bool _allowsLabelWidthExpansion;	// 97 = 0x61
    _Bool _usesBaselineMargins;	// 98 = 0x62
    _Bool _isFocusable;	// 99 = 0x63
    UIView *_mainImageComponent;	// 104 = 0x68
    NSArray *_components;	// 112 = 0x70
    UIView *_overlayView;	// 120 = 0x78
    double _mainImageFocusSizeIncrease;	// 128 = 0x80
    long long _mainImageScaleMode;	// 136 = 0x88
    double _mainImageAspectRatio;	// 144 = 0x90
    NSString *_mainImageFocusAlign;	// 152 = 0x98
    NSArray *_filteredComponents;	// 160 = 0xa0
    VUIAnimatedLabel *_animatedLabel;	// 168 = 0xa8
    NSArray *_marqueeLabels;	// 176 = 0xb0
    NSArray *_visibleLabelWidths;	// 184 = 0xb8
    struct CGSize _maxBoundsSize;	// 192 = 0xc0
    struct UIEdgeInsets _mainImageMargin;	// 208 = 0xd0
    struct UIEdgeInsets _padding;	// 240 = 0xf0
    struct _VUIStackingPosterCellMetrics _cellMetrics;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x00000000000a1027
@property(copy, nonatomic) NSArray *visibleLabelWidths; // @synthesize visibleLabelWidths=_visibleLabelWidths;
@property(copy, nonatomic) NSArray *marqueeLabels; // @synthesize marqueeLabels=_marqueeLabels;
@property(retain, nonatomic) VUIAnimatedLabel *animatedLabel; // @synthesize animatedLabel=_animatedLabel;
@property(copy, nonatomic) NSArray *filteredComponents; // @synthesize filteredComponents=_filteredComponents;
@property(nonatomic) _Bool isFocusable; // @synthesize isFocusable=_isFocusable;
@property(nonatomic) _Bool usesBaselineMargins; // @synthesize usesBaselineMargins=_usesBaselineMargins;
@property(nonatomic) _Bool allowsLabelWidthExpansion; // @synthesize allowsLabelWidthExpansion=_allowsLabelWidthExpansion;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) struct UIEdgeInsets mainImageMargin; // @synthesize mainImageMargin=_mainImageMargin;
@property(copy, nonatomic) NSString *mainImageFocusAlign; // @synthesize mainImageFocusAlign=_mainImageFocusAlign;
@property(nonatomic) double mainImageAspectRatio; // @synthesize mainImageAspectRatio=_mainImageAspectRatio;
@property(nonatomic) long long mainImageScaleMode; // @synthesize mainImageScaleMode=_mainImageScaleMode;
@property(nonatomic) double mainImageFocusSizeIncrease; // @synthesize mainImageFocusSizeIncrease=_mainImageFocusSizeIncrease;
@property(nonatomic) struct _VUIStackingPosterCellMetrics cellMetrics; // @synthesize cellMetrics=_cellMetrics;
@property(nonatomic) _Bool configuresForCollectionViewCell; // @synthesize configuresForCollectionViewCell=_configuresForCollectionViewCell;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
@property(nonatomic) struct CGSize maxBoundsSize; // @synthesize maxBoundsSize=_maxBoundsSize;
@property(retain, nonatomic) UIView *mainImageComponent; // @synthesize mainImageComponent=_mainImageComponent;
- (id)imageForContextMenuSelection;	// IMP=0x00000000000a0d98
- (_Bool)_isMarqueeAndShowOnHighlightStyleOnly:(id)arg1;	// IMP=0x00000000000a0cce
- (_Bool)_isMarqueeOnHighlightStyle:(id)arg1;	// IMP=0x00000000000a0c70
- (_Bool)_isShowOnHighlightStyle:(id)arg1;	// IMP=0x00000000000a0c12
- (void)_updateFocusSizeIncrease;	// IMP=0x00000000000a0a5d
- (void)_updateShadowForLabel:(id)arg1 inFocus:(_Bool)arg2;	// IMP=0x00000000000a08fe
- (double)_labelWidthForWidth:(double)arg1 component:(id)arg2 expansionAmount:(double)arg3;	// IMP=0x00000000000a0870
- (struct _VUIStackingPosterCellMetrics)_cellMetricsForMaxSize:(struct CGSize)arg1;	// IMP=0x000000000009f100
- (double)_bottomMarginFor:(id)arg1 withHeight:(double)arg2;	// IMP=0x000000000009f0d0
- (double)_topMarginFrom:(id)arg1 withHeight:(double)arg2 to:(id)arg3 withHeight:(double)arg4 using:(double)arg5;	// IMP=0x000000000009ef68
- (void)_updateComponentConstraints;	// IMP=0x000000000009e26c
- (struct UIEdgeInsets)_marginForComponent:(id)arg1;	// IMP=0x000000000009e16b
- (void)_configureSubviews;	// IMP=0x000000000009d260
- (void)_updateSubviewHeirarchyWithComponents:(id)arg1;	// IMP=0x000000000009cf8a
- (void)_resetSubviews;	// IMP=0x000000000009ce86
- (id)_getAttributedStringsFromMarqueeLabels:(id)arg1;	// IMP=0x000000000009cbc5
- (struct UIEdgeInsets)_mainImageComponentAspectFitMarginsForCellMetrics:(struct _VUIStackingPosterCellMetrics)arg1;	// IMP=0x000000000009cac9
- (struct UIEdgeInsets)selectionMarginsForSize:(struct CGSize)arg1;	// IMP=0x000000000009c939
- (struct UIEdgeInsets)vui_alignmentInsetsForExpectedWidth:(double)arg1;	// IMP=0x000000000009c8ef
- (void)_moveAllComponentsByOffset:(double)arg1;	// IMP=0x000000000009c781
- (double)_labelOffsetForIdleMode;	// IMP=0x000000000009c641
- (void)_applicationWillExitIdleMode:(id)arg1;	// IMP=0x000000000009c47d
- (void)_applicationWillEnterIdleMode:(id)arg1;	// IMP=0x000000000009c2c3
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000009c2ab
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000000009c293
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 focusUpdateContext:(id)arg3 withAnimationCoordinator:(id)arg4;	// IMP=0x000000000009aeed
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000009adde
- (void)setFocusDirection:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x000000000009ad6f
@property(nonatomic) struct CGPoint focusDirection;
- (_Bool)canBecomeFocused;	// IMP=0x000000000009ad4b
- (void)layoutSubviews;	// IMP=0x000000000009aad4
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000009aa9c
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x000000000009a9b2
- (void)updateComponentLayout;	// IMP=0x000000000009a984
- (void)setNeedsUpdateComponentLayout;	// IMP=0x000000000009a73a
- (void)setComponents:(id)arg1 mainImageComponent:(id)arg2;	// IMP=0x0000000000099d8a
- (id)preferredFocusEnvironments;	// IMP=0x0000000000099ca4
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000099b56
- (void)_commonInit;	// IMP=0x0000000000099a41
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000999f5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000099998

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

