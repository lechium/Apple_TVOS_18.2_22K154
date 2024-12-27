//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTVocToken, NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTPronGuessResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct PronGuessResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000dae3f
- (id)flatbuffData;	// IMP=0x00000000000dacc2
- (Offset_11d25f3c)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000da2e3
- (void)human_readable_prons_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000da128
- (unsigned long long)human_readable_prons_count;	// IMP=0x00000000000da08c
- (id)human_readable_prons_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000d9f93
@property(readonly, nonatomic) NSArray *human_readable_prons;
- (void)tts_pronunciations_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d9cc4
- (unsigned long long)tts_pronunciations_count;	// IMP=0x00000000000d9c28
- (id)tts_pronunciations_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000d9b2e
@property(readonly, nonatomic) NSArray *tts_pronunciations;
@property(readonly, nonatomic) FTVocToken *voc_token;
@property(readonly, nonatomic) NSString *apg_id;
@property(readonly, nonatomic) NSString *error_str;
@property(readonly, nonatomic) int error_code;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d974f
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PronGuessResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000d95a4
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PronGuessResponse *)arg2;	// IMP=0x00000000000d958f
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000d9575
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000d955e

@end

