//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VFXTextureSource.h"

@class MISSING_TYPE;

@interface VFXTextureOffscreenRenderingSource : VFXTextureSource
{
    _Bool _usesIOSurface;	// 24 = 0x18
    struct CGSize _framebufferSize;	// 32 = 0x20
    struct __CFXFramebuffer *_framebuffer;	// 48 = 0x30
}

- (void)_buildMipmaps:(struct __CFXEngineContext *)arg1;	// IMP=0x000000000013f901
- (MISSING_TYPE *)textureSize;	// IMP=0x000000000013f8eb

@end

