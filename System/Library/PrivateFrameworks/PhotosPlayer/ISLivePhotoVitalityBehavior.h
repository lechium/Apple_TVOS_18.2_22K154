//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol ISLivePhotoVitalityBehaviorDelegate;

__attribute__((visibility("hidden")))
@interface ISLivePhotoVitalityBehavior
{
    id _easeOutObserver;	// 8 = 0x8
    id _transitionToPhotoObserver;	// 16 = 0x10
    _Bool _pauseDuringTransition;	// 24 = 0x18
    _Bool _prepared;	// 25 = 0x19
    _Bool _playing;	// 26 = 0x1a
    _Bool _playingBeyondPhoto;	// 27 = 0x1b
    _Bool _preparing;	// 28 = 0x1c
    _Bool __shouldPlayAfterPreparation;	// 29 = 0x1d
    float _playRate;	// 32 = 0x20
    double _photoTransitionDuration;	// 40 = 0x28
    unsigned long long _assetOptions;	// 48 = 0x30
    CDStruct_1b6d18a9 _playbackEndTime;	// 56 = 0x38
    CDStruct_1b6d18a9 _playDuration;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000001391c
@property(nonatomic, setter=_setShouldPlayAfterPreparation:) _Bool _shouldPlayAfterPreparation; // @synthesize _shouldPlayAfterPreparation=__shouldPlayAfterPreparation;
@property(nonatomic, getter=_isPreparing, setter=_setPreparing:) _Bool preparing; // @synthesize preparing=_preparing;
@property(nonatomic, getter=isPlayingBeyondPhoto, setter=_setPlayingBeyondPhoto:) _Bool playingBeyondPhoto; // @synthesize playingBeyondPhoto=_playingBeyondPhoto;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic, getter=isPrepared, setter=_setPrepared:) _Bool prepared; // @synthesize prepared=_prepared;
@property(readonly, nonatomic) float playRate; // @synthesize playRate=_playRate;
@property(readonly, nonatomic) unsigned long long assetOptions; // @synthesize assetOptions=_assetOptions;
@property(readonly, nonatomic) _Bool pauseDuringTransition; // @synthesize pauseDuringTransition=_pauseDuringTransition;
@property(readonly, nonatomic) double photoTransitionDuration; // @synthesize photoTransitionDuration=_photoTransitionDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 playDuration; // @synthesize playDuration=_playDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 playbackEndTime; // @synthesize playbackEndTime=_playbackEndTime;
- (void)cancelSettleToPhoto;	// IMP=0x0000000000013773
- (void)_didReachTransitionToPhotoTime;	// IMP=0x000000000001351e
- (void)_didReachTransitionTime;	// IMP=0x0000000000013403
- (void)_startVideoPlayback;	// IMP=0x00000000000132d7
- (void)videoReadyForDisplayDidChange;	// IMP=0x000000000001326e
- (void)playVitality;	// IMP=0x00000000000131dd
- (long long)behaviorType;	// IMP=0x00000000000131d2
- (void)_handleDidFinishPreroll;	// IMP=0x0000000000013179
- (void)_handleDidSeekToStartTime;	// IMP=0x0000000000013059
- (void)_stopObservingVideo;	// IMP=0x0000000000012fbc
- (void)_startObservingVideo;	// IMP=0x0000000000012b65
- (void)prepareForVitality;	// IMP=0x00000000000128ac
- (void)activeDidChange;	// IMP=0x0000000000012812
- (id)initWithInitialLayoutInfo:(id)arg1 playbackEndTime:(CDStruct_1b6d18a9)arg2 playDuration:(CDStruct_1b6d18a9)arg3 playRate:(float)arg4 photoTransitionDuration:(double)arg5 pauseDuringTransition:(_Bool)arg6 assetOptions:(unsigned long long)arg7;	// IMP=0x000000000001275a
- (void)dealloc;	// IMP=0x000000000001269d

// Remaining properties
@property(nonatomic) __weak id <ISLivePhotoVitalityBehaviorDelegate> delegate; // @dynamic delegate;

@end

