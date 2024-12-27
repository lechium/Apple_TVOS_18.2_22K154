//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/NSObject-Protocol.h>

@class AVFrameSet, AVNowPlayingTransportBarCaptureView, AVPlayer, AVPlayerItem, NSArray, NSDate, NSString, UIView;
@protocol AVPlayerViewControllerAnimationCoordinator, AVThumbLayerController, AVTransportControlsFrameSource;

@protocol AVTransportControlsProviding <NSObject>
@property(nonatomic) unsigned long long scanningSpeedHintNumber;
@property(nonatomic) long long scrubMode;
@property(nonatomic) long long hint;
@property(copy, nonatomic) NSString *needleText;
@property(readonly, nonatomic) unsigned long long currentFrameIndex;
@property(nonatomic) _Bool displaysScrubbingFrames;
@property(retain, nonatomic) NSArray *photosensitiveDisplayTimes;
@property(nonatomic) double focusTrackingTension;
@property(nonatomic) long long focusTracking;
@property(readonly, nonatomic) UIView *barVisualEffectContainerView;
@property(retain, nonatomic) AVNowPlayingTransportBarCaptureView *transportBarCaptureView;
@property(retain, nonatomic) AVFrameSet *scrubFrameSet;
@property(retain, nonatomic) AVPlayerItem *scrubPlayerItem;
@property(retain, nonatomic) AVPlayer *clonedPlayer;
@property(readonly, nonatomic) id <AVThumbLayerController> thumbLayerController;
@property(nonatomic) __weak id <AVTransportControlsFrameSource> frameSource;
@property(retain, nonatomic) NSDate *clockDateForTimeZero;
@property(copy, nonatomic) NSDate *endDate;
@property(copy, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) double endTime;
@property(nonatomic) double startTime;
@property(nonatomic) double playbackRate;
@property(nonatomic) _Bool displaysClockTimes;
@property(retain, nonatomic) NSArray *interstitialDisplayTimes;
@property(nonatomic, getter=isRemainingTimeDisplayed) _Bool displaysRemainingTime;
@property(nonatomic, getter=isCurrentTimeDisplayed) _Bool displaysCurrentTime;
@property(nonatomic) _Bool honorsActualThumbnailTime;
@property(readonly, nonatomic) double currentTimeIntervalForThumbnailOrNeedle;
@property(readonly, nonatomic) double savedTimeInterval;
@property(readonly, nonatomic) double currentTimeInterval;
@property(readonly, nonatomic) struct CGRect scrubbingRegionBounds;
@property(readonly, nonatomic, getter=isScrubbing) _Bool scrubbing;
@property(nonatomic, getter=isAtLiveEdge) _Bool atLiveEdge;
@property(nonatomic) _Bool hidesSeekableRange;
@property(nonatomic, getter=isUnusable) _Bool unusable;
@property(nonatomic, getter=isLoading) _Bool loading;
@property(nonatomic, getter=isLive) _Bool live;
@property(readonly, nonatomic, getter=isAnimatingVisibility) _Bool animatingVisibility;
@property(nonatomic) double duration;
- (NSArray *)layoutConstraintsForPresentationInView:(UIView *)arg1;
- (void)updateRotaryFingerPositionWithScrubInfo:(CDStruct_f25faad3)arg1;
- (void)setScrubMode:(long long)arg1 gestureInfo:(CDStruct_f25faad3)arg2;
- (void)setPauseHintHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)reloadFrames;
- (void)scrubEndedWithTranslation:(double)arg1 velocity:(double)arg2;
- (void)scrubMovedWithTranslation:(double)arg1 velocity:(double)arg2 enableSnapping:(_Bool)arg3 gestureInfo:(CDStruct_f25faad3)arg4;
- (void)scrubBegan;
- (void)stopScrubbingWithResetToPauseMarker:(_Bool)arg1 animated:(_Bool)arg2;
- (void)startScrubbingForPauseTime:(double)arg1;
- (void)setAvailableTimeFrom:(double)arg1 to:(double)arg2;
- (void)setAvailableFractionFrom:(double)arg1 to:(double)arg2 animated:(_Bool)arg3;
- (void)setDisplaysClockTimes:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setCurrentTimeInterval:(double)arg1 animated:(_Bool)arg2;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2 withCoordinator:(id <AVPlayerViewControllerAnimationCoordinator>)arg3;
@end

