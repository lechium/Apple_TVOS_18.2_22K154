//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTBeginTextToSpeechStreamingResponse, FTFinalTextToSpeechStreamingResponse, FTStartTextToSpeechStreamingRequest, NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechCacheContainerStreamingV2 : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechCacheContainerStreamingV2 *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000121b09
- (id)flatbuffData;	// IMP=0x000000000012198c
- (Offset_c75c7ecf)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000001213cb
@property(readonly, nonatomic) FTFinalTextToSpeechStreamingResponse *cached_final_response;
- (void)cached_partial_response_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000121147
- (unsigned long long)cached_partial_response_count;	// IMP=0x00000000001210ab
- (id)cached_partial_response_objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000120fb1
@property(readonly, nonatomic) NSArray *cached_partial_response;
@property(readonly, nonatomic) FTBeginTextToSpeechStreamingResponse *cached_begin_response;
@property(readonly, nonatomic) FTStartTextToSpeechStreamingRequest *cached_request;
@property(readonly, nonatomic) NSString *original_session_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000120c74
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechCacheContainerStreamingV2 *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000120ac9
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechCacheContainerStreamingV2 *)arg2;	// IMP=0x0000000000120ab4
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000120a9a
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000120a83

@end

