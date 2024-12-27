//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMFTimer;

@protocol HMDTimerProvider <NSObject>
- (HMFTimer *)timerWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;

@optional
- (HMFTimer *)backoffTimerWithMinimumTimeInterval:(double)arg1 maximumTimeInterval:(double)arg2 exponentialFactor:(long long)arg3 options:(unsigned long long)arg4;
@end

