//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface EQKitPathBox
{
    _Bool _dimensionsValid;	// 8 = 0x8
    _Bool _erasableBoundsValid;	// 9 = 0x9
    int _drawingMode;	// 12 = 0xc
    double _height;	// 16 = 0x10
    double _depth;	// 24 = 0x18
    double _width;	// 32 = 0x20
    struct CGPath *_cgPath;	// 40 = 0x28
    double _paddingLeft;	// 48 = 0x30
    double _paddingRight;	// 56 = 0x38
    struct CGColor *_cgColor;	// 64 = 0x40
    double _lineWidth;	// 72 = 0x48
    struct CGRect _erasableBounds;	// 80 = 0x50
}

@property(readonly, nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(readonly, nonatomic) int drawingMode; // @synthesize drawingMode=_drawingMode;
- (struct CGColor *)color;	// IMP=0x0000000000059811
@property(readonly, nonatomic) double paddingRight; // @synthesize paddingRight=_paddingRight;
@property(readonly, nonatomic) double paddingLeft; // @synthesize paddingLeft=_paddingLeft;
@property(readonly, nonatomic) struct CGPath *cgPath; // @synthesize cgPath=_cgPath;
- (double)height;	// IMP=0x00000000000597ca
- (struct CGRect)p_cacheErasableBounds;	// IMP=0x000000000005971e
- (void)p_cacheDimensions;	// IMP=0x000000000005964a
- (id)description;	// IMP=0x00000000000595b9
- (_Bool)appendOpticalAlignToSpec:(void *)arg1 offset:(struct CGPoint)arg2;	// IMP=0x0000000000059573
- (void)renderIntoContext:(id)arg1 offset:(struct CGPoint)arg2;	// IMP=0x0000000000059378
- (struct CGRect)erasableBounds;	// IMP=0x00000000000592f4
- (double)width;	// IMP=0x00000000000592cb
- (double)depth;	// IMP=0x00000000000592a2
- (void)p_ensureDimensionsAreValid;	// IMP=0x0000000000059273
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000059053
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000058f70
- (void)dealloc;	// IMP=0x0000000000058eea
- (id)initWithCGPath:(struct CGPath *)arg1 height:(double)arg2 cgColor:(struct CGColor *)arg3 drawingMode:(int)arg4 lineWidth:(double)arg5;	// IMP=0x0000000000058ecc
- (id)initWithCGPath:(struct CGPath *)arg1 height:(double)arg2 cgColor:(struct CGColor *)arg3;	// IMP=0x0000000000058ea6
- (id)initWithCGPath:(struct CGPath *)arg1 height:(double)arg2 paddingLeft:(double)arg3 paddingRight:(double)arg4 cgColor:(struct CGColor *)arg5;	// IMP=0x0000000000058e86
- (id)initWithCGPath:(struct CGPath *)arg1 height:(double)arg2 paddingLeft:(double)arg3 paddingRight:(double)arg4 cgColor:(struct CGColor *)arg5 drawingMode:(int)arg6 lineWidth:(double)arg7;	// IMP=0x0000000000058d71

@end

