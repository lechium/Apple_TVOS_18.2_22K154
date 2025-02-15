//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "IPAImageTransform.h"

@protocol IPAQuadGeometry;

__attribute__((visibility("hidden")))
@interface IPAPerspectiveTransform : IPAImageTransform
{
    struct Matrix4d _projectionTransform;	// 8 = 0x8
    struct Matrix4d _viewingTransform;	// 136 = 0x88
    id <IPAQuadGeometry> _intrinsicGeometry;	// 264 = 0x108
    _Bool _isInverse;	// 272 = 0x110
}

- (id).cxx_construct;	// IMP=0x0000000000021201
- (void).cxx_destruct;	// IMP=0x00000000000211ee
- (_Bool)canAlignToPixelsExactly;	// IMP=0x00000000000211e6
- (id)intrinsicGeometry;	// IMP=0x00000000000211d1
- (id)inverseTransform;	// IMP=0x0000000000020feb
- (struct Vector2d)mapVector:(struct Vector2d)arg1;	// IMP=0x0000000000020c05
- (id)initWithInputGeometry:(id)arg1 intrinsicGeometry:(id)arg2 projectionTransform:(const struct Matrix4d *)arg3 viewingTransform:(const struct Matrix4d *)arg4;	// IMP=0x0000000000020aab

@end

