//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface FTMutableBatchTranslationResponse
{
}

@property(nonatomic) _Bool contains_masked_profanity;
@property(copy, nonatomic) NSString *translated_text_romanized;
@property(copy, nonatomic) NSArray *translated_sentences;
@property(copy, nonatomic) NSArray *span;
@property(copy, nonatomic) NSString *translated_text;
@property(copy, nonatomic) NSString *paragraph_id;
@property(copy, nonatomic) NSString *return_string;
@property(nonatomic) int return_code;
@property(copy, nonatomic) NSString *request_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000174a11
- (id)init;	// IMP=0x0000000000174983

@end

