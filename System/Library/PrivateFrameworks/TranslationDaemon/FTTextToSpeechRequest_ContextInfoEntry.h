//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechRequest_ContextInfoEntry : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct ContextInfoEntry *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000116129
- (id)flatbuffData;	// IMP=0x0000000000115fac
- (Offset_247d1513)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000115e75
@property(readonly, nonatomic) NSString *value;
@property(readonly, nonatomic) NSString *key;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000115d8e
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ContextInfoEntry *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000115be3
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ContextInfoEntry *)arg2;	// IMP=0x0000000000115bce
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000115bb4
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000115b9d

@end

