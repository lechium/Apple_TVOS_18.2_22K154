//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLBarometerCalibrationSourceAggregator, CLBarometerCalibrationTrack;
@protocol CLBarometerCalibrationContextClient, CLIntersiloUniverse;

@interface CLBarometerCalibrationContextManager : NSObject
{
    id <CLIntersiloUniverse> _universe;	// 8 = 0x8
    id <CLBarometerCalibrationContextClient> _delegate;	// 16 = 0x10
    void *fDataBuffers;	// 24 = 0x18
    CLBarometerCalibrationSourceAggregator *;	// 32 = 0x20
    CLBarometerCalibrationTrack *_fTrack;	// 40 = 0x28
}

@property(retain, nonatomic) CLBarometerCalibrationTrack *fTrack; // @synthesize fTrack=_fTrack;
- (void)feedEnclosureMaterial:(unsigned long long)arg1;	// IMP=0x0010000000b625d9
- (void)cleanup;	// IMP=0x0010000000b625d3
-     // Error parsing type: v336@0:8(NotificationData={MediatedMotionActivity=d{CLMotionActivity=iiiiiidBfdBidi{FsmTransitionData=CCCS} dii{?=b1b1b1b1b1}iidQi}i{CLNatalieFeatures=fffffffiB}qqqBB[16C]}{MotionOverride=i{CLMotionActivity=iiiiiidBfdBidi{FsmTransitionData=CCCS} dii{?=b1b1b1b1b1}iidQi}q{WorkoutSettings=[16C][16C][16C]qq(WorkoutAttrib={SwimAttrib=qd}Q){FitnessPlusInfo=B[64c]q}Q}}{WorkoutEvent=ddqd{CLWorkoutSessionDetails=idqQ}{WorkoutSettings=[16C][16C][16C]qq(WorkoutAttrib={SwimAttrib=qd}Q){FitnessPlusInfo=B[64c]q}Q}}{IndoorOutdoorUpdate=dqq}{ActivityEvent=dqqqqdd}{WorkoutClassifierResult=dqf{Probabilities=ffffffff}})16, name: onMotionStateMediatorData:
- (void)notificationAcknowledged:(unsigned long long)arg1;	// IMP=0x0010000000b625c7
- (void)onCharger:(_Bool)arg1;	// IMP=0x0010000000b625c1
- (void)stepCountElevationNotification:(union NotificationData)arg1;	// IMP=0x0010000000b625bb
- (void)wetStateUpdated:(unsigned long long)arg1;	// IMP=0x0010000000b625b5
- (void)sourceUpdated:(unsigned long long)arg1;	// IMP=0x0010000000b625af
- (void)clientConnected:(id)arg1 withNotification:(unsigned long long)arg2;	// IMP=0x0010000000b625a9
- (void)dealloc;	// IMP=0x0010000000b6256b
- (id)initWithUniverse:(id)arg1 delegate:(id)arg2 withBuffer:(void *)arg3 withSourceAggregator:(id)arg4;	// IMP=0x0010000000b62449

@end

