//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class MISSING_TYPE, UIView;

__attribute__((visibility("hidden")))
@interface _TtC11PosterBoard30HomeScreenConfigurationControl : UIControl
{
    MISSING_TYPE *previewContentView;	// 8 = 0x8
    MISSING_TYPE *title;	// 16 = 0x10
    MISSING_TYPE *showsSymbolWhenSelected;	// 32 = 0x20
    MISSING_TYPE *maximumHorizontalTitleOutset;	// 40 = 0x28
    MISSING_TYPE *titleLabel;	// 48 = 0x30
    MISSING_TYPE *symbolImageView;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000136dd0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000136d90
@property(nonatomic) _Bool enabled;
- (_Bool)isEnabled;	// IMP=0x0000000000136ba0
@property(nonatomic) _Bool highlighted;
- (_Bool)isHighlighted;	// IMP=0x0000000000136a20
@property(nonatomic) _Bool selected;
- (_Bool)isSelected;	// IMP=0x00000000001365c0
- (void)layoutSubviews;	// IMP=0x0000000000136590
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001360b0
@property(nonatomic, retain) UIView *previewContentView; // @synthesize previewContentView;

@end

