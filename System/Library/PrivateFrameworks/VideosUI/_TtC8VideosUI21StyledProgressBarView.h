//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI21StyledProgressBarView
{
    MISSING_TYPE *progressBarView;	// 8 = 0x8
    MISSING_TYPE *shadowImageView;	// 16 = 0x10
    MISSING_TYPE *style;	// 24 = 0x18
    MISSING_TYPE *cornerRadius;	// 32 = 0x20
    MISSING_TYPE *height;	// 40 = 0x28
    MISSING_TYPE *progress;	// 48 = 0x30
    MISSING_TYPE *progressTintColor;	// 56 = 0x38
    MISSING_TYPE *gradientStartColor;	// 64 = 0x40
    MISSING_TYPE *gradientEndColor;	// 72 = 0x48
    MISSING_TYPE *completeTintColor;	// 80 = 0x50
    MISSING_TYPE *shouldProgressBarUseRoundCorner;	// 88 = 0x58
    MISSING_TYPE *padding;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000009dfb39
@property(nonatomic, readonly) double accessibilityProgress;
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x00000000009dedcf
- (void)vui_setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000000009dec10
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000009deb58
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000009dea6d

@end

