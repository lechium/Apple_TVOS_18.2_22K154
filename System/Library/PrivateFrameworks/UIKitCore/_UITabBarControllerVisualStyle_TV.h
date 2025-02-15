//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UITabBarControllerVisualStyle.h"

@class NSString, UIFocusContainerGuide, UIFocusGuide, UIGestureRecognizer, UIView, _UITVScrollViewManager;

__attribute__((visibility("hidden")))
@interface _UITabBarControllerVisualStyle_TV : _UITabBarControllerVisualStyle
{
    UIView *_tabBarContainerView;	// 8 = 0x8
    UIFocusContainerGuide *_contentFocusContainerGuide;	// 16 = 0x10
    UIFocusGuide *_tabBarOffscreenFocusGuide;	// 24 = 0x18
    UIGestureRecognizer *_touchDetectionGestureRecognizer;	// 32 = 0x20
    _UITVScrollViewManager *_scrollViewManager;	// 40 = 0x28
    struct {
        unsigned int hidNavigationBar:1;
    } _flags;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000dd9661
- (_Bool)_isModernBar;	// IMP=0x0000000000dd95f3
- (id)defaultAnimatorForFromViewController:(id)arg1 toViewController:(id)arg2;	// IMP=0x0000000000dd9363
- (void)_scrollViewManagerDidFinishScrolling:(id)arg1;	// IMP=0x0000000000dd9342
- (_Bool)isScrollViewObservationInCompatibilityMode;	// IMP=0x0000000000dd9311
- (id)viewControllerForObservableScrollViewFromViewController:(id)arg1;	// IMP=0x0000000000dd91fd
- (void)adjustTabBarForContentScrollView:(id)arg1;	// IMP=0x0000000000dd90fa
- (_Bool)shouldTrackContentScrollView:(id)arg1 viewController:(id)arg2 tabBarBackgroundRequired:(_Bool)arg3;	// IMP=0x0000000000dd8ffd
- (double)_childViewControllerModernBarTopInset;	// IMP=0x0000000000dd8f7e
- (_Bool)_shouldAdjustContentViewFrameForOffscreenFocus:(id)arg1 adjustedTabBarFrame:(struct CGRect)arg2;	// IMP=0x0000000000dd8e90
- (struct UIEdgeInsets)overlayInsetsAdjustment;	// IMP=0x0000000000dd8cb9
- (struct UIEdgeInsets)edgeInsetsForChildViewController:(id)arg1;	// IMP=0x0000000000dd8b70
- (struct CGRect)adjustedContentViewFrame:(struct CGRect)arg1 viewController:(id)arg2;	// IMP=0x0000000000dd8997
- (struct CGRect)adjustedTabBarFrame:(struct CGRect)arg1;	// IMP=0x0000000000dd8897
- (void)updateTabBarLayout;	// IMP=0x0000000000dd858a
- (void)_performTouchDetectionGesture:(id)arg1;	// IMP=0x0000000000dd84d9
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000dd84b1
- (void)_updateOffscreenState:(_Bool)arg1 withFocusAnimationCoordinator:(id)arg2;	// IMP=0x0000000000dd78f4
- (_Bool)shouldForgetRememberedFocusItemForSelectedViewController:(id)arg1 context:(id)arg2;	// IMP=0x0000000000dd77ad
- (void)updateFocusForSelectedViewControllerChange;	// IMP=0x0000000000dd76a5
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000dd7453
- (void)sendSelectionEventsForControl:(id)arg1;	// IMP=0x0000000000dd7439
- (void)updateGestureRecognizers;	// IMP=0x0000000000dd7302
- (long long)backGestureRecognizerPressType;	// IMP=0x0000000000dd72f7
- (unsigned long long)tabBarFocusSpeedBumpEdges;	// IMP=0x0000000000dd72ec
- (_Bool)supportsFocusGestures;	// IMP=0x0000000000dd72e4
- (_Bool)removeTabBarFocusedOnViewDidDisappear;	// IMP=0x0000000000dd72dc
- (_Bool)prefersTabBarFocusedOnViewDidLoad;	// IMP=0x0000000000dd727a
- (void)updateViewControllerForReselection:(id)arg1;	// IMP=0x0000000000dd7274
- (void)tabContentDidChange:(id)arg1;	// IMP=0x0000000000dd71ba
- (void)updateViewControllers:(_Bool)arg1;	// IMP=0x0000000000dd7170
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000dd70cd
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000dd7031
- (void)viewDidLoad;	// IMP=0x0000000000dd6cd3
- (void)loadViews;	// IMP=0x0000000000dd6bda
- (id)tabBarView;	// IMP=0x0000000000dd6b81
- (unsigned long long)defaultMaxItems;	// IMP=0x0000000000dd6b76
- (long long)tabBarPosition;	// IMP=0x0000000000dd6b6b
- (_Bool)supportsShowingMoreItem;	// IMP=0x0000000000dd6b63
- (void)teardown;	// IMP=0x0000000000dd6abb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

