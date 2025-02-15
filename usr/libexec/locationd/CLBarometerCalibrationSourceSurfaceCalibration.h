//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CLBarometerCalibrationSourceSurfaceCalibration
{
    struct unique_ptr<CLMotionNotifier::SiloDispatcher<CLWaterSubmersion_Types::CMSurfaceCalibrationSample>, std::default_delete<CLMotionNotifier::SiloDispatcher<CLWaterSubmersion_Types::CMSurfaceCalibrationSample>>> _surfaceCalibrationDispatcher;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x0020000000fd528f
- (void).cxx_destruct;	// IMP=0x0010000000fd5267
- (void)onSurfaceCalibration:(const struct CMSurfaceCalibrationSample *)arg1;	// IMP=0x0010000000fd515f
- (void)disableSource;	// IMP=0x0010000000fd510f
- (void)enableSource;	// IMP=0x0010000000fd4f42
- (void)dealloc;	// IMP=0x0010000000fd4ef3
- (id)initWithUniverse:(id)arg1 delegate:(id)arg2;	// IMP=0x0010000000fd4e24

@end

