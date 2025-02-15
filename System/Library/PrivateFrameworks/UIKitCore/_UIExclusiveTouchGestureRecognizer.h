//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

@protocol _UIExclusiveTouchGestureRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface _UIExclusiveTouchGestureRecognizer : UIGestureRecognizer
{
    _Bool _achievedMaximumAbsoluteAccumulatedMovement;	// 8 = 0x8
    struct CGPoint _maximumAbsoluteAccumulatedMovement;	// 16 = 0x10
    struct CGPoint _accumulatedMovement;	// 32 = 0x20
}

@property(readonly, nonatomic) struct CGPoint accumulatedMovement; // @synthesize accumulatedMovement=_accumulatedMovement;
@property(readonly, nonatomic) _Bool achievedMaximumAbsoluteAccumulatedMovement; // @synthesize achievedMaximumAbsoluteAccumulatedMovement=_achievedMaximumAbsoluteAccumulatedMovement;
@property(nonatomic) struct CGPoint maximumAbsoluteAccumulatedMovement; // @synthesize maximumAbsoluteAccumulatedMovement=_maximumAbsoluteAccumulatedMovement;
- (void)reset;	// IMP=0x0000000000a8fd7e
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000a8fd38
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000a8fcad
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000a8f8ff
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000a8f8b9
- (id)description;	// IMP=0x0000000000a8f790

// Remaining properties
@property(nonatomic) __weak id <_UIExclusiveTouchGestureRecognizerDelegate> delegate; // @dynamic delegate;

@end

