//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextInteraction.h"

@class UIDelayedAction, UIResponder, UITextGestureTuning, _UITextLoupeResponderProxy;
@protocol UITextRefinementInteractionBehaviorDelegate;

__attribute__((visibility("hidden")))
@interface UITextRefinementInteraction : UITextInteraction
{
    UIDelayedAction *_delayedLoupeAction;	// 8 = 0x8
    UIDelayedAction *_delayedSelectionAction;	// 16 = 0x10
    _Bool _hasPerformedInteraction;	// 24 = 0x18
    struct CGPoint _initialPointFromPreviousInteraction;	// 32 = 0x20
    _Bool _triggeredByLongPress;	// 48 = 0x30
    UITextGestureTuning *_gestureTuning;	// 56 = 0x38
    long long _inheritedGranularity;	// 64 = 0x40
    id <UITextRefinementInteractionBehaviorDelegate> _behaviorDelegate;	// 72 = 0x48
    _UITextLoupeResponderProxy *_responderProxy;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000013ea45c
@property(retain, nonatomic) _UITextLoupeResponderProxy *responderProxy; // @synthesize responderProxy=_responderProxy;
@property(retain, nonatomic) id <UITextRefinementInteractionBehaviorDelegate> behaviorDelegate; // @synthesize behaviorDelegate=_behaviorDelegate;
@property(nonatomic) long long inheritedGranularity; // @synthesize inheritedGranularity=_inheritedGranularity;
@property(readonly, nonatomic) UITextGestureTuning *gestureTuning; // @synthesize gestureTuning=_gestureTuning;
@property(nonatomic) _Bool triggeredByLongPress; // @synthesize triggeredByLongPress=_triggeredByLongPress;
- (void)_performGestureType:(long long)arg1 state:(long long)arg2 location:(struct CGPoint)arg3 locationOfFirstTouch:(struct CGPoint)arg4 forTouchType:(long long)arg5;	// IMP=0x00000000013ea28d
- (void)canBeginDragCursor:(id)arg1;	// IMP=0x00000000013ea224
- (void)delayedDisplayLoupe:(id)arg1;	// IMP=0x00000000013ea14e
- (void)delayedSelectionAction:(id)arg1;	// IMP=0x00000000013ea135
- (void)delayedLoupeAction:(id)arg1;	// IMP=0x00000000013ea09c
- (void)cancelDelayedLoupeActionIfNecessary;	// IMP=0x00000000013ea04c
- (void)updateOrCancelDelayedLoupeActionWithPoint:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;	// IMP=0x00000000013e9deb
- (_Bool)translationIsWithinAllowableMovement:(struct CGPoint)arg1;	// IMP=0x00000000013e9dbb
- (void)setupDelayedLoupeActionWithInitialPoint:(struct CGPoint)arg1;	// IMP=0x00000000013e9c97
- (struct CGPoint)touchAlignedPointForPoint:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;	// IMP=0x00000000013e9be7
- (void)updateVisibilityOffsetForGesture:(id)arg1;	// IMP=0x00000000013e9b4a
@property(nonatomic) _Bool strongerBiasAgainstUp;
@property(nonatomic) _Bool shouldUseLineThreshold;
- (void)_createGestureTuningIfNecessary;	// IMP=0x00000000013e9979
- (struct CGPoint)pointIfPlacedCarefully:(struct CGPoint)arg1;	// IMP=0x00000000013e9956
- (void)willBeginExternalGesture;	// IMP=0x00000000013e9935
- (void)loupeGestureWithState:(long long)arg1 location:(CDUnknownBlockType)arg2 translation:(CDUnknownBlockType)arg3 velocity:(CDUnknownBlockType)arg4 modifierFlags:(long long)arg5 shouldCancel:(_Bool *)arg6;	// IMP=0x00000000013e9879
- (void)_processGestureForCustomHighlighter:(id)arg1;	// IMP=0x00000000013e93fc
- (void)loupeGesture:(id)arg1;	// IMP=0x00000000013e8e76
- (_Bool)interaction_gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000013e8e07
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x00000000013e8d63
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x00000000013e8d36
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000013e8bb7
- (_Bool)_shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2;	// IMP=0x00000000013e8b27
- (void)setupGestureExclusionRequirements;	// IMP=0x00000000013e8adb
- (void)finishSetup;	// IMP=0x00000000013e89cd
- (void)updateInitialPoint:(struct CGPoint)arg1;	// IMP=0x00000000013e898e
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00000000013e8986
@property(readonly, nonatomic) UIResponder *responder;
- (void)didMoveToView:(id)arg1;	// IMP=0x00000000013e88b5
- (void)willMoveToView:(id)arg1;	// IMP=0x00000000013e8823
- (id)initWithBehaviorDelegate:(id)arg1;	// IMP=0x00000000013e875c

@end

