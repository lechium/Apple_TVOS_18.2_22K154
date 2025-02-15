//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUICatalog, CUIStyleEffectConfiguration, NSString, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface __NSTextAppearanceEffectContext : NSObject
{
    NSString *_effectName;	// 8 = 0x8
    CUICatalog *_catalog;	// 16 = 0x10
    CUIStyleEffectConfiguration *_effectConfiguration;	// 24 = 0x18
    UIFont *_font;	// 32 = 0x20
    UIColor *_color;	// 40 = 0x28
}

- (void)drawGlyphs:(const unsigned short *)arg1 positions:(const struct CGPoint *)arg2 count:(long long)arg3 context:(struct CGContext *)arg4;	// IMP=0x000000000013238e
- (void)dealloc;	// IMP=0x000000000013232f
- (id)initWithTextEffectName:(id)arg1 catalog:(id)arg2 styleEffectConfiguration:(id)arg3 font:(id)arg4 color:(id)arg5 applicationFrameworkContext:(long long)arg6 useSimplifiedEffect:(_Bool)arg7;	// IMP=0x00000000001320af

@end

