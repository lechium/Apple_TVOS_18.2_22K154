//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray;

@interface SNEstimateDirectionOfArrivalRequest : NSObject
{
    MISSING_TYPE *impl;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000c183c
- (void).cxx_destruct;	// IMP=0x00000000000c1e5a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c17f1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c173c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c1591
@property(nonatomic, readonly) long long hash;
- (id)copyWithZone:(void *)arg1;	// IMP=0x00000000000c13cc
- (id)initWithTuningPrefix:(id)arg1;	// IMP=0x00000000000c1322
- (id)init;	// IMP=0x00000000000c1229
@property(nonatomic, readonly) NSArray *spatialSpectrum;

@end

