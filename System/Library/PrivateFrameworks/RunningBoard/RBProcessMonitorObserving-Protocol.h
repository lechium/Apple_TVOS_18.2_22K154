//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RunningBoard/NSObject-Protocol.h>
#import <RunningBoard/RBStateCapturing-Protocol.h>

@class NSArray, NSSet, RBProcess;
@protocol RBProcessMonitoring;

@protocol RBProcessMonitorObserving <NSObject, RBStateCapturing>
- (void)didResolvePreventLaunchPredicates:(NSSet *)arg1;
- (void)didObserveProcessExit:(RBProcess *)arg1;
- (void)processMonitor:(id <RBProcessMonitoring>)arg1 didChangeProcessStates:(NSArray *)arg2;
@end

