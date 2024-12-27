//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDateInterval, NSMutableSet, NSString;
@protocol BLSHEngineRequestDatesOperationDelegate, BLSHOSTimerProviding, BSTimerScheduleQuerying><BSCancellable><BSInvalidatable;

__attribute__((visibility("hidden")))
@interface BLSHEngineRequestDatesOperation : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableSet *_lock_pendingEnvironments;	// 16 = 0x10
    id <BSTimerScheduleQuerying><BSCancellable><BSInvalidatable> _lock_timeoutTimer;	// 24 = 0x18
    id <BLSHEngineRequestDatesOperationDelegate> _lock_delegate;	// 32 = 0x20
    id <BLSHOSTimerProviding> _osTimerProvider;	// 40 = 0x28
    NSArray *_lock_environmentIdentifiers;	// 48 = 0x30
    unsigned int _lock_environmentCount;	// 56 = 0x38
    NSDate *_lock_beginDate;	// 64 = 0x40
    double _lock_beginTime;	// 72 = 0x48
    double _lock_shortestInterval;	// 80 = 0x50
    double _lock_averageInterval;	// 88 = 0x58
    double _lock_longestInterval;	// 96 = 0x60
    _Bool _lock_complete;	// 104 = 0x68
    _Bool _lock_begun;	// 105 = 0x69
    _Bool _lock_didReset;	// 106 = 0x6a
    _Bool _lock_timedOut;	// 107 = 0x6b
    _Bool _lock_invalidated;	// 108 = 0x6c
    NSDateInterval *_requestInterval;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000004fada
@property(readonly, nonatomic) NSDateInterval *requestInterval; // @synthesize requestInterval=_requestInterval;
- (id)telemetryDataWithEndTime:(double)arg1;	// IMP=0x000000000004f7dd
- (void)beginOperationWithIntervals:(id)arg1 shouldReset:(_Bool)arg2;	// IMP=0x000000000004ea72
@property(readonly, nonatomic) double beginTimestamp;
@property(readonly, nonatomic) NSDate *beginDate;
@property(readonly, nonatomic) _Bool didReset;
@property(readonly, nonatomic) double longestInterval;
@property(readonly, nonatomic) double averageInterval;
@property(readonly, nonatomic) double shortestInterval;
@property(readonly, nonatomic) unsigned int environmentCount;
@property(readonly, nonatomic) NSArray *environmentIdentifiers;
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
- (void)invalidate;	// IMP=0x000000000004e84d
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000004e1e4
- (id)initWithRequestInterval:(id)arg1 delegate:(id)arg2 osTimerProvider:(id)arg3;	// IMP=0x000000000004e126

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

