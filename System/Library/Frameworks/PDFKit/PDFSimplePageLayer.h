//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class NSMutableDictionary, NSObject, NSString, PDFPage, PDFRenderingProperties;
@protocol PDFPageLayerGeometryInterface;

__attribute__((visibility("hidden")))
@interface PDFSimplePageLayer : CALayer
{
    PDFPage *_page;	// 8 = 0x8
    NSObject<PDFPageLayerGeometryInterface> *_geometryInterface;	// 16 = 0x10
    PDFRenderingProperties *_renderingProperties;	// 24 = 0x18
    NSMutableDictionary *_pageLayerEffects;	// 32 = 0x20
    CALayer *_effectsLayer;	// 40 = 0x28
    unsigned long long _visibilityDelegateIndex;	// 48 = 0x30
    double _contentsScale;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000005c7b9
- (void)_pageChangedPageRef:(id)arg1;	// IMP=0x000000000005c7a7
- (void)_pageDidRotate:(id)arg1;	// IMP=0x000000000005c5c1
- (void)_updateLayerEffect:(id)arg1 withPageTransform:(struct CGAffineTransform)arg2;	// IMP=0x000000000005c340
- (id)_pageLayerEffects;	// IMP=0x000000000005c323
- (void)_updateGeometry;	// IMP=0x000000000005c249
- (void)drawInContext:(struct CGContext *)arg1;	// IMP=0x000000000005c14f
- (unsigned long long)visibilityDelegateIndex;	// IMP=0x000000000005c13e
- (void)setVisibilityDelegateIndex:(unsigned long long)arg1;	// IMP=0x000000000005c12d
- (void)willEndStartLiveResize;	// IMP=0x000000000005c127
- (void)willStartLiveResize;	// IMP=0x000000000005c121
- (void)applyTileLayoutScale:(double)arg1;	// IMP=0x000000000005c11b
- (void)restoreOriginalTileLayout;	// IMP=0x000000000005c115
- (void)saveOriginalTileLayout;	// IMP=0x000000000005c10f
- (void)clearTiles;	// IMP=0x000000000005c109
- (void)forceTileUpdate;	// IMP=0x000000000005c103
- (_Bool)enablesTileUpdates;	// IMP=0x000000000005c0fb
- (void)setEnableTileUpdates:(_Bool)arg1;	// IMP=0x000000000005c0f5
- (void)scalePageLayerEffects:(double)arg1;	// IMP=0x000000000005c01f
- (struct CGAffineTransform)layerEffectTransform;	// IMP=0x000000000005bf45
- (void)updatePageLayerEffects;	// IMP=0x000000000005bd93
- (void)updatePageLayerEffectForID:(id)arg1;	// IMP=0x000000000005bcc9
- (id)pageLayerEffectForID:(id)arg1;	// IMP=0x000000000005bcac
- (void)removePageLayerEffectForID:(id)arg1;	// IMP=0x000000000005bbe4
- (void)addPageLayerEffect:(id)arg1;	// IMP=0x000000000005ba32
- (_Bool)isVisible;	// IMP=0x000000000005b8e4
- (long long)displayBox;	// IMP=0x000000000005b8aa
- (void)setNeedsTilesUpdate;	// IMP=0x000000000005b84e
- (id)renderingProperties;	// IMP=0x000000000005b835
- (id)geometryInterface;	// IMP=0x000000000005b81c
- (id)page;	// IMP=0x000000000005b803
- (void)dealloc;	// IMP=0x000000000005b7b0
- (id)initWithPage:(id)arg1 geometryInterface:(id)arg2 andRenderingProperties:(id)arg3;	// IMP=0x000000000005b3f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

