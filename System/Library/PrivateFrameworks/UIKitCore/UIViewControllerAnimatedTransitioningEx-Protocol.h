//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewControllerAnimatedTransitioning-Protocol.h>

@class UIPercentDrivenInteractiveTransition, UIWindow;

@protocol UIViewControllerAnimatedTransitioningEx <UIViewControllerAnimatedTransitioning>
- (void)setOperation:(long long)arg1;
- (long long)operation;
- (void)setInteractionController:(UIPercentDrivenInteractiveTransition *)arg1;
- (UIPercentDrivenInteractiveTransition *)interactionController;

@optional
- (UIWindow *)window;
@end

