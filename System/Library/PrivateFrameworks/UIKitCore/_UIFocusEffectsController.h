//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, _UIDynamicValueConvergenceAnimation;

__attribute__((visibility("hidden")))
@interface _UIFocusEffectsController : NSObject
{
    _UIDynamicValueConvergenceAnimation *_rollbackAnimation;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    struct CGPoint _displayOffset;	// 24 = 0x18
    double _displayMovementAdjustment;	// 40 = 0x28
    _Bool _displayOffsetAccumulatorEnabled;	// 48 = 0x30
    struct CGPoint _currentOffset;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000958474
@property(nonatomic) _Bool displayOffsetAccumulatorEnabled; // @synthesize displayOffsetAccumulatorEnabled=_displayOffsetAccumulatorEnabled;
@property(readonly, nonatomic) struct CGPoint currentOffset; // @synthesize currentOffset=_currentOffset;
@property(readonly, nonatomic) struct CGPoint displayOffset;
- (void)_notifyObserversForMovementDirection:(struct CGVector)arg1;	// IMP=0x00000000009582e3
- (void)removeObserver:(id)arg1;	// IMP=0x00000000009582cd
- (void)addObserver:(id)arg1;	// IMP=0x0000000000958263
- (void)cancelRollbackAnimation;	// IMP=0x0000000000958225
- (void)startRollbackAnimation;	// IMP=0x0000000000958070
- (void)reset;	// IMP=0x0000000000957fdd
- (void)resetDisplayOffsetAccumulationFactor;	// IMP=0x0000000000957fc9
- (void)adjustDisplayOffsetAccumulationFactorForFocusTransfer;	// IMP=0x0000000000957fb5
- (void)updateCurrentOffset:(struct CGPoint)arg1 overrideDisplayOffset:(id)arg2;	// IMP=0x0000000000957cdc
- (void)updateCurrentOffset:(struct CGPoint)arg1;	// IMP=0x0000000000957cc8
- (id)init;	// IMP=0x0000000000957c82

@end

