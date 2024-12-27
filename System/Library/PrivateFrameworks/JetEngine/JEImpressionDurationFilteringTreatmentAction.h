//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSPredicate;

__attribute__((visibility("hidden")))
@interface JEImpressionDurationFilteringTreatmentAction
{
    long long _durationThreshold;	// 8 = 0x8
    NSPredicate *_filters;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005672b
@property(readonly, nonatomic) NSPredicate *filters; // @synthesize filters=_filters;
@property(readonly, nonatomic) long long durationThreshold; // @synthesize durationThreshold=_durationThreshold;
- (id)filteredDurationArray:(id)arg1;	// IMP=0x000000000005666b
- (id)filteredViewedInfoDetailed:(id)arg1;	// IMP=0x00000000000563cf
- (id)updatedImpression:(id)arg1;	// IMP=0x0000000000056199
- (id)performAction:(id)arg1 context:(id)arg2;	// IMP=0x0000000000055f0e
- (id)initWithField:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000000055d69

@end

