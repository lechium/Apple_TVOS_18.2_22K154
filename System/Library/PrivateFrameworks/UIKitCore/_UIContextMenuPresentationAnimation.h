//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UITargetedPreview, UIViewFloatAnimatableProperty, UIViewPropertyAnimator, _UIContextMenuAnimator, _UIContextMenuLayoutArbiterOutput, _UIContextMenuReparentingContainerView, _UIContextMenuUIController, _UIGroupCompletion, _UIPortalView;

__attribute__((visibility("hidden")))
@interface _UIContextMenuPresentationAnimation : NSObject
{
    _Bool _isDismissTransition;	// 8 = 0x8
    _Bool _isSingleItemMenu;	// 9 = 0x9
    UITargetedPreview *_sourcePreview;	// 16 = 0x10
    _UIContextMenuUIController *_uiController;	// 24 = 0x18
    _UIContextMenuAnimator *_alongsideAnimator;	// 32 = 0x20
    unsigned long long _dismissalStyle;	// 40 = 0x28
    _UIPortalView *_reparentingPortalView;	// 48 = 0x30
    _UIContextMenuReparentingContainerView *_reparentingContainerView;	// 56 = 0x38
    UIViewFloatAnimatableProperty *_animationProgress;	// 64 = 0x40
    CDUnknownBlockType _reparentingAnimationBlock;	// 72 = 0x48
    CDUnknownBlockType _accessoryAnimationBlock;	// 80 = 0x50
    _UIContextMenuLayoutArbiterOutput *_expandedLayout;	// 88 = 0x58
    _UIGroupCompletion *_groupCompletion;	// 96 = 0x60
    UITargetedPreview *_stashedDismissalPreview;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000fba820
@property(retain, nonatomic) UITargetedPreview *stashedDismissalPreview; // @synthesize stashedDismissalPreview=_stashedDismissalPreview;
@property(retain, nonatomic) _UIGroupCompletion *groupCompletion; // @synthesize groupCompletion=_groupCompletion;
@property(retain, nonatomic) _UIContextMenuLayoutArbiterOutput *expandedLayout; // @synthesize expandedLayout=_expandedLayout;
@property(copy, nonatomic) CDUnknownBlockType accessoryAnimationBlock; // @synthesize accessoryAnimationBlock=_accessoryAnimationBlock;
@property(copy, nonatomic) CDUnknownBlockType reparentingAnimationBlock; // @synthesize reparentingAnimationBlock=_reparentingAnimationBlock;
@property(retain, nonatomic) UIViewFloatAnimatableProperty *animationProgress; // @synthesize animationProgress=_animationProgress;
@property(retain, nonatomic) _UIContextMenuReparentingContainerView *reparentingContainerView; // @synthesize reparentingContainerView=_reparentingContainerView;
@property(retain, nonatomic) _UIPortalView *reparentingPortalView; // @synthesize reparentingPortalView=_reparentingPortalView;
@property(nonatomic) _Bool isSingleItemMenu; // @synthesize isSingleItemMenu=_isSingleItemMenu;
@property(nonatomic) _Bool isDismissTransition; // @synthesize isDismissTransition=_isDismissTransition;
@property(nonatomic) unsigned long long dismissalStyle; // @synthesize dismissalStyle=_dismissalStyle;
@property(retain, nonatomic) _UIContextMenuAnimator *alongsideAnimator; // @synthesize alongsideAnimator=_alongsideAnimator;
@property(nonatomic) __weak _UIContextMenuUIController *uiController; // @synthesize uiController=_uiController;
@property(copy, nonatomic) UITargetedPreview *sourcePreview; // @synthesize sourcePreview=_sourcePreview;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UITargetedPreview",?,C,N,V_sourcePreview

- (_Bool)_hasVisibleBackground;	// IMP=0x0000000000fba5ab
- (void)_setBackgroundVisible:(_Bool)arg1;	// IMP=0x0000000000fba35a
- (id)_secondarySourcePreviews;	// IMP=0x0000000000fba2e0
- (id)_accessoryViews;	// IMP=0x0000000000fba266
- (id)_menuView;	// IMP=0x0000000000fba216
- (id)_platterView;	// IMP=0x0000000000fba1c6
- (id)_backgroundView;	// IMP=0x0000000000fba176
- (id)_platterTransitionView;	// IMP=0x0000000000fba126
- (id)_containerView;	// IMP=0x0000000000fba0d6
- (_Bool)_isDismissingToDrag;	// IMP=0x0000000000fba0bc
- (_Bool)_shouldAnimateBackgroundEffects;	// IMP=0x0000000000fba061
- (void)_updateAccessoryAttachment:(id)arg1;	// IMP=0x0000000000fb99f8
- (void)_installAccessories;	// IMP=0x0000000000fb966b
- (void)_prepareReparentingAnimationWithDismissalTarget:(id)arg1;	// IMP=0x0000000000fb8bbc
- (void)_presentation_applyBackgroundEffectWithProgress:(double)arg1;	// IMP=0x0000000000fb8859
- (void)_prepareAnimatablePropertyBasedAnimations;	// IMP=0x0000000000fb8364
- (void)_prepareOverallAnimationCompletion;	// IMP=0x0000000000fb817b
- (void)transitionDidEnd:(_Bool)arg1;	// IMP=0x0000000000fb80b2
- (id)_dismissalPreviewForSecondaryItemPreview:(id)arg1;	// IMP=0x0000000000fb7ff8
- (id)_targetedPreviewForDismissalAnimation;	// IMP=0x0000000000fb7791
- (void)_performReduceMotionDisappearanceTransition;	// IMP=0x0000000000fb756c
- (void)_performReduceMotionAppearanceTransition;	// IMP=0x0000000000fb749a
- (void)performTransition;	// IMP=0x0000000000fb7393
- (void)_actuallyPerformTransition;	// IMP=0x0000000000fb61af
- (void)_anchorTransitionViewToTargetedPreview:(id)arg1;	// IMP=0x0000000000fb5ea2
- (CDStruct_d52ce5d2)_dismissedMenuLayoutForPresentedLayout:(CDStruct_d52ce5d2)arg1 previewLayout:(CDStruct_d52ce5d2)arg2 anchor:(CDStruct_17a0fc55)arg3;	// IMP=0x0000000000fb5b7d
- (void)prepareTransitionToView:(id)arg1;	// IMP=0x0000000000fb4ae5
- (id)initWithUIController:(id)arg1 asDismissal:(_Bool)arg2;	// IMP=0x0000000000fb4774

// Remaining properties
@property(readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIViewPropertyAnimator",?,R,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

