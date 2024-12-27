//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, VUILabel, VUISeparatorView, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIDebugCollectionViewNavigationCell : UICollectionViewCell
{
    VUITextLayout *_titleLayout;	// 8 = 0x8
    VUILabel *_titleLabel;	// 16 = 0x10
    UIImageView *_accessoryView;	// 24 = 0x18
    VUISeparatorView *_separatorView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002ee09
@property(retain, nonatomic) VUISeparatorView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIImageView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) VUITextLayout *titleLayout; // @synthesize titleLayout=_titleLayout;
- (void)layoutSubviews;	// IMP=0x000000000002ea25
- (void)configureWithTitle:(id)arg1;	// IMP=0x000000000002e983
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000002e6c2

@end

