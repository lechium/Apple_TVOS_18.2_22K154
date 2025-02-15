//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer;

__attribute__((visibility("hidden")))
@interface SCNTextureCoreAnimationSource
{
    CALayer *_layer;	// 40 = 0x28
    double _lastUpdate;	// 48 = 0x30
    double _nextUpdateDate;	// 56 = 0x38
}

@property(retain, nonatomic) CALayer *layer; // @synthesize layer=_layer;
- (id)metalTextureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3 status:(CDStruct_3d581f42 *)arg4;	// IMP=0x000000000004d5e2
- (struct __C3DTexture *)_textureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;	// IMP=0x000000000004d4c9
- (struct __C3DTexture *)textureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;	// IMP=0x000000000004d431
- (double)layerContentsScaleFactor;	// IMP=0x000000000004d406
- (struct CGSize)layerSizeInPixels;	// IMP=0x000000000004d3ec
- (void)cleanup:(struct __C3DRendererContext *)arg1;	// IMP=0x000000000004d3bd
- (double)__updateTextureWithLayer:(id)arg1 texture:(id)arg2 engineContext:(struct __C3DEngineContext *)arg3 sampler:(struct __C3DTextureSampler *)arg4;	// IMP=0x000000000004d071
- (double)__renderLayer:(id)arg1 withCARenderer:(id)arg2 engineContext:(struct __C3DEngineContext *)arg3 viewport:(double)arg4 atTime:(_Bool)arg5 forceUpdate:(_Bool *)arg6 didUpdate: /* Error: Ran out of types for this method. */;	// IMP=0x000000000004cc34
- (double)__renderLayerUsingMetal:(id)arg1 withCARenderer:(id)arg2 engineContext:(struct __C3DEngineContext *)arg3 viewport:(double)arg4 atTime:(_Bool)arg5 forceUpdate:(_Bool *)arg6 didUpdate: /* Error: Ran out of types for this method. */;	// IMP=0x000000000004c96f
- (void)_resizeLayer:(id)arg1 toSize:(struct CGSize)arg2 updateLayer:(_Bool)arg3 updateTransform:(_Bool)arg4 caRenderer:(id)arg5;	// IMP=0x000000000004c835
- (void)_resizeLayer:(id)arg1 toSize:(struct CGSize)arg2 updateLayer:(_Bool)arg3 updateTransform:(_Bool)arg4 caRenderer:(id)arg5 isMainThread:(_Bool)arg6;	// IMP=0x000000000004c106
- (_Bool)requiresMainThreadUpdates;	// IMP=0x000000000004c0fe
- (float)clearValue;	// IMP=0x000000000004c0f5
- (id)layerToFocusForRenderedLayer:(id)arg1;	// IMP=0x000000000004c0ec
- (void)renderWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3 status:(CDStruct_3d581f42 *)arg4;	// IMP=0x000000000004bfd2
- (_Bool)prefersGL3;	// IMP=0x000000000004bf8c
- (_Bool)supportsMetal;	// IMP=0x000000000004bf84
- (void)dealloc;	// IMP=0x000000000004bf42

@end

