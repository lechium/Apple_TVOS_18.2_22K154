//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (CoreHandwriting)
+ (id)alternativeCharacterForms;	// IMP=0x00500000003add90
+ (id)ch_latinCharacterString;	// IMP=0x00500000003ac410
- (_Bool)hasMaxHeightOfXHeight;	// IMP=0x00100000003ae490
- (_Bool)hasAscender;	// IMP=0x00100000003ae470
- (unsigned long long)ascendersCount;	// IMP=0x00100000003ae240
- (_Bool)hasDescender;	// IMP=0x00100000003adf10
- (_Bool)hasAmbiguousCharacter;	// IMP=0x00100000003addf0
- (_Bool)isAllUppercase;	// IMP=0x00100000003adca0
- (unsigned long long)cursorPositionAtIndex:(unsigned long long)arg1 usingBlockToSelectSide:(CDUnknownBlockType)arg2;	// IMP=0x00100000003adb00
- (_Bool)isAbbreviation;	// IMP=0x00100000003ad970
- (_Bool)endsWithSentenceEndPunctuation;	// IMP=0x00100000003ad900
- (id)substringWithComposedCharacterRange:(struct _NSRange)arg1;	// IMP=0x00100000003ad620
- (id)firstComposedCharacter;	// IMP=0x00100000003ad600
- (id)lastComposedCharacter;	// IMP=0x00100000003ad5c0
- (id)composedCharacterAtIndex:(unsigned long long)arg1;	// IMP=0x00100000003ad550
- (void)enumerateCodepointsInRange:(struct _NSRange)arg1 reverse:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000003ad420
- (void)enumerateCodepointsInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000003ad400
- (unsigned int)firstCodepointInString;	// IMP=0x00100000003ad3c0
- (unsigned int)codepointAtIndex:(unsigned long long)arg1 outRange:(struct _NSRange *)arg2;	// IMP=0x00100000003ad2b0
- (struct _NSRange)codepointRangeAtIndex:(unsigned long long)arg1;	// IMP=0x00100000003ad280
- (long long)countCodepoints;	// IMP=0x00100000003ad190
- (long long)countCharacters;	// IMP=0x00100000003ad0a0
- (long long)countSubstringsWithOptions:(unsigned long long)arg1;	// IMP=0x00100000003acfb0
- (_Bool)hasSubstringInSet:(id)arg1;	// IMP=0x00100000003ace50
- (id)indexesOfCharacters:(id)arg1 withWeakCharacters:(id)arg2;	// IMP=0x00100000003ac970
- (id)indexesOfCharacters:(id)arg1;	// IMP=0x00100000003ac820
- (id)ch_hasCharactersFromSets:(id)arg1;	// IMP=0x00100000003ac600
- (long long)ch_occurrencesOfCharactersInSet:(id)arg1 maxCount:(long long)arg2;	// IMP=0x00100000003ac490
@end

