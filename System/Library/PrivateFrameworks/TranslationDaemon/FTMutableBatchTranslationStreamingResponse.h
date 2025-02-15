//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTBatchTranslationResponse, FTFinalBlazarResponse, FTTranslationSupportedLanguagesResponse, NSObject;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMutableBatchTranslationStreamingResponse
{
}

+ (long long)content_typeForObject:(id)arg1;	// IMP=0x006000000019684d
+ (long long)content_typeForMutableObject:(id)arg1;	// IMP=0x0060000000196799
+ (Class)content_mutableClassForType:(long long)arg1;	// IMP=0x006000000019675f
@property(copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content; // @dynamic content;
@property(copy, nonatomic) FTTranslationSupportedLanguagesResponse *contentAsFTTranslationSupportedLanguagesResponse;
@property(copy, nonatomic) FTFinalBlazarResponse *contentAsFTFinalBlazarResponse;
@property(copy, nonatomic) FTBatchTranslationResponse *contentAsFTBatchTranslationResponse;
@property(nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000196233
- (id)init;	// IMP=0x00000000001961a5

@end

