//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingInputSpeedModel : NSObject
{
    NSMutableArray *_recordedIntervals;	// 8 = 0x8
    NSMutableArray *_recordedSpeeds;	// 16 = 0x10
    double _lastStrokeTimeStamp;	// 24 = 0x18
    double _lastTouchTimeStamp;	// 32 = 0x20
    struct CGPoint _lastTouchLocation;	// 40 = 0x28
    NSMutableArray *_pointsCurrentStroke;	// 56 = 0x38
    _Bool _duringStroke;	// 64 = 0x40
    _Bool _autoConfirmationEnabled;	// 65 = 0x41
    double _minTimeout;	// 72 = 0x48
    double _maxTimeout;	// 80 = 0x50
    struct CGRect _handwritingFrame;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000c99947
@property(nonatomic) struct CGRect handwritingFrame; // @synthesize handwritingFrame=_handwritingFrame;
@property(readonly, nonatomic) double maxTimeout; // @synthesize maxTimeout=_maxTimeout;
@property(readonly, nonatomic) double minTimeout; // @synthesize minTimeout=_minTimeout;
@property(readonly, nonatomic) _Bool autoConfirmationEnabled; // @synthesize autoConfirmationEnabled=_autoConfirmationEnabled;
- (void)updatePreferences;	// IMP=0x0000000000c99714
- (double)timeoutForNextPage;	// IMP=0x0000000000c9955a
- (double)smoothValueFromArray:(id)arg1;	// IMP=0x0000000000c9941c
- (double)speedForCurrentStroke;	// IMP=0x0000000000c990e1
- (void)endCharacter;	// IMP=0x0000000000c98fc7
- (void)endStroke;	// IMP=0x0000000000c98f9e
- (void)addPoint:(struct CGPoint)arg1 timestamp:(double)arg2;	// IMP=0x0000000000c98f0a
- (void)beginStroke;	// IMP=0x0000000000c98e08
- (id)init;	// IMP=0x0000000000c98d41

@end

