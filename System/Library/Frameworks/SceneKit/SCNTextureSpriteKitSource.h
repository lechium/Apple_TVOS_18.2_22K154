//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SKScene;

__attribute__((visibility("hidden")))
@interface SCNTextureSpriteKitSource
{
    SKScene *_scene;	// 40 = 0x28
    double _lastUpdate;	// 48 = 0x30
}

@property(retain, nonatomic) SKScene *scene; // @synthesize scene=_scene;
- (id)metalTextureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3 status:(CDStruct_3d581f42 *)arg4;	// IMP=0x0000000000069c5b
- (struct __C3DTexture *)textureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;	// IMP=0x0000000000069b45
- (void)cleanup:(struct __C3DRendererContext *)arg1;	// IMP=0x0000000000069b16
- (double)__updateTextureWithSKScene:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2 sampler:(struct __C3DTextureSampler *)arg3;	// IMP=0x00000000000699b1
- (void)__renderSKScene:(id)arg1 withSKSCNRenderer:(id)arg2 engineContext:(struct __C3DEngineContext *)arg3 viewport:(double)arg4 atTime: /* Error: Ran out of types for this method. */;	// IMP=0x00000000000697eb
- (void)renderWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;	// IMP=0x0000000000069644
- (void)dealloc;	// IMP=0x0000000000069602

@end

