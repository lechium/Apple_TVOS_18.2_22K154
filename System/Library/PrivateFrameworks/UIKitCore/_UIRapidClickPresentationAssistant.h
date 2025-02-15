//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSTimer, UITargetedPreview, _UIClickPresentation;

__attribute__((visibility("hidden")))
@interface _UIRapidClickPresentationAssistant : NSObject
{
    int _animationCount;	// 8 = 0x8
    _Bool _isInteractionInitiatedDismiss;	// 12 = 0xc
    _UIClickPresentation *presentation;	// 16 = 0x10
    CDUnknownBlockType lifecycleCompletion;	// 24 = 0x18
    CDUnknownBlockType keyboardAssertionInvalidationHandler;	// 32 = 0x20
    UITargetedPreview *_sourcePreview;	// 40 = 0x28
    id _keyboardSuppressionAssertion;	// 48 = 0x30
    NSTimer *_animationWatchdogTimer;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000002b1e0d
@property(nonatomic) __weak NSTimer *animationWatchdogTimer; // @synthesize animationWatchdogTimer=_animationWatchdogTimer;
@property(retain, nonatomic) id keyboardSuppressionAssertion; // @synthesize keyboardSuppressionAssertion=_keyboardSuppressionAssertion;
@property(retain, nonatomic) UITargetedPreview *sourcePreview; // @synthesize sourcePreview=_sourcePreview;
@property(copy, nonatomic) CDUnknownBlockType keyboardAssertionInvalidationHandler; // @synthesize keyboardAssertionInvalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType lifecycleCompletion; // @synthesize lifecycleCompletion;
@property(retain, nonatomic) _UIClickPresentation *presentation; // @synthesize presentation;
- (void)_animateUsingFluidSpringWithType:(unsigned long long)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002b1a40
- (void)animateTransition:(id)arg1;	// IMP=0x00000000002b1887
- (double)transitionDuration:(id)arg1;	// IMP=0x00000000002b1860
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x00000000002b184c
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x00000000002b177a
- (void)_nonAnimatedDismissalWithReason:(unsigned long long)arg1 actions:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002b151c
- (void)_animateDismissalWithReason:(unsigned long long)arg1 actions:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002b0ba3
- (void)dismissWithReason:(unsigned long long)arg1 alongsideActions:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002b0928
- (void)_performPresentationAnimationsFromViewController:(id)arg1;	// IMP=0x00000000002b0631
- (void)presentFromSourcePreview:(id)arg1 lifecycleCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002b033b
- (void)_firstResponderDidChange:(id)arg1;	// IMP=0x00000000002b025a
- (void)dealloc;	// IMP=0x00000000002b01de
- (id)initWithClickPresentation:(id)arg1;	// IMP=0x00000000002b0121

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

