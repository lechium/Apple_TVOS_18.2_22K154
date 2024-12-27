//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CardKit/NSObject-Protocol.h>

@class UIViewController, _CRKCardViewControllerTransitionAnimator;
@protocol CRKAnimationCoordinating, CRKCardViewControlling;

@protocol _CRKCardViewControllerTransitionAnimatorDelegate <NSObject>
- (void)transitionAnimator:(_CRKCardViewControllerTransitionAnimator *)arg1 willTransitionFromCardViewController:(UIViewController<CRKCardViewControlling> *)arg2 toCardViewController:(UIViewController<CRKCardViewControlling> *)arg3 withAnimationCoordinator:(id <CRKAnimationCoordinating>)arg4;
@end

