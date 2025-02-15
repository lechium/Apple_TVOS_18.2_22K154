//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLMetricEventBins, MISSING_TYPE, NSMutableArray, NSString;

@interface CLContextScanMetrics : NSObject
{
    CLMetricEventBins *_scanbins;	// 8 = 0x8
    int _eventsInited;	// 16 = 0x10
    double _lastScan;	// 24 = 0x18
    _Bool _isAssociated;	// 32 = 0x20
    _Bool _isDriving;	// 33 = 0x21
    _Bool _inVisit;	// 34 = 0x22
    MISSING_TYPE *_isWalking;	// 35 = 0x23
    int _famIndex;	// 36 = 0x24
    NSString *_modeString;	// 40 = 0x28
    NSMutableArray *_events;	// 48 = 0x30
    double _eventStart;	// 56 = 0x38
    int _lastEventHour;	// 64 = 0x40
}

- (id)getMetricEventBins;	// IMP=0x0020000000942ecc
- (int)getFamiliarityEventFromIndex:(int)arg1;	// IMP=0x0010000000942ea0
- (void)processEventsForTime:(double)arg1;	// IMP=0x00100000009426bd
- (void)addEvent:(int)arg1 atTime:(double)arg2;	// IMP=0x001000000094265d
- (void)initializeModeTransitions:(double)arg1;	// IMP=0x0010000000942558
- (void)setModeString;	// IMP=0x0010000000942468
- (int)getModeValueForEvent:(int)arg1;	// IMP=0x00100000009423f9
- (void)hearbeatEventAtTime:(double)arg1;	// IMP=0x00100000009422ef
- (void)visitEvent:(id)arg1 withFamiliarityIndex:(int)arg2;	// IMP=0x00100000009420ad
-     // Error parsing type: v152@0:8{CLMotionActivity=iiiiiidBfdBidi{FsmTransitionData=CCCS} dii{?=b1b1b1b1b1}iidQi}16, name: motionEvent:
- (void)associationEvent:(_Bool)arg1 atTime:(double)arg2;	// IMP=0x0010000000941d9e
- (void)scanEvents:(id)arg1 atTime:(double)arg2;	// IMP=0x0010000000941c98
- (void)dealloc;	// IMP=0x0010000000941c3d
- (id)initWithStartTime:(double)arg1;	// IMP=0x0010000000941a57

@end

