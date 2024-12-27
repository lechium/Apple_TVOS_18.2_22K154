//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableAttributedString.h>

@interface NSMutableAttributedString (NSMutableAttributedStringKitAdditions)
- (void)convertWritingDirectionToBidiControlCharacters;	// IMP=0x00900000000a4b36
- (struct _NSRange)convertWritingDirectionToBidiControlCharactersForParagraphAtIndex:(unsigned long long)arg1;	// IMP=0x00900000000a471b
- (void)convertBidiControlCharactersToWritingDirection;	// IMP=0x00900000000a469c
- (struct _NSRange)convertBidiControlCharactersToWritingDirectionForParagraphAtIndex:(unsigned long long)arg1;	// IMP=0x00900000000a4330
- (_Bool)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;	// IMP=0x00900000000a431b
- (_Bool)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;	// IMP=0x00900000000a4306
- (_Bool)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;	// IMP=0x00900000000a42f3
- (_Bool)readFromFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;	// IMP=0x00900000000a42dd
- (_Bool)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;	// IMP=0x00900000000a42c7
- (void)unscriptRange:(struct _NSRange)arg1;	// IMP=0x00900000000a42a5
- (void)subscriptRange:(struct _NSRange)arg1;	// IMP=0x00900000000a427c
- (void)superscriptRange:(struct _NSRange)arg1;	// IMP=0x00900000000a4255
- (void)_changeIntAttribute:(id)arg1 by:(long long)arg2 range:(struct _NSRange)arg3;	// IMP=0x00900000000a40f2
- (void)setBaseWritingDirection:(long long)arg1 range:(struct _NSRange)arg2;	// IMP=0x00900000000a3f9a
- (void)setAlignment:(long long)arg1 range:(struct _NSRange)arg2;	// IMP=0x00900000000a3e42
- (void)fixGlyphInfoAttributeInRange:(struct _NSRange)arg1;	// IMP=0x00900000000a3cd8
- (void)_fixGlyphInfo:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x00900000000a3bc8
- (void)fixAttachmentAttributeInRange:(struct _NSRange)arg1;	// IMP=0x00900000000a3793
- (void)fixParagraphStyleAttributeInRange:(struct _NSRange)arg1;	// IMP=0x00900000000a353f
- (void)fixFontAttributeInRange:(struct _NSRange)arg1;	// IMP=0x00900000000a1056
- (_Bool)_shouldSetOriginalFontAttribute;	// IMP=0x00900000000a1044
- (void)fixAttributesInRange:(struct _NSRange)arg1;	// IMP=0x00900000000a0f0b
- (void)_setAttributeFixingInProgress:(_Bool)arg1;	// IMP=0x00900000000a0f05
- (_Bool)_attributeFixingInProgress;	// IMP=0x00900000000a0efd
@end

