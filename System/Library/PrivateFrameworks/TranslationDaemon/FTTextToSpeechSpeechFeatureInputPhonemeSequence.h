//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechSpeechFeatureInputPhonemeSequence : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechSpeechFeatureInputPhonemeSequence *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000126285
- (id)flatbuffData;	// IMP=0x0000000000126108
- (Offset_73d90e58)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000125cf7
- (void)phonemeseq_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000125b46
- (unsigned long long)phonemeseq_count;	// IMP=0x0000000000125aaa
- (id)phonemeseq_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001259b0
@property(readonly, nonatomic) NSArray *phonemeseq;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000125887
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechSpeechFeatureInputPhonemeSequence *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000001256dc
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechSpeechFeatureInputPhonemeSequence *)arg2;	// IMP=0x00000000001256c7
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000001256ad
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000125696

@end

