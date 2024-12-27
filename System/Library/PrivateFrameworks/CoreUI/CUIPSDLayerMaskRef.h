//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUIPSDLayerRef;

@interface CUIPSDLayerMaskRef : NSObject
{
    CUIPSDLayerRef *_layerRef;	// 8 = 0x8
    _Bool _isVectorMask;	// 16 = 0x10
}

- (struct CGImage *)createCGImageMask;	// IMP=0x000000000003579d
- (struct CGPath *)newBezierPathAtScale:(double)arg1;	// IMP=0x000000000003554e
- (struct CGPath *)newBezierPath;	// IMP=0x0000000000035534
- (struct CGRect)bounds;	// IMP=0x0000000000035490
- (_Bool)isInvertedWhenBlending;	// IMP=0x000000000003545c
- (_Bool)isEnabled;	// IMP=0x000000000003542b
- (_Bool)isLinked;	// IMP=0x00000000000353fc
- (id)layerRef;	// IMP=0x00000000000353f2
- (void)dealloc;	// IMP=0x00000000000353b7
- (id)initVectorMaskWithLayerRef:(id)arg1;	// IMP=0x0000000000035362
- (id)initLayerMaskWithLayerRef:(id)arg1;	// IMP=0x000000000003530d

@end

