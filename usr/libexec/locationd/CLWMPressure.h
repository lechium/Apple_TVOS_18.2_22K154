//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CLIntersiloUniverse, CLWorkoutRecordingDelegate;

@interface CLWMPressure
{
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>> _pressureDispatcher;	// 8 = 0x8
    shared_ptr_da0ccc6f _writer;	// 16 = 0x10
    id <CLWorkoutRecordingDelegate> _delegate;	// 32 = 0x20
    id <CLIntersiloUniverse> _universe;	// 40 = 0x28
    float _privacyPressureOffset;	// 48 = 0x30
    double _kPressureUpdateInterval;	// 56 = 0x38
    _Bool _disablePressure;	// 64 = 0x40
    int _sampleCount;	// 68 = 0x44
}

- (id).cxx_construct;	// IMP=0x002000000123a3f4
- (void).cxx_destruct;	// IMP=0x001000000123a3b1
- (int)getSampleCount;	// IMP=0x001000000123a3a1
- (void)setWriter:(shared_ptr_da0ccc6f)arg1;	// IMP=0x001000000123a38d
- (void)onPressureData:(const Sample_b71dd899 *)arg1;	// IMP=0x001000000123a266
- (void)teardownListeners;	// IMP=0x001000000123a08d
- (void)setupListener;	// IMP=0x0010000001239fb3
- (id)initWithDelegate:(id)arg1 universeCopy:(id)arg2 settings:(struct SettingStructure)arg3;	// IMP=0x0010000001239ef0

@end

