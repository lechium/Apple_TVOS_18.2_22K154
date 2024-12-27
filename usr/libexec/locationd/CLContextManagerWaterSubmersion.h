//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLTimer, CLWaterTemperatureEstimator;

@interface CLContextManagerWaterSubmersion
{
    double _lastPressureTimestampSaved;	// 152 = 0x98
    CLWaterTemperatureEstimator *_tempEstimator;	// 160 = 0xa0
    CLTimer *_forceGPSTimer;	// 168 = 0xa8
    struct unique_ptr<CLPowerAssertion, std::default_delete<CLPowerAssertion>> _powerAssertionGPS;	// 176 = 0xb0
    struct unique_ptr<CLLocationController_Type::Client, std::default_delete<CLLocationController_Type::Client>> _locationControllerClient;	// 184 = 0xb8
    _Bool _forcingGPS;	// 192 = 0xc0
    double _calibrationTimeOffset;	// 200 = 0xc8
}

+ (double)calculateDepthFromPressure:(double)arg1 withSurfacePressure:(double)arg2;	// IMP=0x004000000075f3ff
- (id).cxx_construct;	// IMP=0x002000000075f46b
- (void).cxx_destruct;	// IMP=0x001000000075f419
- (void)onEnableEasySubmersion:(_Bool)arg1;	// IMP=0x001000000075f233
- (void)onCharger:(_Bool)arg1;	// IMP=0x001000000075f06b
- (void)retrieveCachedSubmersionState;	// IMP=0x001000000075ef6e
- (void)retrieveCachedSurfacePressure;	// IMP=0x001000000075eb27
- (void)saveCachedSurfacePressure:(shared_ptr_1d90f2b7)arg1;	// IMP=0x001000000075e8e8
- (void)setTimerForGPSOff;	// IMP=0x001000000075e8c3
- (void)onForcedLocationNotificationSub:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x001000000075e8bd
- (void)forceGPSIfSurfaceCalStale;	// IMP=0x001000000075e2b6
- (void)sendSurfacePressureToAOP:(shared_ptr_1d90f2b7)arg1;	// IMP=0x001000000075e271
- (float)calculateFilterSurfaceCal:(deque_14119af9)arg1 withSuccess:(_Bool *)arg2;	// IMP=0x001000000075cfb7
- (void)updateSurfaceCalWithSource:(unsigned long long)arg1 andPressureQueue:(deque_14119af9)arg2;	// IMP=0x001000000075c65a
- (void)sourceUpdated:(unsigned long long)arg1;	// IMP=0x001000000075bdea
- (void)feedEnclosureMaterial:(unsigned long long)arg1;	// IMP=0x001000000075bde4
- (void)setUpGPSSubscriptionForSurfaceCal;	// IMP=0x001000000075bad6
- (void)clientConnected:(id)arg1 withNotification:(unsigned long long)arg2;	// IMP=0x001000000075ba88
- (void)dealloc;	// IMP=0x001000000075b9d5
- (id)initWithUniverse:(id)arg1 delegate:(id)arg2 withBuffer:(void *)arg3 withSourceAggregator:(id)arg4;	// IMP=0x001000000075b698

@end

