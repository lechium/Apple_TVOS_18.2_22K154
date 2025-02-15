//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, OPTTSStartTextToSpeechStreamingRequest;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface OPTTSTextToSpeechRouterStreamingStreamingRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechRouterStreamingStreamingRequest *_root;	// 24 = 0x18
}

+ (long long)content_typeForImmutableObject:(id)arg1;	// IMP=0x001000000011dc18
+ (Class)content_immutableClassForType:(long long)arg1;	// IMP=0x001000000011dbea
- (void).cxx_destruct;	// IMP=0x000000000011db6d
- (id)flatbuffData;	// IMP=0x000000000011da56
- (Offset_5ef787ef)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000011d960
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property(readonly, nonatomic) OPTTSStartTextToSpeechStreamingRequest *contentAsOPTTSStartTextToSpeechStreamingRequest;
@property(readonly, nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011d7f6
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRouterStreamingStreamingRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000011d53e
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRouterStreamingStreamingRequest *)arg2;	// IMP=0x000000000011d529
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000011d50f
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000011d4f8

@end

