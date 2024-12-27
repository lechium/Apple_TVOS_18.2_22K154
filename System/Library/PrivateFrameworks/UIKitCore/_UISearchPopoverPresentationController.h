//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIPopoverPresentationController.h"

@class NSString, UIPresentationController, UIView, _UISearchPresentationAssistant;
@protocol _UISearchControllerPresenting;

__attribute__((visibility("hidden")))
@interface _UISearchPopoverPresentationController : UIPopoverPresentationController
{
    _UISearchPresentationAssistant *_assistant;	// 8 = 0x8
    struct CGRect finalFrameForContainerView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000001108902
@property(readonly, nonatomic) struct CGRect finalFrameForContainerView; // @synthesize finalFrameForContainerView;
@property(readonly, nonatomic) unsigned long long edgeForHidingNavigationBar;
@property(readonly, nonatomic) _Bool forceObeyNavigationBarInsets;
@property(readonly, nonatomic) _Bool animatorShouldLayoutPresentationViews;
@property(readonly, nonatomic) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController;
@property(readonly, nonatomic) double resultsControllerContentOffset;
@property(readonly, nonatomic) _Bool searchBarToBecomeTopAttached;
- (void)setContentVisible:(_Bool)arg1;	// IMP=0x0000000001108822
@property(readonly, nonatomic) double statusBarAdjustment;
@property(readonly, nonatomic) _Bool searchBarShouldClipToBounds;
@property(readonly, nonatomic) _Bool searchBarCanContainScopeBar;
@property(readonly, nonatomic) _Bool resultsUnderlapsSearchBar;
@property(readonly, nonatomic) _Bool shouldAccountForStatusBar;
@property(readonly, retain, nonatomic) UIView *searchBarContainerView;
- (_Bool)_forcePresentationInPresenterScene;	// IMP=0x00000000011087ab
- (id)_presentationControllerForTraitCollection:(id)arg1;	// IMP=0x00000000011086ed
- (id)_presentedViewControllerForSizeClassPair:(CDStruct_912cb5d2)arg1;	// IMP=0x00000000011086db
- (long long)adaptivePresentationStyle;	// IMP=0x00000000011086d0
- (void)_transitionFromDidEnd;	// IMP=0x00000000011086b9
- (void)_transitionFromWillBegin;	// IMP=0x00000000011086a7
- (void)_transitionToDidEnd;	// IMP=0x0000000001108690
- (void)_transitionToWillBegin;	// IMP=0x0000000001108655
- (void)presentationTransitionWillBegin;	// IMP=0x00000000011085d7
- (id)_popoverHostingWindow;	// IMP=0x00000000011084cd
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x0000000001108395

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

