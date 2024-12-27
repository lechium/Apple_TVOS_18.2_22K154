//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTRecognitionSausage, NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTSpeechTranslationInfo : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct SpeechTranslationInfo *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000ec677
- (id)flatbuffData;	// IMP=0x00000000000ec4fa
- (Offset_b4e49498)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000ec101
- (void)raw_nbest_choices_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ebf50
- (unsigned long long)raw_nbest_choices_count;	// IMP=0x00000000000ebeb4
- (id)raw_nbest_choices_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000ebdba
@property(readonly, nonatomic) NSArray *raw_nbest_choices;
@property(readonly, nonatomic) FTRecognitionSausage *raw_sausage;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ebbbe
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationInfo *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000eba13
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationInfo *)arg2;	// IMP=0x00000000000eb9fe
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000eb9e4
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000eb9cd

@end

