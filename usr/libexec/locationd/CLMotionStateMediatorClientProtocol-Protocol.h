//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLNotifierServiceClientProtocol-Protocol.h"

@protocol CLMotionStateMediatorClientProtocol <CLNotifierServiceClientProtocol>

@optional
- (void)onWorkoutSessionUpdate:(struct WorkoutEvent)arg1 withOverview:(struct WorkoutSessionOverview (^)(void))arg2 andPriors:(struct WorkoutSessionPriors (^)(void))arg3;
- (_Bool)syncget_prepareSessionEndForSessionType:(long long)arg1 atEndTime:(double)arg2;
@end

