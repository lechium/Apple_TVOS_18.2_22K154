//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface PBAppSwitcherTitleView : UIView
{
    NSString *_title;	// 8 = 0x8
    double _titleOpacity;	// 16 = 0x10
    UIImage *_image;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UIImageView *_imageView;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x004000000010d42f
- (void).cxx_destruct;	// IMP=0x002000000010dbe3
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) double titleOpacity; // @synthesize titleOpacity=_titleOpacity;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)layoutSubviews;	// IMP=0x001000000010d747
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x001000000010d6da
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000010d499

@end

