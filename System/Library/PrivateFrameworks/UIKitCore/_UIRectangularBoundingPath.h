//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIRectangularBoundingPath
{
    struct CGRect _boundingRect;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000b5ee2b
@property(readonly, nonatomic) struct CGRect boundingRect; // @synthesize boundingRect=_boundingRect;
- (id)_imageRepresentation;	// IMP=0x0000000000b5fd89
- (id)description;	// IMP=0x0000000000b5fcc1
- (struct UIEdgeInsets)_centerEdgeInsetsOfBoundingPathAndRect:(struct CGRect)arg1;	// IMP=0x0000000000b5fae2
- (struct CGRect)_rectTuckedAgainstEdge:(unsigned long long)arg1 ofBoundingPathAndRect:(struct CGRect)arg2 withSize:(double)arg3 cornerRadii:(struct UIRectCornerRadii)arg4 minimumPadding:(double)arg5;	// IMP=0x0000000000b5fa46
- (struct CGRect)_rectTuckedInCorner:(unsigned long long)arg1 ofBoundingPathAndRect:(struct CGRect)arg2 withSize:(struct CGSize)arg3 cornerRadii:(struct UIRectCornerRadii)arg4 minimumPadding:(double)arg5;	// IMP=0x0000000000b5f99a
- (struct CGRect)_largestInscribedRectInBoundingPathAndRect:(struct CGRect)arg1 withCenter:(struct CGPoint)arg2 aspectRatio:(double)arg3;	// IMP=0x0000000000b5f8a7
- (struct CGRect)_inscribedRectInBoundingPathAndRect:(struct CGRect)arg1 byInsettingRect:(struct CGRect)arg2 onEdges:(unsigned long long)arg3 withOptions:(unsigned long long)arg4;	// IMP=0x0000000000b5f7b0
- (_Bool)isNonRectangular;	// IMP=0x0000000000b5f7a8
- (void)setCoordinateSpace:(id)arg1;	// IMP=0x0000000000b5f722
- (_Bool)validateForCoordinateSpace;	// IMP=0x0000000000b5f6af
- (_Bool)_validateBoundingRect:(struct CGRect)arg1 forCoordinateSpace:(id)arg2;	// IMP=0x0000000000b5f42d
- (id)boundingPathForCoordinateSpace:(id)arg1 withCornerRadii:(struct UIRectCornerRadii)arg2 orientation:(long long)arg3 scale:(double)arg4;	// IMP=0x0000000000b5f2f0
- (id)boundingPathForCoordinateSpace:(id)arg1;	// IMP=0x0000000000b5f033
- (id)initWithCoordinateSpace:(id)arg1 boundingRect:(struct CGRect)arg2;	// IMP=0x0000000000b5ef61
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000b5eebe
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000b5ee33

@end

