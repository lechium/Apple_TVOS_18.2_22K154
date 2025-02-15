//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIMediaShowcasingConfig : NSObject
{
    _Bool _backgroundMediaTransferEnabled;	// 8 = 0x8
    _Bool _rubberBandingEnabled;	// 9 = 0x9
    _Bool _carouselBehaviorEnabled;	// 10 = 0xa
    _Bool _autoAdvanceToNextPageEnabled;	// 11 = 0xb
    _Bool _parallaxEnabled;	// 12 = 0xc
    _Bool _gradientUsesImageColor;	// 13 = 0xd
    _Bool _allowsFullscreenMediaTransition;	// 14 = 0xe
    float _backgroundVolume;	// 16 = 0x10
    float _foregroundVolume;	// 20 = 0x14
    float _titleViewTransitionDistance;	// 24 = 0x18
    float _navigationBarTransitionDistance;	// 28 = 0x1c
    float _parallaxRatio;	// 32 = 0x20
    float _metadataFadeOutSpeed;	// 36 = 0x24
    float _metadataFadeInSpeed;	// 40 = 0x28
    float _swipeCompletionSpeedFactor;	// 44 = 0x2c
    float _sidebarOpenDuringAnimationThreshold;	// 48 = 0x30
    float _swipeSpeedFactor;	// 52 = 0x34
    double _playbackDelayInterval;	// 56 = 0x38
    double _animationTransitionDuration;	// 64 = 0x40
    double _backgroundMediaTransferAnimationDuration;	// 72 = 0x48
    double _backgroundMediaFullscreenTransitionDuration;	// 80 = 0x50
    double _volumeTransitionAnimationDuration;	// 88 = 0x58
    unsigned long long _numberOfVolumeIncrements;	// 96 = 0x60
    double _swipingEndAnimationDuration;	// 104 = 0x68
    double _autoSwipeAnimationDuration;	// 112 = 0x70
    double _advanceToNextPageDelayDuration;	// 120 = 0x78
    double _advanceToNextPageDelayDurationImageOnly;	// 128 = 0x80
    double _focusDebounceThreshold;	// 136 = 0x88
    double _itemHoverDelayDuration;	// 144 = 0x90
    double _hideMuteButtonDelayDuration;	// 152 = 0x98
    double _hidePageIndicatorsDelayDuration;	// 160 = 0xa0
}

@property(nonatomic) float swipeSpeedFactor; // @synthesize swipeSpeedFactor=_swipeSpeedFactor;
@property(nonatomic) float sidebarOpenDuringAnimationThreshold; // @synthesize sidebarOpenDuringAnimationThreshold=_sidebarOpenDuringAnimationThreshold;
@property(nonatomic) _Bool allowsFullscreenMediaTransition; // @synthesize allowsFullscreenMediaTransition=_allowsFullscreenMediaTransition;
@property(nonatomic) double hidePageIndicatorsDelayDuration; // @synthesize hidePageIndicatorsDelayDuration=_hidePageIndicatorsDelayDuration;
@property(nonatomic) double hideMuteButtonDelayDuration; // @synthesize hideMuteButtonDelayDuration=_hideMuteButtonDelayDuration;
@property(nonatomic) _Bool gradientUsesImageColor; // @synthesize gradientUsesImageColor=_gradientUsesImageColor;
@property(nonatomic) double itemHoverDelayDuration; // @synthesize itemHoverDelayDuration=_itemHoverDelayDuration;
@property(nonatomic) float swipeCompletionSpeedFactor; // @synthesize swipeCompletionSpeedFactor=_swipeCompletionSpeedFactor;
@property(nonatomic) double focusDebounceThreshold; // @synthesize focusDebounceThreshold=_focusDebounceThreshold;
@property(nonatomic) float metadataFadeInSpeed; // @synthesize metadataFadeInSpeed=_metadataFadeInSpeed;
@property(nonatomic) float metadataFadeOutSpeed; // @synthesize metadataFadeOutSpeed=_metadataFadeOutSpeed;
@property(nonatomic) float parallaxRatio; // @synthesize parallaxRatio=_parallaxRatio;
@property(nonatomic, getter=isParallaxEnabled) _Bool parallaxEnabled; // @synthesize parallaxEnabled=_parallaxEnabled;
@property(nonatomic) double advanceToNextPageDelayDurationImageOnly; // @synthesize advanceToNextPageDelayDurationImageOnly=_advanceToNextPageDelayDurationImageOnly;
@property(nonatomic) double advanceToNextPageDelayDuration; // @synthesize advanceToNextPageDelayDuration=_advanceToNextPageDelayDuration;
@property(nonatomic, getter=isAutoAdvanceToNextPageEnabled) _Bool autoAdvanceToNextPageEnabled; // @synthesize autoAdvanceToNextPageEnabled=_autoAdvanceToNextPageEnabled;
@property(nonatomic) float navigationBarTransitionDistance; // @synthesize navigationBarTransitionDistance=_navigationBarTransitionDistance;
@property(nonatomic) float titleViewTransitionDistance; // @synthesize titleViewTransitionDistance=_titleViewTransitionDistance;
@property(nonatomic) _Bool carouselBehaviorEnabled; // @synthesize carouselBehaviorEnabled=_carouselBehaviorEnabled;
@property(nonatomic) double autoSwipeAnimationDuration; // @synthesize autoSwipeAnimationDuration=_autoSwipeAnimationDuration;
@property(nonatomic) double swipingEndAnimationDuration; // @synthesize swipingEndAnimationDuration=_swipingEndAnimationDuration;
@property(nonatomic, getter=isRubberBandingEnabled) _Bool rubberBandingEnabled; // @synthesize rubberBandingEnabled=_rubberBandingEnabled;
@property(nonatomic) unsigned long long numberOfVolumeIncrements; // @synthesize numberOfVolumeIncrements=_numberOfVolumeIncrements;
@property(nonatomic) double volumeTransitionAnimationDuration; // @synthesize volumeTransitionAnimationDuration=_volumeTransitionAnimationDuration;
@property(nonatomic) double backgroundMediaFullscreenTransitionDuration; // @synthesize backgroundMediaFullscreenTransitionDuration=_backgroundMediaFullscreenTransitionDuration;
@property(nonatomic) double backgroundMediaTransferAnimationDuration; // @synthesize backgroundMediaTransferAnimationDuration=_backgroundMediaTransferAnimationDuration;
@property(nonatomic) _Bool backgroundMediaTransferEnabled; // @synthesize backgroundMediaTransferEnabled=_backgroundMediaTransferEnabled;
@property(nonatomic) float foregroundVolume; // @synthesize foregroundVolume=_foregroundVolume;
@property(nonatomic) float backgroundVolume; // @synthesize backgroundVolume=_backgroundVolume;
@property(nonatomic) double animationTransitionDuration; // @synthesize animationTransitionDuration=_animationTransitionDuration;
@property(nonatomic) double playbackDelayInterval; // @synthesize playbackDelayInterval=_playbackDelayInterval;
- (id)init;	// IMP=0x00000000001376ce

@end

