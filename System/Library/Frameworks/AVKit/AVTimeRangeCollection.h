//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface AVTimeRangeCollection : NSObject
{
    NSArray *_timeRanges;	// 8 = 0x8
    double _combinedDuration;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000c488d
@property(readonly) double combinedDuration; // @synthesize combinedDuration=_combinedDuration;
@property(readonly) NSArray *timeRanges; // @synthesize timeRanges=_timeRanges;
- (id)description;	// IMP=0x00000000000c4608
- (id)displayTimeRangeTrimmedToTimeRange:(id)arg1;	// IMP=0x00000000000c44c1
- (double)timeFromDisplayTime:(double)arg1;	// IMP=0x00000000000c4303
- (double)displayTimeFromTime:(double)arg1;	// IMP=0x00000000000c4054
- (id)timeRangesBetweenDisplayTime:(double)arg1 and:(double)arg2;	// IMP=0x00000000000c3dd5
- (id)arrayOfDisplayTimes;	// IMP=0x00000000000c3dbc
- (id)arrayOfDisplayTimesMatching:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c3ca9
- (id)arrayOfBoundaryTimes;	// IMP=0x00000000000c3997
- (id)timeRangeAfterTime:(double)arg1;	// IMP=0x00000000000c37de
- (id)timeRangeBeforeTime:(double)arg1;	// IMP=0x00000000000c361d
- (id)timeRangeClosestToTime:(double)arg1;	// IMP=0x00000000000c33a2
- (id)timeRangeContainingTime:(double)arg1;	// IMP=0x00000000000c323f
- (unsigned long long)count;	// IMP=0x00000000000c31fb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c3198
- (_Bool)isEqualToTimeRangeCollection:(id)arg1;	// IMP=0x00000000000c2ff3
- (void)setMapDate:(id)arg1 toTime:(double)arg2;	// IMP=0x00000000000c2e88
- (id)initWithTimedMetadataGroups:(id)arg1;	// IMP=0x00000000000c2c95
- (id)init;	// IMP=0x00000000000c2c7c
- (id)initWithTimeRanges:(id)arg1;	// IMP=0x00000000000c2a4e
- (id)initWithInterstitialTimeRanges:(id)arg1;	// IMP=0x0000000000136d83

@end

