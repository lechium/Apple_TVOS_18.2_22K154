//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class BSAnimationSettings, NSArray, NSOrderedSet, NSSet, NSString, UIFont, UIView, _UIStatusBar, _UIStatusBarAnimation, _UIStatusBarData, _UIStatusBarDisplayItem, _UIStatusBarIdentifier, _UIStatusBarItem, _UIStatusBarRegion, _UIStatusBarStyleAttributes;
@protocol _UIStatusBarActionable;

@protocol _UIStatusBarVisualProvider <NSObject>
+ (_Bool)requiresIterativeOverflowLayout;
+ (_Bool)scalesWithScreenNativeScale;
+ (struct CGSize)intrinsicContentSizeForOrientation:(long long)arg1;
@property(readonly, nonatomic) UIFont *clockFont;
@property(nonatomic) __weak _UIStatusBar *statusBar;
- (_UIStatusBarStyleAttributes *)styleAttributesForStyle:(long long)arg1;
- (NSArray *)orderedDisplayItemPlacementsInRegionWithIdentifier:(NSString *)arg1;
- (NSArray *)setupInContainerView:(UIView *)arg1;

@optional
+ (double)referenceScreenScale;
+ (struct CGSize)intrinsicLockScreenContentSizeForOrientation:(long long)arg1;
@property(readonly, nonatomic) _Bool canFixupDisplayItemAttributes;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

- (_Bool)showSensorActivityIndicatorWithoutPortalView;
- (NSSet *)displayItemIdentifiersForPartWithIdentifier:(NSString *)arg1;
- (NSSet *)regionIdentifiersForPartWithIdentifier:(NSString *)arg1;
- (void)actionable:(id <_UIStatusBarActionable>)arg1 highlighted:(_Bool)arg2 initialPress:(_Bool)arg3;
- (_UIStatusBarAnimation *)removalAnimationForDisplayItemWithIdentifier:(_UIStatusBarIdentifier *)arg1 itemAnimation:(_UIStatusBarAnimation *)arg2;
- (_UIStatusBarAnimation *)additionAnimationForDisplayItemWithIdentifier:(_UIStatusBarIdentifier *)arg1 itemAnimation:(_UIStatusBarAnimation *)arg2;
- (_UIStatusBarStyleAttributes *)overriddenStyleAttributesForDisplayItemWithIdentifier:(_UIStatusBarIdentifier *)arg1;
- (struct CGRect)clockBoundsForLayoutItem:(_UIStatusBarDisplayItem *)arg1;
- (void)itemCreated:(_UIStatusBarItem *)arg1;
- (void)statusBarEnabledPartsUpdated;
- (void)statusBarRegionsUpdated;
- (void)dataUpdated:(_UIStatusBarData *)arg1;
- (NSOrderedSet *)region:(_UIStatusBarRegion *)arg1 willSetDisplayItems:(NSOrderedSet *)arg2;
- (NSArray *)willUpdateWithData:(_UIStatusBarData *)arg1;
- (void)sizeUpdatedFromSize:(struct CGSize)arg1;
- (void)avoidanceFrameUpdatedFromFrame:(struct CGRect)arg1 withAnimationSettings:(BSAnimationSettings *)arg2 options:(unsigned long long)arg3;
- (void)styleUpdatedFromStyle:(long long)arg1;
- (void)orientationUpdatedFromOrientation:(long long)arg1;
- (void)modeUpdatedFromMode:(long long)arg1;
@end

