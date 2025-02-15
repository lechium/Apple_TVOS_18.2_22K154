//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class NSArray, NSString, UIImage, UIImageView, UITapGestureRecognizer, _MKUILabel;

__attribute__((visibility("hidden")))
@interface _MKRightImageButton : UIControl
{
    UITapGestureRecognizer *_gestureRecognizer;	// 8 = 0x8
    _Bool _titleConstraintsAdded;	// 16 = 0x10
    NSArray *_titleOnlyConstraints;	// 24 = 0x18
    NSArray *_titleAndImageConstraints;	// 32 = 0x20
    _Bool _highlighted;	// 40 = 0x28
    _MKUILabel *_titleLabel;	// 48 = 0x30
    UIImageView *_imageView;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000e8451
- (_Bool)isHighlighted;	// IMP=0x00000000000e8441
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) _MKUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000e837f
- (id)viewForLastBaselineLayout;	// IMP=0x00000000000e836a
@property(retain, nonatomic) UIImage *image;
@property(retain, nonatomic) NSString *title;
- (void)updateConstraints;	// IMP=0x00000000000e8035
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000000e7fc6
- (void)setTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000000e7f0d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000e7b04

@end

