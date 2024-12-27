//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PDFTilePoolPrivate;

__attribute__((visibility("hidden")))
@interface PDFTilePool : NSObject
{
    PDFTilePoolPrivate *_private;	// 8 = 0x8
}

+ (id)sharedPool;	// IMP=0x0060000000030095
- (void).cxx_destruct;	// IMP=0x000000000003165d
- (int)activeTileCount;	// IMP=0x0000000000031643
- (void)releasePDFTileSurface:(id)arg1;	// IMP=0x0000000000031508
- (void)_colorizeTileEdgesForRequest:(id)arg1 context:(struct CGContext *)arg2 tileSize:(int)arg3;	// IMP=0x0000000000031025
- (void)_renderTileForRequest:(id)arg1;	// IMP=0x00000000000309e6
- (struct CGContext *)_createContextForTileSurface:(id)arg1 ofRequest:(id)arg2;	// IMP=0x00000000000308b7
- (id)_createTileSurfaceForRequest:(id)arg1;	// IMP=0x00000000000304fd
- (void)requestPDFTileSurfaceForTarget:(id)arg1 forPage:(id)arg2 withRenderingProperties:(id)arg3 atZoomFactor:(double)arg4 frame:(struct CGRect)arg5 transform:(struct CGAffineTransform)arg6 tag:(int)arg7;	// IMP=0x00000000000302d3
- (void)saveBitmapFiles;	// IMP=0x00000000000302cd
- (int)tileSurfaceType;	// IMP=0x00000000000302c0
- (void)setTileSurfaceType:(int)arg1;	// IMP=0x00000000000302b3
- (int)tileSurfaceSize;	// IMP=0x00000000000302a8
- (void)dealloc;	// IMP=0x0000000000030212
- (id)init;	// IMP=0x00000000000300ea

@end

