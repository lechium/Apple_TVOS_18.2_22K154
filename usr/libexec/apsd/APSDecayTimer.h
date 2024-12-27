//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, PCSimpleTimer;
@protocol APSDecayTimerDelegate;

@interface APSDecayTimer : NSObject
{
    unsigned long long _maxCost;	// 8 = 0x8
    unsigned long long _hourlyCostThreshold;	// 16 = 0x10
    unsigned long long _currentCost;	// 24 = 0x18
    NSDate *_lastCostDecayAdjustment;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    PCSimpleTimer *_decayTimer;	// 48 = 0x30
    id <APSDecayTimerDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000c17af
@property(readonly, nonatomic) unsigned long long currentCost; // @synthesize currentCost=_currentCost;
- (void)_clearDecayTimer;	// IMP=0x00100000000c1773
- (void)_decayTimerFired;	// IMP=0x00100000000c16b5
- (void)_decayCost;	// IMP=0x00100000000c142e
- (void)_handleSignificantTimeChange;	// IMP=0x00100000000c1384
- (void)forceTimerFire;	// IMP=0x00100000000c1372
- (void)addCost:(unsigned long long)arg1;	// IMP=0x00100000000c1340
- (void)performDecay;	// IMP=0x00100000000c132e
- (void)setDelegate:(id)arg1;	// IMP=0x00100000000c131d
- (void)dealloc;	// IMP=0x00100000000c12c6
- (id)initWithHourlyCostThreshold:(unsigned long long)arg1 costMaximum:(unsigned long long)arg2 identifier:(id)arg3;	// IMP=0x00100000000c1160

@end

