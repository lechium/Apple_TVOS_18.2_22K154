//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSLock;

@interface GEOAPCountsAggregator : NSObject
{
    NSDate *_lastDailyAggregation;	// 8 = 0x8
    NSDate *_lastMonthlyAggregation;	// 16 = 0x10
    double _dailyAggregationInterval;	// 24 = 0x18
    NSLock *_runningLock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000093d8
- (id)apPersistence;	// IMP=0x0010000000009206
- (id)now;	// IMP=0x00100000000091ed
- (double)retrieveDailyAggregationInterval;	// IMP=0x00100000000091d6
- (id)retrieveLastMonthlyAggregationTime;	// IMP=0x00100000000091bf
- (void)saveLastMonthlyAggregationTime:(id)arg1;	// IMP=0x00100000000091a8
- (id)retrieveLastDailyAggregationTime;	// IMP=0x0010000000009191
- (void)saveLastDailyAggregationTime:(id)arg1;	// IMP=0x001000000000917a
- (void)aggregateMonthlyCountsAndReportFrom:(id)arg1 until:(id)arg2;	// IMP=0x001000000000902c
- (_Bool)aggregateDailyCountsAndReportFrom:(id)arg1 until:(id)arg2;	// IMP=0x0010000000008ec5
- (void)aggregateDailyUsageCountsAndReportFrom:(id)arg1 until:(id)arg2;	// IMP=0x001000000000728b
- (void)aggregateMonthlyUsageCountsAndReportFrom:(id)arg1 until:(id)arg2;	// IMP=0x00100000000063bf
- (void)reportDailySettingsFrom:(id)arg1 until:(id)arg2;	// IMP=0x0010000000005e6a
- (void)startMonthlyAggregationFromTime:(id)arg1;	// IMP=0x0010000000005b3a
- (void)startDailyAggregationFromTime:(id)arg1;	// IMP=0x0010000000005828
- (void)setup;	// IMP=0x0010000000005459
- (id)init;	// IMP=0x001000000000540d

@end

