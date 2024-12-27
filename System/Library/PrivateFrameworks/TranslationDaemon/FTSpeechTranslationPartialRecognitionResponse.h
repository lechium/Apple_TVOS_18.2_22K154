//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTSpeechTranslationPartialRecognitionResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct SpeechTranslationPartialRecognitionResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000012fd57
- (id)flatbuffData;	// IMP=0x000000000012fbda
- (Offset_232cf698)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000012f8dc
@property(readonly, nonatomic) _Bool is_stable_result;
@property(readonly, nonatomic) int confidence;
@property(readonly, nonatomic) NSString *recognition_text;
@property(readonly, nonatomic) NSString *source_locale;
@property(readonly, nonatomic) NSString *return_str;
@property(readonly, nonatomic) int return_code;
@property(readonly, nonatomic) NSString *request_id;
@property(readonly, nonatomic) NSString *conversation_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012f624
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationPartialRecognitionResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000012f479
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationPartialRecognitionResponse *)arg2;	// IMP=0x000000000012f464
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000012f44a
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000012f433

@end

