//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTLanguageDetectionResponse, NSObject;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMutableLanguageDetectionStreamingResponse
{
}

+ (long long)content_typeForObject:(id)arg1;	// IMP=0x006000000019901a
+ (long long)content_typeForMutableObject:(id)arg1;	// IMP=0x0060000000198fbf
+ (Class)content_mutableClassForType:(long long)arg1;	// IMP=0x0060000000198f91
@property(copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content; // @dynamic content;
@property(copy, nonatomic) FTLanguageDetectionResponse *contentAsFTLanguageDetectionResponse;
@property(nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000198c63
- (id)init;	// IMP=0x0000000000198bd5

@end

