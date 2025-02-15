//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface _NSLineMetrics : NSObject
{
    NSAttributedString *_attributedString;	// 8 = 0x8
    struct _NSRange _lineRange;	// 16 = 0x10
    struct __CTLine *_line;	// 32 = 0x20
    double *_positions;	// 40 = 0x28
    _Bool *_hasAdvanceAdjustment;	// 48 = 0x30
    double *_initialAdvances;	// 56 = 0x38
    double *_finalAdvances;	// 64 = 0x40
    unsigned long long _terminalAdvancesCapacity;	// 72 = 0x48
    _Bool _terminalAdvancesValid;	// 80 = 0x50
    struct __CFArray *_runsBuf;	// 88 = 0x58
    struct CGSize *_advancesBuf;	// 96 = 0x60
    long long *_stringIndicesBuf;	// 104 = 0x68
    unsigned long long _glyphCapacity;	// 112 = 0x70
    struct __CFLocale *_locale;	// 120 = 0x78
    unsigned long long _hasShaping;	// 128 = 0x80
    _Bool _isInCalculatePositions;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000000006f2a3
@property(readonly) struct __CTLine *line; // @synthesize line=_line;
@property(readonly) struct _NSRange lineRange; // @synthesize lineRange=_lineRange;
@property(readonly) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (unsigned long long)suggestedLineBreakAfterIndex:(unsigned long long)arg1 withWidth:(double)arg2;	// IMP=0x000000000006f1e1
- (double)widthOfSubstringToIndex:(unsigned long long)arg1;	// IMP=0x000000000006f1aa
- (double)widthOfSubstringWithRange:(struct _NSRange)arg1;	// IMP=0x000000000006f018
- (void)_getInitialAdvanceForComposedCharacterInRange:(struct _NSRange)arg1 andFinalAdvanceForComposedCharacterInRange:(struct _NSRange)arg2;	// IMP=0x000000000006edc6
- (double)_finalAdvanceForCharacterAtIndex:(unsigned long long)arg1 range:(struct _NSRange *)arg2;	// IMP=0x000000000006eb1e
- (double)_initialAdvanceForCharacterAtIndex:(unsigned long long)arg1 range:(struct _NSRange *)arg2;	// IMP=0x000000000006e88c
- (_Bool)_hasShaping;	// IMP=0x000000000006e69a
- (void)_ensureTerminalAdvancesCapacity:(unsigned long long)arg1;	// IMP=0x000000000006e640
- (void)_ensureGlyphCapacity:(unsigned long long)arg1;	// IMP=0x000000000006e5e6
- (void)dealloc;	// IMP=0x000000000006e537
- (void)setAttributedString:(id)arg1 range:(struct _NSRange)arg2 line:(struct __CTLine *)arg3;	// IMP=0x000000000006e456
- (id)initWithAttributedString:(id)arg1 range:(struct _NSRange)arg2 line:(struct __CTLine *)arg3;	// IMP=0x000000000006e3d0
- (id)initWithAttributedString:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000006e3bb
- (void)_calculatePositions;	// IMP=0x000000000006e334
- (void)_calculatePositions:(double *)arg1 hasAdvanceAdjustment:(_Bool *)arg2 withCapacity:(unsigned long long)arg3 forAttributedString:(id)arg4 range:(struct _NSRange)arg5 line:(struct __CTLine *)arg6;	// IMP=0x000000000006deaa
@property(nonatomic) struct __CFLocale *locale;

@end

