//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;
@protocol CLIntersiloUniverse, CLWorkoutRecordingDelegate;

@interface CLWMMotionState
{
    struct unique_ptr<CLMotionStateMediator_Type::Client, std::default_delete<CLMotionStateMediator_Type::Client>> _motionStateMediatorClient;	// 8 = 0x8
    shared_ptr_da0ccc6f _writer;	// 16 = 0x10
    id <CLWorkoutRecordingDelegate> _delegate;	// 32 = 0x20
    id <CLIntersiloUniverse> _universe;	// 40 = 0x28
    NSMutableDictionary *_metadata;	// 48 = 0x30
    struct unordered_set<CMWorkoutType, std::hash<CMWorkoutType>, std::equal_to<CMWorkoutType>, std::allocator<CMWorkoutType>> _activitySet;	// 56 = 0x38
    int _sampleCount;	// 96 = 0x60
    _Bool _disableLatLong;	// 100 = 0x64
    struct CLDaemonLocation _startLocation;	// 104 = 0x68
    CDUnknownBlockType _getstartLocation;	// 280 = 0x118
    CDUnknownBlockType _recordWorkoutSessionEvent;	// 288 = 0x120
    CDUnknownBlockType _blockUpdateIsCycling;	// 296 = 0x128
}

- (id).cxx_construct;	// IMP=0x002000000122df99
- (void).cxx_destruct;	// IMP=0x001000000122df13
- (void)releaseBlocks;	// IMP=0x001000000122ded4
- (void)setWorkoutCount:(int)arg1;	// IMP=0x001000000122de8d
- (int)getSampleCount;	// IMP=0x001000000122de7d
- (void)setWriter:(shared_ptr_da0ccc6f)arg1;	// IMP=0x001000000122de69
- (void)recordWorkoutSessionEvent:(const struct WorkoutEvent *)arg1;	// IMP=0x001000000122de33
-     // Error parsing type: v32@0:8r^i16r^(NotificationData={MediatedMotionActivity=d{CLMotionActivity=iiiiiidBfdBidi{FsmTransitionData=CCCS} dii{?=b1b1b1b1b1}iidQi}i{CLNatalieFeatures=fffffffiB}qqqBB[16C]}{MotionOverride=i{CLMotionActivity=iiiiiidBfdBidi{FsmTransitionData=CCCS} dii{?=b1b1b1b1b1}iidQi}q{WorkoutSettings=[16C][16C][16C]qq(WorkoutAttrib={SwimAttrib=qd}Q){FitnessPlusInfo=B[64c]q}Q}}{WorkoutEvent=ddqd{CLWorkoutSessionDetails=idqQ}{WorkoutSettings=[16C][16C][16C]qq(WorkoutAttrib={SwimAttrib=qd}Q){FitnessPlusInfo=B[64c]q}Q}}{IndoorOutdoorUpdate=dqq}{ActivityEvent=dqqqqdd}{WorkoutClassifierResult=dqf{Probabilities=ffffffff}})24, name: onMotionStateMediatorNotification:data:
- (void)writeWorkoutEvent:(const struct WorkoutEvent *)arg1;	// IMP=0x001000000122d5b6
- (struct CLDaemonLocation)getStartLocation;	// IMP=0x001000000122d53a
- (void)updateCyclingWorkout:(_Bool)arg1;	// IMP=0x001000000122d51a
- (void)setBlockUpdateIsCycling:(CDUnknownBlockType)arg1;	// IMP=0x001000000122d4de
- (void)setGetStartLocation:(CDUnknownBlockType)arg1;	// IMP=0x001000000122d4a2
- (id)metadata;	// IMP=0x001000000122d47d
- (void)dealloc;	// IMP=0x001000000122d2c3
- (void)teardownListeners;	// IMP=0x001000000122d286
- (void)setupListener;	// IMP=0x001000000122d1ab
- (id)initWithDelegate:(id)arg1 universeCopy:(id)arg2 settings:(struct SettingStructure)arg3;	// IMP=0x001000000122d0b3
- (CDUnknownBlockType)getRecordEventBlock;	// IMP=0x001000000122d0a2

@end

