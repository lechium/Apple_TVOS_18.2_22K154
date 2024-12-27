//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CMPedometerTableStepCadenceToStrideLength
{
    float _userHeight;	// 136 = 0x88
    double _strideLengthRun;	// 144 = 0x90
    struct CLStrideLengthStepCadencePair _strideLengthStepCadencePairWalk;	// 152 = 0x98
}

+ (id)sharedInstance;	// IMP=0x0040000000f2dc0d
- (void)updateStrideLengthStepCadenceWalk;	// IMP=0x0020000000f2ed6a
- (void)updateStrideLengthRun;	// IMP=0x0010000000f2e9e4
- (void)setUserHeight:(float)arg1;	// IMP=0x0010000000f2e830
- (_Bool)isStepCadenceValid:(double)arg1;	// IMP=0x0010000000f2e81e
- (double)strideLengthForStepCadence:(double)arg1;	// IMP=0x0010000000f2e7d1
- (CDStruct_2c43369c)binIntervalForStepCadence:(double)arg1;	// IMP=0x0010000000f2e7bf
- (_Bool)isRunCalibrationAvailable;	// IMP=0x0010000000f2e7ad
- (_Bool)isWalkCalibrationAvailable;	// IMP=0x0010000000f2e79b
- (_Bool)isCalibrationAvailableForStepCadence:(double)arg1;	// IMP=0x0010000000f2e75d
- (void)updateBinsWithTrack:(id)arg1;	// IMP=0x0010000000f2e2ef
- (void)binsDidChange;	// IMP=0x0010000000f2e25a
- (void)logBins;	// IMP=0x0010000000f2ddc0
- (id)initWithTestMode:(_Bool)arg1;	// IMP=0x0010000000f2dc64
- (_Bool)isBinaryLogging;	// IMP=0x0010000000f2db9f

@end

