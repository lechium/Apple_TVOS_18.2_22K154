//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

@class UIDelayedAction;

__attribute__((visibility("hidden")))
@interface _UITouchDownGestureRecognizer : UIGestureRecognizer
{
    struct CGPoint _locationInView;	// 8 = 0x8
    struct CGPoint _initialLocationInScreenSpace;	// 24 = 0x18
    UIDelayedAction *_activationDelay;	// 40 = 0x28
    double _allowableMovement;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000110fa40
@property(nonatomic) double allowableMovement; // @synthesize allowableMovement=_allowableMovement;
- (void)recognizeOrFailForCurrentLocation;	// IMP=0x000000000110f9e1
- (_Bool)locationIsMostlyInsideView:(struct CGPoint)arg1;	// IMP=0x000000000110f930
- (_Bool)gestureIsStillValid;	// IMP=0x000000000110f7fa
- (struct CGPoint)locationInView:(id)arg1;	// IMP=0x000000000110f766
- (void)cancelActivationDelay;	// IMP=0x000000000110f72e
- (void)activationDelayHandler;	// IMP=0x000000000110f6f6
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000110f69a
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000110f5de
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000110f510
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000110f383
- (void)reset;	// IMP=0x000000000110f34b
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000110f2f7

@end

