//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTTextToSpeechSpeechFeatureInputPhonemeSequence, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechSpeechFeatureRequest_LexiconEntry : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct LexiconEntry *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000127a6b
- (id)flatbuffData;	// IMP=0x00000000001278ee
- (Offset_dc6a516e)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000001277e6
@property(readonly, nonatomic) FTTextToSpeechSpeechFeatureInputPhonemeSequence *value;
@property(readonly, nonatomic) NSString *key;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012769a
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LexiconEntry *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000001274ef
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LexiconEntry *)arg2;	// IMP=0x00000000001274da
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000001274c0
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000001274a9

@end

