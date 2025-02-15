//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface AMDPerfContainer : NSObject
{
    _Bool _isEnabled;	// 8 = 0x8
    BOOL _level;	// 9 = 0x9
    NSMutableDictionary *_memoryUsage;	// 16 = 0x10
    NSMutableDictionary *_timeUsage;	// 24 = 0x18
    NSMutableDictionary *_samples;	// 32 = 0x20
    double _timeConversionFactor;	// 40 = 0x28
}

+ (float)getMemoryUsage:(id)arg1 logType:(id)arg2 timeDelta:(double)arg3;	// IMP=0x00600000000f36d0
- (void).cxx_destruct;	// IMP=0x00000000000f3c40
@property(nonatomic) double timeConversionFactor; // @synthesize timeConversionFactor=_timeConversionFactor;
@property(nonatomic) BOOL level; // @synthesize level=_level;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(retain, nonatomic) NSMutableDictionary *samples; // @synthesize samples=_samples;
@property(retain, nonatomic) NSMutableDictionary *timeUsage; // @synthesize timeUsage=_timeUsage;
@property(retain, nonatomic) NSMutableDictionary *memoryUsage; // @synthesize memoryUsage=_memoryUsage;
- (double)getTime;	// IMP=0x00000000000f3660
- (id)initWithSwitch:(_Bool)arg1 atLevel:(BOOL)arg2;	// IMP=0x00000000000f34e0

@end

