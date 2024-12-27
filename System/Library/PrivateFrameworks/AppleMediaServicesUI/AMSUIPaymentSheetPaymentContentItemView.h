//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class PKPaymentContentItem, UILabel;

__attribute__((visibility("hidden")))
@interface AMSUIPaymentSheetPaymentContentItemView : UIView
{
    PKPaymentContentItem *_contentItem;	// 8 = 0x8
    UIView *_keylineView;	// 16 = 0x10
    UILabel *_labelLabel;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
}

+ (id)viewWithContentItem:(id)arg1;	// IMP=0x0060000000055852
- (void).cxx_destruct;	// IMP=0x0000000000056954
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *labelLabel; // @synthesize labelLabel=_labelLabel;
@property(retain, nonatomic) UIView *keylineView; // @synthesize keylineView=_keylineView;
@property(readonly, nonatomic) PKPaymentContentItem *contentItem; // @synthesize contentItem=_contentItem;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000567f6
- (void)_updateSubviewOpacity;	// IMP=0x00000000000567b4
- (void)_updateLabelAlignment;	// IMP=0x00000000000566f7
- (id)_title;	// IMP=0x000000000005654c
- (void)_setupSubviews;	// IMP=0x0000000000055ada
- (id)_label;	// IMP=0x0000000000055930
- (id)initWithContentItem:(id)arg1;	// IMP=0x000000000005589b

@end

