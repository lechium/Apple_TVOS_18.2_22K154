//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSDictionary, UIBlurEffect, UIColor, UINavigationBar, UIPanelController, UISlidingBarState, UISlidingBarStateRequest, UIViewController;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerTransitionCoordinator;

@protocol UIPanelControllerDelegate <NSObject>

@optional
@property(readonly) UIColor *primaryBackgroundColor;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIColor",?,R

- (UINavigationBar *)panelController:(UIPanelController *)arg1 navigationBarForViewController:(UIViewController *)arg2;
- (void)panelController:(UIPanelController *)arg1 willBeginAnimationToPrimarySize:(struct CGSize)arg2 supplementarySize:(struct CGSize)arg3 secondarySize:(struct CGSize)arg4;
- (void)panelControllerDidExpand:(UIPanelController *)arg1;
- (void)panelControllerDidCollapse:(UIPanelController *)arg1;
- (double)panelController:(UIPanelController *)arg1 expectedWidthForColumnForViewController:(UIViewController *)arg2;
- (_Bool)panelController:(UIPanelController *)arg1 collapsePrimaryViewController:(UIViewController *)arg2 withFallbackSecondaryViewController:(UIViewController *)arg3 onTopOfSupplementaryViewController:(UIViewController *)arg4 transitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg5;
- (long long)topColumnForCollapsingPanelController:(UIPanelController *)arg1;
- (void)panelController:(UIPanelController *)arg1 adjustTrailingViewController:(UIViewController *)arg2 forKeyboardInfo:(NSDictionary *)arg3;
- (void)panelController:(UIPanelController *)arg1 adjustLeadingViewController:(UIViewController *)arg2 forKeyboardInfo:(NSDictionary *)arg3;
- (void)panelController:(UIPanelController *)arg1 didEndAnimatedTransitionToStateRequest:(UISlidingBarStateRequest *)arg2;
- (void)panelController:(UIPanelController *)arg1 animateTransitionToStateRequest:(UISlidingBarStateRequest *)arg2 predictedEndState:(UISlidingBarState *)arg3 predictedDuration:(double)arg4;
- (id <UIViewControllerAnimatedTransitioning>)panelController:(UIPanelController *)arg1 willBeginAnimatedTransitionToStateRequest:(UISlidingBarStateRequest *)arg2 predictedEndState:(UISlidingBarState *)arg3 predictedDuration:(double)arg4;
- (UIViewController *)panelController:(UIPanelController *)arg1 separateSupplementaryViewControllerFromPrimaryViewController:(UIViewController *)arg2;
- (UIViewController *)panelController:(UIPanelController *)arg1 separateSecondaryViewControllerFromPrimaryViewController:(UIViewController *)arg2;
- (void)panelController:(UIPanelController *)arg1 collapsePrimaryViewController:(UIViewController *)arg2 withFallbackSecondaryViewController:(UIViewController *)arg3 transitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg4;
- (_Bool)panelController:(UIPanelController *)arg1 collapseOntoPrimaryViewController:(UIViewController *)arg2;
- (UIViewController *)primaryViewControllerForExpandingPanelController:(UIPanelController *)arg1;
- (UIViewController *)primaryViewControllerForCollapsingPanelController:(UIPanelController *)arg1;
- (void)panelController:(UIPanelController *)arg1 didChangeToState:(UISlidingBarState *)arg2 withSize:(struct CGSize)arg3;
- (void)panelController:(UIPanelController *)arg1 willChangeToState:(UISlidingBarState *)arg2;
- (UISlidingBarStateRequest * (^)(NSArray *, _Bool *))panelControllerWillUpdate:(UIPanelController *)arg1;
- (UIBlurEffect *)sidebarBlurEffectForPanelController:(UIPanelController *)arg1;
- (Class)viewClassForPanelController:(UIPanelController *)arg1;
@end

