//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface BKAccelerometerClient
{
    float _xThreshold;	// 16 = 0x10
    float _yThreshold;	// 20 = 0x14
    float _zThreshold;	// 24 = 0x18
    _Bool _passiveOrientationEvents;	// 28 = 0x1c
    _Bool _wantsOrientationEvents;	// 29 = 0x1d
    _Bool _wantsAccelerometerEvents;	// 30 = 0x1e
    double _accelerometerUpdateInterval;	// 32 = 0x20
    double _lastAccelerometerEventTimestamp;	// 40 = 0x28
}

@property(nonatomic, getter=_lastAccelerometerEventTimestamp, setter=_setLastAccelerometerEventTimestamp:) double lastAccelerometerEventTimestamp; // @synthesize lastAccelerometerEventTimestamp=_lastAccelerometerEventTimestamp;
@property(nonatomic) double accelerometerUpdateInterval; // @synthesize accelerometerUpdateInterval=_accelerometerUpdateInterval;
@property(nonatomic) _Bool wantsAccelerometerEvents; // @synthesize wantsAccelerometerEvents=_wantsAccelerometerEvents;
@property(nonatomic) _Bool wantsOrientationEvents; // @synthesize wantsOrientationEvents=_wantsOrientationEvents;
@property(nonatomic) _Bool passiveOrientationEvents; // @synthesize passiveOrientationEvents=_passiveOrientationEvents;
@property(nonatomic) float zThreshold; // @synthesize zThreshold=_zThreshold;
@property(nonatomic) float yThreshold; // @synthesize yThreshold=_yThreshold;
@property(nonatomic) float xThreshold; // @synthesize xThreshold=_xThreshold;
- (_Bool)_shouldSendSampleEventWithTimestamp:(double)arg1 samplingInterval:(double)arg2;	// IMP=0x001000000005379e
- (_Bool)_passesThresholdForX:(float)arg1 y:(float)arg2 z:(float)arg3;	// IMP=0x001000000005371d
- (void)_queue_invalidate;	// IMP=0x00100000000536ee
- (void)handleOrientationEvent:(long long)arg1 orientationLocked:(_Bool)arg2;	// IMP=0x00100000000536e8
- (void)handleAccelerometerEventWithTimestamp:(double)arg1 x:(float)arg2 y:(float)arg3 z:(float)arg4 samplingInterval:(double)arg5;	// IMP=0x00100000000536e2
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00100000000535f8

@end

