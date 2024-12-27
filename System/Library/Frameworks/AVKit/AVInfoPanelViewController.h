//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class AVInfoMenuController, AVInfoPanelAudioViewController, AVInfoPanelContentViewController, AVInfoPanelDescriptionViewController, AVInfoPanelMetadataViewController, AVInfoPanelNavigationCollectionViewController, AVInfoPanelSubtitlesViewController, AVNowPlayingInfoHintView, AVUnifiedPlayerNavigationContentViewController, NSArray, NSLayoutConstraint, NSString, UIView, UIVisualEffectView, _UIVisualEffectBackdropView;
@protocol AVInfoPanelViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface AVInfoPanelViewController : UIViewController
{
    AVInfoMenuController *_tabBarController;	// 8 = 0x8
    AVInfoPanelMetadataViewController *_metadataViewController;	// 16 = 0x10
    AVInfoPanelSubtitlesViewController *_subtitlesViewController;	// 24 = 0x18
    AVInfoPanelAudioViewController *_audioViewController;	// 32 = 0x20
    AVUnifiedPlayerNavigationContentViewController *_navigationViewController;	// 40 = 0x28
    UIVisualEffectView *_tabBarBackgroundView;	// 48 = 0x30
    _UIVisualEffectBackdropView *_infoPanelCaptureView;	// 56 = 0x38
    NSLayoutConstraint *_infoPanelCaptureViewHeightConstraint;	// 64 = 0x40
    _Bool _panelContentIsFocused;	// 72 = 0x48
    AVInfoPanelContentViewController *_lastDidShowNotificationPanel;	// 80 = 0x50
    NSArray *_customViewControllers;	// 88 = 0x58
    AVNowPlayingInfoHintView *_infoHintView;	// 96 = 0x60
    id <AVInfoPanelViewControllerDelegate> _delegate;	// 104 = 0x68
    long long _dismissalReason;	// 112 = 0x70
    CDUnknownBlockType _preferredViewControllerIdentifierProvider;	// 120 = 0x78
}

+ (double)_automaticDismissalTimeout;	// IMP=0x0010000000054232
- (void).cxx_destruct;	// IMP=0x0000000000053dd6
@property(copy, nonatomic) CDUnknownBlockType preferredViewControllerIdentifierProvider; // @synthesize preferredViewControllerIdentifierProvider=_preferredViewControllerIdentifierProvider;
@property(readonly, nonatomic) long long dismissalReason; // @synthesize dismissalReason=_dismissalReason;
@property(nonatomic) __weak id <AVInfoPanelViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) AVNowPlayingInfoHintView *infoHintView; // @synthesize infoHintView=_infoHintView;
@property(retain, nonatomic) NSArray *customViewControllers; // @synthesize customViewControllers=_customViewControllers;
@property(readonly) AVInfoPanelSubtitlesViewController *subtitlesViewController; // @synthesize subtitlesViewController=_subtitlesViewController;
@property(readonly) AVInfoPanelAudioViewController *audioViewController; // @synthesize audioViewController=_audioViewController;
- (void)selectViewControllerWithIdentifier:(id)arg1;	// IMP=0x0000000000053a4b
- (void)_playPauseButtonGestureDetected:(id)arg1;	// IMP=0x00000000000539d2
- (void)_menuButtonGestureDetected:(id)arg1;	// IMP=0x000000000005391c
- (void)_upArrowGestureDetected:(id)arg1;	// IMP=0x0000000000053866
- (void)_swipeUpGestureDetected:(id)arg1;	// IMP=0x00000000000537b0
- (void)_dismissForTimeout:(_Bool)arg1;	// IMP=0x0000000000053492
- (void)_dismissForTimeoutNSNumber:(id)arg1;	// IMP=0x000000000005345e
- (void)_cancelDismissTimer;	// IMP=0x00000000000533fd
- (void)_setupTabs;	// IMP=0x0000000000053002
- (id)_findWrapperForCustomViewController:(id)arg1;	// IMP=0x0000000000052f4b
- (void)infoMenuControllerDidSwipeUp:(id)arg1;	// IMP=0x0000000000052f37
- (void)infoMenuController:(id)arg1 didSelectViewController:(id)arg2;	// IMP=0x0000000000052eb5
- (void)infoMenuController:(id)arg1 willSelectViewController:(id)arg2;	// IMP=0x0000000000052e57
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000052b36
- (void)postInfoViewDidChangeNotification;	// IMP=0x0000000000052a21
- (void)postDidHideInfoView;	// IMP=0x00000000000529d8
- (void)postWillShowInfoView:(id)arg1;	// IMP=0x0000000000052989
- (void)_postNotification:(id)arg1 forInfoView:(id)arg2;	// IMP=0x00000000000527a7
- (void)recalculateVisibleTabs;	// IMP=0x0000000000052795
- (void)recalculateContentHeight;	// IMP=0x0000000000052778
@property(nonatomic, getter=isContentHidden) _Bool contentHidden;
- (void)setContentHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000524d6
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly, nonatomic) struct CGRect viewBoundsOccluded;
@property(readonly, nonatomic) UIView *panelContainerView;
@property(nonatomic) _Bool suppressDescriptionSubpanel;
@property(readonly) AVInfoPanelNavigationCollectionViewController *navigationViewController;
@property(readonly) AVInfoPanelDescriptionViewController *descriptionViewController;
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000051dfb
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000051afd
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000005180a
- (void)viewDidLoad;	// IMP=0x0000000000050ef1
- (void)dealloc;	// IMP=0x0000000000050ea9
- (id)init;	// IMP=0x0000000000050d65

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

