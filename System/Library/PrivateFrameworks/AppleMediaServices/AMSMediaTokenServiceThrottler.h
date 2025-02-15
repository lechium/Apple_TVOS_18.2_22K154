//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface AMSMediaTokenServiceThrottler : NSObject
{
    double _baseSleepInterval;	// 8 = 0x8
    double _maxSleepInterval;	// 16 = 0x10
    unsigned long long _attemptNumber;	// 24 = 0x18
    NSDate *_throttleDate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000040bfe3
@property(retain, nonatomic) NSDate *throttleDate; // @synthesize throttleDate=_throttleDate;
@property(nonatomic) unsigned long long attemptNumber; // @synthesize attemptNumber=_attemptNumber;
@property(nonatomic) double maxSleepInterval; // @synthesize maxSleepInterval=_maxSleepInterval;
@property(nonatomic) double baseSleepInterval; // @synthesize baseSleepInterval=_baseSleepInterval;
- (double)_calculateThrottleInterval;	// IMP=0x000000000040befc
- (void)throttle;	// IMP=0x000000000040be75
- (_Bool)shouldThrottle;	// IMP=0x000000000040be28
- (void)reset;	// IMP=0x000000000040bdf6
- (id)initWithBaseSleepInterval:(double)arg1 maxSleepInterval:(double)arg2;	// IMP=0x000000000040bd8c

@end

