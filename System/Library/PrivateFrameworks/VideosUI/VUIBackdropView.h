//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIImage, UIImageView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface VUIBackdropView : UIView
{
    UIImageView *_imageView;	// 8 = 0x8
    UIVisualEffectView *_visualEffectView;	// 16 = 0x10
    UIImage *_image;	// 24 = 0x18
    long long _blurEffectStyle;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000b71c2
@property(nonatomic) long long blurEffectStyle; // @synthesize blurEffectStyle=_blurEffectStyle;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)layoutSubviews;	// IMP=0x00000000000b6fb2
- (id)initWithBlurEffectStyle:(long long)arg1;	// IMP=0x00000000000b6e11

@end

