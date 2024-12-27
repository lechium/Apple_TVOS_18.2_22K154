//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView, _TVCollectionView;

__attribute__((visibility("hidden")))
@interface _TVShowcaseView : UIView
{
    UIImage *_bgImage;	// 8 = 0x8
    UIView *_bannerView;	// 16 = 0x10
    _TVCollectionView *_carouselView;	// 24 = 0x18
    UIView *_lockupInfoView;	// 32 = 0x20
    UIImageView *_imageView;	// 40 = 0x28
    UIView *_lastFocusedView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000039845
@property(nonatomic) __weak UIView *lastFocusedView; // @synthesize lastFocusedView=_lastFocusedView;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *lockupInfoView; // @synthesize lockupInfoView=_lockupInfoView;
@property(readonly, nonatomic) _TVCollectionView *carouselView; // @synthesize carouselView=_carouselView;
@property(retain, nonatomic) UIView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) UIImage *bgImage; // @synthesize bgImage=_bgImage;
- (void)layoutSubviews;	// IMP=0x00000000000394d1
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000393b1
- (id)preferredFocusEnvironments;	// IMP=0x00000000000392f6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000038d69

@end

