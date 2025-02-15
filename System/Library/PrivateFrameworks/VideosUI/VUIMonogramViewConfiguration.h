//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface VUIMonogramViewConfiguration : NSObject
{
    long long _style;	// 8 = 0x8
    double _focusedSizeIncrease;	// 16 = 0x10
    UIColor *_unfocusedBgColor;	// 24 = 0x18
    UIColor *_focusedBgColor;	// 32 = 0x20
    double _unfocusedShadowAlpha;	// 40 = 0x28
    double _focusedShadowAlpha;	// 48 = 0x30
    long long _titleTextStyle;	// 56 = 0x38
    UIColor *_titleUnfocusedColor;	// 64 = 0x40
    UIColor *_titleFocusedColor;	// 72 = 0x48
    long long _subtitleTextStyle;	// 80 = 0x50
    UIColor *_subtitleUnfocusedColor;	// 88 = 0x58
    UIColor *_subtitleFocusedColor;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000001253f9
@property(retain, nonatomic) UIColor *subtitleFocusedColor; // @synthesize subtitleFocusedColor=_subtitleFocusedColor;
@property(retain, nonatomic) UIColor *subtitleUnfocusedColor; // @synthesize subtitleUnfocusedColor=_subtitleUnfocusedColor;
@property(nonatomic) long long subtitleTextStyle; // @synthesize subtitleTextStyle=_subtitleTextStyle;
@property(retain, nonatomic) UIColor *titleFocusedColor; // @synthesize titleFocusedColor=_titleFocusedColor;
@property(retain, nonatomic) UIColor *titleUnfocusedColor; // @synthesize titleUnfocusedColor=_titleUnfocusedColor;
@property(nonatomic) long long titleTextStyle; // @synthesize titleTextStyle=_titleTextStyle;
@property(nonatomic) double focusedShadowAlpha; // @synthesize focusedShadowAlpha=_focusedShadowAlpha;
@property(nonatomic) double unfocusedShadowAlpha; // @synthesize unfocusedShadowAlpha=_unfocusedShadowAlpha;
@property(retain, nonatomic) UIColor *focusedBgColor; // @synthesize focusedBgColor=_focusedBgColor;
@property(retain, nonatomic) UIColor *unfocusedBgColor; // @synthesize unfocusedBgColor=_unfocusedBgColor;
@property(nonatomic) double focusedSizeIncrease; // @synthesize focusedSizeIncrease=_focusedSizeIncrease;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) double unfocusedImageAlpha;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012512a
- (id)focusedShadowImage;	// IMP=0x000000000012507e
- (id)unfocusedShadowImage;	// IMP=0x0000000000124fd2
- (id)initWithShadowImages:(_Bool)arg1;	// IMP=0x0000000000124f75
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000000124cd7

@end

