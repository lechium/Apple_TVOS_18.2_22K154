//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC5UIKitP33_0B439A980771A6A339CDA4EB17012E1946_UIKeyboardSubstitutePadPresentationController
{
    MISSING_TYPE *dimmingViewDelegate;	// 24 = 0x18
    MISSING_TYPE *shadowView;	// 32 = 0x20
    MISSING_TYPE *dimmingView;	// 40 = 0x28
    MISSING_TYPE *minimalPadPresentationHeight;	// 48 = 0x30
    MISSING_TYPE *keyboardPadding;	// 56 = 0x38
    MISSING_TYPE *cornerRadius;	// 64 = 0x40
    MISSING_TYPE *shadowOpacity;	// 72 = 0x48
    MISSING_TYPE *shadowRadius;	// 80 = 0x50
    MISSING_TYPE *shadowOffset;	// 88 = 0x58
    MISSING_TYPE *animationDuration;	// 104 = 0x68
    MISSING_TYPE *animationSpringMass;	// 112 = 0x70
    MISSING_TYPE *animationSpringStiffness;	// 120 = 0x78
    MISSING_TYPE *animationSpringDamping;	// 128 = 0x80
    MISSING_TYPE *animationScale;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000000019f930
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x000000000019f850
- (int)overrideTextEffectsVisibilityLevelForTransitionView:(id)arg1;	// IMP=0x000000000019f840
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000019f7b0
@property(nonatomic, readonly) struct CGRect frameOfPresentedViewInContainerView;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;	// IMP=0x000000000019eff0
- (void)dismissalTransitionWillBegin;	// IMP=0x000000000019efa0
- (void)presentationTransitionDidEnd:(_Bool)arg1;	// IMP=0x000000000019ef70
- (void)presentationTransitionWillBegin;	// IMP=0x000000000019ef40
- (void)animateTransition:(id)arg1;	// IMP=0x00000000001a0350
- (double)transitionDuration:(id)arg1;	// IMP=0x000000000019f9a0

@end

