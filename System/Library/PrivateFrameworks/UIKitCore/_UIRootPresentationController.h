//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UISheetPresentationController.h"

@class NSString, UIStatusBarHideAnimationParameters, UIStatusBarStyleAnimationParameters, UIWindow;

__attribute__((visibility("hidden")))
@interface _UIRootPresentationController : _UISheetPresentationController
{
    _Bool __shouldDisableAppearanceCallbacksForPresentedViewController;	// 8 = 0x8
    UIWindow *_presentingWindow;	// 16 = 0x10
}

+ (_Bool)_allowsDeferredTransitions;	// IMP=0x00100000006a3a0d
- (void).cxx_destruct;	// IMP=0x00000000006a3a8c
@property(nonatomic) _Bool _shouldDisableAppearanceCallbacksForPresentedViewController; // @synthesize _shouldDisableAppearanceCallbacksForPresentedViewController=__shouldDisableAppearanceCallbacksForPresentedViewController;
@property(readonly, nonatomic) __weak UIWindow *presentingWindow; // @synthesize presentingWindow=_presentingWindow;
@property(readonly, nonatomic) long long preferredStatusBarUpdateAnimation;
@property(readonly, nonatomic, getter=_preferredStatusBarHideAnimationParameters) UIStatusBarHideAnimationParameters *preferredStatusBarHideAnimationParameters;
@property(readonly, nonatomic, getter=_preferredStatusBarStyleAnimationParameters) UIStatusBarStyleAnimationParameters *preferredStatusBarStyleAnimationParameters;
- (id)_createVisualStyleForProvider:(id)arg1;	// IMP=0x00000000006a3a1d
- (_Bool)_mayChildGrabPresentedViewControllerView;	// IMP=0x00000000006a3a15
- (_Bool)_isRootPresentation;	// IMP=0x00000000006a3a05
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000006a391a
@property(readonly, nonatomic) int _preferredStatusBarVisibility;
@property(readonly, nonatomic) long long preferredStatusBarStyle;
- (id)_transitionCoordinator;	// IMP=0x00000000006a38fc
- (id)_fullscreenPresentationSuperview;	// IMP=0x00000000006a38ea
- (id)_parentTraitEnvironment;	// IMP=0x00000000006a38d8
- (id)initWithPresentedViewController:(id)arg1 presentingWindow:(id)arg2;	// IMP=0x00000000006a3865

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

