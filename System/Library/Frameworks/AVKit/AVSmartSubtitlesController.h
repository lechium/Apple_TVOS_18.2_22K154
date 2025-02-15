//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVObservationController, AVPlayerController;
@protocol AVSmartSubtitlesControllerDelegate;

__attribute__((visibility("hidden")))
@interface AVSmartSubtitlesController : NSObject
{
    _Bool _subtitlesOnMuteActive;	// 8 = 0x8
    _Bool _didToggleCaptionsOn;	// 9 = 0x9
    _Bool _playerMuted;	// 10 = 0xa
    id <AVSmartSubtitlesControllerDelegate> _delegate;	// 16 = 0x10
    AVPlayerController *_playerController;	// 24 = 0x18
    double _currentSkipBackTimeInterval;	// 32 = 0x20
    double _lastSeekTime;	// 40 = 0x28
    double _skipBackSeekDelta;	// 48 = 0x30
    double _timeOfSeekStart;	// 56 = 0x38
    double _timeCaptionsWereToggledOn;	// 64 = 0x40
    double _timePBToggledCaptions;	// 72 = 0x48
    long long _state;	// 80 = 0x50
    AVObservationController *_smartSubtitlesControllerKVO;	// 88 = 0x58
    id _playerTimeObserver;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000001383c9
@property(nonatomic) _Bool playerMuted; // @synthesize playerMuted=_playerMuted;
@property(nonatomic) _Bool didToggleCaptionsOn; // @synthesize didToggleCaptionsOn=_didToggleCaptionsOn;
@property(retain, nonatomic) id playerTimeObserver; // @synthesize playerTimeObserver=_playerTimeObserver;
@property(retain, nonatomic) AVObservationController *smartSubtitlesControllerKVO; // @synthesize smartSubtitlesControllerKVO=_smartSubtitlesControllerKVO;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) double timePBToggledCaptions; // @synthesize timePBToggledCaptions=_timePBToggledCaptions;
@property(nonatomic) double timeCaptionsWereToggledOn; // @synthesize timeCaptionsWereToggledOn=_timeCaptionsWereToggledOn;
@property(nonatomic) double timeOfSeekStart; // @synthesize timeOfSeekStart=_timeOfSeekStart;
@property(nonatomic) double skipBackSeekDelta; // @synthesize skipBackSeekDelta=_skipBackSeekDelta;
@property(nonatomic) double lastSeekTime; // @synthesize lastSeekTime=_lastSeekTime;
@property(nonatomic) double currentSkipBackTimeInterval; // @synthesize currentSkipBackTimeInterval=_currentSkipBackTimeInterval;
@property(nonatomic, getter=isSubtitlesOnMuteActive) _Bool subtitlesOnMuteActive; // @synthesize subtitlesOnMuteActive=_subtitlesOnMuteActive;
@property(retain, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
@property(nonatomic) __weak id <AVSmartSubtitlesControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_toggleCaptions:(_Bool)arg1;	// IMP=0x0000000000138242
- (void)__transitionToDisplayingCaptionsIfAble;	// IMP=0x0000000000138041
- (void)_performSkipBackDelegateCallback;	// IMP=0x0000000000137f16
- (void)userRequestedSmartSubtitlesHiddenIfActive;	// IMP=0x0000000000137ec5
- (void)userRequestedSeekWithTimeInterval:(double)arg1;	// IMP=0x0000000000137c21
- (void)updatePlayerVolumeToPlayerMuted:(_Bool)arg1;	// IMP=0x0000000000137be0
@property(readonly, nonatomic) _Bool smartSubtitlesActive;
- (void)invalidate;	// IMP=0x00000000001370c2
- (void)dealloc;	// IMP=0x0000000000137084
- (id)init;	// IMP=0x0000000000137017

@end

