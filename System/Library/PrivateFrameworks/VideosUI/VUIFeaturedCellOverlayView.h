//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UIView, VUILabel;

__attribute__((visibility("hidden")))
@interface VUIFeaturedCellOverlayView
{
    _Bool _usesDefaultOverlayType;	// 8 = 0x8
    UIView *_appleTVChannelLogoView;	// 16 = 0x10
    VUILabel *_titleLabel;	// 24 = 0x18
    VUILabel *_subtitleLabel;	// 32 = 0x20
    VUILabel *_disclaimerLabel;	// 40 = 0x28
    NSArray *_buttons;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001f9369
@property(nonatomic) _Bool usesDefaultOverlayType; // @synthesize usesDefaultOverlayType=_usesDefaultOverlayType;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) VUILabel *disclaimerLabel; // @synthesize disclaimerLabel=_disclaimerLabel;
@property(retain, nonatomic) VUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *appleTVChannelLogoView; // @synthesize appleTVChannelLogoView=_appleTVChannelLogoView;
- (void)_layoutSubviews;	// IMP=0x00000000001f7df4
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x00000000001f7d93
- (void)applyAlphaToFadeableView:(double)arg1;	// IMP=0x00000000001f7b52

@end

