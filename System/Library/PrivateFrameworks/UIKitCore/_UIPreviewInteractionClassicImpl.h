//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSString, UIPreviewInteraction, UIView, _UIPreviewInteractionStateRecognizer;
@protocol UIPreviewInteractionDelegate, _UIPreviewInteractionTouchForceProviding;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionClassicImpl : NSObject
{
    UIView *_view;	// 8 = 0x8
    struct {
        unsigned int delegatePreviewInteractionShouldBegin:1;
        unsigned int delegateDidUpdateCommitTransition:1;
        unsigned int delegateShouldFinishTransitionToPreview:1;
        unsigned int delegateShouldAutomaticallyTransitionToPreviewAfterDelay:1;
        unsigned int delegateHighlighterForPreviewTransition:1;
        unsigned int delegateViewControllerPresentationForPresentingViewController:1;
        unsigned int interactive:1;
        unsigned int delegateDidPreventInteraction:1;
        unsigned int interactionRequiresRestart:1;
        unsigned int interactionWasCancelled:1;
        unsigned int previousProgressWasNegativeOrZero:1;
        unsigned int currentState:3;
        unsigned int nextUpdateShouldTransitionToPreview:1;
        unsigned int nextPreviewShouldPreventHapticFeedback:1;
    } _previewInteractionFlags;	// 16 = 0x10
    id <_UIPreviewInteractionTouchForceProviding> _systemTouchForceProvider;	// 24 = 0x18
    _UIPreviewInteractionStateRecognizer *_currentInteractionStateRecognizer;	// 32 = 0x20
    struct CGPoint _sceneReferenceLocationFromLatestUpdate;	// 40 = 0x28
    CADisplayLink *_continuousEvaluationDisplayLink;	// 56 = 0x38
    id <UIPreviewInteractionDelegate> _delegate;	// 64 = 0x40
    id <_UIPreviewInteractionTouchForceProviding> _touchForceProvider;	// 72 = 0x48
    UIPreviewInteraction *_previewInteraction;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000010080b5
@property(nonatomic) __weak UIPreviewInteraction *previewInteraction; // @synthesize previewInteraction=_previewInteraction;
@property(retain, nonatomic) id <_UIPreviewInteractionTouchForceProviding> touchForceProvider; // @synthesize touchForceProvider=_touchForceProvider;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak id <UIPreviewInteractionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_endViewControllerPresentationObserving;	// IMP=0x0000000001008052
- (void)_prepareForViewControllerPresentationObserving;	// IMP=0x000000000100804c
- (id)_gestureRecognizerForExclusionRelationship;	// IMP=0x0000000001008044
- (void)_dismissPreviewViewControllerIfNeeded;	// IMP=0x000000000100803e
- (void)_presentPreviewViewControllerIfNeeded;	// IMP=0x0000000001008038
- (void)_endHighlightingIfNeeded;	// IMP=0x0000000001008032
- (void)_updateHighlighter:(double)arg1;	// IMP=0x000000000100802c
- (void)_prepareHighlighterIfNeeded;	// IMP=0x0000000001008026
- (_Bool)_shouldCancelTransitionToState:(long long)arg1;	// IMP=0x000000000100801e
- (void)_endUsingFeedbackIfNeeded;	// IMP=0x0000000001008018
- (void)_prepareUsingFeedback;	// IMP=0x0000000001008012
- (void)_prepareUsingFeedbackIfNeeded;	// IMP=0x000000000100800c
- (void)_endInteractionIfNeeded;	// IMP=0x0000000001007ef5
- (void)_updateInteractionStateRecognizerForTouchForce:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(struct CGPoint)arg3;	// IMP=0x0000000001007991
- (void)_updateForContinuousEvaluation:(id)arg1;	// IMP=0x00000000010078d3
- (void)_resetAfterInteraction;	// IMP=0x0000000001007879
- (void)_endInteractiveStateTransitions;	// IMP=0x0000000001007848
- (void)_endContinuousEvaluation;	// IMP=0x00000000010077fe
- (void)_prepareForInteractionIfNeeded;	// IMP=0x000000000100766f
- (void)_updateForCurrentTouchForceProvider;	// IMP=0x000000000100760a
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000010075c0
- (void)_startPreviewAtLocation:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x0000000001007515
- (void)cancelInteraction;	// IMP=0x00000000010074c8
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;	// IMP=0x000000000100749f
- (void)dealloc;	// IMP=0x000000000100732d
- (id)init;	// IMP=0x000000000100725b
- (id)initWithView:(id)arg1 previewInteraction:(id)arg2;	// IMP=0x000000000100713c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

