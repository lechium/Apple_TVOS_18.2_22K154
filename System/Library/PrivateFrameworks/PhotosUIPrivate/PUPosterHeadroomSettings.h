//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXSettings.h>

__attribute__((visibility("hidden")))
@interface PUPosterHeadroomSettings : PXSettings
{
    _Bool _useSoftLightBlendingModeForTopGradient;	// 8 = 0x8
    double _fadeAnimationDuration;	// 16 = 0x10
    double _blurVisibilityFraction;	// 24 = 0x18
    double _blurRadius;	// 32 = 0x20
    double _blurMaskHeight;	// 40 = 0x28
    double _blurMaskTopLocation;	// 48 = 0x30
    double _falloffHeight;	// 56 = 0x38
    double _gradientHeight;	// 64 = 0x40
    double _gradientWhite;	// 72 = 0x48
    double _highKeyGradientWhite;	// 80 = 0x50
    double _bottomGradientAlpha;	// 88 = 0x58
    double _bottomGradientTopLocation;	// 96 = 0x60
    double _bottomGradientBottomLocation;	// 104 = 0x68
    double _topGradientAlpha;	// 112 = 0x70
    double _topGradientTopLocation;	// 120 = 0x78
    double _topGradientBottomLocation;	// 128 = 0x80
}

+ (id)sharedInstance;	// IMP=0x0060000000073733
@property(nonatomic) _Bool useSoftLightBlendingModeForTopGradient; // @synthesize useSoftLightBlendingModeForTopGradient=_useSoftLightBlendingModeForTopGradient;
@property(nonatomic) double topGradientBottomLocation; // @synthesize topGradientBottomLocation=_topGradientBottomLocation;
@property(nonatomic) double topGradientTopLocation; // @synthesize topGradientTopLocation=_topGradientTopLocation;
@property(nonatomic) double topGradientAlpha; // @synthesize topGradientAlpha=_topGradientAlpha;
@property(nonatomic) double bottomGradientBottomLocation; // @synthesize bottomGradientBottomLocation=_bottomGradientBottomLocation;
@property(nonatomic) double bottomGradientTopLocation; // @synthesize bottomGradientTopLocation=_bottomGradientTopLocation;
@property(nonatomic) double bottomGradientAlpha; // @synthesize bottomGradientAlpha=_bottomGradientAlpha;
@property(nonatomic) double highKeyGradientWhite; // @synthesize highKeyGradientWhite=_highKeyGradientWhite;
@property(nonatomic) double gradientWhite; // @synthesize gradientWhite=_gradientWhite;
@property(nonatomic) double gradientHeight; // @synthesize gradientHeight=_gradientHeight;
@property(nonatomic) double falloffHeight; // @synthesize falloffHeight=_falloffHeight;
@property(nonatomic) double blurMaskTopLocation; // @synthesize blurMaskTopLocation=_blurMaskTopLocation;
@property(nonatomic) double blurMaskHeight; // @synthesize blurMaskHeight=_blurMaskHeight;
@property(nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
@property(nonatomic) double blurVisibilityFraction; // @synthesize blurVisibilityFraction=_blurVisibilityFraction;
@property(nonatomic) double fadeAnimationDuration; // @synthesize fadeAnimationDuration=_fadeAnimationDuration;
- (void)setDefaultValues;	// IMP=0x0000000000072d77
- (id)parentSettings;	// IMP=0x0000000000072d5e

@end

