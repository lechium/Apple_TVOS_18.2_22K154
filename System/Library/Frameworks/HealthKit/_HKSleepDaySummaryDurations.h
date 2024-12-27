//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _HKSleepDaySummaryDurations : NSObject
{
    double _inBedDuration;	// 8 = 0x8
    double _sleepDuration;	// 16 = 0x10
    double _unspecifiedSleepDuration;	// 24 = 0x18
    double _coreSleepDuration;	// 32 = 0x20
    double _deepSleepDuration;	// 40 = 0x28
    double _remSleepDuration;	// 48 = 0x30
    double _awakeDuration;	// 56 = 0x38
}

+ (id)durationsFromSleepPeriod:(id)arg1 dateInterval:(id)arg2;	// IMP=0x006000000010d9aa
@property(readonly, nonatomic) double awakeDuration; // @synthesize awakeDuration=_awakeDuration;
@property(readonly, nonatomic) double remSleepDuration; // @synthesize remSleepDuration=_remSleepDuration;
@property(readonly, nonatomic) double deepSleepDuration; // @synthesize deepSleepDuration=_deepSleepDuration;
@property(readonly, nonatomic) double coreSleepDuration; // @synthesize coreSleepDuration=_coreSleepDuration;
@property(readonly, nonatomic) double unspecifiedSleepDuration; // @synthesize unspecifiedSleepDuration=_unspecifiedSleepDuration;
@property(readonly, nonatomic) double sleepDuration; // @synthesize sleepDuration=_sleepDuration;
@property(readonly, nonatomic) double inBedDuration; // @synthesize inBedDuration=_inBedDuration;
@property(readonly, nonatomic) double maxDuration;
- (id)durationsByAdding:(id)arg1;	// IMP=0x000000000010dae0
- (id)initWithInBedDuration:(double)arg1 sleepDuration:(double)arg2 unspecifiedSleepDuration:(double)arg3 coreSleepDuration:(double)arg4 deepSleepDuration:(double)arg5 remSleepDuration:(double)arg6 awakeDuration:(double)arg7;	// IMP=0x000000000010d90d

@end

