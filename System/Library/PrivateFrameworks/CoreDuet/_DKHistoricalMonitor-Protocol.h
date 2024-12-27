//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDuet/_DKMonitoring-Protocol.h>

@class NSDate;

@protocol _DKHistoricalMonitor <_DKMonitoring>
@property(readonly, nonatomic) NSDate *lastUpdate;
@property(copy, nonatomic) CDUnknownBlockType shutdownHandler;
@property(copy, nonatomic) CDUnknownBlockType historicalHandler;
- (void)update;
@end

