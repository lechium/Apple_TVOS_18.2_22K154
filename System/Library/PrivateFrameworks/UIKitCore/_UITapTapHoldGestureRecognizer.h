//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITapGestureRecognizer.h"

__attribute__((visibility("hidden")))
@interface _UITapTapHoldGestureRecognizer : UITapGestureRecognizer
{
    _Bool _isWaitingForHoldToAction;	// 8 = 0x8
    _Bool _isInHoldToAction;	// 9 = 0x9
    _Bool _isWaitingForTooSlowForDoubleTap;	// 10 = 0xa
    int _currentNumberOfPresses;	// 12 = 0xc
    long long _gestureType;	// 16 = 0x10
    double _startTime;	// 24 = 0x18
    double _pressEventBeginTimestamp;	// 32 = 0x20
}

@property(nonatomic) _Bool isWaitingForTooSlowForDoubleTap; // @synthesize isWaitingForTooSlowForDoubleTap=_isWaitingForTooSlowForDoubleTap;
@property(nonatomic) _Bool isInHoldToAction; // @synthesize isInHoldToAction=_isInHoldToAction;
@property(nonatomic) _Bool isWaitingForHoldToAction; // @synthesize isWaitingForHoldToAction=_isWaitingForHoldToAction;
@property(nonatomic) double pressEventBeginTimestamp; // @synthesize pressEventBeginTimestamp=_pressEventBeginTimestamp;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) int currentNumberOfPresses; // @synthesize currentNumberOfPresses=_currentNumberOfPresses;
@property(nonatomic) long long gestureType; // @synthesize gestureType=_gestureType;
- (_Bool)_shouldFailInResponseToPresses:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d6aff3
- (void)cancelPendingHoldToAction;	// IMP=0x0000000000d6afb0
- (void)scheduleHoldToAction;	// IMP=0x0000000000d6af77
- (void)holdToAction:(id)arg1;	// IMP=0x0000000000d6aef2
- (void)cancelPendingTooSlowForDoubleTap;	// IMP=0x0000000000d6aeaf
- (void)scheduleTooSlowForDoubleTap;	// IMP=0x0000000000d6ae81
- (void)tooSlowForDoubleTap:(id)arg1;	// IMP=0x0000000000d6ae3e
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d6ad30
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d6ac8e
- (void)reset;	// IMP=0x0000000000d6abfc
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000d6abcd

@end

