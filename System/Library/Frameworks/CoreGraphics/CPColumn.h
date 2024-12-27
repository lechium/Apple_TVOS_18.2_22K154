//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CPColumn
{
    _Bool hasCentredParagraph;	// 161 = 0xa1
    _Bool hasColumnBreak;	// 162 = 0xa2
    double maxLeftPad;	// 168 = 0xa8
    double maxRightPad;	// 176 = 0xb0
    double maxRight;	// 184 = 0xb8
    double minLeft;	// 192 = 0xc0
    _Bool complete;	// 200 = 0xc8
}

@property _Bool complete; // @synthesize complete;
- (id)description;	// IMP=0x0000000000599933
- (double)selectionBottom;	// IMP=0x00000000005998e9
- (struct CGRect)paddedBounds;	// IMP=0x0000000000599851
- (void)setMaxRightPad:(double)arg1;	// IMP=0x0000000000599790
- (double)maxRightPad;	// IMP=0x000000000059977e
- (void)setMaxLeftPad:(double)arg1;	// IMP=0x00000000005996ac
- (double)maxLeftPad;	// IMP=0x000000000059969a
- (double)rightPad;	// IMP=0x00000000005995ab
- (double)leftPad;	// IMP=0x0000000000599570
- (void)setHasCentredParagraph:(_Bool)arg1;	// IMP=0x0000000000599560
- (_Bool)hasCentredParagraph;	// IMP=0x0000000000599550
- (double)bottomBaseline;	// IMP=0x00000000005994f2
- (struct CGRect)columnBounds;	// IMP=0x00000000005994bf
- (_Bool)isShapeRegion;	// IMP=0x00000000005994b7
- (_Bool)isImageRegion;	// IMP=0x00000000005994af
- (void)setIsImageRegion:(_Bool)arg1;	// IMP=0x00000000005994a9
- (_Bool)isRowRegion;	// IMP=0x00000000005994a1
- (_Bool)isGraphicalRegion;	// IMP=0x0000000000599499
- (_Bool)isBoxRegion;	// IMP=0x0000000000599491
- (void)setHasColumnBreak:(_Bool)arg1;	// IMP=0x0000000000599481
- (void)accept:(id)arg1;	// IMP=0x0000000000599466
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000599437
- (void)dealloc;	// IMP=0x0000000000599408
- (id)init;	// IMP=0x0000000000599388
- (int)inOrder;	// IMP=0x000000000061efbc
- (int)outOrder;	// IMP=0x000000000061ef85

@end

