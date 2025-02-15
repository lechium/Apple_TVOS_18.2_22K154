//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNTextureSource.h"

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface SCNTextureOffscreenRenderingSource : SCNTextureSource
{
    _Bool _usesIOSurface;	// 32 = 0x20
    struct CGSize _framebufferSize;	// 40 = 0x28
    struct __C3DFramebuffer *_framebuffer;	// 56 = 0x38
}

- (void)_unbindFramebuffer:(struct __C3DEngineContext *)arg1;	// IMP=0x00000000002b6f53
- (void)_bindFramebuffer:(struct __C3DEngineContext *)arg1;	// IMP=0x00000000002b6f24
- (void)_buildMipmaps:(struct __C3DEngineContext *)arg1;	// IMP=0x00000000002b6e8d
- (struct __C3DTexture *)__prepareFramebufferWithSize:(struct CGSize)arg1 withEngineContext:(struct __C3DEngineContext *)arg2 textureSampler:(struct __C3DTextureSampler *)arg3 needsStencil:(_Bool)arg4;	// IMP=0x00000000002b6d69
- (void)_createFramebufferWithEngineContext:(struct __C3DEngineContext *)arg1 size:(struct CGSize)arg2;	// IMP=0x00000000002b6c1a
- (void)cleanup:(struct __C3DRendererContext *)arg1;	// IMP=0x00000000002b6bd6
- (MISSING_TYPE *)textureSize;	// IMP=0x00000000002b6bc0

@end

