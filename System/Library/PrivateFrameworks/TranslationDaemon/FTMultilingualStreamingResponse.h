//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTAudioLimitExceeded, FTFinalBlazarResponse, FTFinalSpeechRecognitionResponse, FTPartialSpeechRecognitionResponse, FTRecognitionCandidate, FTRequestStatsResponse, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMultilingualStreamingResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct MultilingualStreamingResponse *_root;	// 24 = 0x18
}

+ (long long)content_typeForImmutableObject:(id)arg1;	// IMP=0x001000000017f8ff
+ (Class)content_immutableClassForType:(long long)arg1;	// IMP=0x001000000017f8c5
- (void).cxx_destruct;	// IMP=0x000000000017fed9
- (id)flatbuffData;	// IMP=0x000000000017fd5c
- (Offset_f0c4c3ad)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000017fa31
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property(readonly, nonatomic) FTFinalBlazarResponse *contentAsFTFinalBlazarResponse;
@property(readonly, nonatomic) FTAudioLimitExceeded *contentAsFTAudioLimitExceeded;
@property(readonly, nonatomic) FTRequestStatsResponse *contentAsFTRequestStatsResponse;
@property(readonly, nonatomic) FTRecognitionCandidate *contentAsFTRecognitionCandidate;
@property(readonly, nonatomic) FTPartialSpeechRecognitionResponse *contentAsFTPartialSpeechRecognitionResponse;
@property(readonly, nonatomic) FTFinalSpeechRecognitionResponse *contentAsFTFinalSpeechRecognitionResponse;
@property(readonly, nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017f2b8
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MultilingualStreamingResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000017f0d5
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MultilingualStreamingResponse *)arg2;	// IMP=0x000000000017f0c0
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000017f0a6
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000017f08f

@end

