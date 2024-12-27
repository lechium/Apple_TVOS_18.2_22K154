//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIKBRenderFactory.h"

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryNumberPad : UIKBRenderFactory
{
}

- (void)setupLayoutSegments;	// IMP=0x0000000000cb81f9
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;	// IMP=0x0000000000cb7965
- (void)_customizeSymbolStyle:(id)arg1 secondaryStyle:(id)arg2 forKey:(id)arg3 contents:(id)arg4;	// IMP=0x0000000000cb70fe
- (struct CGPoint)specialSymbolOffset;	// IMP=0x0000000000cb70ed
- (struct CGPoint)loneZeroOffset;	// IMP=0x0000000000cb70dc
- (struct CGPoint)rightColumnLetterOffset;	// IMP=0x0000000000cb70cb
- (struct CGPoint)rightColumnNumberOffset;	// IMP=0x0000000000cb70ba
- (struct CGPoint)centerColumnLetterOffset;	// IMP=0x0000000000cb70a9
- (struct CGPoint)centerColumnNumberOffset;	// IMP=0x0000000000cb7098
- (struct CGPoint)leftColumnLetterOffset;	// IMP=0x0000000000cb7082
- (struct CGPoint)leftColumnNumberOffset;	// IMP=0x0000000000cb706c
- (struct CGPoint)dictationGlyphOffset;	// IMP=0x0000000000cb7060
- (struct CGPoint)deleteGlyphOffset;	// IMP=0x0000000000cb704a
- (double)symbolImageControlKeyFontSize;	// IMP=0x0000000000cb703c
- (double)letterFontSize;	// IMP=0x0000000000cb702e
- (double)numberFontSize;	// IMP=0x0000000000cb7020
- (id)controlKeyDividerColorName;	// IMP=0x0000000000cb700c
- (id)controlKeyForegroundColorName;	// IMP=0x0000000000cb7004
- (id)controlKeyBackgroundColorName;	// IMP=0x0000000000cb6ff0
- (id)defaultKeyDividerColorName;	// IMP=0x0000000000cb6fde
- (long long)lightHighQualityEnabledBlendForm;	// IMP=0x0000000000cb6fd3

@end

