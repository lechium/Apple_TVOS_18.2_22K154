//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTPostItnHammerResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct PostItnHammerResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000e1053
- (id)flatbuffData;	// IMP=0x00000000000e0ed6
- (Offset_d5684332)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000e090f
- (void)tokens_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e075e
- (unsigned long long)tokens_count;	// IMP=0x00000000000e06c2
- (id)tokens_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000e05c8
@property(readonly, nonatomic) NSArray *tokens;
@property(readonly, nonatomic) NSString *return_str;
@property(readonly, nonatomic) int return_code;
@property(readonly, nonatomic) NSString *language;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e02bc
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PostItnHammerResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000e0111
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PostItnHammerResponse *)arg2;	// IMP=0x00000000000e00fc
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000e00e2
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000e00cb

@end

