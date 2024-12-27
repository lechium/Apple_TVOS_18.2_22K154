//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTStartTextToSpeechStreamingRequest, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechStreamingStreamingRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechStreamingStreamingRequest *_root;	// 24 = 0x18
}

+ (long long)content_typeForImmutableObject:(id)arg1;	// IMP=0x00100000001851ae
+ (Class)content_immutableClassForType:(long long)arg1;	// IMP=0x0010000000185180
- (void).cxx_destruct;	// IMP=0x000000000018547b
- (id)flatbuffData;	// IMP=0x00000000001852fe
- (Offset_d397d874)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000185209
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property(readonly, nonatomic) FTStartTextToSpeechStreamingRequest *contentAsFTStartTextToSpeechStreamingRequest;
@property(readonly, nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000185016
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechStreamingStreamingRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000184e33
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechStreamingStreamingRequest *)arg2;	// IMP=0x0000000000184e1e
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000184e04
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000184ded

@end

