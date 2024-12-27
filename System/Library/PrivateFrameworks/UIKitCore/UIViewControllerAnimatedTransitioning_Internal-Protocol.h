//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewControllerAnimatedTransitioning-Protocol.h>

@class UITraitCollection, UIView;
@protocol UIViewControllerContextTransitioning, UIViewControllerInteractiveTransitioning, _UINavigationToolbarTransitionController;

@protocol UIViewControllerAnimatedTransitioning_Internal <UIViewControllerAnimatedTransitioning>

@optional
@property(readonly, nonatomic) _Bool _shouldAnimateBottomBarVisibility;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool _shouldCrossFadeBottomBars;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool _shouldCrossFadeNavigationBarVisibility;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) UIView *_navigationBarTransitionOverlay;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView",?,R,N

@property(readonly, nonatomic) long long _navigationBarTransitionVariant;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N

- (id <_UINavigationToolbarTransitionController>)_navigationToolbarTransitionControllerForContext:(id <UIViewControllerContextTransitioning>)arg1;
- (id <UIViewControllerInteractiveTransitioning>)_interactionController;
- (_Bool)_allowKeyboardToAnimateAlongside:(id <UIViewControllerContextTransitioning>)arg1;
- (void)_animationWillEnd:(id <UIViewControllerContextTransitioning>)arg1 didComplete:(_Bool)arg2;
- (_Bool)_shouldUseInterruptibleAnimatorWithTraitCollection:(UITraitCollection *)arg1;
- (double)_customNavigationBarHidingDuration:(id <UIViewControllerContextTransitioning>)arg1;
@end

