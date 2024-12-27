//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/NSObject-Protocol.h>

@class UIPresentationController, UIViewController;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

@protocol UIViewControllerTransitioningDelegate <NSObject>

@optional
- (UIPresentationController *)presentationControllerForPresentedViewController:(UIViewController *)arg1 presentingViewController:(UIViewController *)arg2 sourceViewController:(UIViewController *)arg3;
- (id <UIViewControllerInteractiveTransitioning>)interactionControllerForDismissal:(id <UIViewControllerAnimatedTransitioning>)arg1;
- (id <UIViewControllerInteractiveTransitioning>)interactionControllerForPresentation:(id <UIViewControllerAnimatedTransitioning>)arg1;
- (id <UIViewControllerAnimatedTransitioning>)animationControllerForDismissedController:(UIViewController *)arg1;
- (id <UIViewControllerAnimatedTransitioning>)animationControllerForPresentedController:(UIViewController *)arg1 presentingController:(UIViewController *)arg2 sourceController:(UIViewController *)arg3;
@end

