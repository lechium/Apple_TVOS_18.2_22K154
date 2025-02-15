//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;
@protocol CLIntersiloUniverse, CLWorkoutRecordingDelegate;

@interface CLWMAccelerometer
{
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>> _accelerometerDispatcher;	// 8 = 0x8
    shared_ptr_da0ccc6f _writer;	// 16 = 0x10
    id <CLWorkoutRecordingDelegate> _delegate;	// 32 = 0x20
    id <CLIntersiloUniverse> _universe;	// 40 = 0x28
    double _accelIntervalSeconds;	// 48 = 0x30
    unsigned int _fWorkoutRecorderAccelSampleCount;	// 56 = 0x38
    unsigned int _kWorkoutRecorderWaitNumAccelSamples;	// 60 = 0x3c
    NSMutableDictionary *_metadata;	// 64 = 0x40
    int _sampleCount;	// 72 = 0x48
}

- (id).cxx_construct;	// IMP=0x00200000012305ab
- (void).cxx_destruct;	// IMP=0x0010000001230568
- (int)getSampleCount;	// IMP=0x0010000001230558
- (void)setWriter:(shared_ptr_da0ccc6f)arg1;	// IMP=0x0010000001230544
- (void)onAccelerometerData:(const struct Sample *)arg1;	// IMP=0x00100000012302ff
- (id)metadata;	// IMP=0x00100000012302da
- (void)dealloc;	// IMP=0x001000000123028c
- (void)teardownListeners;	// IMP=0x0010000001230237
- (void)setupListener;	// IMP=0x001000000122fef9
- (id)initWithDelegate:(id)arg1 universeCopy:(id)arg2 settings:(struct SettingStructure)arg3;	// IMP=0x001000000122fe42

@end

