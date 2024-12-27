//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE, NSString, UIView;

@interface _TtC15ConversationKit28InCallControlsViewController : UIViewController
{
    MISSING_TYPE *groupName;	// 8 = 0x8
    MISSING_TYPE *representedLegacyCallIdentifier;	// 24 = 0x18
    MISSING_TYPE *controlsButtonRowCount;	// 40 = 0x28
    MISSING_TYPE *tableViewSeparator;	// 48 = 0x30
    MISSING_TYPE *collectionViewController;	// 56 = 0x38
    MISSING_TYPE *localParticipant;	// 0 = 0x0
    MISSING_TYPE *viewContent;	// 0 = 0x0
    MISSING_TYPE *mode;	// 1744830475 = 0x6800000b
    MISSING_TYPE *gridLayoutStyle;	// 0 = 0x0
    MISSING_TYPE *topInset;	// 1651466079 = 0x626f5f5f
    MISSING_TYPE *isExpanded;	// 1936941420 = 0x7373616c
    MISSING_TYPE *audioIsEnabled;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *videoIsEnabled;	// 0 = 0x0
    MISSING_TYPE *isScreenSharing;	// 2048 = 0x800
    MISSING_TYPE *effectsAreAvailable;	// 5314608 = 0x511830
    MISSING_TYPE *effectsAreEnabled;	// 5314608 = 0x511830
    MISSING_TYPE *shouldShowLeaveButton;	// 0 = 0x0
    MISSING_TYPE *delegate;	// 2 = 0x2
    MISSING_TYPE *participantDelegate;	// 0 = 0x0
    MISSING_TYPE *participantsViewControllerDelegate;	// 1651466079 = 0x626f5f5f
    MISSING_TYPE *menuHostViewController;	// 1852339301 = 0x6e687465
}

- (void).cxx_destruct;	// IMP=0x00000000001d2aad
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000001d2a5c
- (id)accessibilityDisableVideoLabel;	// IMP=0x00000000001d29a8
- (id)accessibilityDisableVideoButton;	// IMP=0x00000000001d290e
- (id)accessibilityRouteLabel;	// IMP=0x00000000001d288b
- (id)accessibilityRouteButton;	// IMP=0x00000000001d2863
- (id)accessibilityMuteAudioLabel;	// IMP=0x00000000001d283b
- (id)accessibilityMuteAudioButton;	// IMP=0x00000000001d2813
- (id)accessibilityCameraLabel;	// IMP=0x00000000001d27eb
- (id)accessibilityCameraButton;	// IMP=0x00000000001d27c3
- (id)accessibilityEffectsLabel;	// IMP=0x00000000001d279b
- (id)accessibilityEffectsButton;	// IMP=0x00000000001d2773
- (id)accessibilityJoinLeaveButton;	// IMP=0x00000000001d274b
- (id)accessibilityHotdog;	// IMP=0x00000000001d272d
- (void)updateToRepresentLegacyCall:(id)arg1;	// IMP=0x00000000001d2695
- (void)updateAudioRouteButtonFor:(id)arg1;	// IMP=0x00000000001d263e
- (void)updateControlsVisibilityForExpandedState:(_Bool)arg1;	// IMP=0x00000000001d1ba0
- (void)didTapMuteButton:(id)arg1;	// IMP=0x00000000001d1b48
- (void)didTapScreenShareButton:(id)arg1;	// IMP=0x00000000001d1a63
- (void)didTapToggleCameraButton:(id)arg1;	// IMP=0x00000000001d1a0b
- (void)didTapJoinLeaveButton:(id)arg1;	// IMP=0x00000000001d19c0
- (void)didTapFlipCameraButton:(id)arg1;	// IMP=0x00000000001d17ea
- (void)didTapEffectsButton:(id)arg1;	// IMP=0x00000000001d179f
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000001d1599
- (void)viewDidLayoutSubviews;	// IMP=0x00000000001d156c
- (void)updateViewConstraints;	// IMP=0x00000000001d1515
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000001d1347
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x00000000001d126a
- (void)willMoveToParentViewController:(id)arg1;	// IMP=0x00000000001d079e
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000001d06d6
- (void)viewDidLoad;	// IMP=0x00000000001d063d
- (void)loadView;	// IMP=0x00000000001cee5a
- (void)embedEffectsBrowserViewController:(id)arg1;	// IMP=0x00000000001cdc4e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001cda77
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) UIView *audioButton;
@property(nonatomic) _Bool shouldShowLeaveButton; // @synthesize shouldShowLeaveButton;
@property(nonatomic) _Bool effectsAreEnabled; // @synthesize effectsAreEnabled;
@property(nonatomic) _Bool effectsAreAvailable; // @synthesize effectsAreAvailable;
@property(nonatomic) _Bool isScreenSharing; // @synthesize isScreenSharing;
@property(nonatomic) _Bool videoIsEnabled; // @synthesize videoIsEnabled;
@property(nonatomic) _Bool audioIsEnabled; // @synthesize audioIsEnabled;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded;
- (void)handleLegacyCallStatusDidChangeNotification:(id)arg1;	// IMP=0x00000000001d2dad
@property(nonatomic) _Bool videoButtonIsEnabled;

@end

