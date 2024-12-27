//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/TVViewLayout.h>

@class UIColor, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIAdditionalAdvisoryInfoViewLayout : TVViewLayout
{
    double _descriptionWidth;	// 8 = 0x8
    double _descriptionCornerRadius;	// 16 = 0x10
    UIColor *_dividerColor;	// 24 = 0x18
    VUITextLayout *_descriptionLayout;	// 32 = 0x20
    struct CGSize _logoSize;	// 40 = 0x28
    struct CGSize _dividerSize;	// 56 = 0x38
    struct UIEdgeInsets _logoMargin;	// 72 = 0x48
    struct UIEdgeInsets _descriptionMargin;	// 104 = 0x68
    struct UIEdgeInsets _dividerMargin;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000000000f7bdf
@property(readonly, nonatomic) VUITextLayout *descriptionLayout; // @synthesize descriptionLayout=_descriptionLayout;
@property(readonly, nonatomic) UIColor *dividerColor; // @synthesize dividerColor=_dividerColor;
@property(nonatomic) struct CGSize dividerSize; // @synthesize dividerSize=_dividerSize;
@property(nonatomic) struct UIEdgeInsets dividerMargin; // @synthesize dividerMargin=_dividerMargin;
@property(nonatomic) double descriptionCornerRadius; // @synthesize descriptionCornerRadius=_descriptionCornerRadius;
@property(nonatomic) struct UIEdgeInsets descriptionMargin; // @synthesize descriptionMargin=_descriptionMargin;
@property(nonatomic) double descriptionWidth; // @synthesize descriptionWidth=_descriptionWidth;
@property(nonatomic) struct UIEdgeInsets logoMargin; // @synthesize logoMargin=_logoMargin;
@property(nonatomic) struct CGSize logoSize; // @synthesize logoSize=_logoSize;
- (id)init;	// IMP=0x00000000000f7809

@end

