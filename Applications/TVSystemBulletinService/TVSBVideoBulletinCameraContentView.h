//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class HMCameraProfile, HMCameraStreamControl, HMCameraStreamPreferences, HMCameraUserSettings, HMCameraView, NSError, NSLayoutConstraint, NSString, TVSBVideoBulletinBadgeView, UIActivityIndicatorView, UIImage, UIImageView, UILabel, UIVisualEffectView;

@interface TVSBVideoBulletinCameraContentView : UIView
{
    _Bool _doorbell;	// 8 = 0x8
    _Bool _fullScreen;	// 9 = 0x9
    HMCameraProfile *_cameraProfile;	// 16 = 0x10
    HMCameraStreamPreferences *_streamPreferences;	// 24 = 0x18
    UIImage *_placeholderSnapshot;	// 32 = 0x20
    UIImage *_faceImage;	// 40 = 0x28
    NSString *_title;	// 48 = 0x30
    double _aspectRatio;	// 56 = 0x38
    HMCameraUserSettings *_userSettings;	// 64 = 0x40
    HMCameraStreamControl *_streamControl;	// 72 = 0x48
    NSError *_cachedStreamError;	// 80 = 0x50
    UIVisualEffectView *_effectView;	// 88 = 0x58
    UIActivityIndicatorView *_activityIndicator;	// 96 = 0x60
    HMCameraView *_cameraView;	// 104 = 0x68
    UIImageView *_placeholderSnapshotView;	// 112 = 0x70
    UIImageView *_gradientImageView;	// 120 = 0x78
    TVSBVideoBulletinBadgeView *_liveBadgeView;	// 128 = 0x80
    UILabel *_titleLabel;	// 136 = 0x88
    UILabel *_descriptionLabel;	// 144 = 0x90
    UIImageView *_symbolImageView;	// 152 = 0x98
    UIImageView *_faceImageView;	// 160 = 0xa0
    NSLayoutConstraint *_cameraViewWidthConstraint;	// 168 = 0xa8
    NSLayoutConstraint *_cameraViewHeightConstraint;	// 176 = 0xb0
    NSLayoutConstraint *_liveBadgeHeightConstraint;	// 184 = 0xb8
    NSLayoutConstraint *_liveBadgeBottomConstraint;	// 192 = 0xc0
    NSLayoutConstraint *_liveBadgeTrailingConstraint;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x0020000000014c90
@property(retain, nonatomic) NSLayoutConstraint *liveBadgeTrailingConstraint; // @synthesize liveBadgeTrailingConstraint=_liveBadgeTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *liveBadgeBottomConstraint; // @synthesize liveBadgeBottomConstraint=_liveBadgeBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *liveBadgeHeightConstraint; // @synthesize liveBadgeHeightConstraint=_liveBadgeHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *cameraViewHeightConstraint; // @synthesize cameraViewHeightConstraint=_cameraViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *cameraViewWidthConstraint; // @synthesize cameraViewWidthConstraint=_cameraViewWidthConstraint;
@property(retain, nonatomic) UIImageView *faceImageView; // @synthesize faceImageView=_faceImageView;
@property(retain, nonatomic) UIImageView *symbolImageView; // @synthesize symbolImageView=_symbolImageView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TVSBVideoBulletinBadgeView *liveBadgeView; // @synthesize liveBadgeView=_liveBadgeView;
@property(retain, nonatomic) UIImageView *gradientImageView; // @synthesize gradientImageView=_gradientImageView;
@property(retain, nonatomic) UIImageView *placeholderSnapshotView; // @synthesize placeholderSnapshotView=_placeholderSnapshotView;
@property(retain, nonatomic) HMCameraView *cameraView; // @synthesize cameraView=_cameraView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) NSError *cachedStreamError; // @synthesize cachedStreamError=_cachedStreamError;
@property(retain, nonatomic) HMCameraStreamControl *streamControl; // @synthesize streamControl=_streamControl;
@property(retain, nonatomic) HMCameraUserSettings *userSettings; // @synthesize userSettings=_userSettings;
@property(nonatomic, getter=isFullScreen) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(nonatomic, getter=isDoorbell) _Bool doorbell; // @synthesize doorbell=_doorbell;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *faceImage; // @synthesize faceImage=_faceImage;
@property(retain, nonatomic) UIImage *placeholderSnapshot; // @synthesize placeholderSnapshot=_placeholderSnapshot;
@property(retain, nonatomic) HMCameraStreamPreferences *streamPreferences; // @synthesize streamPreferences=_streamPreferences;
@property(retain, nonatomic) HMCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
- (void)_updateEffect;	// IMP=0x0010000000014460
- (void)_updateCameraViewConstraints;	// IMP=0x0010000000013b70
- (void)_updateAudioStream:(_Bool)arg1;	// IMP=0x0010000000013870
- (_Bool)_shouldDisplayErrorContent;	// IMP=0x0010000000013700
- (_Bool)_shouldDisplayAccessModeErrorContent;	// IMP=0x0010000000013580
- (void)_updateContentViews;	// IMP=0x00100000000130e0
- (void)_updateCameraNameLabels;	// IMP=0x0010000000012b50
- (void)cameraUserSettingsDidUpdate:(id)arg1;	// IMP=0x0010000000012b00
- (void)cameraStreamControl:(id)arg1 didStopStreamWithError:(id)arg2;	// IMP=0x0010000000012760
- (void)cameraStreamControlDidStartStream:(id)arg1;	// IMP=0x00100000000120f0
- (void)stopStream;	// IMP=0x00100000000120a0
- (void)startStreamIfNecessary;	// IMP=0x0010000000011f80
- (void)setLiveBadgeViewHidden:(_Bool)arg1;	// IMP=0x0010000000011f30
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000000e860

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

