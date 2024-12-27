//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UIColor;

__attribute__((visibility("hidden")))
@interface _UITextItemHighlightView
{
    NSArray *_textLineRects;	// 8 = 0x8
    UIColor *_fillColor;	// 16 = 0x10
    double _cornerRadius;	// 24 = 0x18
    double _horizontalPadding;	// 32 = 0x20
    double _verticalPadding;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000bd9844
@property(nonatomic) double verticalPadding; // @synthesize verticalPadding=_verticalPadding;
@property(nonatomic) double horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(copy, nonatomic) NSArray *textLineRects; // @synthesize textLineRects=_textLineRects;
- (void)_updateShape;	// IMP=0x0000000000bd9709
- (struct UIEdgeInsets)_padding;	// IMP=0x0000000000bd96d1
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000bd950b

@end

