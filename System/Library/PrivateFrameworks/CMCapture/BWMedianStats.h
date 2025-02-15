//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface BWMedianStats
{
    long long _maxNumberOfSamplesForMedianCalculation;	// 64 = 0x40
    NSMutableArray *_samples;	// 72 = 0x48
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002a836
- (id)description;	// IMP=0x000000000002a788
@property(readonly, nonatomic) double median;
- (void)dealloc;	// IMP=0x000000000002a645
- (_Bool)addDataPointP:(double)arg1;	// IMP=0x000000000002a4bb
- (id)initWithMaxNumberOfSamplesForMedianCalculation:(long long)arg1;	// IMP=0x000000000002a421

@end

