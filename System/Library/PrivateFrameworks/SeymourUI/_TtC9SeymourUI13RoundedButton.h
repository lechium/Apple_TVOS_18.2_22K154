//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIButton.h>

@class MISSING_TYPE, UIColor;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI13RoundedButton : UIButton
{
    MISSING_TYPE *currentState;	// 8 = 0x8
    MISSING_TYPE *layout;	// 56 = 0x38
    MISSING_TYPE *indefiniteSpinner;	// 88 = 0x58
    MISSING_TYPE *defaults;	// 96 = 0x60
    MISSING_TYPE *highlightTimer;	// 176 = 0xb0
    MISSING_TYPE *lastFont;	// 184 = 0xb8
    MISSING_TYPE *lastSymbolScale;	// 192 = 0xc0
    MISSING_TYPE *shouldShowHighlight;	// 201 = 0xc9
    MISSING_TYPE *undimmedBackgroundColor;	// 208 = 0xd0
    MISSING_TYPE *defaultContentInsets;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x00000000006587d0
- (void)handleTouchUp:(id)arg1;	// IMP=0x0000000000658780
- (void)handleTouchDown:(id)arg1;	// IMP=0x00000000006586d0
- (void)handleTimer:(id)arg1;	// IMP=0x00000000006586a0
- (void)textSizeChanged:(id)arg1;	// IMP=0x00000000006585a0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000657d20
- (void)tintColorDidChange;	// IMP=0x0000000000657af0
- (void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000006578c0
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000657820
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000657800
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006577e0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000006577b0
@property(nonatomic) _Bool highlighted;
- (_Bool)isHighlighted;	// IMP=0x0000000000657300
@property(nonatomic, retain) UIColor *backgroundColor;

@end

