//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIStatisticsDistribution
{
}

- (void)recordTimingForObject:(id)arg1;	// IMP=0x00000000015475cc
- (void)cancelTimingForObject:(id)arg1;	// IMP=0x00000000015475b5
- (void)startTimingForObject:(id)arg1;	// IMP=0x0000000001547526
- (_Bool)isTimingForObject:(id)arg1;	// IMP=0x00000000015474f5
- (void)recordDistributionValue:(double)arg1;	// IMP=0x00000000015474e3
- (void)resetDistributionToValue:(double)arg1;	// IMP=0x00000000015474d1
- (void)resetDistribution;	// IMP=0x00000000015474bf

@end

