//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLMeanSeaLevelPressureData, CLMeanSeaLevelPressureEstimator;
@protocol CLBarometerCalibrationContextClient, CLIntersiloUniverse;

@interface CLBarometerCalibrationBiasEstimator : NSObject
{
    id <CLBarometerCalibrationContextClient> _delegate;	// 8 = 0x8
    id <CLIntersiloUniverse> _universe;	// 16 = 0x10
    void *_dataBuffers;	// 24 = 0x18
    double _weatherEstimateInMeter;	// 32 = 0x20
    double _biasTimestamp;	// 40 = 0x28
    double _previousBiasTimestamp;	// 48 = 0x30
    double _bias;	// 56 = 0x38
    double _biasPressure;	// 64 = 0x40
    double _biasUncertainty;	// 72 = 0x48
    double _biasUncertaintyTimestamp;	// 80 = 0x50
    double _biasUncertaintyAtRebase;	// 88 = 0x58
    double _pressureUncertainty;	// 96 = 0x60
    double _distanceTraveled;	// 104 = 0x68
    double _distanceSinceLastRebase;	// 112 = 0x70
    double _estimatedAbsoluteAltitudeUncertainty;	// 120 = 0x78
    double _estimatedMeanSeaLevelPressure;	// 128 = 0x80
    struct unique_ptr<CLSignificantElevationEstimator, std::default_delete<CLSignificantElevationEstimator>> _fSignificantElevationEstimatorRebase;	// 136 = 0x88
    CLMeanSeaLevelPressureEstimator *_meanSeaLevelPressureEstimator;	// 144 = 0x90
    CLMeanSeaLevelPressureData *_queriedMeanSeaLevelPressureData;	// 152 = 0x98
    unsigned int _offSetAscendedDelta;	// 160 = 0xa0
    unsigned int _offSetDescendedDelta;	// 164 = 0xa4
    double _previousCumulativeDeltaIOSTime;	// 168 = 0xa8
    struct BiasEstimatorLocation _biasLocation;	// 176 = 0xb0
    vector_77ed3c92 _loiVisitAltitudes;	// 192 = 0xc0
    _Bool _inVisitStatus;	// 216 = 0xd8
    _Bool _inOutdoorWorkoutStatus;	// 217 = 0xd9
    _Bool _companionRebase;	// 218 = 0xda
    _Bool _loiRebase;	// 219 = 0xdb
    _Bool _forceCalibrate;	// 220 = 0xdc
    _Bool _enableLoiRebase;	// 221 = 0xdd
    double _lastVisitEntryTime;	// 224 = 0xe0
    double _locationdStartTime;	// 232 = 0xe8
    double _lastForcedGpsTime;	// 240 = 0xf0
    double _uncertaintyAtVisitEntry;	// 248 = 0xf8
    double _lastRebaseTimestamp;	// 256 = 0x100
    double _timeDiffBtwVisitEntryAndLastRebase;	// 264 = 0x108
    double _visitArrivalTimestamp;	// 272 = 0x110
    float _maxBiasAgeFromRecovery;	// 280 = 0x118
    struct RebaseEvent _firstRebaseEventInVisit;	// 288 = 0x120
    double _lastTimestampSavedRecovery;	// 504 = 0x1f8
}

+ (void)getLocationSampleAltitudeAndUncertainty:(void *)arg1 andRefAltitude:(double *)arg2 andRefUncertainty:(double *)arg3;	// IMP=0x0040000000427e60
- (id).cxx_construct;	// IMP=0x0020000000434881
- (void).cxx_destruct;	// IMP=0x0010000000434821
- (_Bool)isIHAAuthorized;	// IMP=0x00100000004347d5
- (void)retrieveBiasInfo;	// IMP=0x0010000000434264
- (void)saveBiasInfo;	// IMP=0x0010000000433ef5
- (void)announceMostRecentForcedGPS:(double)arg1;	// IMP=0x0010000000433ee7
- (void)sendVisitExitAnalyticsWithDuration:(double)arg1 andRebaseEvent:(void *)arg2 andUncertaintyAtEntry:(double)arg3;	// IMP=0x0010000000433449
- (void)sendRebaseAnalyticsWithAltitudeError:(double)arg1 andUncertainty:(double)arg2 andRefUncertainty:(double)arg3 andDemAvailable:(_Bool)arg4 andWorkout:(_Bool)arg5 andReferenceSource:(int)arg6 andCorrection:(double)arg7 andDistance:(double)arg8;	// IMP=0x0010000000432465
- (void)updateVisitState:(_Bool)arg1 arrivalTime:(double)arg2 departureTime:(double)arg3;	// IMP=0x00100000004319b0
- (void)sendVisitExitWifiImprovementAnalyticsEventWithDuration:(double)arg1 uncertaintyAtVisitEntry:(double)arg2 uncertaintyAtVisitExit:(double)arg3 timeDiffBtwArrivalAndLastRebase:(double)arg4;	// IMP=0x001000000043160b
- (void)updateLoiInfo:(const void *)arg1;	// IMP=0x00100000004311fb
- (_Bool)getLastPressureSample:(double *)arg1;	// IMP=0x001000000043113b
- (void)rebaseSignificantElevationWithEndTime:(double)arg1;	// IMP=0x0010000000430f0a
- (void)updateBiasUncertaintyWithAbsSigElevation:(double)arg1 withCompanion:(_Bool)arg2;	// IMP=0x0010000000430b33
- (int)selectReferenceWithReference:(void *)arg1 withBaroElevation:(double)arg2 betweenStartTime:(double)arg3 andEndTime:(double)arg4;	// IMP=0x001000000042fc24
- (void)computeMeanSeaLevelPressureWithRebasingLocationData:(id)arg1 referenceMap:(void *)arg2 andLocationType:(int)arg3;	// IMP=0x001000000042fa93
- (void)updateHistoricalMslpArray:(id)arg1;	// IMP=0x001000000042f6d7
- (void)updateElevationBiasBetweenStartTime:(double)arg1 andEndTime:(double)arg2 andNextTrackStartTime:(double)arg3;	// IMP=0x001000000042bd65
- (_Bool)updateElevationBiasUnderDEMOrLatchedHighBetweenStartTime:(double)arg1 andEndTime:(double)arg2 andNextTrackStartTime:(double)arg3;	// IMP=0x00100000004297a9
- (void)updateBiasUncertaintyWithPressure:(double)arg1 andTime:(double)arg2 andLat:(double)arg3 andLon:(double)arg4;	// IMP=0x0010000000428dc4
- (void)updatePressureUncertaintyWithPressure:(double)arg1 andTime:(double)arg2 andLat:(double)arg3 andLon:(double)arg4;	// IMP=0x001000000042828a
- (struct BiasEstimatorLocation)centroidOfLocationVector:(const void *)arg1;	// IMP=0x0010000000427fec
- (void)cumulateReference:(void *)arg1 andRefAltitude:(double)arg2 andRefVariance:(double)arg3 andBaroElevation:(double)arg4 andType:(int)arg5;	// IMP=0x0010000000427ea0
- (double)crossEntropyOfreference:(struct ReferencePairedWithPressure)arg1;	// IMP=0x0010000000427b77
- (void)updateEstimatedWeatherWithCumulativeAscendingDelta:(unsigned int)arg1 andDescendingDelta:(unsigned int)arg2 andIosTimestamp:(double)arg3;	// IMP=0x00100000004276aa
- (double)getAbsoluteAltitudeUncertainty;	// IMP=0x0010000000427697
- (struct CLBarometerCalibrationPressureData)getClosestEntryToRefTime:(double)arg1 inPressureQueue:(deque_14119af9)arg2;	// IMP=0x0010000000427377
- (id)copyCurrentBias;	// IMP=0x0010000000427253
- (void)dealloc;	// IMP=0x00100000004271f5
- (id)initWithUniverse:(id)arg1 delegate:(id)arg2 buffers:(void *)arg3 contextManager:(id)arg4;	// IMP=0x0010000000426dff

@end

