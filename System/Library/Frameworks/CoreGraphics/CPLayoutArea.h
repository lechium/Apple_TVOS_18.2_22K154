//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CPLayoutArea
{
    _Bool isFirstLayout;	// 161 = 0xa1
    _Bool hasRotatedCharacters;	// 162 = 0xa2
}

- (id)description;	// IMP=0x00000000005722b6
- (id)properties;	// IMP=0x0000000000572216
- (_Bool)hasRotatedCharacters;	// IMP=0x0000000000572206
- (void)setHasRotatedCharacters:(_Bool)arg1;	// IMP=0x00000000005721f6
- (double)selectionBottom;	// IMP=0x0000000000572151
- (struct CGRect)layoutAreaBounds;	// IMP=0x000000000057201a
- (_Bool)isShapeRegion;	// IMP=0x0000000000572012
- (_Bool)isImageRegion;	// IMP=0x000000000057200a
- (void)setIsImageRegion:(_Bool)arg1;	// IMP=0x0000000000572004
- (_Bool)isRowRegion;	// IMP=0x0000000000571ffc
- (_Bool)isGraphicalRegion;	// IMP=0x0000000000571ff4
- (_Bool)isBoxRegion;	// IMP=0x0000000000571fec
- (void)addColumnBreaks;	// IMP=0x0000000000571f3c
- (void)setIsFirstLayout:(_Bool)arg1;	// IMP=0x0000000000571f2c
- (_Bool)isFirstLayout;	// IMP=0x0000000000571f1c
- (_Bool)isSimilarTo:(id)arg1;	// IMP=0x0000000000571f14
- (void)accept:(id)arg1;	// IMP=0x0000000000571ef9
- (id)init;	// IMP=0x0000000000571eba

@end

