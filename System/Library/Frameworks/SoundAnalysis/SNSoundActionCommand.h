//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface SNSoundActionCommand : NSObject
{
    MISSING_TYPE *impl;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000015d4f8
- (void).cxx_destruct;	// IMP=0x000000000015d5c7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000015d4ad
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000015d3df
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015d21b
@property(nonatomic, readonly) long long hash;
- (id)copyWithZone:(void *)arg1;	// IMP=0x000000000015cfda
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x000000000015ceaa
- (id)init;	// IMP=0x000000000015cb71
@property(nonatomic, copy) NSString *name;
@property(nonatomic) long long minDurationBlocks;
@property(nonatomic) double confidenceThreshold;

@end

