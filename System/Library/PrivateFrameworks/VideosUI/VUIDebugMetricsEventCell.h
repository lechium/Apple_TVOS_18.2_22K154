//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class NSString, UIImage, UIImageView, VUILabel, VUISeparatorView, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIDebugMetricsEventCell : UITableViewCell
{
    NSString *_eventTypeLabelStr;	// 8 = 0x8
    NSString *_subhead1LabelStr;	// 16 = 0x10
    NSString *_subhead2LabelStr;	// 24 = 0x18
    NSString *_subhead3LabelStr;	// 32 = 0x20
    NSString *_tabName;	// 40 = 0x28
    VUILabel *_eventTypeLabel;	// 48 = 0x30
    VUITextLayout *_eventTypeLabelLayout;	// 56 = 0x38
    VUILabel *_subhead1Label;	// 64 = 0x40
    VUITextLayout *_subhead1LabelLayout;	// 72 = 0x48
    VUILabel *_subhead2Label;	// 80 = 0x50
    VUITextLayout *_subhead2LabelLayout;	// 88 = 0x58
    VUILabel *_subhead3Label;	// 96 = 0x60
    VUITextLayout *_subhead3LabelLayout;	// 104 = 0x68
    VUILabel *_tabNameLabel;	// 112 = 0x70
    VUITextLayout *_tabNameLabelLayout;	// 120 = 0x78
    UIImageView *_tabImageView;	// 128 = 0x80
    VUISeparatorView *_separatorView;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000023c1a
@property(retain, nonatomic) VUISeparatorView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIImageView *tabImageView; // @synthesize tabImageView=_tabImageView;
@property(retain, nonatomic) VUITextLayout *tabNameLabelLayout; // @synthesize tabNameLabelLayout=_tabNameLabelLayout;
@property(retain, nonatomic) VUILabel *tabNameLabel; // @synthesize tabNameLabel=_tabNameLabel;
@property(retain, nonatomic) VUITextLayout *subhead3LabelLayout; // @synthesize subhead3LabelLayout=_subhead3LabelLayout;
@property(retain, nonatomic) VUILabel *subhead3Label; // @synthesize subhead3Label=_subhead3Label;
@property(retain, nonatomic) VUITextLayout *subhead2LabelLayout; // @synthesize subhead2LabelLayout=_subhead2LabelLayout;
@property(retain, nonatomic) VUILabel *subhead2Label; // @synthesize subhead2Label=_subhead2Label;
@property(retain, nonatomic) VUITextLayout *subhead1LabelLayout; // @synthesize subhead1LabelLayout=_subhead1LabelLayout;
@property(retain, nonatomic) VUILabel *subhead1Label; // @synthesize subhead1Label=_subhead1Label;
@property(retain, nonatomic) VUITextLayout *eventTypeLabelLayout; // @synthesize eventTypeLabelLayout=_eventTypeLabelLayout;
@property(retain, nonatomic) VUILabel *eventTypeLabel; // @synthesize eventTypeLabel=_eventTypeLabel;
@property(copy, nonatomic) NSString *tabName; // @synthesize tabName=_tabName;
@property(copy, nonatomic) NSString *subhead3LabelStr; // @synthesize subhead3LabelStr=_subhead3LabelStr;
@property(copy, nonatomic) NSString *subhead2LabelStr; // @synthesize subhead2LabelStr=_subhead2LabelStr;
@property(copy, nonatomic) NSString *subhead1LabelStr; // @synthesize subhead1LabelStr=_subhead1LabelStr;
@property(copy, nonatomic) NSString *eventTypeLabelStr; // @synthesize eventTypeLabelStr=_eventTypeLabelStr;
- (void)prepareForReuse;	// IMP=0x000000000002395f
- (void)layoutSubviews;	// IMP=0x000000000002322f
@property(copy, nonatomic) UIImage *tabImage;
- (void)setSubhead3LabelColor:(id)arg1;	// IMP=0x0000000000023170
- (void)setSubhead2LabelColor:(id)arg1;	// IMP=0x0000000000023153
- (void)setSubhead1LabelColor:(id)arg1;	// IMP=0x0000000000023136
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000022848

@end

