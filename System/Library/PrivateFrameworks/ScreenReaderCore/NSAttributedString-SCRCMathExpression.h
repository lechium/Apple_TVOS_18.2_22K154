//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (SCRCMathExpression)
+ (id)scrcSpaceString;	// IMP=0x0050000000001f67
+ (id)scrcPauseString;	// IMP=0x0050000000001f4e
+ (id)scrcString;	// IMP=0x0050000000001f3c
+ (id)scrcStringWithDollarCode:(id)arg1 treePosition:(id)arg2;	// IMP=0x0050000000001e9e
+ (id)scrcStringWithLiteralString:(id)arg1 treePosition:(id)arg2;	// IMP=0x0050000000001d58
+ (id)scrcStringWithLiteralString:(id)arg1;	// IMP=0x0050000000001d44
+ (id)scrcStringWithString:(id)arg1 treePosition:(id)arg2;	// IMP=0x0050000000001c5a
+ (id)scrcStringWithString:(id)arg1;	// IMP=0x0050000000001c46
+ (id)scrcStringWithFormat:(id)arg1;	// IMP=0x0050000000001b99
+ (id)_scrcStringWithFormat:(id)arg1 args:(struct __va_list_tag [1])arg2;	// IMP=0x0050000000001921
- (_Bool)scrcContainsPause;	// IMP=0x00100000000022bc
- (_Bool)_scrcHasPauseCommaAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000002211
- (id)scrcStringByAddingAttribute:(id)arg1 value:(id)arg2;	// IMP=0x001000000000217b
- (id)scrcStringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2;	// IMP=0x001000000000202f
- (id)scrcStringByAppendingAttributedString:(id)arg1;	// IMP=0x0010000000001f80
- (struct _NSRange)_scrcRangeOfFormatSpecifierWithIndex:(unsigned long long)arg1;	// IMP=0x001000000000188e
- (struct _NSRange)_scrcRangeOfVanillaFormatSpecifier;	// IMP=0x0010000000001834
- (id)scrcIndexSetForAttributes:(id)arg1 limit:(long long)arg2;	// IMP=0x0010000000024d44
- (id)scrcSplitBasedOnAttribute:(id)arg1 limit:(long long)arg2;	// IMP=0x0010000000024a84
- (id)scrcSplitBasedOnMultipleAttributesWithLimit:(long long)arg1;	// IMP=0x00100000000247fe
@end

