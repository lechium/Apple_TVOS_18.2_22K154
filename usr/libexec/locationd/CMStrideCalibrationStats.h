//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CMStrideCalibrationStats : NSObject
{
    struct CLStrideCalibrationSessionMetrics fSessionMetrics;	// 8 = 0x8
    long long fHeightCM;	// 104 = 0x68
    struct CMFixedSizeQueue<double, 2UL> fLastAWDTimestamps;	// 112 = 0x70
}

- (id).cxx_construct;	// IMP=0x0020000000670471
- (void).cxx_destruct;	// IMP=0x001000000067046b
- (void)updateUserHeight:(long long)arg1;	// IMP=0x0010000000670461
- (void)storeLastAWDTimestamps;	// IMP=0x0010000000670404
- (void)loadLastAWDTimestamps;	// IMP=0x0010000000670311
- (void)awdMotionFitnessStrideCalibration:(const struct CLStrideCalEntry *)arg1;	// IMP=0x001000000066fe58
- (void)activityLoggerLogStrideCalEntry:(const struct CLStrideCalEntry *)arg1;	// IMP=0x001000000066fc09
- (void)awdLogDistance:(double)arg1 status:(int)arg2 description:(id)arg3;	// IMP=0x001000000066f92d
- (void)setReadyForSubmission;	// IMP=0x001000000066f91b
- (void)endSessionMetrics:(double)arg1;	// IMP=0x001000000066f47e
- (void)startSessionMetricsWithTime:(double)arg1 session:(int)arg2;	// IMP=0x001000000066f424
- (id)init;	// IMP=0x001000000066f3be

@end

