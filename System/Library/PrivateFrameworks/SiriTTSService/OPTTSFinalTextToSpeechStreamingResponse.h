//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface OPTTSFinalTextToSpeechStreamingResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct FinalTextToSpeechStreamingResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000011d2b3
- (id)flatbuffData;	// IMP=0x000000000011d19c
- (Offset_8cb3aebb)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000011cf33
@property(readonly, nonatomic) int total_pkt_number;
@property(readonly, nonatomic) NSString *stream_id;
@property(readonly, nonatomic) NSString *error_str;
@property(readonly, nonatomic) int error_code;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011cd1a
- (id)initWithFlatbuffData:(id)arg1 root:(const struct FinalTextToSpeechStreamingResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000011cb37
- (id)initWithFlatbuffData:(id)arg1 root:(const struct FinalTextToSpeechStreamingResponse *)arg2;	// IMP=0x000000000011cb22
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000011cb08
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000011caf1

@end

