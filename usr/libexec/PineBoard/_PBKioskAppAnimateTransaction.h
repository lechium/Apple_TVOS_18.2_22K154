//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSTransaction.h>

@class PBAppCrossFadeAnimationTransaction, UIViewPropertyAnimator;

@interface _PBKioskAppAnimateTransaction : BSTransaction
{
    UIViewPropertyAnimator *_scalePropertyAnimator;	// 8 = 0x8
    UIViewPropertyAnimator *_fadePropertyAnimator;	// 16 = 0x10
    PBAppCrossFadeAnimationTransaction *_crossFadeTransaction;	// 24 = 0x18
    CDStruct_ce5a068a _context;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000223011
@property(readonly, nonatomic) PBAppCrossFadeAnimationTransaction *crossFadeTransaction; // @synthesize crossFadeTransaction=_crossFadeTransaction;
@property(readonly, nonatomic) UIViewPropertyAnimator *fadePropertyAnimator; // @synthesize fadePropertyAnimator=_fadePropertyAnimator;
@property(readonly, nonatomic) UIViewPropertyAnimator *scalePropertyAnimator; // @synthesize scalePropertyAnimator=_scalePropertyAnimator;
@property(readonly, nonatomic) CDStruct_ce5a068a context; // @synthesize context=_context;
- (void)_startFadeAnimation;	// IMP=0x0010000000222cd7
- (void)_startScaleAnimation;	// IMP=0x0010000000222529
- (void)_startCoordinatedAnimation;	// IMP=0x00100000002221de
- (void)_startReduceMotionAnimation;	// IMP=0x001000000022216b
- (id)_animatingView;	// IMP=0x0010000000222133
- (void)_didComplete;	// IMP=0x00100000002220af
- (void)_willFailWithReason:(id)arg1;	// IMP=0x0010000000221fa4
- (void)_willInterruptWithReason:(id)arg1;	// IMP=0x0010000000221e99
- (void)_begin;	// IMP=0x0010000000221cd8
- (_Bool)_canBeInterrupted;	// IMP=0x0010000000221cd0
- (id)initWithAnimationContext:(CDStruct_ce5a068a)arg1;	// IMP=0x0010000000221c04

@end

