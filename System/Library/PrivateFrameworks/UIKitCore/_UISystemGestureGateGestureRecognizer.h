//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

@class NSObject;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _UISystemGestureGateGestureRecognizer : UIGestureRecognizer
{
    unsigned char _systemGestureGateType;	// 8 = 0x8
    unsigned int _systemGesturesRecognitionPossible:1;	// 9 = 0x9
    unsigned int _waitingForSystemGestureStateNotification:1;	// 9 = 0x9
    double _lastTouchTime;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_delayTimeoutTimer;	// 24 = 0x18
}

+ (_Bool)_supportsDefaultPressTypes;	// IMP=0x0060000000ad0567
+ (_Bool)_supportsDefaultTouchTypes;	// IMP=0x0060000000ad055f
- (void).cxx_destruct;	// IMP=0x0000000000ad0e93
- (id)_gateGestureTypeString;	// IMP=0x0000000000ad0e63
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000000ad0e5d
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;	// IMP=0x0000000000ad0e55
- (_Bool)canPreventGestureRecognizer:(id)arg1;	// IMP=0x0000000000ad0e40
- (_Bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;	// IMP=0x0000000000ad0e1a
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000ad0e08
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000ad0a92
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000ad056f
- (void)_cancelTimeoutTimerIfNeeded;	// IMP=0x0000000000ad0525
- (void)_timeOut;	// IMP=0x0000000000ad03ca
- (void)_systemGestureStateChanged:(id)arg1;	// IMP=0x0000000000ad0238
- (void)_resetGestureRecognizer;	// IMP=0x0000000000ad0179
- (void)_notifyWindowNoLongerAwaitingSystemGestureNotification:(id)arg1;	// IMP=0x0000000000acfff8
- (void)setDelaysTouchesEnded:(_Bool)arg1;	// IMP=0x0000000000acfec1
- (void)setDelaysTouchesBegan:(_Bool)arg1;	// IMP=0x0000000000acfd8a
- (void)dealloc;	// IMP=0x0000000000acfcfe
- (id)initWithWindow:(id)arg1 type:(unsigned char)arg2;	// IMP=0x0000000000acfb81
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000acfb3f
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000acfafd

@end

