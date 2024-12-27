//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface AVPhotosensitiveTimeRange : NSObject
{
    CDStruct_e83c9415 _timeRange;	// 8 = 0x8
    double _risk;	// 56 = 0x38
}

+ (id)timeRangesFromMetadata:(id)arg1 initialDate:(id)arg2;	// IMP=0x001000000008f85b
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000008f853
@property double risk; // @synthesize risk=_risk;
@property CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
- (id)description;	// IMP=0x000000000008f6f2
@property(readonly) NSArray *colors;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008f605
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000008f531
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008f4db
- (id)initWithTimeRange:(CDStruct_e83c9415)arg1 risk:(double)arg2;	// IMP=0x000000000008f485
- (id)init;	// IMP=0x000000000008f42f

@end

