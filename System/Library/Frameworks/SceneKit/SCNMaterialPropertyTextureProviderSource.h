//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNTextureSource.h"

@class NSString;
@protocol MTLTexture, SCNMaterialPropertyTextureProvider;

__attribute__((visibility("hidden")))
@interface SCNMaterialPropertyTextureProviderSource : SCNTextureSource
{
    id <MTLTexture> _texture;	// 8 = 0x8
    struct __C3DEngineContext *_engineContext;	// 16 = 0x10
    id <SCNMaterialPropertyTextureProvider> _textureProvider;	// 24 = 0x18
}

- (id)cachedTextureWithURL:(id)arg1 token:(id *)arg2 didFallbackToDefaultTexture:(_Bool *)arg3;	// IMP=0x00000000001e1805
- (id)cachedTextureWithURL:(id)arg1 token:(id *)arg2;	// IMP=0x00000000001e17f0
- (void)renderWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;	// IMP=0x00000000001e17ad
- (id)metalTextureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3 status:(CDStruct_3d581f42 *)arg4;	// IMP=0x00000000001e161b
- (void)cleanup:(struct __C3DRendererContext *)arg1;	// IMP=0x00000000001e1615
- (void)connectToProxy:(struct __C3DImageProxy *)arg1;	// IMP=0x00000000001e1565
@property(retain, nonatomic) id <SCNMaterialPropertyTextureProvider> textureProvider;
- (void)dealloc;	// IMP=0x00000000001e149b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

