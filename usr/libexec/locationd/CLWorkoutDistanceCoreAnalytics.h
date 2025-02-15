//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLWorkoutDistanceCoreAnalytics : NSObject
{
    int _totalStepCount;	// 8 = 0x8
    double _beginTime;	// 16 = 0x10
    double _endTime;	// 24 = 0x18
    double _totalDistanceStepCount;	// 32 = 0x20
    double _totalDistanceStepCountMobility;	// 40 = 0x28
    double _totalDistanceOdometer;	// 48 = 0x30
    double _totalDistanceFused;	// 56 = 0x38
    double _percentageRemoteGPSSource;	// 64 = 0x40
    double _meanPaceStepCount;	// 72 = 0x48
    double _meanPaceFinalFused;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000007f6c5c
@property(readonly, nonatomic) int totalStepCount; // @synthesize totalStepCount=_totalStepCount;
@property(readonly, nonatomic) double meanPaceFinalFused; // @synthesize meanPaceFinalFused=_meanPaceFinalFused;
@property(readonly, nonatomic) double meanPaceStepCount; // @synthesize meanPaceStepCount=_meanPaceStepCount;
@property(readonly, nonatomic) double percentageRemoteGPSSource; // @synthesize percentageRemoteGPSSource=_percentageRemoteGPSSource;
@property(readonly, nonatomic) double totalDistanceFused; // @synthesize totalDistanceFused=_totalDistanceFused;
@property(readonly, nonatomic) double totalDistanceOdometer; // @synthesize totalDistanceOdometer=_totalDistanceOdometer;
@property(readonly, nonatomic) double totalDistanceStepCountMobility; // @synthesize totalDistanceStepCountMobility=_totalDistanceStepCountMobility;
@property(readonly, nonatomic) double totalDistanceStepCount; // @synthesize totalDistanceStepCount=_totalDistanceStepCount;
@property(readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
- (id)description;	// IMP=0x00100000007f6ffa
- (id)initWithWorkoutDistanceMeasures:(const struct WorkoutDistanceMeasures *)arg1;	// IMP=0x00100000007f6f62
- (id)initWithBeginTime:(double)arg1 endTime:(double)arg2 totalDistanceStepCount:(double)arg3 totalDistanceStepCountMobility:(double)arg4 totalDistanceOdometer:(double)arg5 totalDistanceFused:(double)arg6 percentageRemoteGPSSource:(double)arg7 meanPaceStepCount:(double)arg8 meanPaceFinalFused:(double)arg9 totalStepCount:(int)arg10;	// IMP=0x00100000007f6ea5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000007f6d9f
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000007f6c64

@end

