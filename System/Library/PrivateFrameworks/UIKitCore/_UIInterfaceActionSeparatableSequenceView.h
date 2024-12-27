//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, UIInterfaceActionVisualStyle, UIStackView;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionSeparatableSequenceView : UIView
{
    _Bool _visualCornerForcedOverride;	// 8 = 0x8
    UIInterfaceActionVisualStyle *_visualStyle;	// 16 = 0x10
    long long _axis;	// 24 = 0x18
    long long _distribution;	// 32 = 0x20
    NSArray *_arrangedContentViews;	// 40 = 0x28
    unsigned long long _visualCornerPosition;	// 48 = 0x30
    UIStackView *_stackView;	// 56 = 0x38
    NSArray *_arrangedContentSeparatorViews;	// 64 = 0x40
    NSArray *_arrangedContentViewsDistributionConstraints;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000026bcd0
@property(readonly, nonatomic) NSArray *arrangedContentViewsDistributionConstraints; // @synthesize arrangedContentViewsDistributionConstraints=_arrangedContentViewsDistributionConstraints;
@property(readonly, nonatomic) NSArray *arrangedContentSeparatorViews; // @synthesize arrangedContentSeparatorViews=_arrangedContentSeparatorViews;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) _Bool visualCornerForcedOverride; // @synthesize visualCornerForcedOverride=_visualCornerForcedOverride;
@property(nonatomic) unsigned long long visualCornerPosition; // @synthesize visualCornerPosition=_visualCornerPosition;
@property(retain, nonatomic) NSArray *arrangedContentViews; // @synthesize arrangedContentViews=_arrangedContentViews;
@property(nonatomic) long long distribution; // @synthesize distribution=_distribution;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
@property(retain, nonatomic) UIInterfaceActionVisualStyle *visualStyle; // @synthesize visualStyle=_visualStyle;
- (_Bool)_isVerticalLayout;	// IMP=0x000000000026bc1e
- (void)_setRoundedCornersOfView:(id)arg1 toCornerPosition:(unsigned long long)arg2;	// IMP=0x000000000026bbbd
- (void)_markRoundedCornerPositionOnNoCornersOfView:(id)arg1;	// IMP=0x000000000026bba9
- (void)_markRoundedCornerPositionOnAllCornersOfView:(id)arg1;	// IMP=0x000000000026bb92
- (void)_markRoundedCornerPositionOnTrailingEdgeOfView:(id)arg1;	// IMP=0x000000000026bb35
- (void)_markRoundedCornerPositionOnLeadingEdgeOfView:(id)arg1;	// IMP=0x000000000026bad6
- (void)_updateRoundedCornerPositionForActionRepViews;	// IMP=0x000000000026b8d9
- (void)_updateSeparatorConstantSizedAxis;	// IMP=0x000000000026b84f
- (long long)_separatorConstantSizedAxis;	// IMP=0x000000000026b839
- (void)_updateActionSpacing;	// IMP=0x000000000026b7b5
- (void)_addSeparatorToStackAndMutableArray:(id)arg1 preferSectionStyle:(_Bool)arg2;	// IMP=0x000000000026b6b1
- (void)_reloadStackViewArrangement;	// IMP=0x000000000026b20d
- (long long)_dimensionAttributeToConstrainEqual;	// IMP=0x000000000026b187
- (void)_reloadContentDistributionConstraintsForArrangedContentViews;	// IMP=0x000000000026afb2
- (struct CGSize)_systemLayoutSizeFittingStackView:(struct CGSize)arg1;	// IMP=0x000000000026aeea
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000026aed8
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000026aeb6
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;	// IMP=0x000000000026aea4
- (void)layoutSublayersOfLayer:(id)arg1;	// IMP=0x000000000026ae5c
- (void)updateConstraints;	// IMP=0x000000000026ae1b
- (void)_withUnsatisfiableConstraintsLoggingSuspendedIfEngineDelegateExists:(CDUnknownBlockType)arg1;	// IMP=0x000000000026ad53
- (void)_setLayoutDebuggingIdentifier:(id)arg1;	// IMP=0x000000000026aca7
- (struct CGRect)_stackViewFrameForViewBounds:(struct CGRect)arg1;	// IMP=0x000000000026ac05
- (struct CGRect)_viewBoundsForStackViewFrame:(struct CGRect)arg1;	// IMP=0x000000000026ab57
- (void)_updateLayoutWithStackFrameForActionSequenceEdgeInsets;	// IMP=0x000000000026aad8
- (void)reloadDisplayedContentVisualStyle;	// IMP=0x000000000026aa9d
- (double)fittingWidthForLayoutAxis:(long long)arg1;	// IMP=0x000000000026a6eb
- (void)_updateActionRepresentationViewsCanRemoveContentFromHierarchyWhenNotVisibleSetting;	// IMP=0x000000000026a4c4
- (id)initWithVisualStyle:(id)arg1;	// IMP=0x0000000000269ffa

@end

