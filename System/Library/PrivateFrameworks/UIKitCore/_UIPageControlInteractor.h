//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _UIHyperInteractor;

__attribute__((visibility("hidden")))
@interface _UIPageControlInteractor : NSObject
{
    double _scrubbingOffset;	// 8 = 0x8
    double _lowerBound;	// 16 = 0x10
    double _upperBound;	// 24 = 0x18
    _UIHyperInteractor *_interactor;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000779519
@property(retain, nonatomic) _UIHyperInteractor *interactor; // @synthesize interactor=_interactor;
- (void)reduceScrubOffsetByOffset:(double)arg1;	// IMP=0x00000000007794c8
- (void)reduceScrubOffsetByRatio:(double)arg1;	// IMP=0x00000000007794b4
- (void)commitTranslation;	// IMP=0x0000000000779477
- (void)setTranslation:(double)arg1 velocity:(double)arg2;	// IMP=0x000000000077931a
- (void)setUnconstrainedPosition:(double)arg1 offset:(double)arg2;	// IMP=0x00000000007792ae
- (void)updateRubberbandLowerBound:(double)arg1 upperBound:(double)arg2;	// IMP=0x00000000007791a5
- (void)updateScrubLowerBound:(double)arg1 upperBound:(double)arg2;	// IMP=0x0000000000779195
@property(readonly, nonatomic) double unboundedScrubPosition;
@property(readonly, nonatomic) double boundedScrubPosition;
@property(readonly, nonatomic) double hyperConstrainedPosition;
@property(readonly, nonatomic) double unconstrainedPosition;
@property(readonly, nonatomic) double joggingDistance;
- (id)initWithMaximumDistance:(double)arg1;	// IMP=0x0000000000778e66

@end

