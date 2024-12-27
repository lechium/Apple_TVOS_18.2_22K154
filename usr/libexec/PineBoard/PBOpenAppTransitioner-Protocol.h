//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class PBOpenAppTransition;
@protocol PBOpenAppTransitionerObserver;

@protocol PBOpenAppTransitioner <NSObject>
@property(readonly, nonatomic) PBOpenAppTransition *activeTransition;
@property(readonly, nonatomic, getter=isTransitioning) _Bool transitioning;
- (void)removeObserver:(id <PBOpenAppTransitionerObserver>)arg1;
- (void)handleFocusedAppRequestDeactivationFromFailure:(_Bool)arg1;
- (void)addOpenAppTransition:(PBOpenAppTransition *)arg1;
@end

