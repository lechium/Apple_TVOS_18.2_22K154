//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntentResponse.h>

@class MISSING_TYPE, NSMeasurement, NSNumber, NSString;

@interface GetAcitivitySummaryIntentResponse : INIntentResponse
{
    MISSING_TYPE *code;	// 8 = 0x8
}

- (id)initWithPropertiesByName:(id)arg1;	// IMP=0x0000000000020c30
- (id)initWithBackingStore:(id)arg1;	// IMP=0x00000000000209e0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000020860
- (id)init;	// IMP=0x00000000000206f0
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000000205d0
@property(nonatomic) long long code; // @synthesize code;

// Remaining properties
@property(nonatomic, copy) NSMeasurement *activeEnergyBurned; // @dynamic activeEnergyBurned;
@property(nonatomic, copy) NSMeasurement *activeEnergyBurnedGoal; // @dynamic activeEnergyBurnedGoal;
@property(nonatomic, copy) NSString *activeEnergyBurnedUnit; // @dynamic activeEnergyBurnedUnit;
@property(nonatomic) double appleExerciseTime; // @dynamic appleExerciseTime;
@property(nonatomic) double appleExerciseTimeGoal; // @dynamic appleExerciseTimeGoal;
@property(nonatomic) double appleMoveTime; // @dynamic appleMoveTime;
@property(nonatomic) double appleMoveTimeGoal; // @dynamic appleMoveTimeGoal;
@property(nonatomic) double appleStandHours; // @dynamic appleStandHours;
@property(nonatomic) double appleStandHoursGoal; // @dynamic appleStandHoursGoal;
@property(nonatomic, retain) NSNumber *isWheelchairUser; // @dynamic isWheelchairUser;

@end

