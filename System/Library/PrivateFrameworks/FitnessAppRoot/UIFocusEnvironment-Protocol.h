//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FitnessAppRoot/NSObject-Protocol.h>

@class NSArray, NSString, UIFocusAnimationCoordinator, UIFocusUpdateContext, UIView;
@protocol UIFocusEnvironment, UIFocusItemContainer;

@protocol UIFocusEnvironment <NSObject>
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
- (void)didUpdateFocusInContext:(UIFocusUpdateContext *)arg1 withAnimationCoordinator:(UIFocusAnimationCoordinator *)arg2;
- (_Bool)shouldUpdateFocusInContext:(UIFocusUpdateContext *)arg1;
- (void)updateFocusIfNeeded;
- (void)setNeedsFocusUpdate;

@optional
@property(readonly, copy, nonatomic) NSString *focusGroupIdentifier;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView",?,R,W,N

- (NSString *)soundIdentifierForFocusUpdateInContext:(UIFocusUpdateContext *)arg1;
@end

