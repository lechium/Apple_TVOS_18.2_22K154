//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UITextMagnifierTimeWeightedPoint : NSObject
{
    int m_index;	// 8 = 0x8
    struct {
        struct CGPoint point;
        double time;
    } m_points[16];	// 16 = 0x10
}

- (struct CGPoint)diffFromLastPoint;	// IMP=0x000000000141097e
- (_Bool)isPlacedCarefully;	// IMP=0x0000000001410924
- (float)distanceCoveredInInterval:(double)arg1 priorTo:(double)arg2;	// IMP=0x0000000001410860
- (struct CGSize)displacementInInterval:(double)arg1 priorTo:(double)arg2;	// IMP=0x000000000141077d
- (struct CGSize)displacementInInterval:(double)arg1;	// IMP=0x000000000141074c
- (float)distanceCoveredInInterval:(double)arg1;	// IMP=0x000000000141071b
- (_Bool)historyCovers:(double)arg1;	// IMP=0x0000000001410682
@property(readonly, nonatomic) struct CGPoint weightedPoint;
- (void)addPoint:(struct CGPoint)arg1;	// IMP=0x0000000001410551
- (void)clearHistory;	// IMP=0x000000000141051d

@end

