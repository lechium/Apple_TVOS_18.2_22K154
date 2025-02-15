//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/TVViewLayout.h>

@class UIColor, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIVideoAdvisoryViewLayout : TVViewLayout
{
    double _legendMaxWidth;	// 8 = 0x8
    double _legendNameMinWidth;	// 16 = 0x10
    UIColor *_legendBackgroundColor;	// 24 = 0x18
    double _legendCornerRadius;	// 32 = 0x20
    UIColor *_dividerColor;	// 40 = 0x28
    VUITextLayout *_legendLayout;	// 48 = 0x30
    VUITextLayout *_descriptionLayout;	// 56 = 0x38
    double _descriptionMaxWidth;	// 64 = 0x40
    struct CGSize _logoSize;	// 72 = 0x48
    struct CGSize _legendSize;	// 88 = 0x58
    struct CGSize _dividerSize;	// 104 = 0x68
    struct UIEdgeInsets _logoMargin;	// 120 = 0x78
    struct UIEdgeInsets _legendsMargin;	// 152 = 0x98
    struct UIEdgeInsets _legendNamePadding;	// 184 = 0xb8
    struct UIEdgeInsets _dividerMargin;	// 216 = 0xd8
    struct UIEdgeInsets _descriptionMargin;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x00000000001f3840
@property(nonatomic) struct UIEdgeInsets descriptionMargin; // @synthesize descriptionMargin=_descriptionMargin;
@property(nonatomic) double descriptionMaxWidth; // @synthesize descriptionMaxWidth=_descriptionMaxWidth;
@property(readonly, nonatomic) VUITextLayout *descriptionLayout; // @synthesize descriptionLayout=_descriptionLayout;
@property(readonly, nonatomic) VUITextLayout *legendLayout; // @synthesize legendLayout=_legendLayout;
@property(readonly, nonatomic) UIColor *dividerColor; // @synthesize dividerColor=_dividerColor;
@property(nonatomic) struct CGSize dividerSize; // @synthesize dividerSize=_dividerSize;
@property(nonatomic) struct UIEdgeInsets dividerMargin; // @synthesize dividerMargin=_dividerMargin;
@property(nonatomic) double legendCornerRadius; // @synthesize legendCornerRadius=_legendCornerRadius;
@property(readonly, nonatomic) UIColor *legendBackgroundColor; // @synthesize legendBackgroundColor=_legendBackgroundColor;
@property(nonatomic) struct UIEdgeInsets legendNamePadding; // @synthesize legendNamePadding=_legendNamePadding;
@property(nonatomic) double legendNameMinWidth; // @synthesize legendNameMinWidth=_legendNameMinWidth;
@property(nonatomic) struct UIEdgeInsets legendsMargin; // @synthesize legendsMargin=_legendsMargin;
@property(nonatomic) double legendMaxWidth; // @synthesize legendMaxWidth=_legendMaxWidth;
@property(nonatomic) struct CGSize legendSize; // @synthesize legendSize=_legendSize;
@property(nonatomic) struct UIEdgeInsets logoMargin; // @synthesize logoMargin=_logoMargin;
@property(nonatomic) struct CGSize logoSize; // @synthesize logoSize=_logoSize;
- (id)init;	// IMP=0x00000000001f3189

@end

