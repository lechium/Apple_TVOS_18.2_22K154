//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (ContactsUnitTesting)
+ (id)_cn_stringByRepeatingCharacter:(BOOL)arg1 length:(unsigned long long)arg2;	// IMP=0x00200000000022ab
+ (_Bool)_cn_isBlank:(id)arg1;	// IMP=0x002000000007bf7f
+ (id)_cn_whitespaceExceptAscii32CharacterSet;	// IMP=0x002000000007d0e5
+ (id)_cn_LTRControlCharacters;	// IMP=0x002000000007d053
+ (id)_cn_phoneNumberInvalidCharacters;	// IMP=0x002000000007cf2f
- (id)_cn_stringByReplacingStrings:(id)arg1;	// IMP=0x001000000003d275
- (id)_cn_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x001000000007cc65
- (id)_cn_resultWithAllCharacters:(CDUnknownBlockType)arg1;	// IMP=0x001000000007cada
- (id)_cn_truncateAtLength:(unsigned long long)arg1 addEllipsisIfTrunctated:(_Bool)arg2;	// IMP=0x001000000007ca16
- (struct _NSRange)_cn_rangeOfAnchoredCharacters:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x001000000007c8b2
- (id)_cn_takeLast:(unsigned long long)arg1;	// IMP=0x001000000007c879
- (id)_cn_take:(unsigned long long)arg1;	// IMP=0x001000000007c843
- (id)_cn_skipLast:(unsigned long long)arg1;	// IMP=0x001000000007c80d
- (id)_cn_skip:(unsigned long long)arg1;	// IMP=0x001000000007c7dd
- (void)_cn_eachCharacter:(CDUnknownBlockType)arg1;	// IMP=0x001000000007c758
- (struct _NSRange)_cn_rangeFromIndex:(unsigned long long)arg1;	// IMP=0x001000000007c705
- (id)_cn_SHA256HashStringWithSalt:(id)arg1;	// IMP=0x001000000007c653
- (id)_cn_nameComponentTokensUsingLocale:(id)arg1 inferredNameOrder:(long long *)arg2;	// IMP=0x001000000007c5f9
- (id)_cn_nameComponentTokens;	// IMP=0x001000000007c591
- (id)_cn_tokens;	// IMP=0x001000000007c575
- (id)_cn_trimmedString;	// IMP=0x001000000007c50f
- (id)_cn_stringByNormalizingCase;	// IMP=0x001000000007c4e6
- (id)_cn_stringByDeletingNumberOfPathComponents:(unsigned long long)arg1;	// IMP=0x001000000007c479
- (id)_cn_stringByAddingPercentEscapesToEntireURL;	// IMP=0x001000000007c3ee
- (id)_cn_stringByAddingPercentEscapesIfNecessary;	// IMP=0x001000000007c34a
- (struct _NSRange)_cn_rangeOfCommonPrefixWithString:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x001000000007c162
- (struct _NSRange)_cn_rangeOfCommonPrefixWithString:(id)arg1;	// IMP=0x001000000007c14e
- (_Bool)_cn_containsSubstring:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x001000000007c12b
- (_Bool)_cn_containsSubstring:(id)arg1;	// IMP=0x001000000007c108
- (id)_cn_stringByDeletingCharactersInSet:(id)arg1;	// IMP=0x001000000007c070
- (_Bool)_cn_containsCharacterInSet:(id)arg1;	// IMP=0x001000000007c04d
- (_Bool)_cn_hasSuffix:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x001000000007c02e
- (_Bool)_cn_hasSuffix:(id)arg1;	// IMP=0x001000000007c017
- (_Bool)_cn_hasPrefix:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x001000000007bff8
- (_Bool)_cn_hasPrefix:(id)arg1;	// IMP=0x001000000007bfe1
- (_Bool)_cn_hasCaseAndDiacriticInsensitivePrefix:(id)arg1;	// IMP=0x001000000007bfcf
- (_Bool)_cn_caseInsensitiveIsEqual:(id)arg1;	// IMP=0x001000000007bfb6
- (_Bool)_cn_isBlank;	// IMP=0x001000000007bf9d
@property(readonly) _Bool _cn_requiresPhoneNumberSanitizing;
- (id)_cn_stringByNormalizingWhitespace;	// IMP=0x001000000007ce26
- (id)_cn_stringBySanitizingPhoneNumber;	// IMP=0x001000000007cd9e
@end

