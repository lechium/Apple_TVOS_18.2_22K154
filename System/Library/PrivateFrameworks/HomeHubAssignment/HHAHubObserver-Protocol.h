//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HHAHub, HHAHubMonitor, NSSet;

@protocol HHAHubObserver
- (void)monitor:(HHAHubMonitor *)arg1 didObserveHubsLost:(NSSet *)arg2;
- (void)monitor:(HHAHubMonitor *)arg1 didObserveActiveHubUpdate:(HHAHub *)arg2;
@end

