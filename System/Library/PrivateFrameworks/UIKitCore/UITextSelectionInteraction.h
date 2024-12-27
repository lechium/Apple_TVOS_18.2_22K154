//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextInteraction.h"

@class UITextGestureTuning, UITextLoupeSession, _UIKeyboardTextSelectionController;
@protocol _UIInvalidatable;

__attribute__((visibility("hidden")))
@interface UITextSelectionInteraction : UITextInteraction
{
    double _lastTapTimestamp;	// 8 = 0x8
    struct CGPoint _lastTapLocation;	// 16 = 0x10
    UITextGestureTuning *_gestureTuning;	// 32 = 0x20
    _Bool _indirectSelectionType;	// 40 = 0x28
    _Bool _viewConformsToTextInput;	// 41 = 0x29
    struct CGRect _originalCaretRect;	// 48 = 0x30
    _Bool _wasOriginallyFirstResponder;	// 80 = 0x50
    long long _granularityToHandOff;	// 88 = 0x58
    _Bool _isCharacterGranularityOnMarkedTextPresenceEnabled;	// 96 = 0x60
    UITextLoupeSession *_activeLoupeSession;	// 104 = 0x68
    _UIKeyboardTextSelectionController *_activeSelectionController;	// 112 = 0x70
    id <_UIInvalidatable> _grabberSuppressionAssertion;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000013f097b
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000013f0839
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x00000000013f0831
- (_Bool)shouldHandleOneFingerTapInUneditable:(id)arg1;	// IMP=0x00000000013f0619
- (_Bool)interaction_gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000013f0438
- (_Bool)interaction_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000000013f029c
- (void)setHybridSelectionWithPoint:(struct CGPoint)arg1;	// IMP=0x00000000013f0192
- (void)twoFingerRangedSelectGesture:(id)arg1;	// IMP=0x00000000013efeb8
- (void)tapAndAHalf:(id)arg1;	// IMP=0x00000000013ef558
- (void)_createGestureTuningIfNecessary;	// IMP=0x00000000013ef430
- (void)confirmMarkedText:(id)arg1;	// IMP=0x00000000013ef3cf
- (void)_updateTapGestureHistoryWithLocation:(struct CGPoint)arg1;	// IMP=0x00000000013ef349
- (void)didUpdateSelectionWithGesture:(id)arg1;	// IMP=0x00000000013eeda2
- (void)willUpdateSelectionWithGesture:(id)arg1;	// IMP=0x00000000013eed44
- (void)_handleMultiTapGesture:(id)arg1;	// IMP=0x00000000013eea1b
- (void)oneFingerTapSelectsAll:(id)arg1;	// IMP=0x00000000013ee8ad
- (void)tappedToSelectTextWithGesture:(id)arg1 atPoint:(struct CGPoint)arg2 granularity:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000013ee772
- (void)tappedToPositionCursorWithGesture:(id)arg1 atPoint:(struct CGPoint)arg2 granularity:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000013ee3fb
- (_Bool)_hasMarkedTextAtLocation:(struct CGPoint)arg1;	// IMP=0x00000000013ee099
- (_Bool)_hasTextAlternativesAtLocation:(struct CGPoint)arg1;	// IMP=0x00000000013edf84
- (void)tappedToUpdateSelectionWithGesture:(id)arg1 atPoint:(struct CGPoint)arg2 granularity:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000013eded8
- (void)_checkForRepeatedTap:(id)arg1 gestureLocationOut:(struct CGPoint *)arg2;	// IMP=0x00000000013ed923
- (long long)_textGranularityForNumberOfTaps:(unsigned long long)arg1;	// IMP=0x00000000013ed8df
- (long long)handOffGranularity;	// IMP=0x00000000013ed8c6
- (_Bool)_isRepeatedTap:(id)arg1 gestureLocationOut:(struct CGPoint *)arg2;	// IMP=0x00000000013ed77e
- (_Bool)_isWithinRepeatedTapTimeForTouch:(id)arg1;	// IMP=0x00000000013ed6f1
- (_Bool)_isNowWithinRepeatedTapTime;	// IMP=0x00000000013ed6dd
- (_Bool)_isShiftKeyBeingHeldForGesture:(id)arg1;	// IMP=0x00000000013ed692
- (_Bool)_usesPencilSelectionBehaviorForGesture:(id)arg1;	// IMP=0x00000000013ed54f
- (_Bool)_usesIndirectSelectionBehavior;	// IMP=0x00000000013ed53f
- (void)_showSelectionCommandsIfApplicableAfterDelay:(double)arg1;	// IMP=0x00000000013ed484
- (void)toggleSelectionCommands;	// IMP=0x00000000013ed3ac
- (void)_applyTransientState:(id)arg1;	// IMP=0x00000000013ed2ce
- (id)_transientState;	// IMP=0x00000000013ed1c0
- (void)didMoveToView:(id)arg1;	// IMP=0x00000000013ed124
- (void)finishSetup;	// IMP=0x00000000013ece68
- (_Bool)_shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2;	// IMP=0x00000000013ece60
- (id)initWithMode:(long long)arg1 indirect:(_Bool)arg2;	// IMP=0x00000000013ecbdc
- (id)initWithMode:(long long)arg1;	// IMP=0x00000000013ecbc8

@end

