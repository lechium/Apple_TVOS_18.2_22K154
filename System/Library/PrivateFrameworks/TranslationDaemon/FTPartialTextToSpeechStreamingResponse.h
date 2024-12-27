//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTTextToSpeechFeature, NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTPartialTextToSpeechStreamingResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct PartialTextToSpeechStreamingResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000011d59f
- (id)flatbuffData;	// IMP=0x000000000011d422
- (Offset_cde40885)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000011ccdd
@property(readonly, nonatomic) FTTextToSpeechFeature *feature;
- (void)word_timing_info_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000011ca59
- (unsigned long long)word_timing_info_count;	// IMP=0x000000000011c9bd
- (id)word_timing_info_objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000011c8c3
@property(readonly, nonatomic) NSArray *word_timing_info;
- (void)audio:(CDUnknownBlockType)arg1;	// IMP=0x000000000011c736
@property(readonly, nonatomic) NSData *audio;
@property(readonly, nonatomic) int current_pkt_number;
@property(readonly, nonatomic) NSString *stream_id;
@property(readonly, nonatomic) NSString *error_str;
@property(readonly, nonatomic) int error_code;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011c4d2
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PartialTextToSpeechStreamingResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000011c327
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PartialTextToSpeechStreamingResponse *)arg2;	// IMP=0x000000000011c312
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000011c2f8
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000011c2e1

@end

