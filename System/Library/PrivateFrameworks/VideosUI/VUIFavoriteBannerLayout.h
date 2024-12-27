//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TVImageLayout, UIColor, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIFavoriteBannerLayout : NSObject
{
    _Bool _isPreModeBanner;	// 8 = 0x8
    UIColor *_backgroundColor;	// 16 = 0x10
    UIColor *_highlightedBackgroundColor;	// 24 = 0x18
    double _bannerMinHeight;	// 32 = 0x20
    double _maxTextWidth;	// 40 = 0x28
    double _subtitleBaseLine;	// 48 = 0x30
    VUITextLayout *_titleLayout;	// 56 = 0x38
    VUITextLayout *_subtitleLayout;	// 64 = 0x40
    TVImageLayout *_imageLayout;	// 72 = 0x48
    unsigned long long _bannerStyle;	// 80 = 0x50
    struct _VUICornerRadii _borderRadii;	// 88 = 0x58
    struct UIEdgeInsets _margin;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000026aa47
@property(nonatomic) unsigned long long bannerStyle; // @synthesize bannerStyle=_bannerStyle;
@property(readonly, nonatomic) TVImageLayout *imageLayout; // @synthesize imageLayout=_imageLayout;
@property(readonly, nonatomic) VUITextLayout *subtitleLayout; // @synthesize subtitleLayout=_subtitleLayout;
@property(readonly, nonatomic) VUITextLayout *titleLayout; // @synthesize titleLayout=_titleLayout;
@property(nonatomic) double subtitleBaseLine; // @synthesize subtitleBaseLine=_subtitleBaseLine;
@property(nonatomic) double maxTextWidth; // @synthesize maxTextWidth=_maxTextWidth;
@property(nonatomic) double bannerMinHeight; // @synthesize bannerMinHeight=_bannerMinHeight;
@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) struct UIEdgeInsets margin; // @synthesize margin=_margin;
@property(nonatomic) struct _VUICornerRadii borderRadii; // @synthesize borderRadii=_borderRadii;
@property(nonatomic) _Bool isPreModeBanner; // @synthesize isPreModeBanner=_isPreModeBanner;
- (unsigned long long)bannerStyleForSizeClass:(long long)arg1;	// IMP=0x000000000026a8b5

@end

