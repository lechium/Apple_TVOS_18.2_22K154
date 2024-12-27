//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol HMDEWSLogging;

__attribute__((visibility("hidden")))
@interface HMDCounterRateLoggingTrigger : NSObject
{
    _Bool _uploadImmediately;	// 8 = 0x8
    long long _windowSize;	// 16 = 0x10
    long long _windowThreshold;	// 24 = 0x18
    NSString *_counterName;	// 32 = 0x20
    CDUnknownBlockType _timeSourceBlock;	// 40 = 0x28
    id <HMDEWSLogging> _ewsLogger;	// 48 = 0x30
    long long _intervalSize;	// 56 = 0x38
    unsigned long long *_intervalCounts;	// 64 = 0x40
    unsigned long long _windowCount;	// 72 = 0x48
    unsigned long long _maxWindowCount;	// 80 = 0x50
    unsigned long long _lastUpdatedInterval;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000003ec510
@property(nonatomic) unsigned long long lastUpdatedInterval; // @synthesize lastUpdatedInterval=_lastUpdatedInterval;
@property(nonatomic) unsigned long long maxWindowCount; // @synthesize maxWindowCount=_maxWindowCount;
@property(nonatomic) unsigned long long windowCount; // @synthesize windowCount=_windowCount;
@property(nonatomic) unsigned long long *intervalCounts; // @synthesize intervalCounts=_intervalCounts;
@property(readonly, nonatomic) long long intervalSize; // @synthesize intervalSize=_intervalSize;
@property(readonly, nonatomic) id <HMDEWSLogging> ewsLogger; // @synthesize ewsLogger=_ewsLogger;
@property(readonly, nonatomic) CDUnknownBlockType timeSourceBlock; // @synthesize timeSourceBlock=_timeSourceBlock;
@property(readonly, nonatomic) _Bool uploadImmediately; // @synthesize uploadImmediately=_uploadImmediately;
@property(readonly, nonatomic) NSString *counterName; // @synthesize counterName=_counterName;
@property(readonly, nonatomic) long long windowThreshold; // @synthesize windowThreshold=_windowThreshold;
@property(readonly, nonatomic) long long windowSize; // @synthesize windowSize=_windowSize;
- (void)logRateTrigger:(id)arg1 triggerValue:(unsigned long long)arg2;	// IMP=0x00000000003ec163
- (void)updatedCounter:(id)arg1 fromOldValue:(long long)arg2 toNewValue:(long long)arg3;	// IMP=0x00000000003ebdc8
- (void)dealloc;	// IMP=0x00000000003ebd8e
- (id)initWithThreshold:(long long)arg1 windowSize:(long long)arg2 counterName:(id)arg3 uploadImmediately:(_Bool)arg4 ewsLogger:(id)arg5 timeSourceBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000003ebc76
- (id)initWithThreshold:(long long)arg1 windowSize:(long long)arg2 counterName:(id)arg3 uploadImmediately:(_Bool)arg4 ewsLogger:(id)arg5;	// IMP=0x00000000003ebc54
- (id)initWithThreshold:(long long)arg1 windowSize:(long long)arg2 counterName:(id)arg3 ewsLogger:(id)arg4;	// IMP=0x00000000003ebc32

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

