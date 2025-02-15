//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, OPTTSBeginTextToSpeechStreamingResponse, OPTTSFinalTextToSpeechStreamingResponse, OPTTSPartialTextToSpeechStreamingResponse;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface OPTTSTextToSpeechRouterStreamingStreamingResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechRouterStreamingStreamingResponse *_root;	// 24 = 0x18
}

+ (long long)content_typeForImmutableObject:(id)arg1;	// IMP=0x001000000011e668
+ (Class)content_immutableClassForType:(long long)arg1;	// IMP=0x001000000011e62e
- (void).cxx_destruct;	// IMP=0x000000000011e5da
- (id)flatbuffData;	// IMP=0x000000000011e4c3
- (Offset_8714228f)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000011e2ed
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property(readonly, nonatomic) OPTTSFinalTextToSpeechStreamingResponse *contentAsOPTTSFinalTextToSpeechStreamingResponse;
@property(readonly, nonatomic) OPTTSPartialTextToSpeechStreamingResponse *contentAsOPTTSPartialTextToSpeechStreamingResponse;
@property(readonly, nonatomic) OPTTSBeginTextToSpeechStreamingResponse *contentAsOPTTSBeginTextToSpeechStreamingResponse;
@property(readonly, nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011dfa1
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRouterStreamingStreamingResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000011dcb9
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRouterStreamingStreamingResponse *)arg2;	// IMP=0x000000000011dca4
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000011dc8a
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000011dc73

@end

