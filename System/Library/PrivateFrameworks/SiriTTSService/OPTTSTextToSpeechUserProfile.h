//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OPTTSTextToSpeechUserProfile : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechUserProfile *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001126d4
- (id)flatbuffData;	// IMP=0x00000000001125bd
- (Offset_4fc92dd1)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000001121d1
- (void)resources_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000011202e
- (unsigned long long)resources_count;	// IMP=0x0000000000111f92
- (id)resources_objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000111e72
@property(readonly, nonatomic) NSArray *resources;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000111d62
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechUserProfile *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000111b7f
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechUserProfile *)arg2;	// IMP=0x0000000000111b6a
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000111b50
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000111b39

@end

