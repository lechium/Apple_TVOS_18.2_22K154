//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, UINavigationController, UINavigationItem, UIPresentationController, UIScrollView, UITabBarController, UITabBarItem, UITraitCollection, UIView;
@protocol UIViewControllerTransitioningDelegate;

@interface UIViewController (VideosUICore)
- (void)vui_setContentScrollView:(id)arg1 forEdge:(unsigned long long)arg2;	// IMP=0x0020000000014ec2
- (id)vui_contentScrollViewForEdge:(unsigned long long)arg1;	// IMP=0x0020000000014eb0
- (_Bool)vui_addSubview:(id)arg1 oldView:(id)arg2;	// IMP=0x0020000000014e20
- (void)vui_updateViewConstraints;	// IMP=0x0020000000014e1a
- (void)vui_didMoveToParentViewController:(id)arg1;	// IMP=0x0020000000014e14
- (void)vui_willMoveToParentViewController:(id)arg1;	// IMP=0x0020000000014e0e
- (void)vui_endAppearanceTransition;	// IMP=0x0020000000014dfc
- (void)vui_beginAppearanceTransition:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0020000000014dea
- (void)vui_removeFromParentViewController;	// IMP=0x0020000000014dd8
- (void)vui_addChildViewController:(id)arg1;	// IMP=0x0020000000014dc6
- (void)vui_showViewController:(id)arg1 sender:(id)arg2;	// IMP=0x0020000000014db4
- (void)vui_presentedContentSizeChanged:(id)arg1;	// IMP=0x0020000000014d06
- (void)vui_dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0020000000014cf4
- (void)vui_presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0020000000014ce2
- (void)vui_viewDidLayoutSubviews;	// IMP=0x0020000000014cdc
- (void)vui_viewWillLayoutSubviews;	// IMP=0x0020000000014cd6
- (void)vui_viewDidDisappear:(_Bool)arg1;	// IMP=0x0020000000014cd0
- (void)vui_viewWillDisappear:(_Bool)arg1;	// IMP=0x0020000000014cca
- (void)vui_viewDidAppear:(_Bool)arg1;	// IMP=0x0020000000014cc4
- (void)vui_viewWillAppear:(_Bool)arg1;	// IMP=0x0020000000014cbe
- (void)vui_viewDidLoad;	// IMP=0x0020000000014cb8
- (void)vui_loadView;	// IMP=0x0020000000014cb2
- (id)vui_initWithCoder:(id)arg1;	// IMP=0x0020000000014c82
- (id)vui_initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0020000000014c4d
@property(copy, nonatomic) NSString *vuiViewControllerIdentifier;
@property(readonly, nonatomic, getter=vuiPPTIsLoading) _Bool vuiPPTLoading;
@property(retain, nonatomic) UIScrollView *vuiTabBarObservedScrollView;
@property(readonly, nonatomic) UITabBarController *vuiTabBarController;
@property(retain, nonatomic) UITabBarItem *vuiTabBarItem;
@property(readonly, nonatomic) _Bool vuiIsNavigationRoot;
@property(readonly, nonatomic) UINavigationController *vuiNavigationController;
@property(readonly, nonatomic) UINavigationItem *vuiNavigationItem;
@property(nonatomic, getter=vuiIsModalInPresentation) _Bool vuiModalInPresentation;
@property(readonly, nonatomic) UIPresentationController *vuiPresentationController;
@property(nonatomic) __weak id <UIViewControllerTransitioningDelegate> vuiTransitioningDelegate;
@property(readonly, nonatomic) _Bool vuiShouldAutomaticallyForwardAppearanceMethods;
@property(readonly, nonatomic) NSArray *vuiChildViewControllers;
@property(readonly, nonatomic) _Bool vuiIsRTL;
@property(readonly, nonatomic) UITraitCollection *vuiTraitCollection;
- (void)vui_setOverrideUserInterfaceStyle:(unsigned long long)arg1;	// IMP=0x0020000000014a19
@property(readonly, nonatomic) unsigned long long vuiOverrideUserInterfaceStyle;
@property(readonly, nonatomic) unsigned long long vuiUserInterfaceStyle;
@property(nonatomic) struct CGSize vuiPreferredContentSize;
@property(nonatomic) _Bool vuiAutomaticallyAdjustsScrollViewInsets;
@property(nonatomic) _Bool vuiModalPresentationCapturesStatusBarAppearance;
@property(nonatomic) long long vuiModalPresentationStyle;
@property(readonly, nonatomic, getter=vuiIsMovingFromParentViewController) _Bool vuiMovingFromParentViewController;
@property(readonly, nonatomic, getter=vuiIsMovingToParentViewController) _Bool vuiMovingToParentViewController;
@property(readonly, nonatomic, getter=vuiIsBeingDismissed) _Bool vuiBeingDismissed;
@property(readonly, nonatomic, getter=vuiIsBeingPresented) _Bool vuiBeingPresented;
@property(readonly, nonatomic) UIViewController *vuiPresentingViewController;
@property(readonly, nonatomic) UIViewController *vuiPresentedViewController;
@property(readonly, nonatomic) __weak UIViewController *vuiParentViewController;
@property(copy, nonatomic) NSString *vuiTitle;
@property(readonly, nonatomic, getter=vuiIsViewLoaded) _Bool vuiViewLoaded;
@property(retain, nonatomic) UIView *vuiView;
@property(nonatomic) _Bool vui_requiresLegacyPresentation;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

- (void)presentAlertWithTitle:(id)arg1 message:(id)arg2 actions:(id)arg3 animated:(_Bool)arg4;	// IMP=0x00200000000288e0
- (void)presentViewController:(id)arg1 modalPresentationStyle:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0020000000028861

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

