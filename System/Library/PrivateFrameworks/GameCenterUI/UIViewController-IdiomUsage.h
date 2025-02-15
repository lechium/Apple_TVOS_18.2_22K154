//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@interface UIViewController (IdiomUsage)
- (long long)_gkDesiredUserInterfaceIdiom;	// IMP=0x0030000000058ea4
- (_Bool)_gkShouldUsePadUI;	// IMP=0x0030000000058e8a
- (_Bool)_gkShouldPushViewControllerInsteadOfUsingPopoverOnCompactWidthPad;	// IMP=0x003000000008a744
- (id)_gkRepresentedObject;	// IMP=0x003000000008a73c
- (void)_gkRestorePopoverWithViewControllers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x003000000008a736
- (void)_gkDidTransitionModalPresentationForTraitCollection:(id)arg1;	// IMP=0x003000000008a730
- (void)_gkWillTransitionModalPresentationForTraitCollection:(id)arg1;	// IMP=0x003000000008a72a
- (id)_gkViewControllersForRestoringPopover;	// IMP=0x003000000008a722
- (void)_gkPushPresentedViewControllerForCompactSizeClass:(id)arg1;	// IMP=0x003000000008a71c
@property(retain, nonatomic, setter=_gkSetSourcePresentingViewController:) UIViewController *_gkSourcePresentingViewController;
- (void)_gkPresentSendDialogForChallenge:(id)arg1 selectPlayers:(id)arg2 defaultMessage:(id)arg3 complete:(CDUnknownBlockType)arg4;	// IMP=0x0030000000099b3a
- (void)_gkPresentSendDialogForChallenge:(id)arg1 selectPlayers:(id)arg2 defaultMessage:(id)arg3;	// IMP=0x0030000000099b25
- (void)_gkPresentChallengeVC:(id)arg1;	// IMP=0x0030000000099649
- (_Bool)_gkServiceWantsCustomRightBarButtonItemInViewService;	// IMP=0x00300000000baac9
- (void)_gkRestoreStatusBarStyle:(_Bool)arg1;	// IMP=0x00300000000bfa13
- (void)_gkSaveStatusBarStyle:(_Bool)arg1;	// IMP=0x00300000000bf9ff
- (void)_gkSaveStatusBarStyleAnimated:(_Bool)arg1 setToStyle:(long long)arg2;	// IMP=0x00300000000bf94d
- (_Bool)_gkExtensionWantsCustomRightBarButtonItemInViewService;	// IMP=0x00300000000c2a65
- (void)_updateExtensionHostViewWithRoundedCorners;	// IMP=0x00300000000c2f5a
- (void)_gkPopViewControllerAnimated:(_Bool)arg1;	// IMP=0x00300000000ca0a4
- (void)_gkPushViewController:(id)arg1 replaceCurrent:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x00300000000c9f38
- (void)_gkPushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00300000000c9f21
- (void)_gkDismissViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00300000000c9ea0
- (void)_gkPresentViewController:(id)arg1 asPopoverFromView:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00300000000c9d19
- (void)_gkPresentViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00300000000c9c64
- (id)_gkOriginatingViewControllerAutoDetermined;	// IMP=0x00300000000c9baa
- (id)_gkOriginatingViewController;	// IMP=0x00300000000c9b62
- (void)_gkSetOriginatingViewController:(id)arg1;	// IMP=0x00300000000c9b4f
- (void)_gkRemoveViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00300000000c99b7
- (void)_gkShowViewController:(id)arg1;	// IMP=0x00300000000c995f
- (id)_gkAddMenuButtonTapGestureRecognizerWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00300000000c9947
- (id)_gkAddMenuButtonTapGestureRecognizerWithTarget:(id)arg1 action:(SEL)arg2 delegate:(id)arg3;	// IMP=0x00300000000c986f
- (void)_gkModifyTopConstraintToLayoutGuideForSubview:(id)arg1;	// IMP=0x00300000000c9522
- (id)_gkExtensionViewController;	// IMP=0x00300000000c9482
@end

