//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface TVSMHomeHeaderView : UIView
{
    NSString *_title;	// 8 = 0x8
    UIImageView *_symbolImageView;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UIView *_separatorView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000050c0
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *symbolImageView; // @synthesize symbolImageView=_symbolImageView;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)_updateEffect;	// IMP=0x0000000000004c80
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000003f90

@end

