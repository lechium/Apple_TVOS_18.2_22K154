//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKQueryServerConfiguration.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _HKCurrentActivitySummaryQueryServerConfiguration : HKQueryServerConfiguration
{
    NSDictionary *_collectionIntervals;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000006074
- (void).cxx_destruct;	// IMP=0x000000000001838b
@property(copy, nonatomic) NSDictionary *collectionIntervals; // @synthesize collectionIntervals=_collectionIntervals;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000016f3d5
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003739
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016f370

@end

