//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface SNSpeechEmotionResult : NSObject
{
    MISSING_TYPE *impl;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000013d0fd
- (void).cxx_destruct;	// IMP=0x000000000013d96c
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;	// IMP=0x000000000013d8a8
- (id)binarySampleRepresentation;	// IMP=0x000000000013d7fb
- (id)initWithBinarySampleRepresentation:(id)arg1;	// IMP=0x000000000013d6c1
@property(nonatomic, readonly) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000013d0b2
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000013cdd5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000013c9f5
@property(nonatomic, readonly) long long hash;
- (id)copyWithZone:(void *)arg1;	// IMP=0x000000000013c732
- (id)initWithMood:(double)arg1 valence:(double)arg2 arousal:(double)arg3 dominance:(double)arg4;	// IMP=0x000000000013c5e0
- (id)init;	// IMP=0x000000000013c512
@property(nonatomic, copy) NSString *modelIdentifier;
@property(nonatomic) double dominance;
@property(nonatomic) double arousal;
@property(nonatomic) double valence;
@property(nonatomic) double mood;
@property(nonatomic) double confidence;
@property(nonatomic) CDStruct_3c1748cc timeRange;

@end

