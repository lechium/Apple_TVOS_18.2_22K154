//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPPage, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPZoneBorder : NSObject
{
    struct CGRect bounds;	// 8 = 0x8
    CPPage *page;	// 40 = 0x28
    NSMutableArray *ownerArray;	// 48 = 0x30
    NSMutableArray *graphicObjects;	// 56 = 0x38
    NSMutableArray *neighbors;	// 64 = 0x40
    NSMutableArray *intersections;	// 72 = 0x48
    _Bool isHorizontal;	// 80 = 0x50
    _Bool hasForwardVector;	// 81 = 0x51
    _Bool hasBackwardVector;	// 82 = 0x52
    double overhangMin;	// 88 = 0x58
    double overhangMax;	// 96 = 0x60
}

+ (struct CGRect)extendRect:(struct CGRect)arg1;	// IMP=0x0010000000145fe9
+ (int)clockwiseWindingNumberOfShapeWithBorders:(id)arg1;	// IMP=0x0010000000145f16
+ (void)outerVertices:(struct CGPoint *)arg1 fromBorders:(id)arg2 swollenBy:(double)arg3;	// IMP=0x0010000000145bc9
+ (void)removeIntersectionBetweenBorder:(id)arg1 andBorder:(id)arg2;	// IMP=0x0010000000145ac9
+ (void)addIntersectionBetweenBorder:(id)arg1 andBorder:(id)arg2 atRect:(struct CGRect)arg3;	// IMP=0x0010000000145940
- (long long)compareYBounds:(id)arg1;	// IMP=0x00000000001458d8
- (long long)compareXBounds:(id)arg1;	// IMP=0x0000000000145871
- (void)removeLooseThreadsStartingFrom:(id)arg1;	// IMP=0x0000000000145720
- (void)trimToLastIntersections;	// IMP=0x0000000000145439
- (void)combine:(id)arg1;	// IMP=0x0000000000145216
- (_Bool)continues:(id)arg1;	// IMP=0x0000000000145178
- (_Bool)crosses:(id)arg1;	// IMP=0x0000000000144ba1
- (_Bool)extractCycleTo:(id)arg1 goingForward:(_Bool)arg2 throughIntersectionIndex:(unsigned int)arg3 returningTo:(id)arg4 atRect:(struct CGRect *)arg5;	// IMP=0x0000000000144660
- (_Bool)extractCycleTo:(id)arg1 goingForward:(_Bool)arg2 startingAtIndex:(unsigned int)arg3;	// IMP=0x00000000001445b0
- (_Bool)hasVectorGoingForward:(_Bool)arg1 startingAtIndex:(unsigned int *)arg2;	// IMP=0x00000000001444c2
- (void)instantiateVectors;	// IMP=0x0000000000144412
- (_Bool)hasCounterclockwiseVectorAtIndex:(unsigned int)arg1 startingForward:(_Bool)arg2;	// IMP=0x00000000001443c1
- (_Bool)hasClockwiseVectorAtIndex:(unsigned int)arg1 startingForward:(_Bool)arg2;	// IMP=0x0000000000144370
- (id)getNextBorder:(unsigned int)arg1;	// IMP=0x0000000000144312
- (_Bool)windsClockwiseOnto:(id)arg1;	// IMP=0x000000000014429d
- (unsigned int)indexOfIntersectionWith:(id)arg1;	// IMP=0x000000000014421c
- (_Bool)intersectsWith:(id)arg1 atRect:(struct CGRect *)arg2;	// IMP=0x0000000000144172
- (unsigned int)intersectionCount;	// IMP=0x0000000000144152
- (_Bool)isVertical;	// IMP=0x0000000000144145
- (_Bool)isHorizontal;	// IMP=0x000000000014413c
- (void)setSide:(int)arg1 ofPage:(id)arg2;	// IMP=0x0000000000143f0b
- (_Bool)hasBackwardVector;	// IMP=0x0000000000143f02
- (void)setHasBackwardVector:(_Bool)arg1;	// IMP=0x0000000000143ef9
- (_Bool)hasForwardVector;	// IMP=0x0000000000143ef0
- (void)setHasForwardVector:(_Bool)arg1;	// IMP=0x0000000000143ee7
- (_Bool)hasNeighborShape:(id)arg1 atSide:(int)arg2;	// IMP=0x0000000000143e32
- (_Bool)hasNeighborShape:(id)arg1;	// IMP=0x0000000000143daa
- (id)neighborAtIndex:(unsigned int)arg1;	// IMP=0x0000000000143d89
- (void)removeNeighborAtIndex:(unsigned int)arg1;	// IMP=0x0000000000143d6a
- (void)addNeighbor:(id)arg1;	// IMP=0x0000000000143cc9
- (unsigned int)neighborCount;	// IMP=0x0000000000143ca9
- (id)graphicObjects;	// IMP=0x0000000000143c9f
- (id)graphicObjectAtIndex:(unsigned int)arg1;	// IMP=0x0000000000143c87
- (void)removeGraphicObjectAtIndex:(unsigned int)arg1;	// IMP=0x0000000000143c6f
- (void)addGraphicObject:(id)arg1;	// IMP=0x0000000000143bb8
- (unsigned int)graphicObjectCount;	// IMP=0x0000000000143b98
- (long long)zOrder;	// IMP=0x0000000000143b1d
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000143b07
- (struct CGRect)bounds;	// IMP=0x0000000000143aef
- (id)ownerArray;	// IMP=0x0000000000143ae5
- (void)removeFromArrayAtIndex:(unsigned int)arg1;	// IMP=0x0000000000143a99
- (void)removeFromArray;	// IMP=0x0000000000143a78
- (void)addToArray:(id)arg1 atIndex:(unsigned int)arg2;	// IMP=0x0000000000143a4d
- (void)addToArray:(id)arg1;	// IMP=0x0000000000143a24
- (id)page;	// IMP=0x0000000000143a1a
- (id)copyWithoutIntersections;	// IMP=0x000000000014398d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001438c6
- (void)dealloc;	// IMP=0x0000000000143875
- (id)initSuper;	// IMP=0x0000000000143846
- (id)initWithGraphicObject:(id)arg1;	// IMP=0x00000000001437e7
- (id)init;	// IMP=0x000000000014376c

@end

