//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSAttributedString, NSString;

@interface AMPLanguageAwareString : NSObject
{
    MISSING_TYPE *baseAttributedString;	// 8 = 0x8
    MISSING_TYPE *$__lazy_storage_$_attributedString;	// 16 = 0x10
    MISSING_TYPE *cachedTextStorage;	// 24 = 0x18
    MISSING_TYPE *knownBaseWritingDirections;	// 32 = 0x20
    MISSING_TYPE *string;	// 40 = 0x28
    MISSING_TYPE *$__lazy_storage_$_localizedLowercase;	// 56 = 0x38
    MISSING_TYPE *$__lazy_storage_$_localizedUppercase;	// 64 = 0x40
    MISSING_TYPE *$__lazy_storage_$_newlinesCollapsedToSpace;	// 72 = 0x48
    MISSING_TYPE *$__lazy_storage_$_trimmed;	// 80 = 0x50
    MISSING_TYPE *numbers;	// 88 = 0x58
    MISSING_TYPE *paragraphs;	// 96 = 0x60
    MISSING_TYPE *words;	// 104 = 0x68
    MISSING_TYPE *$__lazy_storage_$_fullRange;	// 112 = 0x70
    MISSING_TYPE *$__lazy_storage_$_isEmpty;	// 129 = 0x81
    MISSING_TYPE *$__lazy_storage_$_utf16Count;	// 136 = 0x88
    MISSING_TYPE *$__lazy_storage_$_utf32Count;	// 152 = 0x98
    MISSING_TYPE *$__lazy_storage_$_characterCount;	// 168 = 0xa8
    MISSING_TYPE *$__lazy_storage_$_thresholdBaseWritingDirection;	// 184 = 0xb8
}

+ (id)AMPLanguageAwareStringEmpty;	// IMP=0x00100000006b0fc0
+ (void)setDelegate:(id)arg1;	// IMP=0x00100000006b0e97
+ (id)delegate;	// IMP=0x00100000006b0e4a
+ (void)setKeepStatisticsOnLanguageComponents:(_Bool)arg1;	// IMP=0x00100000006b0dcc
+ (_Bool)keepStatisticsOnLanguageComponents;	// IMP=0x00100000006b0d8f
+ (void)setAlwaysGenerateAttributedString:(_Bool)arg1;	// IMP=0x00100000006b0d0b
+ (_Bool)alwaysGenerateAttributedString;	// IMP=0x00100000006b0cce
- (void).cxx_destruct;	// IMP=0x00000000006b36b6
- (id)init;	// IMP=0x00000000006b3683
- (id)writingDirectionsQuantities;	// IMP=0x00000000006b3627
- (long long)writingDirectionOfLine:(long long)arg1 maximumLinesShown:(long long)arg2 withWidth:(double)arg3 lineBreakMode:(long long)arg4 cacheLayoutInfo:(_Bool)arg5;	// IMP=0x00000000006b35b5
@property(nonatomic) long long thresholdBaseWritingDirection;
- (long long)baseWritingDirectionForCharacterAtLocation:(long long)arg1;	// IMP=0x00000000006b2ee2
- (id)initWithLanguageAwareString:(id)arg1 attributes:(id)arg2 keepStatisticsOnLanguageComponents:(_Bool)arg3;	// IMP=0x00000000006b258a
- (id)initWithString:(id)arg1 baseParagraphStyle:(id)arg2 generateAttributedString:(_Bool)arg3 keepStatisticsOnLanguageComponents:(_Bool)arg4;	// IMP=0x00000000006b18a3
- (id)initWithString:(id)arg1 attributes:(id)arg2 baseParagraphStyle:(id)arg3 keepStatisticsOnLanguageComponents:(_Bool)arg4;	// IMP=0x00000000006b16fb
- (id)initWithAttributedString:(id)arg1 baseParagraphStyle:(id)arg2 keepStatisticsOnLanguageComponents:(_Bool)arg3;	// IMP=0x00000000006b1333
@property(nonatomic) long long numberOfCharacters;
@property(nonatomic) long long utf32Length;
@property(nonatomic) long long length;
@property(nonatomic) _Bool isEmpty;
@property(nonatomic) struct _NSRange fullRange;
@property(nonatomic, readonly) NSArray *words;
@property(nonatomic, readonly) NSArray *paragraphs;
@property(nonatomic, readonly) NSArray *numbers;
@property(nonatomic, retain) AMPLanguageAwareString *trimmed;
@property(nonatomic, retain) AMPLanguageAwareString *newlinesCollapsedToSpace;
@property(nonatomic, retain) AMPLanguageAwareString *localizedUppercase;
@property(nonatomic, retain) AMPLanguageAwareString *localizedLowercase;
@property(nonatomic, readonly) NSString *string;
@property(nonatomic, retain) NSAttributedString *attributedString;

@end

