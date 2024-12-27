//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class PBSplitViewStateMachine;
@protocol PBSplitViewStateMachineTransitionContext;

@protocol PBSplitViewStateMachineTransitionHandling <NSObject>
- (void)splitViewStateMachine:(PBSplitViewStateMachine *)arg1 invalidateWithCompletion:(void (^)(void))arg2;
- (void)splitViewStateMachine:(PBSplitViewStateMachine *)arg1 unhideWithCompletion:(void (^)(void))arg2;
- (void)splitViewStateMachine:(PBSplitViewStateMachine *)arg1 hideWithCompletion:(void (^)(void))arg2;
- (void)splitViewStateMachine:(PBSplitViewStateMachine *)arg1 dismissWithContext:(id <PBSplitViewStateMachineTransitionContext>)arg2 completion:(void (^)(void))arg3;
- (void)splitViewStateMachine:(PBSplitViewStateMachine *)arg1 presentWithContext:(id <PBSplitViewStateMachineTransitionContext>)arg2 completion:(void (^)(void))arg3;
- (void)splitViewStateMachine:(PBSplitViewStateMachine *)arg1 prepareWithContext:(id <PBSplitViewStateMachineTransitionContext>)arg2 completion:(void (^)(void))arg3;
@end

