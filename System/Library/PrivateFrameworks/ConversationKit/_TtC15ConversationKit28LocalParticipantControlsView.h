//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE, UIControl;

@interface _TtC15ConversationKit28LocalParticipantControlsView : UIView
{
    MISSING_TYPE *effectsButton;	// 8 = 0x8
    MISSING_TYPE *cameraBlurButton;	// 16 = 0x10
    MISSING_TYPE *cinematicFramingButton;	// 24 = 0x18
    MISSING_TYPE *collapseButton;	// 32 = 0x20
    MISSING_TYPE *rotateButton;	// 40 = 0x28
    MISSING_TYPE *cameraFlipButton;	// 48 = 0x30
    MISSING_TYPE *reactionEffectGestureButton;	// 56 = 0x38
    MISSING_TYPE *studioLightButton;	// 64 = 0x40
    MISSING_TYPE *buttonStackView;	// 72 = 0x48
    MISSING_TYPE *$__lazy_storage_$_cameraBlurLabeledButton;	// 80 = 0x50
    MISSING_TYPE *$__lazy_storage_$_cinematicFramingLabeledButton;	// 88 = 0x58
    MISSING_TYPE *$__lazy_storage_$_studioLightLabeledButton;	// 96 = 0x60
    MISSING_TYPE *$__lazy_storage_$_reactionsEffectLabeledButton;	// 104 = 0x68
    MISSING_TYPE *$__lazy_storage_$_buttonsToLabeledButtons;	// 112 = 0x70
    MISSING_TYPE *infoLabel;	// 120 = 0x78
    MISSING_TYPE *$__lazy_storage_$_backdropShadowView;	// 128 = 0x80
    MISSING_TYPE *videoPauseButton;	// 136 = 0x88
    MISSING_TYPE *videoMessageControls;	// 144 = 0x90
    MISSING_TYPE *$__lazy_storage_$_videoMessageViewModel;	// 152 = 0x98
    MISSING_TYPE *callAgainHUDView;	// 160 = 0xa0
    MISSING_TYPE *$__lazy_storage_$_spinnerView;	// 168 = 0xa8
    MISSING_TYPE *currentConstraints;	// 176 = 0xb0
    MISSING_TYPE *delegate;	// 184 = 0xb8
    MISSING_TYPE *controlsLayoutGuide;	// 200 = 0xc8
    MISSING_TYPE *style;	// 208 = 0xd0
    MISSING_TYPE *viewModel;	// 147456 = 0x24000
    MISSING_TYPE *effectsSelected;	// 3 = 0x3
    MISSING_TYPE *blurEnabled;	// 6 = 0x6
    MISSING_TYPE *cinematicFramingIsEnabled;	// 1651466079 = 0x626f5f5f
    MISSING_TYPE *reactionEffectGestureIsEnabled;	// 7496054 = 0x726176
    MISSING_TYPE *studioLightIsEnabled;	// 1094999903 = 0x41445f5f
    MISSING_TYPE *isDisabled;	// 0 = 0x0
    MISSING_TYPE *_videoMessagingState;	// 0 = 0x0
    MISSING_TYPE *subscriptions;	// 5681152 = 0x56b000
    MISSING_TYPE *timerSink;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000030a4ac
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000030a477
- (void)menuButtonPressed:(id)arg1;	// IMP=0x000000000030a39b
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000030a2d8
- (void)handleShutterButtonTapped;	// IMP=0x000000000030a1db
- (void)close;	// IMP=0x0000000000309fe2
- (void)callBack;	// IMP=0x0000000000309e89
- (void)showCallDetails;	// IMP=0x0000000000309e4e
- (void)handleVideoMessageButtonTapped;	// IMP=0x0000000000309dbd
- (void)handleStudioLightTapped;	// IMP=0x0000000000309d85
- (void)handleReactionEffectGestureTapped;	// IMP=0x0000000000309d51
- (void)handleCameraFlipTapped;	// IMP=0x0000000000309d1d
- (void)handleRotateButtonTapped;	// IMP=0x0000000000309ce9
- (void)handleCollapseButtonTapped;	// IMP=0x0000000000309cb5
- (void)handleCameraBlurTapped;	// IMP=0x0000000000309c81
- (void)handleCinematicFramingTapped;	// IMP=0x0000000000309be2
- (void)handleEffectsTapped;	// IMP=0x0000000000309bae
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000309b04
- (void)layoutSubviews;	// IMP=0x0000000000308974
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000308077
- (id)init;	// IMP=0x0000000000307821
@property(nonatomic, readonly) UIControl *videoPauseButton; // @synthesize videoPauseButton;
@property(nonatomic, readonly) UIControl *studioLightButton; // @synthesize studioLightButton;
@property(nonatomic, readonly) UIControl *reactionEffectGestureButton; // @synthesize reactionEffectGestureButton;
@property(nonatomic, readonly) UIControl *cameraFlipButton; // @synthesize cameraFlipButton;
@property(nonatomic, readonly) UIControl *rotateButton; // @synthesize rotateButton;
@property(nonatomic, readonly) UIControl *collapseButton; // @synthesize collapseButton;
@property(nonatomic, readonly) UIControl *cinematicFramingButton; // @synthesize cinematicFramingButton;
@property(nonatomic, readonly) UIControl *cameraBlurButton; // @synthesize cameraBlurButton;
@property(nonatomic, readonly) UIControl *effectsButton; // @synthesize effectsButton;

@end

