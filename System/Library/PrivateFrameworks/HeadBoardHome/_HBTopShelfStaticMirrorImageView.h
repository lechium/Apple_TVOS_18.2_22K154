//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface _HBTopShelfStaticMirrorImageView : UIView
{
    UIImage *_image;	// 8 = 0x8
    UIImageView *_firstImageView;	// 16 = 0x10
    UIImageView *_secondImageView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000073915
@property(readonly, nonatomic) UIImageView *secondImageView; // @synthesize secondImageView=_secondImageView;
@property(readonly, nonatomic) UIImageView *firstImageView; // @synthesize firstImageView=_firstImageView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000732b3

@end

