//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTLanguageDetected, FTTranslationLocalePair, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface FTMutableStartSpeechTranslationLoggingRequest
{
}

@property(copy, nonatomic) NSArray *user_interacted_senses;
@property(copy, nonatomic) NSString *user_selected_sense;
@property(copy, nonatomic) NSArray *senses;
@property(copy, nonatomic) NSString *user_selected_locale;
@property(copy, nonatomic) FTLanguageDetected *detected_locale;
@property(copy, nonatomic) FTTranslationLocalePair *translation_locale_pair;
@property(copy, nonatomic) NSString *request_id;
@property(copy, nonatomic) NSString *conversation_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016f1d9
- (id)init;	// IMP=0x000000000016f14b

@end

