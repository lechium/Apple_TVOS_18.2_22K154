//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSConcreteTextStorage.h"

@class NSDictionary, NSMutableDictionary, UIColor, UIFont;
@protocol _UITextAttributeDefaults;

__attribute__((visibility("hidden")))
@interface _UICascadingTextStorage : NSConcreteTextStorage
{
    NSMutableDictionary *_defaultAttributes;	// 224 = 0xe0
    id <_UITextAttributeDefaults> _defaults;	// 232 = 0xe8
}

+ (id)defaultFont;	// IMP=0x00600000014bc15f
- (void).cxx_destruct;	// IMP=0x00000000014bc248
@property(retain, nonatomic, setter=_setDefaults:) id <_UITextAttributeDefaults> _defaults; // @synthesize _defaults;
- (void)_restoreOriginalFontAttribute;	// IMP=0x00000000014bc209
- (_Bool)_shouldSetOriginalFontAttribute;	// IMP=0x00000000014bc201
- (id)_defaultAttributes;	// IMP=0x00000000014bc182
@property(nonatomic) long long defaultBaseWritingDirection;
@property(copy, nonatomic) NSDictionary *defaultAttributes;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;	// IMP=0x00000000014bbeb1
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;	// IMP=0x00000000014bbdfe
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;	// IMP=0x00000000014bbd59
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;	// IMP=0x00000000014bbcb4
- (id)initWithDefaults:(id)arg1;	// IMP=0x00000000014bbbb4
- (id)init;	// IMP=0x00000000014bbba0
- (long long)_ui_resolvedTextAlignment;	// IMP=0x00000000014bd74c
@property(nonatomic) long long lineBreakMode;
@property(nonatomic) long long textAlignment;
@property(retain, nonatomic) UIColor *textColor;
@property(nonatomic) double shadowBlur;
@property(nonatomic) struct CGSize shadowOffset;
@property(retain, nonatomic) UIColor *shadowColor;
- (id)_shadow;	// IMP=0x00000000014bc95c
- (void)_setShadow:(id)arg1;	// IMP=0x00000000014bc6d4
@property(retain, nonatomic) UIFont *font;

@end

