//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/NSObject-Protocol.h>

@class HKLiveWorkoutBuilder, HKWorkoutActivity, NSSet;

@protocol HKLiveWorkoutBuilderDelegate <NSObject>
- (void)workoutBuilderDidCollectEvent:(HKLiveWorkoutBuilder *)arg1;
- (void)workoutBuilder:(HKLiveWorkoutBuilder *)arg1 didCollectDataOfTypes:(NSSet *)arg2;

@optional
- (void)workoutBuilder:(HKLiveWorkoutBuilder *)arg1 didEndActivity:(HKWorkoutActivity *)arg2;
- (void)workoutBuilder:(HKLiveWorkoutBuilder *)arg1 didBeginActivity:(HKWorkoutActivity *)arg2;
@end

