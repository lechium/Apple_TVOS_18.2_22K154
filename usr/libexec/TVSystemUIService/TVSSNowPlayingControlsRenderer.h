//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSystemPanelUI/TVSPRenderer.h>

@class NSString, TVSSAudioNowPlayingController, TVSSNowPlayingControlBackward15Button, TVSSNowPlayingControlForward30Button, TVSSNowPlayingControlNextButton, TVSSNowPlayingControlPlayPauseButton, TVSSNowPlayingControlPreviousButton;

@interface TVSSNowPlayingControlsRenderer : TVSPRenderer
{
    TVSSAudioNowPlayingController *_nowPlayingController;	// 8 = 0x8
    TVSSNowPlayingControlPlayPauseButton *_playPauseButton;	// 16 = 0x10
    TVSSNowPlayingControlNextButton *_nextButton;	// 24 = 0x18
    TVSSNowPlayingControlPreviousButton *_previousButton;	// 32 = 0x20
    TVSSNowPlayingControlForward30Button *_forwardButton;	// 40 = 0x28
    TVSSNowPlayingControlBackward15Button *_backButton;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000062240
@property(readonly, nonatomic) TVSSNowPlayingControlBackward15Button *backButton; // @synthesize backButton=_backButton;
@property(readonly, nonatomic) TVSSNowPlayingControlForward30Button *forwardButton; // @synthesize forwardButton=_forwardButton;
@property(readonly, nonatomic) TVSSNowPlayingControlPreviousButton *previousButton; // @synthesize previousButton=_previousButton;
@property(readonly, nonatomic) TVSSNowPlayingControlNextButton *nextButton; // @synthesize nextButton=_nextButton;
@property(readonly, nonatomic) TVSSNowPlayingControlPlayPauseButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(readonly, nonatomic) TVSSAudioNowPlayingController *nowPlayingController; // @synthesize nowPlayingController=_nowPlayingController;
- (void)_updateControlsAvailability;	// IMP=0x0010000000061ee0
- (unsigned long long)packageStateForPlaybackState:(long long)arg1;	// IMP=0x0010000000061e10
- (void)nowPlayingState:(id)arg1 currentMediaItemDidChange:(id)arg2;	// IMP=0x0010000000061d90
- (void)nowPlayingState:(id)arg1 playbackStateDidChange:(long long)arg2;	// IMP=0x0010000000061d00
- (void)skipBackward;	// IMP=0x0010000000061c70
- (void)skipForward;	// IMP=0x0010000000061be0
- (void)previousTrack;	// IMP=0x0010000000061ba0
- (void)nextTrack;	// IMP=0x0010000000061b60
- (void)togglePlayPause;	// IMP=0x0010000000061b20
- (_Bool)isFocusable;	// IMP=0x0010000000061b00
- (_Bool)wantsFloatingContentView;	// IMP=0x0010000000061ae0
- (void)configureContentView:(id)arg1;	// IMP=0x0010000000060bb0
- (id)initWithIdentifier:(id)arg1 formatProvider:(id)arg2 content:(id)arg3 overrideStylings:(id)arg4;	// IMP=0x0010000000060970

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

