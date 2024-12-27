//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HMMIntervalMapper.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface UnsignedFixedIntervalMapper : HMMIntervalMapper
{
    NSArray *_intervals;	// 8 = 0x8
    CDUnknownBlockType _creationBlock;	// 16 = 0x10
    CDUnknownBlockType _comparisonBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000004d61
@property(readonly) CDUnknownBlockType comparisonBlock; // @synthesize comparisonBlock=_comparisonBlock;
@property(readonly) CDUnknownBlockType creationBlock; // @synthesize creationBlock=_creationBlock;
@property(readonly) NSArray *intervals; // @synthesize intervals=_intervals;
- (id)intervalForValue:(unsigned long long)arg1;	// IMP=0x0000000000004c8d
- (id)intervalIndexForValue:(unsigned long long)arg1;	// IMP=0x0000000000004b0b
- (id)initWithBins:(id)arg1 intervalCreationBlock:(CDUnknownBlockType)arg2 valueComparisonBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000483a

@end

