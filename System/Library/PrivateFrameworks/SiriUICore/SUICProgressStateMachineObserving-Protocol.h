//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUICore/NSObject-Protocol.h>

@class SUICProgressStateMachine;

@protocol SUICProgressStateMachineObserving <NSObject>
- (void)progressStateMachine:(SUICProgressStateMachine *)arg1 ignoredEvent:(unsigned long long)arg2;
- (void)progressStateMachine:(SUICProgressStateMachine *)arg1 didTransitionToState:(unsigned long long)arg2 fromState:(unsigned long long)arg3 forEvent:(unsigned long long)arg4;
@end

