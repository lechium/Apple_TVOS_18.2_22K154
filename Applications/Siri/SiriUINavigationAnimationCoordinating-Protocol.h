//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class UINavigationController;
@protocol UIViewControllerTransitionCoordinator;

@protocol SiriUINavigationAnimationCoordinating <NSObject>

@optional
@property(nonatomic) long long operation;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

- (void)coordinateAdditionalTransitionsWithTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg1;
- (void)configureWithNavigationController:(UINavigationController *)arg1;
@end

