//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImageSymbolConfiguration, UILayoutGuide, _UIImageViewAnimationProperties, _UIImageViewImageLoadingProperties, _UIImageViewImageProperties, _UIImageViewUncommonProperties;

__attribute__((visibility("hidden")))
@interface _UIImageViewExtendedStorage
{
    _UIImageViewImageProperties *_highlightedImageProperties;	// 24 = 0x18
    _UIImageViewAnimationProperties *_animationProperties;	// 32 = 0x20
    _UIImageViewImageLoadingProperties *_imageLoadingProperties;	// 40 = 0x28
    _UIImageViewUncommonProperties *_uncommonProperties;	// 48 = 0x30
    _Bool highlighted;	// 56 = 0x38
    _Bool masksTemplateImages;	// 57 = 0x39
    _Bool adjustsImageSizeForAccessibilityContentSizeCategory;	// 58 = 0x3a
    UIImageSymbolConfiguration *preferredSymbolConfiguration;	// 64 = 0x40
    UILayoutGuide *imageContentGuide;	// 72 = 0x48
}

+ (id)storageFromSimpleStorage:(id)arg1;	// IMP=0x0060000000fd9dbe
- (void).cxx_destruct;	// IMP=0x0000000000fdaad1
- (void)setAdjustsImageSizeForAccessibilityContentSizeCategory:(_Bool)arg1;	// IMP=0x0000000000fdaac1
- (_Bool)adjustsImageSizeForAccessibilityContentSizeCategory;	// IMP=0x0000000000fdaab1
- (void)setMasksTemplateImages:(_Bool)arg1;	// IMP=0x0000000000fdaaa1
- (_Bool)masksTemplateImages;	// IMP=0x0000000000fdaa91
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000fdaa81
- (_Bool)isHighlighted;	// IMP=0x0000000000fdaa71
- (void)setImageContentGuide:(id)arg1;	// IMP=0x0000000000fdaa5d
- (id)imageContentGuide;	// IMP=0x0000000000fdaa4c
- (void)setPreferredSymbolConfiguration:(id)arg1;	// IMP=0x0000000000fdaa38
- (id)preferredSymbolConfiguration;	// IMP=0x0000000000fdaa27
- (void)setStoppingLoad:(_Bool)arg1;	// IMP=0x0000000000fda9ba
- (_Bool)isStoppingLoad;	// IMP=0x0000000000fda99d
- (void)setEnqueueingLoad:(_Bool)arg1;	// IMP=0x0000000000fda930
- (_Bool)isEnqueueingLoad;	// IMP=0x0000000000fda913
- (void)setStartingLoad:(_Bool)arg1;	// IMP=0x0000000000fda8a6
- (_Bool)isStartingLoad;	// IMP=0x0000000000fda889
- (void)setPlaceholderView:(id)arg1;	// IMP=0x0000000000fda7fc
- (id)placeholderView;	// IMP=0x0000000000fda7df
- (void)setImageBeingSetByLoader:(id)arg1;	// IMP=0x0000000000fda752
- (id)imageBeingSetByLoader;	// IMP=0x0000000000fda735
- (void)setLoadingDelegate:(id)arg1;	// IMP=0x0000000000fda6a8
- (id)loadingDelegate;	// IMP=0x0000000000fda68b
- (void)setImageLoader:(id)arg1;	// IMP=0x0000000000fda5fe
- (id)imageLoader;	// IMP=0x0000000000fda5e1
- (void)setDrawMode:(unsigned int)arg1;	// IMP=0x0000000000fda575
- (unsigned int)drawMode;	// IMP=0x0000000000fda558
- (void)setCIRenderer:(id)arg1;	// IMP=0x0000000000fda4cb
- (id)CIRenderer;	// IMP=0x0000000000fda4ae
- (void)setDefaultRenderingMode:(long long)arg1;	// IMP=0x0000000000fda43f
- (long long)defaultRenderingMode;	// IMP=0x0000000000fda422
- (void)setPreferredSymbolVariant:(id)arg1;	// IMP=0x0000000000fda395
- (id)preferredSymbolVariant;	// IMP=0x0000000000fda378
- (void)setOverridingSymbolConfiguration:(id)arg1;	// IMP=0x0000000000fda2eb
- (id)overridingSymbolConfiguration;	// IMP=0x0000000000fda2ce
- (void)setAnimationRepeatCount:(long long)arg1;	// IMP=0x0000000000fda25f
- (long long)animationRepeatCount;	// IMP=0x0000000000fda242
- (void)setAnimationDuration:(double)arg1;	// IMP=0x0000000000fda1ce
- (double)animationDuration;	// IMP=0x0000000000fda1b1
- (void)setHighlightedAnimationImages:(id)arg1;	// IMP=0x0000000000fda124
- (id)highlightedAnimationImages;	// IMP=0x0000000000fda107
- (void)setAnimationImages:(id)arg1;	// IMP=0x0000000000fda07a
- (id)animationImages;	// IMP=0x0000000000fda05d
- (void)setResolvedHighlightedImage:(id)arg1;	// IMP=0x0000000000fd9fd0
- (id)resolvedHighlightedImage;	// IMP=0x0000000000fd9fb3
- (void)setHighlightedImage:(id)arg1;	// IMP=0x0000000000fd9f26
- (id)highlightedImage;	// IMP=0x0000000000fd9f09
- (id)uncommonProperties;	// IMP=0x0000000000fd9ec8
- (id)imageLoadingProperties;	// IMP=0x0000000000fd9e87
- (id)animationProperties;	// IMP=0x0000000000fd9e46
- (id)highlightedImageProperties;	// IMP=0x0000000000fd9e05

@end

