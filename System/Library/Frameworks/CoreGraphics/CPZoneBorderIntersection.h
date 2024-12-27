//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPZoneBorder;

__attribute__((visibility("hidden")))
@interface CPZoneBorderIntersection : NSObject
{
    struct CGRect intersectionRect;	// 8 = 0x8
    CPZoneBorder *intersectingBorder;	// 40 = 0x28
    _Bool forwardVector;	// 48 = 0x30
    _Bool backwardVector;	// 49 = 0x31
}

- (long long)comparePositionLengthwise:(id)arg1;	// IMP=0x0000000000146100
- (_Bool)backwardVector;	// IMP=0x00000000001460f7
- (void)setBackwardVector:(_Bool)arg1;	// IMP=0x00000000001460ee
- (_Bool)forwardVector;	// IMP=0x00000000001460e5
- (void)setForwardVector:(_Bool)arg1;	// IMP=0x00000000001460dc
- (id)intersectingBorder;	// IMP=0x00000000001460d2
- (void)setIntersectingBorder:(id)arg1;	// IMP=0x00000000001460c8
- (struct CGRect)intersectionRect;	// IMP=0x00000000001460b0
- (void)setIntersectionRect:(struct CGRect)arg1;	// IMP=0x000000000014609a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014608d
- (id)initSuper;	// IMP=0x000000000014605e

@end

