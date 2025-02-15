//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLayoutXAxisAnchor, NSLayoutYAxisAnchor;

@interface NSLayoutPoint : NSObject
{
    NSLayoutXAxisAnchor *_xAxisAnchor;	// 8 = 0x8
    NSLayoutYAxisAnchor *_yAxisAnchor;	// 16 = 0x10
}

+ (id)pointWithXAxisAnchor:(id)arg1 yAxisAnchor:(id)arg2;	// IMP=0x00100000000340fa
+ (id)layoutPointWithXAxisAnchor:(id)arg1 yAxisAnchor:(id)arg2;	// IMP=0x0010000000033f11
@property(readonly, copy) NSLayoutYAxisAnchor *yAxisAnchor; // @synthesize yAxisAnchor=_yAxisAnchor;
@property(readonly, copy) NSLayoutXAxisAnchor *xAxisAnchor; // @synthesize xAxisAnchor=_xAxisAnchor;
- (id)constraintsEqualToPoint:(id)arg1;	// IMP=0x0000000000034130
- (id)pointByOffsettingWithXOffsetDimension:(id)arg1 yOffsetDimension:(id)arg2;	// IMP=0x000000000003411e
- (id)pointByOffsettingWithXOffset:(double)arg1 yOffset:(double)arg2;	// IMP=0x000000000003410c
- (id)constraintsEqualToLayoutPoint:(id)arg1;	// IMP=0x0000000000034031
- (id)layoutPointByOffsettingWithXOffsetDimension:(id)arg1 yOffsetDimension:(id)arg2;	// IMP=0x0000000000033fc5
- (id)layoutPointByOffsettingWithXOffset:(double)arg1 yOffset:(double)arg2;	// IMP=0x0000000000033f44
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000033ea1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000033e96
- (void)dealloc;	// IMP=0x0000000000033e4c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000033dfb
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000033d63
- (id)ruleEqualToLayoutPoint:(id)arg1;	// IMP=0x0000000000005ded
- (struct CGPoint)valueInItem:(id)arg1;	// IMP=0x000000000003416a

@end

