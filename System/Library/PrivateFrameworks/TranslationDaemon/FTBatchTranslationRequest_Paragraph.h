//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTBatchTranslationRequest_Paragraph : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct Paragraph *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000013b7ec
- (id)flatbuffData;	// IMP=0x000000000013b66f
- (Offset_1be97c44)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000013b1c6
- (void)span_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000013b015
- (unsigned long long)span_count;	// IMP=0x000000000013af79
- (id)span_objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000013ae7f
@property(readonly, nonatomic) NSArray *span;
@property(readonly, nonatomic) NSString *text;
@property(readonly, nonatomic) NSString *paragraph_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013ac7a
- (id)initWithFlatbuffData:(id)arg1 root:(const struct Paragraph *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000013aacf
- (id)initWithFlatbuffData:(id)arg1 root:(const struct Paragraph *)arg2;	// IMP=0x000000000013aaba
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000013aaa0
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000013aa89

@end

