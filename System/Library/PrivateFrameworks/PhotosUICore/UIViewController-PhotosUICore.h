//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSArray, NSString, PXBarAppearance, PXExtendedTraitCollection, PXImageModulationManager, PXOneUpPresentation, PXProgrammaticNavigationDestination;

@interface UIViewController (PhotosUICore)
+ (id)px_viewControllerWithContinuousOutputProducer:(CDUnknownBlockType)arg1;	// IMP=0x0010000000767be5
+ (id)px_viewControllerWithAsynchronousOutputProducer:(CDUnknownBlockType)arg1;	// IMP=0x0010000000767b43
+ (id)px_viewControllerWithOutput:(CDUnknownBlockType)arg1;	// IMP=0x0010000000767aa1
+ (id)px_viewControllerWithSettings:(id)arg1;	// IMP=0x0010000000767a26
+ (void)_px_prepareClassForBarAppearance;	// IMP=0x00100000009a74cf
+ (void)_px_prepareClassForExtendedTraitCollection;	// IMP=0x00100000009b2233
+ (void)px_preloadExtendedTraitCollection;	// IMP=0x00100000009b21ae
+ (id)px_freezeViewController:(id)arg1 timeout:(double)arg2;	// IMP=0x00100000009d29fb
+ (void)_px_prepareClassForOneUpPresentation;	// IMP=0x0010000000b812b4
- (_Bool)tryToPresentMovieForAssetCollection:(id)arg1;	// IMP=0x00100000002adf50
- (long long)abilityToPlayMovieForAssetCollection:(id)arg1;	// IMP=0x00100000002addf0
- (id)firstAncestorWithWhere:(CDUnknownBlockType)arg1;	// IMP=0x00100000003b2e70
- (id)_px_footerToolbar;	// IMP=0x00100000005d090a
- (id)_px_offersTableView;	// IMP=0x00100000005d078d
- (void)px_removeFooterToolbar;	// IMP=0x00100000005d06ba
- (void)px_insertFooterToolbarWithItems:(id)arg1;	// IMP=0x00100000005d043f
- (id)px_gridPresentation;	// IMP=0x0010000000671548
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x0010000000848cad
- (void)_px_dismiss:(id)arg1;	// IMP=0x00100000008fc6c9
- (void)px_presentViewControllerInNavigationController:(id)arg1 animated:(_Bool)arg2 dimissButtonLocation:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000008fc583
- (long long)_pxswizzled_barAppearance_preferredStatusBarUpdateAnimation;	// IMP=0x00100000009a746c
- (long long)_pxswizzled_barAppearance_preferredStatusBarStyle;	// IMP=0x00100000009a7409
- (_Bool)_pxswizzled_barAppearance_prefersStatusBarHidden;	// IMP=0x00100000009a73a8
- (void)_pxswizzled_barAppearance_viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000009a734e
- (void)_pxswizzled_barAppearance_viewIsAppearing:(_Bool)arg1;	// IMP=0x00100000009a72f4
- (void)_pxswizzled_barAppearance_viewWillAppear:(_Bool)arg1;	// IMP=0x00100000009a729a
@property(readonly, nonatomic) PXBarAppearance *px_barAppearance;
- (void)px_didTransitionBars;	// IMP=0x00100000009a7229
- (void)px_willTransitionBars;	// IMP=0x00100000009a7223
- (void)px_enablePrefersViewIsAppearingForAppearanceUpdates;	// IMP=0x00100000009a71e1
- (void)px_enableBarAppearance;	// IMP=0x00100000009a7187
- (void)_pxswizzled_viewControllerTraitCollection_didMoveToParentViewController:(id)arg1;	// IMP=0x00100000009b187b
- (void)_pxswizzled_viewControllerTraitCollection_viewLayoutMarginsDidChange;	// IMP=0x00100000009b1823
- (void)_pxswizzled_viewControllerTraitCollection_viewSafeAreaInsetsDidChange;	// IMP=0x00100000009b17c0
- (void)_pxswizzled_viewControllerTraitCollection_traitCollectionDidChange:(id)arg1;	// IMP=0x00100000009b1741
- (void)_pxswizzled_viewControllerTraitCollection_viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000009b161d
- (void)_pxswizzled_viewControllerTraitCollection_viewWillLayoutSubviews;	// IMP=0x00100000009b15c5
- (void)_pxswizzled_viewControllerTraitCollection_viewDidAppear:(_Bool)arg1;	// IMP=0x00100000009b156a
- (void)_pxswizzled_viewControllerTraitCollection_viewIsAppearing:(_Bool)arg1;	// IMP=0x00100000009b150f
- (void)_pxswizzled_viewControllerTraitCollection_viewWillAppear:(_Bool)arg1;	// IMP=0x00100000009b14b4
- (void)_pxswizzled_viewControllerTraitCollection_viewDidLoad;	// IMP=0x00100000009b145c
@property(readonly, nonatomic) PXExtendedTraitCollection *px_extendedTraitCollection;
- (void)px_enableExtendedTraitCollection;	// IMP=0x00100000009b1397
- (id)debugURLsForDiagnostics;	// IMP=0x00100000009d2816
- (void)px_adjustAdditionalSafeAreaInsetsToKeepContentStableRegardlessOfStatusBarVisibility;	// IMP=0x00100000009d26a8
@property(readonly, nonatomic) NSArray *px_childViewControllersForModalInPresentation;
- (void)px_containedViewControllerModalStateChanged;	// IMP=0x00100000009d2617
@property(readonly, nonatomic) _Bool px_containsViewControllerModalInPresentation;
@property(nonatomic, setter=px_setModalInPresentation:) _Bool px_isModalInPresentation;
@property(readonly, nonatomic) _Bool px_determinesPreferredStatusBarHidden;
@property(readonly, nonatomic) _Bool px_determinesPreferredStatusBarStyle;
@property(readonly, nonatomic) UIViewController *px_nextViewControllerInNavigationController;
@property(retain, nonatomic, setter=px_setPreviewActionMenus:) NSArray *px_previewActionMenus;
@property(copy, nonatomic, setter=px_setSubtitle:) NSString *px_subtitle;
- (id)px_descendantViewControllerWithClass:(Class)arg1;	// IMP=0x00100000009d2361
- (void)px_enumerateDescendantViewControllersWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000009d21db
- (_Bool)px_isDescendantOfOrPresentedByViewController:(id)arg1;	// IMP=0x00100000009d2101
- (_Bool)px_isDescendantOfViewController:(id)arg1;	// IMP=0x00100000009d205a
- (_Bool)px_canPresentViewControllerAnimated:(_Bool)arg1;	// IMP=0x00100000009d1f32
- (id)px_createViewControllerWithHiddenStatusBarForMainViewController:(id)arg1;	// IMP=0x00100000009d1aef
- (void)px_addOrReplaceChildViewController:(id)arg1 activateConstraints:(_Bool)arg2;	// IMP=0x00100000009d15b9
- (_Bool)px_dismissViewControllerIfAllowedAnimated:(_Bool)arg1 forced:(_Bool)arg2;	// IMP=0x00100000009d1468
- (void)px_presentOverTopmostPresentedViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000009d13c5
@property(readonly, nonatomic) UIViewController *ppt_containedViewController;
@property(readonly, nonatomic) UIViewController *px_topmostPresentedViewController;
@property(readonly, nonatomic) struct UIEdgeInsets px_layoutMargins;
@property(readonly, nonatomic) struct UIEdgeInsets px_safeAreaInsets;
@property(readonly, nonatomic, getter=px_isDelayingPresentation) _Bool px_delayingPresentation;
@property(readonly, nonatomic) _Bool px_isVisible;
@property(readonly, nonatomic) long long px_deprecatedInterfaceOrientation;
- (void)px_setNeedsImageModulationIntensityUpdate;	// IMP=0x00100000009dc5c8
@property(readonly, nonatomic) double px_imageModulationIntensity;
- (void)px_setNeedsHDRFocusUpdate;	// IMP=0x00100000009dc5b9
@property(readonly, nonatomic) double px_HDRFocus;
@property(readonly, nonatomic) PXImageModulationManager *px_imageModulationManager;
- (void)px_enableImageModulation;	// IMP=0x00100000009dc591
@property(readonly, nonatomic) struct CGSize px_windowReferenceSize;
@property(readonly, nonatomic) struct CGSize px_referenceSize;
- (void)px_setOneUpPresentationProxy:(id)arg1;	// IMP=0x0010000000b81262
- (id)px_oneUpPresentationProxy;	// IMP=0x0010000000b81251
- (void)_pxswizzled_oneUpPresentation_viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000b811bc
- (void)_pxswizzled_oneUpPresentation_viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000b81127
- (void)_pxswizzled_oneUpPresentation_viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000b81080
- (void)_pxswizzled_oneUpPresentation_viewIsAppearing:(_Bool)arg1;	// IMP=0x0010000000b80fe9
- (void)_pxswizzled_oneUpPresentation_viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000b80f52
@property(nonatomic, setter=px_setOneUpPresentationStyle:) long long px_oneUpPresentationStyle;
@property(readonly, nonatomic) PXOneUpPresentation *px_oneUpPresentation;
- (void)px_enableOneUpPresentationFromViewController:(id)arg1;	// IMP=0x0010000000b80c2c
- (void)px_enableOneUpPresentation;	// IMP=0x0010000000b80bc5
@property(readonly, nonatomic) PXProgrammaticNavigationDestination *px_navigationDestination;
- (void)_px_prepareNavigationFromViewController:(id)arg1 routingOptions:(unsigned long long)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000c1e6f9
- (void)provideViewControllersForDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000c1e6dd
- (void)_navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000c1e4ae
- (id)_nextExistingViewControllerOnRouteToDestination:(id)arg1;	// IMP=0x0010000000c1e415
- (id)_nextExistingParticipantOnRouteToDestination:(id)arg1;	// IMP=0x0010000000c1e2aa
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000c1e1f7
- (id)nextExistingParticipantOnRouteToDestination:(id)arg1;	// IMP=0x0010000000c1e16a
- (unsigned long long)routingOptionsForDestination:(id)arg1;	// IMP=0x0010000000c1e0f3
- (void)px_navigateToStateAllowingTabSwitchingWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000c1e0de
- (void)px_dismissPresentedViewControllerWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000c1df75
- (id)px_forwardingNavigationParticipantForDestination:(id)arg1;	// IMP=0x0010000000c1df6d
- (id)px_splitViewController;	// IMP=0x0010000000de6017

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=px_isVisible) _Bool px_visible;
@property(readonly) Class superclass;
@end

