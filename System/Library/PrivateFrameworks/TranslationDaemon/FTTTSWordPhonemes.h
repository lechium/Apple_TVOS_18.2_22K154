//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTTTSWordPhonemes : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TTSWordPhonemes *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000010b5ac
- (id)flatbuffData;	// IMP=0x000000000010b42f
- (Offset_9874306f)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000010b08f
- (void)phonemes_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000010aed4
- (unsigned long long)phonemes_count;	// IMP=0x000000000010ae38
- (id)phonemes_objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000010ad3f
@property(readonly, nonatomic) NSArray *phonemes;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010ac16
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TTSWordPhonemes *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000010aa6b
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TTSWordPhonemes *)arg2;	// IMP=0x000000000010aa56
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000010aa3c
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000010aa25

@end

