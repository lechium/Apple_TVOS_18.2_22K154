//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTApgPronGuessMessage, FTAsrCorrectionsValidatorMessage, FTAsrErrorBlamerMessage, FTAsrGraphemeToPhonemeMessage, FTAsrItnMessage, FTAsrKeywordFinderMessage, FTAsrPostItnHammerMessage, FTAsrRecognitionMessage, FTAsrTextNormalizationMessage, FTBlazarBatchTranslationMessage, FTBlazarMultiUserMessage, FTBlazarMultilingualMessage, FTBlazarServiceDiscoveryMessage, FTBlazarSpeechTranslationMessage, FTBlazarTextToSpeechRouterMessage, FTBlazarTextToSpeechRouterStreamingMessage, FTDisableSessionLog, FTErrorMessage, FTLmtLmScorerMessage, FTMtTranslationMessage, FTNapgCreateLanguageProfileMessage, FTNlShortcutFuzzyMatchMessage, FTSlsLanguageDetectionMessage, FTTtsTextToSpeechMessage, FTTtsTextToSpeechSpeechFeatureMessage, FTTtsTextToSpeechStreamingMessage, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTQssMessage : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct QssMessage *_root;	// 24 = 0x18
}

+ (long long)container_message_typeForImmutableObject:(id)arg1;	// IMP=0x00100000000933ae
+ (Class)container_message_immutableClassForType:(long long)arg1;	// IMP=0x0010000000093374
- (void).cxx_destruct;	// IMP=0x0000000000094511
- (id)flatbuffData;	// IMP=0x0000000000094394
- (Offset_eabeea59)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000937c2
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *container_message;
@property(readonly, nonatomic) FTSlsLanguageDetectionMessage *container_messageAsFTSlsLanguageDetectionMessage;
@property(readonly, nonatomic) FTNlShortcutFuzzyMatchMessage *container_messageAsFTNlShortcutFuzzyMatchMessage;
@property(readonly, nonatomic) FTTtsTextToSpeechSpeechFeatureMessage *container_messageAsFTTtsTextToSpeechSpeechFeatureMessage;
@property(readonly, nonatomic) FTTtsTextToSpeechStreamingMessage *container_messageAsFTTtsTextToSpeechStreamingMessage;
@property(readonly, nonatomic) FTTtsTextToSpeechMessage *container_messageAsFTTtsTextToSpeechMessage;
@property(readonly, nonatomic) FTMtTranslationMessage *container_messageAsFTMtTranslationMessage;
@property(readonly, nonatomic) FTNapgCreateLanguageProfileMessage *container_messageAsFTNapgCreateLanguageProfileMessage;
@property(readonly, nonatomic) FTLmtLmScorerMessage *container_messageAsFTLmtLmScorerMessage;
@property(readonly, nonatomic) FTBlazarServiceDiscoveryMessage *container_messageAsFTBlazarServiceDiscoveryMessage;
@property(readonly, nonatomic) FTBlazarTextToSpeechRouterStreamingMessage *container_messageAsFTBlazarTextToSpeechRouterStreamingMessage;
@property(readonly, nonatomic) FTBlazarTextToSpeechRouterMessage *container_messageAsFTBlazarTextToSpeechRouterMessage;
@property(readonly, nonatomic) FTBlazarBatchTranslationMessage *container_messageAsFTBlazarBatchTranslationMessage;
@property(readonly, nonatomic) FTBlazarSpeechTranslationMessage *container_messageAsFTBlazarSpeechTranslationMessage;
@property(readonly, nonatomic) FTBlazarMultilingualMessage *container_messageAsFTBlazarMultilingualMessage;
@property(readonly, nonatomic) FTBlazarMultiUserMessage *container_messageAsFTBlazarMultiUserMessage;
@property(readonly, nonatomic) FTAsrGraphemeToPhonemeMessage *container_messageAsFTAsrGraphemeToPhonemeMessage;
@property(readonly, nonatomic) FTAsrCorrectionsValidatorMessage *container_messageAsFTAsrCorrectionsValidatorMessage;
@property(readonly, nonatomic) FTAsrKeywordFinderMessage *container_messageAsFTAsrKeywordFinderMessage;
@property(readonly, nonatomic) FTAsrPostItnHammerMessage *container_messageAsFTAsrPostItnHammerMessage;
@property(readonly, nonatomic) FTAsrTextNormalizationMessage *container_messageAsFTAsrTextNormalizationMessage;
@property(readonly, nonatomic) FTAsrItnMessage *container_messageAsFTAsrItnMessage;
@property(readonly, nonatomic) FTAsrErrorBlamerMessage *container_messageAsFTAsrErrorBlamerMessage;
@property(readonly, nonatomic) FTAsrRecognitionMessage *container_messageAsFTAsrRecognitionMessage;
@property(readonly, nonatomic) FTApgPronGuessMessage *container_messageAsFTApgPronGuessMessage;
@property(readonly, nonatomic) long long container_message_type;
@property(readonly, nonatomic) FTDisableSessionLog *disable_session_log;
@property(readonly, nonatomic) FTErrorMessage *error_message;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000091b3b
- (id)initWithFlatbuffData:(id)arg1 root:(const struct QssMessage *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000091958
- (id)initWithFlatbuffData:(id)arg1 root:(const struct QssMessage *)arg2;	// IMP=0x0000000000091943
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000091929
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000091912

@end

