//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIKBRTDecayingObject : NSObject
{
    NSMutableArray *_resetBlocks;	// 8 = 0x8
    _Bool _isDecaying;	// 16 = 0x10
    _Bool _isHolding;	// 17 = 0x11
    double _lastUpdate;	// 24 = 0x18
    double _timeoutDuration;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000eeacbd
@property(readonly, nonatomic) _Bool isHolding; // @synthesize isHolding=_isHolding;
@property(readonly, nonatomic) _Bool isDecaying; // @synthesize isDecaying=_isDecaying;
@property(nonatomic) double timeoutDuration; // @synthesize timeoutDuration=_timeoutDuration;
@property(readonly, nonatomic) double lastUpdate; // @synthesize lastUpdate=_lastUpdate;
- (void)onResetDo:(CDUnknownBlockType)arg1;	// IMP=0x0000000000eeabbb
- (void)resetActiveDecayTo:(double)arg1;	// IMP=0x0000000000eeab9b
- (void)startOrUpdateDecay;	// IMP=0x0000000000eeab6f
- (void)updateDecay;	// IMP=0x0000000000eeab2a
- (void)reset;	// IMP=0x0000000000eeaaf4
- (void)resetDecayTo:(double)arg1;	// IMP=0x0000000000eeaa9d
@property(readonly, nonatomic) _Bool isActive;
- (void)startDecaying;	// IMP=0x0000000000eeaa5a
- (id)initWithTimeoutDuration:(double)arg1;	// IMP=0x0000000000eeaa17

@end

