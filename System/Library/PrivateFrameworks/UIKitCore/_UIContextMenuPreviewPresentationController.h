//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIPresentationController.h"

@class UIView, _UIContextMenuStyle;
@protocol _UIContextMenuPreviewPresentationControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIContextMenuPreviewPresentationController : UIPresentationController
{
    _Bool _platterContentSizeDidChange;	// 8 = 0x8
    UIView *_viewForRemoteTextEffectsWindowMatchAnimation;	// 16 = 0x10
    id <_UIContextMenuPreviewPresentationControllerDelegate> _menuPresentationDelegate;	// 24 = 0x18
    _UIContextMenuStyle *_menuStyle;	// 32 = 0x20
    struct CGSize _platterContentSize;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000f7275b
@property(nonatomic) _Bool platterContentSizeDidChange; // @synthesize platterContentSizeDidChange=_platterContentSizeDidChange;
@property(nonatomic) struct CGSize platterContentSize; // @synthesize platterContentSize=_platterContentSize;
@property(retain, nonatomic) _UIContextMenuStyle *menuStyle; // @synthesize menuStyle=_menuStyle;
@property(nonatomic) __weak id <_UIContextMenuPreviewPresentationControllerDelegate> menuPresentationDelegate; // @synthesize menuPresentationDelegate=_menuPresentationDelegate;
- (id)_viewForRemoteTextEffectsWindowMatchAnimation;	// IMP=0x0000000000f726a0
- (id)_traitCollectionForChildEnvironment:(id)arg1;	// IMP=0x0000000000f72414
- (void)_updatePlatterContentSizeWithPreferredContentSize:(struct CGSize)arg1;	// IMP=0x0000000000f71c56
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x0000000000f71b7f
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x0000000000f71aef
- (void)menuDidPresentWithContentPlatterView:(id)arg1;	// IMP=0x0000000000f71adb
- (void)menuLayoutDidProducePreviewSize:(struct CGSize)arg1;	// IMP=0x0000000000f71926
- (id)preferredFocusEnvironments;	// IMP=0x0000000000f71811
- (void)dismissalTransitionWillBegin;	// IMP=0x0000000000f717a4
- (void)presentationTransitionWillBegin;	// IMP=0x0000000000f71557
- (struct UIEdgeInsets)_baseContentInsetsWithLeftMargin:(double *)arg1 rightMargin:(double *)arg2;	// IMP=0x0000000000f71512
- (long long)presentationStyle;	// IMP=0x0000000000f71507
- (_Bool)_wantsAutomaticFirstResponderWhenPresentingRemoteViewController;	// IMP=0x0000000000f71490
- (_Bool)_shouldRestoreFirstResponder;	// IMP=0x0000000000f71488
- (_Bool)_shouldKeepCurrentFirstResponder;	// IMP=0x0000000000f71480
- (_Bool)_shouldPreserveFirstResponder;	// IMP=0x0000000000f71478
- (_Bool)_shouldOccludeDuringPresentation;	// IMP=0x0000000000f71470
- (_Bool)_shouldDisableInteractionDuringTransitions;	// IMP=0x0000000000f71468
- (struct CGRect)frameOfPresentedViewInContainerView;	// IMP=0x0000000000f71411

@end

