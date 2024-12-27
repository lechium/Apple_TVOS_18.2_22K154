//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class VUILabel, VUIVideoAdvisoryViewLayout, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIProductPlacementView : UIView
{
    VUIVideoAdvisoryViewLayout *_layout;	// 8 = 0x8
    _TVImageView *_logoImageView;	// 16 = 0x10
    UIView *_dividerView;	// 24 = 0x18
    VUILabel *_blockDescriptionLabel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000016fd09
@property(retain, nonatomic) VUILabel *blockDescriptionLabel; // @synthesize blockDescriptionLabel=_blockDescriptionLabel;
@property(retain, nonatomic) UIView *dividerView; // @synthesize dividerView=_dividerView;
@property(retain, nonatomic) _TVImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) VUIVideoAdvisoryViewLayout *layout; // @synthesize layout=_layout;
- (void)_hideWithAnimationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000016f835
- (void)_hideAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000016f6c4
- (void)_showWithAnimationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000016f17d
- (void)_showAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000016eff8
- (void)layoutSubviews;	// IMP=0x000000000016ebb1
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000016ead1
- (void)_configureSubviewsWithDictionary:(id)arg1;	// IMP=0x000000000016e811
- (struct CGSize)_descriptionSize;	// IMP=0x000000000016e73f
- (struct UIEdgeInsets)_descriptionMargin;	// IMP=0x000000000016e6e3
- (struct UIEdgeInsets)_dividerMargin;	// IMP=0x000000000016e687
- (struct UIEdgeInsets)_logoMargin;	// IMP=0x000000000016e62b
- (struct CGSize)_dividerSize;	// IMP=0x000000000016e5af
- (struct CGSize)_logoSize;	// IMP=0x000000000016e555
- (struct UIEdgeInsets)_margin;	// IMP=0x000000000016e4f9
- (_Bool)_isPortrait;	// IMP=0x000000000016e4f1
- (void)show:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000016e4ca
- (id)initWithAdvisoryInfoDictionary:(id)arg1;	// IMP=0x000000000016e42a

@end

