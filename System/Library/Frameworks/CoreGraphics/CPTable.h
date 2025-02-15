//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CPTable
{
    struct CGRect tableBounds;	// 96 = 0x60
    unsigned int rowCount;	// 128 = 0x80
    double *rowY;	// 136 = 0x88
    unsigned int columnCount;	// 144 = 0x90
    double *columnX;	// 152 = 0x98
    struct CGColor *backgroundColor;	// 160 = 0xa0
    unsigned int backgroundGraphicCount;	// 168 = 0xa8
    id *backgroundGraphics;	// 176 = 0xb0
    unsigned int usedGraphicCount;	// 184 = 0xb8
    _Bool disposed;	// 188 = 0xbc
}

@property(readonly, nonatomic) unsigned int backgroundGraphicCount; // @synthesize backgroundGraphicCount;
@property(readonly, nonatomic) double *columnX; // @synthesize columnX;
@property(readonly, nonatomic) double *rowY; // @synthesize rowY;
@property(readonly, nonatomic) struct CGRect tableBounds; // @synthesize tableBounds;
- (unsigned int)usedGraphicCount;	// IMP=0x0000000000107f49
- (void)incrementUsedGraphicCount;	// IMP=0x0000000000107f39
- (id)backgroundGraphicAtIndex:(unsigned int)arg1;	// IMP=0x0000000000107f12
- (void)setBackgroundGraphics:(id)arg1;	// IMP=0x0000000000107e17
- (struct CGColor *)backgroundColor;	// IMP=0x0000000000107d66
@property(nonatomic) unsigned int columnCount;
@property(nonatomic) unsigned int rowCount;
- (void)dealloc;	// IMP=0x0000000000107c5c
- (void)finalize;	// IMP=0x0000000000107c1e
- (void)dispose;	// IMP=0x0000000000107b40
- (id)initWithBounds:(struct CGRect)arg1;	// IMP=0x0000000000107af1

@end

