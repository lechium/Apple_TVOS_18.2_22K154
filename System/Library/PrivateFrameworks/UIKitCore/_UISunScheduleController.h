//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOAlmanac, NSMapTable, NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface _UISunScheduleController : NSObject
{
    NSMapTable *_observers;	// 8 = 0x8
    GEOAlmanac *_almanac;	// 16 = 0x10
    _Bool _hasTimeZoneLocation;	// 24 = 0x18
    struct {
        double latitude;
        double longitude;
    } _timeZoneLocation;	// 32 = 0x20
    _Bool _inScheduleTime;	// 48 = 0x30
    NSTimer *_nextEventTimer;	// 56 = 0x38
    double _sunsetAbsolute;	// 64 = 0x40
    double _sunriseAbsolute;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000154f62f
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000154f58b
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000154f53b
- (id)succinctDescriptionBuilder;	// IMP=0x000000000154f4ca
- (id)succinctDescription;	// IMP=0x000000000154f47a
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (void)_updateSunriseSunsetTimesRelativeTo:(double)arg1;	// IMP=0x000000000154f05b
- (void)_updateGeoCity;	// IMP=0x000000000154eab4
- (void)_timeZoneChange;	// IMP=0x000000000154ea2d
- (void)_significantTimeChange;	// IMP=0x000000000154e9b7
- (void)_setNextEventTimerToAbsoluteTime:(double)arg1;	// IMP=0x000000000154e6d5
- (void)_invalidateNextEventTimer;	// IMP=0x000000000154e697
- (void)_updateStatusWithAbsoluteTime:(double)arg1;	// IMP=0x000000000154e2b4
- (void)_updateStatus;	// IMP=0x000000000154e290
- (void)_updateInScheduleTime:(_Bool)arg1;	// IMP=0x000000000154e1ce
- (void)_notifyChange;	// IMP=0x000000000154e04a
- (id)nextTransition:(_Bool)arg1;	// IMP=0x000000000154e011
- (void)forceUpdate;	// IMP=0x000000000154df9b
@property(readonly, nonatomic, getter=isInScheduleTime) _Bool inScheduleTime;
- (void)removeObserver:(id)arg1;	// IMP=0x000000000154df4f
- (void)addObserver:(id)arg1 changeHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000154de8c
- (void)dealloc;	// IMP=0x000000000154de03
- (id)init;	// IMP=0x000000000154dc50

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

