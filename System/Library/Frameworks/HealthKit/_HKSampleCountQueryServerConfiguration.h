//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKQueryServerConfiguration.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface _HKSampleCountQueryServerConfiguration : HKQueryServerConfiguration
{
    NSArray *_queryDescriptors;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000026e0a8
- (void).cxx_destruct;	// IMP=0x000000000026e28e
@property(copy, nonatomic) NSArray *queryDescriptors; // @synthesize queryDescriptors=_queryDescriptors;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000026e1ef
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000026e0b0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000026e052

@end

