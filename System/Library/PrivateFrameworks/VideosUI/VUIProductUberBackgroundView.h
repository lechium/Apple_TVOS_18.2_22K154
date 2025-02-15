//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAGradientLayer, UIView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface VUIProductUberBackgroundView
{
    _Bool _isChannelBanner;	// 8 = 0x8
    UIView *_imageView;	// 16 = 0x10
    unsigned long long _configuredBlurInterfaceStyle;	// 24 = 0x18
    UIVisualEffectView *_blurEffectView;	// 32 = 0x20
    CAGradientLayer *_gradientLayer;	// 40 = 0x28
    double _contentOffset;	// 48 = 0x30
    struct CGSize _imageSize;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001c5412
@property(nonatomic) double contentOffset; // @synthesize contentOffset=_contentOffset;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIVisualEffectView *blurEffectView; // @synthesize blurEffectView=_blurEffectView;
@property(nonatomic) unsigned long long configuredBlurInterfaceStyle; // @synthesize configuredBlurInterfaceStyle=_configuredBlurInterfaceStyle;
@property(retain, nonatomic) UIView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) _Bool isChannelBanner; // @synthesize isChannelBanner=_isChannelBanner;
- (void)_configureGradientLayer:(id)arg1 currentSizeClass:(long long)arg2 mainRect:(struct CGRect)arg3;	// IMP=0x00000000001c4dc8
- (double)_gradientHeightForSizeClass:(long long)arg1 mainRect:(struct CGRect)arg2;	// IMP=0x00000000001c4d85
- (void)resetBlurEffectAndGradient;	// IMP=0x00000000001c4d13
- (void)configureBlurEffectAndGradientWithInterfaceStyle:(unsigned long long)arg1 mainRect:(struct CGRect)arg2;	// IMP=0x00000000001c4acc
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x00000000001c4833
- (void)setImageOffset:(double)arg1;	// IMP=0x00000000001c4722
- (void)setMasksBlur:(_Bool)arg1;	// IMP=0x00000000001c46ff
- (void)configureBlurWithInterfaceStyle:(unsigned long long)arg1 mainRect:(struct CGRect)arg2;	// IMP=0x00000000001c467c
- (void)configureBlurWithInterfaceStyle:(unsigned long long)arg1;	// IMP=0x00000000001c4623
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001c4527

@end

