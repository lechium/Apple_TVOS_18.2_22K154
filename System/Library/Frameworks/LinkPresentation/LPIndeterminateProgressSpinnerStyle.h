//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LPPadding, LPPointUnit, LPTextViewStyle, UIColor;

__attribute__((visibility("hidden")))
@interface LPIndeterminateProgressSpinnerStyle : NSObject
{
    _Bool _useLargeIndicatorStyle;	// 8 = 0x8
    LPPadding *_padding;	// 16 = 0x10
    LPPointUnit *_spacing;	// 24 = 0x18
    LPPointUnit *_verticalOffset;	// 32 = 0x20
    UIColor *_indicatorColor;	// 40 = 0x28
    LPTextViewStyle *_label;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000007208b
@property(retain, nonatomic) LPTextViewStyle *label; // @synthesize label=_label;
@property(nonatomic) _Bool useLargeIndicatorStyle; // @synthesize useLargeIndicatorStyle=_useLargeIndicatorStyle;
@property(retain, nonatomic) UIColor *indicatorColor; // @synthesize indicatorColor=_indicatorColor;
@property(retain, nonatomic) LPPointUnit *verticalOffset; // @synthesize verticalOffset=_verticalOffset;
@property(retain, nonatomic) LPPointUnit *spacing; // @synthesize spacing=_spacing;
@property(retain, nonatomic) LPPadding *padding; // @synthesize padding=_padding;
- (id)initWithPlatform:(long long)arg1 sizeClass:(unsigned long long)arg2 fontScalingFactor:(double)arg3;	// IMP=0x0000000000071c2b

@end

