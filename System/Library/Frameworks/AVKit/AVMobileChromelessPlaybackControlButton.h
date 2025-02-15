//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVMicaPackage, AVMobileChromelessControlsStyleSheet, NSString, UIView, UIViewPropertyAnimator;

__attribute__((visibility("hidden")))
@interface AVMobileChromelessPlaybackControlButton
{
    unsigned long long _playbackControlButtonType;	// 8 = 0x8
    UIView *_highlightView;	// 16 = 0x10
    UIViewPropertyAnimator *_highlightAnimator;	// 24 = 0x18
    _Bool _isPreparingMicaPackage;	// 32 = 0x20
    AVMobileChromelessControlsStyleSheet *_styleSheet;	// 40 = 0x28
    NSString *_playbackControlButtonIconState;	// 48 = 0x30
    AVMicaPackage *_playPauseButtonMicaPackage;	// 56 = 0x38
    UIView *_playPauseButtonMicaPackageContainerView;	// 64 = 0x40
}

+ (id)buttonWithAccessibilityIdentifier:(id)arg1 withStyleSheet:(id)arg2 withPlaybackControlButtonType:(unsigned long long)arg3;	// IMP=0x00600000000d15ad
+ (id)backwardSecondaryButtonWithStyleSheet:(id)arg1;	// IMP=0x00600000000d1584
+ (id)forwardSecondaryButtonWithStyleSheet:(id)arg1;	// IMP=0x00600000000d155b
+ (id)playPauseButtonWithStyleSheet:(id)arg1;	// IMP=0x00600000000d1535
- (void).cxx_destruct;	// IMP=0x00000000000d0e2a
@property(retain, nonatomic) UIView *playPauseButtonMicaPackageContainerView; // @synthesize playPauseButtonMicaPackageContainerView=_playPauseButtonMicaPackageContainerView;
@property(retain, nonatomic) AVMicaPackage *playPauseButtonMicaPackage; // @synthesize playPauseButtonMicaPackage=_playPauseButtonMicaPackage;
@property(retain, nonatomic) NSString *playbackControlButtonIconState; // @synthesize playbackControlButtonIconState=_playbackControlButtonIconState;
@property(retain, nonatomic) AVMobileChromelessControlsStyleSheet *styleSheet; // @synthesize styleSheet=_styleSheet;
- (void)_updateMicaPackage;	// IMP=0x00000000000d056e
- (id)_imageNameForMicaPackageState;	// IMP=0x00000000000d04db
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000d04ca
- (void)layoutSubviews;	// IMP=0x00000000000d019b
- (void)didMoveToWindow;	// IMP=0x00000000000d004d
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000000cfe71
- (id)pointerTargetView;	// IMP=0x00000000000cfdc3

@end

