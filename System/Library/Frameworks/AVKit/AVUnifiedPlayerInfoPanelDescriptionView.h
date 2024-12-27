//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class AVInfoPanelExpandingSummaryView, AVTomatoRatingView, AVUnifiedPlayerActionStackView, NSArray, NSLayoutConstraint, NSString, UIImage, UIImageView, UILabel, UIStackView, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface AVUnifiedPlayerInfoPanelDescriptionView : UIView
{
    UIStackView *_containerStackView;	// 8 = 0x8
    UIStackView *_posterInfoStackView;	// 16 = 0x10
    AVUnifiedPlayerActionStackView *_actionsStackView;	// 24 = 0x18
    UIImageView *_posterImageView;	// 32 = 0x20
    UIStackView *_infoStackView;	// 40 = 0x28
    UIStackView *_titleStackView;	// 48 = 0x30
    AVInfoPanelExpandingSummaryView *_summaryView;	// 56 = 0x38
    UITapGestureRecognizer *_summaryOverflowGestureRecognizer;	// 64 = 0x40
    UIStackView *_auxiliaryInfoStackView;	// 72 = 0x48
    UILabel *_titleLabel;	// 80 = 0x50
    UILabel *_secondaryTitleLabel;	// 88 = 0x58
    UILabel *_genreLabel;	// 96 = 0x60
    UILabel *_programScheduledTimeLabel;	// 104 = 0x68
    UILabel *_dateLabel;	// 112 = 0x70
    UILabel *_seasonEpisodeLabel;	// 120 = 0x78
    UILabel *_durationLabel;	// 128 = 0x80
    UILabel *_mediaContentRatingLabel;	// 136 = 0x88
    AVTomatoRatingView *_tomatoRatingView;	// 144 = 0x90
    UIImageView *_mediaContentRatingImageView;	// 152 = 0x98
    UIImageView *_closedCaptionBadgeImageView;	// 160 = 0xa0
    UIImageView *_videoResolutionBadgeImageView;	// 168 = 0xa8
    UIImageView *_colorDepthBadgeImageView;	// 176 = 0xb0
    UIImageView *_audioFormatBadgeImageView;	// 184 = 0xb8
    NSLayoutConstraint *_posterImageViewWidthConstraint;	// 192 = 0xc0
}

+ (id)_spacerAction;	// IMP=0x0010000000186a7e
- (void).cxx_destruct;	// IMP=0x00000000001853a8
@property(readonly, nonatomic) NSLayoutConstraint *posterImageViewWidthConstraint; // @synthesize posterImageViewWidthConstraint=_posterImageViewWidthConstraint;
@property(readonly, nonatomic) UIImageView *audioFormatBadgeImageView; // @synthesize audioFormatBadgeImageView=_audioFormatBadgeImageView;
@property(readonly, nonatomic) UIImageView *colorDepthBadgeImageView; // @synthesize colorDepthBadgeImageView=_colorDepthBadgeImageView;
@property(readonly, nonatomic) UIImageView *videoResolutionBadgeImageView; // @synthesize videoResolutionBadgeImageView=_videoResolutionBadgeImageView;
@property(readonly, nonatomic) UIImageView *closedCaptionBadgeImageView; // @synthesize closedCaptionBadgeImageView=_closedCaptionBadgeImageView;
@property(readonly, nonatomic) UIImageView *mediaContentRatingImageView; // @synthesize mediaContentRatingImageView=_mediaContentRatingImageView;
@property(readonly, nonatomic) AVTomatoRatingView *tomatoRatingView; // @synthesize tomatoRatingView=_tomatoRatingView;
@property(readonly, nonatomic) UILabel *mediaContentRatingLabel; // @synthesize mediaContentRatingLabel=_mediaContentRatingLabel;
@property(readonly, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(readonly, nonatomic) UILabel *seasonEpisodeLabel; // @synthesize seasonEpisodeLabel=_seasonEpisodeLabel;
@property(readonly, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(readonly, nonatomic) UILabel *programScheduledTimeLabel; // @synthesize programScheduledTimeLabel=_programScheduledTimeLabel;
@property(readonly, nonatomic) UILabel *genreLabel; // @synthesize genreLabel=_genreLabel;
@property(readonly, nonatomic) UILabel *secondaryTitleLabel; // @synthesize secondaryTitleLabel=_secondaryTitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIStackView *auxiliaryInfoStackView; // @synthesize auxiliaryInfoStackView=_auxiliaryInfoStackView;
@property(readonly, nonatomic) UITapGestureRecognizer *summaryOverflowGestureRecognizer; // @synthesize summaryOverflowGestureRecognizer=_summaryOverflowGestureRecognizer;
@property(readonly, nonatomic) AVInfoPanelExpandingSummaryView *summaryView; // @synthesize summaryView=_summaryView;
@property(readonly, nonatomic) UIStackView *titleStackView; // @synthesize titleStackView=_titleStackView;
@property(readonly, nonatomic) UIStackView *infoStackView; // @synthesize infoStackView=_infoStackView;
@property(readonly, nonatomic) UIImageView *posterImageView; // @synthesize posterImageView=_posterImageView;
@property(readonly, nonatomic) AVUnifiedPlayerActionStackView *actionsStackView; // @synthesize actionsStackView=_actionsStackView;
@property(readonly, nonatomic) UIStackView *posterInfoStackView; // @synthesize posterInfoStackView=_posterInfoStackView;
@property(readonly, nonatomic) UIStackView *containerStackView; // @synthesize containerStackView=_containerStackView;
- (void)_updateTitleStackViewState;	// IMP=0x00000000001851b0
@property(copy, nonatomic) NSArray *actions;
- (id)preferredFocusEnvironments;	// IMP=0x0000000000184f55
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001836aa
- (void)setAudioFormatBadgeImage:(id)arg1 withAccessibilityValue:(id)arg2;	// IMP=0x000000000018764a
- (void)setColorDepthBadgeImage:(id)arg1 withAccessibilityValue:(id)arg2;	// IMP=0x00000000001875a4
- (void)setVideoResolutionBadgeImage:(id)arg1 withAccessibilityValue:(id)arg2;	// IMP=0x00000000001874fe
- (void)setContentMediaRatingText:(id)arg1 image:(id)arg2;	// IMP=0x0000000000187447
- (void)setTomatoFreshness:(unsigned long long)arg1 rating:(float)arg2 hidden:(_Bool)arg3;	// IMP=0x00000000001873e1
- (void)setClosedCaptionBadgeHidden:(_Bool)arg1;	// IMP=0x00000000001873c4
- (void)setPosterViewHidden:(_Bool)arg1;	// IMP=0x00000000001873a7
- (void)setProgramScheduledTimeText:(id)arg1;	// IMP=0x000000000018731f
- (void)setDateText:(id)arg1;	// IMP=0x0000000000187297
- (void)setGenreText:(id)arg1;	// IMP=0x000000000018720f
- (void)setDurationText:(id)arg1;	// IMP=0x0000000000187187
- (void)setSeasonEpisodeText:(id)arg1;	// IMP=0x00000000001870ff
- (void)setSecondaryTitleText:(id)arg1;	// IMP=0x0000000000187061
- (void)setTitleText:(id)arg1;	// IMP=0x0000000000186fc3
@property(copy, nonatomic) NSString *summaryText;
@property(retain, nonatomic) UIImage *posterImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

