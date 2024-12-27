//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class AVPlayer, HBUIPlayerView, HBUIPlayerVolumeAnimator, NSString, NSTimer, TVImageProxy, TVSStateMachine, UIImageView;
@protocol HBUITopShelfParadeBackgroundViewControllerDelegate, HBUITopShelfParadeItem;

__attribute__((visibility("hidden")))
@interface HBUITopShelfParadeVideoBackgroundViewController : UIViewController
{
    _Bool _isCenterViewController;	// 8 = 0x8
    _Bool _audioPlaybackAllowed;	// 9 = 0x9
    _Bool _contentOccluded;	// 10 = 0xa
    _Bool _preventsDisplaySleepDuringPreviewVideoPlayback;	// 11 = 0xb
    _Bool _delaysVideoPlayback;	// 12 = 0xc
    id <HBUITopShelfParadeItem> _paradeItem;	// 16 = 0x10
    id <HBUITopShelfParadeBackgroundViewControllerDelegate> _delegate;	// 24 = 0x18
    TVSStateMachine *_stateMachine;	// 32 = 0x20
    UIImageView *_bumperImageView;	// 40 = 0x28
    HBUIPlayerView *_bumperCinemagraphView;	// 48 = 0x30
    HBUIPlayerView *_previewVideoView;	// 56 = 0x38
    AVPlayer *_bumperCinemagraphPlayer;	// 64 = 0x40
    AVPlayer *_previewVideoPlayer;	// 72 = 0x48
    HBUIPlayerVolumeAnimator *_previewVideoVolumeAnimator;	// 80 = 0x50
    TVImageProxy *_bumperImageProxy;	// 88 = 0x58
    NSTimer *_beforePreviewVideoTimer;	// 96 = 0x60
    NSTimer *_previewVideoTimeoutTimer;	// 104 = 0x68
    NSTimer *_afterPreviewVideoTimer;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000026913
@property(retain, nonatomic, getter=_afterPreviewVideoTimer, setter=_setAfterPreviewVideoTimer:) NSTimer *afterPreviewVideoTimer; // @synthesize afterPreviewVideoTimer=_afterPreviewVideoTimer;
@property(retain, nonatomic, getter=_previewVideoTimeoutTimer, setter=_setPreviewVideoTimeoutTimer:) NSTimer *previewVideoTimeoutTimer; // @synthesize previewVideoTimeoutTimer=_previewVideoTimeoutTimer;
@property(retain, nonatomic, getter=_beforePreviewVideoTimer, setter=_setBeforePreviewVideoTimer:) NSTimer *beforePreviewVideoTimer; // @synthesize beforePreviewVideoTimer=_beforePreviewVideoTimer;
@property(retain, nonatomic, getter=_bumperImageProxy, setter=_setBumperImageProxy:) TVImageProxy *bumperImageProxy; // @synthesize bumperImageProxy=_bumperImageProxy;
@property(readonly, nonatomic) HBUIPlayerVolumeAnimator *previewVideoVolumeAnimator; // @synthesize previewVideoVolumeAnimator=_previewVideoVolumeAnimator;
@property(readonly, nonatomic, getter=_previewVideoPlayer) AVPlayer *previewVideoPlayer; // @synthesize previewVideoPlayer=_previewVideoPlayer;
@property(readonly, nonatomic, getter=_bumperCinemagraphPlayer) AVPlayer *bumperCinemagraphPlayer; // @synthesize bumperCinemagraphPlayer=_bumperCinemagraphPlayer;
@property(readonly, nonatomic, getter=_previewVideoView) HBUIPlayerView *previewVideoView; // @synthesize previewVideoView=_previewVideoView;
@property(readonly, nonatomic, getter=_bumperCinemagraphView) HBUIPlayerView *bumperCinemagraphView; // @synthesize bumperCinemagraphView=_bumperCinemagraphView;
@property(readonly, nonatomic, getter=_bumperImageView) UIImageView *bumperImageView; // @synthesize bumperImageView=_bumperImageView;
@property(readonly, nonatomic, getter=_stateMachine) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(nonatomic) _Bool delaysVideoPlayback; // @synthesize delaysVideoPlayback=_delaysVideoPlayback;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,V_delaysVideoPlayback

@property(nonatomic) _Bool preventsDisplaySleepDuringPreviewVideoPlayback; // @synthesize preventsDisplaySleepDuringPreviewVideoPlayback=_preventsDisplaySleepDuringPreviewVideoPlayback;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,V_preventsDisplaySleepDuringPreviewVideoPlayback

@property(nonatomic, getter=isContentOccluded) _Bool contentOccluded; // @synthesize contentOccluded=_contentOccluded;
@property(nonatomic) __weak id <HBUITopShelfParadeBackgroundViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <HBUITopShelfParadeItem> paradeItem; // @synthesize paradeItem=_paradeItem;
@property(nonatomic, getter=isAudioPlaybackAllowed) _Bool audioPlaybackAllowed; // @synthesize audioPlaybackAllowed=_audioPlaybackAllowed;
@property(nonatomic) _Bool isCenterViewController; // @synthesize isCenterViewController=_isCenterViewController;
@property(readonly, nonatomic) long long contentState;
- (void)prepareForReuse;	// IMP=0x0000000000025f86
- (_Bool)_shouldPlayAudio;	// IMP=0x0000000000025ee1
- (void)_updatePreviewVideoPlayerVolume:(_Bool)arg1;	// IMP=0x0000000000025d25
- (void)_handleDidBecomeActiveNotification:(id)arg1;	// IMP=0x0000000000025ca2
- (void)_handleSecondaryAudioNotification:(id)arg1;	// IMP=0x0000000000025a4c
- (void)_handleInterruptionNotification:(id)arg1;	// IMP=0x00000000000257b8
- (void)_notifyDelegateDidFinish;	// IMP=0x000000000002577c
- (void)_notifyDelegateDidStartPlaying;	// IMP=0x0000000000025725
- (void)_notifyDelegateContentStateDidChange;	// IMP=0x00000000000256ce
- (void)_reset:(_Bool)arg1;	// IMP=0x000000000002565c
- (void)_scheduleAfterPreviewVideoTimer;	// IMP=0x00000000000254eb
- (void)_schedulePreviewVideoTimeoutTimer;	// IMP=0x0000000000025394
- (void)_scheduleBeforePreviewVideoTimer;	// IMP=0x0000000000025223
- (void)_setBumperContentViewsHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000250cc
- (void)_createStateMachine;	// IMP=0x0000000000023c1d
- (void)_playerItemDidPlayToEndTime:(id)arg1;	// IMP=0x00000000000237b4
- (void)viewDidLoad;	// IMP=0x0000000000023179
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000022fb7
- (void)dealloc;	// IMP=0x0000000000022f40

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

