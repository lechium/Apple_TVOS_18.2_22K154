//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface OPTTSTTSNormalizedText : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TTSNormalizedText *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000010ddee
- (id)flatbuffData;	// IMP=0x000000000010dcd7
- (Offset_db6a2642)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000010dc18
@property(readonly, nonatomic) NSString *text;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010db9f
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TTSNormalizedText *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000010d9bc
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TTSNormalizedText *)arg2;	// IMP=0x000000000010d9a7
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000010d98d
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000010d976

@end

