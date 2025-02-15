//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UICurrentContextPresentationController.h"

@class UIView, _UIForcedOrientationTransactionToken;

__attribute__((visibility("hidden")))
@interface _UIFullscreenPresentationController : _UICurrentContextPresentationController
{
    UIView *_counterRotatedView;	// 8 = 0x8
    double _counterRotatedAngle;	// 16 = 0x10
    struct CGRect _counterRotatedOriginalBounds;	// 24 = 0x18
    long long _originalOrientation;	// 56 = 0x38
    _Bool _presentingViewControllerHandledCounterRotation;	// 64 = 0x40
    CDUnknownBlockType _finalRotationBlock;	// 72 = 0x48
    _UIForcedOrientationTransactionToken *_forcedOrientationToken;	// 80 = 0x50
    _Bool _disableAnimatedReenablingOfAutorotation;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000006a185c
- (_Bool)_shouldAnimateReenablingOfAutorotation;	// IMP=0x00000000006a1848
- (void)_setPresentedViewController:(id)arg1;	// IMP=0x00000000006a1792
- (void)_transitionDidEnd:(_Bool)arg1 isDismissal:(_Bool)arg2;	// IMP=0x00000000006a1587
- (void)dismissalTransitionDidEnd:(_Bool)arg1;	// IMP=0x00000000006a153c
- (void)presentationTransitionDidEnd:(_Bool)arg1;	// IMP=0x00000000006a14f4
- (void)_removeCounterRotationIfApplied;	// IMP=0x00000000006a13bc
- (void)_applyCounterRotationToView:(id)arg1 fromOrientation:(long long)arg2 toOrientation:(long long)arg3 withBounds:(struct CGRect)arg4;	// IMP=0x00000000006a1204
- (void)_placeCounterRotationViewWithView:(id)arg1 inWindow:(id)arg2 fromOrientation:(long long)arg3 toOrientation:(long long)arg4 force:(_Bool)arg5;	// IMP=0x00000000006a0f57
- (void)_prepareForMixedOrientationTransitionIfNecessaryInWindow:(id)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;	// IMP=0x00000000006a0ba0
- (void)_adjustOrientationIfNecessaryInWindow:(id)arg1 forViewController:(id)arg2 preservingViewController:(id)arg3;	// IMP=0x00000000006a066a
- (_Bool)_invokesDelegatesOnOrientationChange;	// IMP=0x00000000006a0656
- (struct CGRect)frameOfPresentedViewInContainerView;	// IMP=0x00000000006a05fa
- (_Bool)_shouldRespectDefinesPresentationContext;	// IMP=0x00000000006a05f2
- (_Bool)shouldPresentInFullscreen;	// IMP=0x00000000006a05ea
- (void)dealloc;	// IMP=0x00000000006a05ac
- (long long)presentationStyle;	// IMP=0x00000000006a05a4

@end

