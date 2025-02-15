//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, TVPPlayheadView, TVPProgressBarView, TVPSpinnerView, TVPTimeRange, TVPVideoNowPlayingDimmingView, UIColor, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface TVPTransportBarView : UIView
{
    UIView *_backwardAccessoryView;	// 8 = 0x8
    UIImageView *_backwardTrackMask;	// 16 = 0x10
    UIImageView *_backwardTimeSkipMask;	// 24 = 0x18
    UILabel *_backwardTimeSkipLabel;	// 32 = 0x20
    UIImageView *_backwardScanningMask;	// 40 = 0x28
    long long _backwardAccessoryType;	// 48 = 0x30
    UIView *_forwardAccessoryView;	// 56 = 0x38
    UIImageView *_forwardTrackMask;	// 64 = 0x40
    UIImageView *_forwardTimeSkipMask;	// 72 = 0x48
    UILabel *_forwardTimeSkipLabel;	// 80 = 0x50
    UIImageView *_forwardScanningMask;	// 88 = 0x58
    long long _forwardAccessoryType;	// 96 = 0x60
    long long _interactionMode;	// 104 = 0x68
    _Bool _elapsedLabelOverlapsPaused;	// 112 = 0x70
    TVPSpinnerView *_spinner;	// 120 = 0x78
    _Bool _enabled;	// 128 = 0x80
    _Bool _shouldShowLoadingAccessory;	// 129 = 0x81
    _Bool _alternateElapsedTimeAccessoryIsInScrubMode;	// 130 = 0x82
    _Bool _shouldUseAlternateElapsedTimeAccessory;	// 131 = 0x83
    float _playerHeadShadowOpacity;	// 132 = 0x84
    NSString *_bottomTitle;	// 136 = 0x88
    double _playbackProgress;	// 144 = 0x90
    TVPTimeRange *_bufferedRange;	// 152 = 0x98
    double _playbackStartLocation;	// 160 = 0xa0
    UIColor *_playerHeadColor;	// 168 = 0xa8
    TVPProgressBarView *_progressBarView;	// 176 = 0xb0
    TVPVideoNowPlayingDimmingView *_dimmingView;	// 184 = 0xb8
    UIView *_labelContainer;	// 192 = 0xc0
    UILabel *_leftEdgeLabel;	// 200 = 0xc8
    UILabel *_rightEdgeLabel;	// 208 = 0xd0
    UILabel *_elapsedTimeLabel;	// 216 = 0xd8
    UIView *_alternateElapsedTimeAccessory;	// 224 = 0xe0
    TVPPlayheadView *_playerHead;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x000000000004bbc4
@property(retain, nonatomic) TVPPlayheadView *playerHead; // @synthesize playerHead=_playerHead;
@property(retain, nonatomic) UIView *alternateElapsedTimeAccessory; // @synthesize alternateElapsedTimeAccessory=_alternateElapsedTimeAccessory;
@property(nonatomic) _Bool shouldUseAlternateElapsedTimeAccessory; // @synthesize shouldUseAlternateElapsedTimeAccessory=_shouldUseAlternateElapsedTimeAccessory;
@property(nonatomic) _Bool alternateElapsedTimeAccessoryIsInScrubMode; // @synthesize alternateElapsedTimeAccessoryIsInScrubMode=_alternateElapsedTimeAccessoryIsInScrubMode;
@property(retain, nonatomic) UILabel *elapsedTimeLabel; // @synthesize elapsedTimeLabel=_elapsedTimeLabel;
@property(retain, nonatomic) UILabel *rightEdgeLabel; // @synthesize rightEdgeLabel=_rightEdgeLabel;
@property(retain, nonatomic) UILabel *leftEdgeLabel; // @synthesize leftEdgeLabel=_leftEdgeLabel;
@property(retain, nonatomic) UIView *labelContainer; // @synthesize labelContainer=_labelContainer;
@property(retain, nonatomic) TVPVideoNowPlayingDimmingView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(nonatomic) _Bool shouldShowLoadingAccessory; // @synthesize shouldShowLoadingAccessory=_shouldShowLoadingAccessory;
@property(retain, nonatomic) TVPProgressBarView *progressBarView; // @synthesize progressBarView=_progressBarView;
@property(nonatomic) long long backwardAccessoryType; // @synthesize backwardAccessoryType=_backwardAccessoryType;
@property(nonatomic) long long forwardAccessoryType; // @synthesize forwardAccessoryType=_forwardAccessoryType;
@property(nonatomic) float playerHeadShadowOpacity; // @synthesize playerHeadShadowOpacity=_playerHeadShadowOpacity;
@property(retain, nonatomic) UIColor *playerHeadColor; // @synthesize playerHeadColor=_playerHeadColor;
@property(nonatomic) double playbackStartLocation; // @synthesize playbackStartLocation=_playbackStartLocation;
@property(retain, nonatomic) TVPTimeRange *bufferedRange; // @synthesize bufferedRange=_bufferedRange;
@property(nonatomic) double playbackProgress; // @synthesize playbackProgress=_playbackProgress;
@property(copy, nonatomic) NSString *bottomTitle; // @synthesize bottomTitle=_bottomTitle;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)_updateUserInteractionEnabled;	// IMP=0x000000000004b977
- (void)setLabelAlpha:(double)arg1;	// IMP=0x000000000004b928
@property(readonly, nonatomic) struct CGRect playerHeadFrame;
@property(nonatomic) double playerHeadAlpha;
@property(nonatomic) struct CGSize playerHeadSize;
- (id)createProgressBarView;	// IMP=0x000000000004b697
- (double)dimmingAlpha;	// IMP=0x000000000004b689
- (void)setInteractionMode:(long long)arg1;	// IMP=0x000000000004b045
@property(readonly, nonatomic) double presentedPlaybackProgress;
@property(copy, nonatomic) NSString *elapsedTimeTitle;
@property(copy, nonatomic) NSString *rightEdgeTitle;
@property(copy, nonatomic) NSString *leftEdgeTitle;
- (struct CGRect)playerHeadFrameForRect:(struct CGRect)arg1;	// IMP=0x0000000000049fac
- (void)layoutSubviews;	// IMP=0x0000000000049334
- (void)updateProgressBarPlayheadLocations;	// IMP=0x0000000000049166
- (id)timeFont;	// IMP=0x0000000000048f5e
@property(nonatomic) _Bool dimsWithGradient;
@property(nonatomic) _Bool dimsEntireBounds;
- (id)initWithPlayer:(id)arg1 frame:(struct CGRect)arg2;	// IMP=0x0000000000047d45
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000047d31

@end

