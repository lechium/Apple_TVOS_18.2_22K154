//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTStartTextToSpeechStreamingRequest, NSObject;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMutableTextToSpeechStreamingStreamingRequest
{
}

+ (long long)content_typeForObject:(id)arg1;	// IMP=0x0060000000197a49
+ (long long)content_typeForMutableObject:(id)arg1;	// IMP=0x00600000001979ee
+ (Class)content_mutableClassForType:(long long)arg1;	// IMP=0x00600000001979c0
@property(copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content; // @dynamic content;
@property(copy, nonatomic) FTStartTextToSpeechStreamingRequest *contentAsFTStartTextToSpeechStreamingRequest;
@property(nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000197692
- (id)init;	// IMP=0x0000000000197604

@end

