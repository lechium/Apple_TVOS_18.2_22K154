//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTWord : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct Word *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d498e
- (id)flatbuffData;	// IMP=0x00000000000d4811
- (Offset_a1b0fd55)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000d45b4
@property(readonly, nonatomic) NSString *tag;
@property(readonly, nonatomic) int frequency;
- (void)pronunciations:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d44ac
@property(readonly, nonatomic) NSData *pronunciations;
@property(readonly, nonatomic) NSString *orthography;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d43e8
- (id)initWithFlatbuffData:(id)arg1 root:(const struct Word *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000d423d
- (id)initWithFlatbuffData:(id)arg1 root:(const struct Word *)arg2;	// IMP=0x00000000000d4228
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000d420e
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000d41f7

@end

