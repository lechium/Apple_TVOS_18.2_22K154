//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSIndexSet;

__attribute__((visibility("hidden")))
@interface VNPersonsModelFaceModelDataSummarization : NSObject
{
    unsigned long long _personsCount;	// 8 = 0x8
    NSIndexSet *_faceObservationCountsDistribution;	// 16 = 0x10
    NSCountedSet *_personFaceObservationsCountHistogram;	// 24 = 0x18
}

+ (id)summarizationOfDataFromProvider:(id)arg1;	// IMP=0x0060000000444005
- (void).cxx_destruct;	// IMP=0x0000000000443ee9
@property(readonly, copy) NSIndexSet *faceObservationCountsDistribution; // @synthesize faceObservationCountsDistribution=_faceObservationCountsDistribution;
@property(readonly) unsigned long long personsCount; // @synthesize personsCount=_personsCount;
- (id)description;	// IMP=0x0000000000443d67
- (unsigned long long)numberOfPersonsWithFaceObservationsCount:(unsigned long long)arg1;	// IMP=0x0000000000443d0c
- (id)initWithPersonsCount:(unsigned long long)arg1 faceObservationCountsDistribution:(id)arg2 personFaceObservationsCountHistogram:(id)arg3;	// IMP=0x0000000000443c4c

@end

