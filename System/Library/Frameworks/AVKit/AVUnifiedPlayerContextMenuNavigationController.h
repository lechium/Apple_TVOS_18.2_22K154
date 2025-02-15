//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UINavigationController.h>

@class AVUnifiedPlayerContextMenuWrappingView, NSIndexPath, NSString, UIMenu, UIView;
@protocol AVUnifiedPlayerContextMenuNavigationControllerDelegate, AVxOverlayInteractionAssistant, NSObject;

__attribute__((visibility("hidden")))
@interface AVUnifiedPlayerContextMenuNavigationController : UINavigationController
{
    _Bool _prefersExpandedDisplaySize;	// 8 = 0x8
    UIMenu *_menu;	// 16 = 0x10
    NSIndexPath *_sourceIndexPath;	// 24 = 0x18
    id <AVUnifiedPlayerContextMenuNavigationControllerDelegate> _menuDelegate;	// 32 = 0x20
    id <AVxOverlayInteractionAssistant> _interactionAssistant;	// 40 = 0x28
    id <NSObject> _didEnterBackgroundObservationToken;	// 48 = 0x30
    UIView *_sourceView;	// 56 = 0x38
}

+ (id)navigationControllerForPresentingViewController:(id)arg1 fromSourceView:(id)arg2 inCollectionView:(id)arg3;	// IMP=0x001000000013b683
+ (id)navigationControllerForPresentingMenu:(id)arg1 fromSourceView:(id)arg2 inCollectionView:(id)arg3;	// IMP=0x001000000013b5e5
- (void).cxx_destruct;	// IMP=0x000000000013b2ab
@property(readonly, nonatomic) __weak UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(readonly, nonatomic) id <NSObject> didEnterBackgroundObservationToken; // @synthesize didEnterBackgroundObservationToken=_didEnterBackgroundObservationToken;
@property(retain, nonatomic) id <AVxOverlayInteractionAssistant> interactionAssistant; // @synthesize interactionAssistant=_interactionAssistant;
@property(nonatomic) __weak id <AVUnifiedPlayerContextMenuNavigationControllerDelegate> menuDelegate; // @synthesize menuDelegate=_menuDelegate;
@property(copy, nonatomic) NSIndexPath *sourceIndexPath; // @synthesize sourceIndexPath=_sourceIndexPath;
@property(retain, nonatomic) UIMenu *menu; // @synthesize menu=_menu;
@property(nonatomic) _Bool prefersExpandedDisplaySize; // @synthesize prefersExpandedDisplaySize=_prefersExpandedDisplaySize;
- (void)_playPauseGesture:(id)arg1;	// IMP=0x000000000013b18d
- (void)_swipeRightGesture:(id)arg1;	// IMP=0x000000000013b131
- (void)_swipeLeftGesture:(id)arg1;	// IMP=0x000000000013b0d5
- (void)_installPlayPauseGestureRecognizer;	// IMP=0x000000000013b040
- (void)_installLateralMenuChangeGestureRecognizers;	// IMP=0x000000000013ae95
- (void)_didDismiss;	// IMP=0x000000000013ae59
- (void)_dismissAnimated:(_Bool)arg1;	// IMP=0x000000000013ae45
- (void)_dismissAnimated;	// IMP=0x000000000013ae2e
@property(readonly, nonatomic) AVUnifiedPlayerContextMenuWrappingView *visibleMenuView;
- (id)_visibleMenuViewController;	// IMP=0x000000000013acfe
- (void)contextMenuViewController:(id)arg1 didRequestDismissalAnimated:(_Bool)arg2;	// IMP=0x000000000013ac09
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000013ab38
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000013aa65
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;	// IMP=0x000000000013a7fe
@property(readonly, nonatomic) NSString *menuIdentifier;
- (void)updateMenu:(id)arg1;	// IMP=0x000000000013a6ab
- (struct CGRect)frameInView:(id)arg1;	// IMP=0x000000000013a5e7
- (void)viewDidLoad;	// IMP=0x000000000013a031
- (void)dealloc;	// IMP=0x0000000000139f6a
- (id)initWithSender:(id)arg1 inCollectionView:(id)arg2;	// IMP=0x0000000000139d34
- (id)containerViewControllerWithSourceCollectionView:(id)arg1;	// IMP=0x0000000000175111

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

