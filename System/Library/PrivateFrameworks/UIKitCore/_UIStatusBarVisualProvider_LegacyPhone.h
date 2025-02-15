//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIStatusBarVisualProvider_Phone.h"

@class NSDictionary, NSLayoutConstraint, NSString, _UIStatusBarCellularItem, _UIStatusBarDisplayItemPlacementGroup, _UIStatusBarRegionAxisCenteringLayout, _UIStatusBarRegionAxisStackingLayout;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVisualProvider_LegacyPhone : _UIStatusBarVisualProvider_Phone
{
    NSDictionary *_orderedDisplayItemPlacements;	// 8 = 0x8
    _UIStatusBarDisplayItemPlacementGroup *_lowerWifiGroup;	// 16 = 0x10
    NSLayoutConstraint *_backgroundHeightConstraint;	// 24 = 0x18
    _UIStatusBarCellularItem *_condensedCellularItem;	// 32 = 0x20
    NSLayoutConstraint *_leadingTopConstraint;	// 40 = 0x28
    NSLayoutConstraint *_leadingHeightConstraint;	// 48 = 0x30
    _UIStatusBarRegionAxisStackingLayout *_leadingHorizontalLayout;	// 56 = 0x38
    NSLayoutConstraint *_centerTopConstraint;	// 64 = 0x40
    NSLayoutConstraint *_centerHeightConstraint;	// 72 = 0x48
    _UIStatusBarRegionAxisCenteringLayout *_centerHorizontalLayout;	// 80 = 0x50
    NSLayoutConstraint *_trailingTopConstraint;	// 88 = 0x58
    NSLayoutConstraint *_trailingHeightConstraint;	// 96 = 0x60
    _UIStatusBarRegionAxisStackingLayout *_trailingHorizontalLayout;	// 104 = 0x68
    NSLayoutConstraint *_expandedLeadingBottomConstraint;	// 112 = 0x70
    NSLayoutConstraint *_expandedTrailingBottomConstraint;	// 120 = 0x78
}

+ (double)height;	// IMP=0x00100000012089e5
+ (struct CGSize)intrinsicLockScreenContentSizeForOrientation:(long long)arg1;	// IMP=0x00100000012089c2
+ (double)_heightExpanded:(_Bool)arg1;	// IMP=0x00100000012089a6
- (void).cxx_destruct;	// IMP=0x000000000120fc86
@property(retain, nonatomic) NSLayoutConstraint *expandedTrailingBottomConstraint; // @synthesize expandedTrailingBottomConstraint=_expandedTrailingBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *expandedLeadingBottomConstraint; // @synthesize expandedLeadingBottomConstraint=_expandedLeadingBottomConstraint;
@property(retain, nonatomic) _UIStatusBarRegionAxisStackingLayout *trailingHorizontalLayout; // @synthesize trailingHorizontalLayout=_trailingHorizontalLayout;
@property(retain, nonatomic) NSLayoutConstraint *trailingHeightConstraint; // @synthesize trailingHeightConstraint=_trailingHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *trailingTopConstraint; // @synthesize trailingTopConstraint=_trailingTopConstraint;
@property(retain, nonatomic) _UIStatusBarRegionAxisCenteringLayout *centerHorizontalLayout; // @synthesize centerHorizontalLayout=_centerHorizontalLayout;
@property(retain, nonatomic) NSLayoutConstraint *centerHeightConstraint; // @synthesize centerHeightConstraint=_centerHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *centerTopConstraint; // @synthesize centerTopConstraint=_centerTopConstraint;
@property(retain, nonatomic) _UIStatusBarRegionAxisStackingLayout *leadingHorizontalLayout; // @synthesize leadingHorizontalLayout=_leadingHorizontalLayout;
@property(retain, nonatomic) NSLayoutConstraint *leadingHeightConstraint; // @synthesize leadingHeightConstraint=_leadingHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingTopConstraint; // @synthesize leadingTopConstraint=_leadingTopConstraint;
@property(retain, nonatomic) _UIStatusBarCellularItem *condensedCellularItem; // @synthesize condensedCellularItem=_condensedCellularItem;
@property(retain, nonatomic) NSLayoutConstraint *backgroundHeightConstraint; // @synthesize backgroundHeightConstraint=_backgroundHeightConstraint;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacementGroup *lowerWifiGroup; // @synthesize lowerWifiGroup=_lowerWifiGroup;
@property(retain, nonatomic) NSDictionary *orderedDisplayItemPlacements; // @synthesize orderedDisplayItemPlacements=_orderedDisplayItemPlacements;
- (id)_backgroundActivityDetailRemovalAnimation;	// IMP=0x000000000120eb0e
- (void)setOnLockScreen:(_Bool)arg1;	// IMP=0x000000000120ea9f
- (void)_updateLockScreenSizing;	// IMP=0x000000000120e8e3
- (void)setExpanded:(_Bool)arg1;	// IMP=0x000000000120e73b
- (void)_updateBackgroundHeight;	// IMP=0x000000000120e705
- (void)updateDataForService:(id)arg1;	// IMP=0x000000000120e650
- (void)_updateExpandedTrailingRegion;	// IMP=0x000000000120e43a
- (void)_updateLowerRegionsWithData:(id)arg1;	// IMP=0x000000000120e135
- (void)statusBarRegionsUpdated;	// IMP=0x000000000120e123
- (void)dataUpdated:(id)arg1;	// IMP=0x000000000120e111
- (void)orientationUpdatedFromOrientation:(long long)arg1;	// IMP=0x000000000120e0a3
- (struct CGRect)clockBoundsForLayoutItem:(id)arg1;	// IMP=0x000000000120deb8
- (id)displayItemIdentifiersForPartWithIdentifier:(id)arg1;	// IMP=0x000000000120dde3
- (id)styleAttributesForStyle:(long long)arg1;	// IMP=0x000000000120db7a
- (id)regionIdentifiersForPartWithIdentifier:(id)arg1;	// IMP=0x000000000120d82f
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x000000000120d75e
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;	// IMP=0x000000000120d619
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;	// IMP=0x000000000120d3a5
- (id)_animationForSingleLineDualCarrier;	// IMP=0x000000000120d207
- (id)willUpdateWithData:(id)arg1;	// IMP=0x000000000120cfe7
- (void)actionable:(id)arg1 highlighted:(_Bool)arg2 initialPress:(_Bool)arg3;	// IMP=0x000000000120cc43
- (double)animatedTypeDisplayItemSpacingFactorForCellularType:(long long)arg1;	// IMP=0x000000000120cc35
- (id)condensedFontForCellularType:(long long)arg1 defaultFont:(id)arg2 baselineOffset:(double *)arg3;	// IMP=0x000000000120cafc
- (id)stringForCellularType:(long long)arg1 condensed:(_Bool)arg2;	// IMP=0x000000000120cacb
- (void)itemCreated:(id)arg1;	// IMP=0x000000000120c88d
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;	// IMP=0x000000000120aa6c
- (id)setupInContainerView:(id)arg1;	// IMP=0x0000000001208d26
- (id)clockFont;	// IMP=0x0000000001208d14
- (struct CGSize)smallPillSize;	// IMP=0x0000000001208d03
- (struct CGSize)pillSize;	// IMP=0x0000000001208ced
- (id)pillFont;	// IMP=0x0000000001208c75
- (id)expandedFont;	// IMP=0x0000000001208bfd
- (id)timeFont;	// IMP=0x0000000001208b85
- (id)normalFont;	// IMP=0x0000000001208b0d
- (double)lowerExpandedBaselineOffset;	// IMP=0x0000000001208aff
- (double)dualLineExpandedBaselineOffset;	// IMP=0x0000000001208af1
- (double)expandedBaselineOffset;	// IMP=0x0000000001208ae3
- (double)baselineOffset;	// IMP=0x0000000001208a7c
- (struct NSDirectionalEdgeInsets)edgeInsets;	// IMP=0x0000000001208a58
- (double)regionSpacing;	// IMP=0x0000000001208a4a
- (double)effectiveHeight;	// IMP=0x00000000012089f9
- (_Bool)wantsExpandedLeadingPlacements;	// IMP=0x000000000120899e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

