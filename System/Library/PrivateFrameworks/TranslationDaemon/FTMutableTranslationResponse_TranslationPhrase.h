//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTTranslationPhraseMetaInfo, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface FTMutableTranslationResponse_TranslationPhrase
{
}

@property(copy, nonatomic) FTTranslationPhraseMetaInfo *meta_info_data;
@property(nonatomic) _Bool low_confidence;
@property(copy, nonatomic) NSArray *spans;
@property(copy, nonatomic) NSString *meta_info;
@property(copy, nonatomic) NSArray *translated_tokens;
@property(nonatomic) float confidence;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015a0b6
- (id)init;	// IMP=0x000000000015a028

@end

