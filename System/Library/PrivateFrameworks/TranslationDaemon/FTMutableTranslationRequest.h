//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTSiriPayloadTranslationInfo, FTSiriTranslationInfo, FTSpeechTranslationInfo, FTTranslationOptions, FTWebTranslationInfo, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface FTMutableTranslationRequest
{
}

@property(nonatomic) _Bool is_partial;
@property(copy, nonatomic) FTTranslationOptions *options;
@property(copy, nonatomic) NSString *use_case;
@property(copy, nonatomic) NSString *app_id;
@property(nonatomic) long long opt_in_status;
@property(nonatomic) _Bool disable_log;
@property(copy, nonatomic) FTWebTranslationInfo *web_translation_info;
@property(copy, nonatomic) NSString *sequence_id;
@property(copy, nonatomic) FTSiriPayloadTranslationInfo *siri_payload_translation_info;
@property(copy, nonatomic) FTSpeechTranslationInfo *speech_translation_info;
@property(copy, nonatomic) FTSiriTranslationInfo *siri_translation_info;
@property(copy, nonatomic) NSArray *translation_phrase;
@property(copy, nonatomic) NSString *target_language;
@property(copy, nonatomic) NSString *source_language;
@property(copy, nonatomic) NSString *task;
@property(copy, nonatomic) NSString *request_id;
@property(copy, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001575bc
- (id)init;	// IMP=0x000000000015752e

@end

