//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, UIColor, _TtC3VFX13VFXCoreCamera, _TtC3VFX8VFXScene, _TtC3VFX9VFXEffect;
@protocol MTLTexture;

@interface _TtC3VFX17VFXRendererLegacy : NSObject
{
    MISSING_TYPE *scene;	// 8 = 0x8
    MISSING_TYPE *effect;	// 16 = 0x10
    MISSING_TYPE *renderer;	// 24 = 0x18
    MISSING_TYPE *texture;	// 32 = 0x20
    MISSING_TYPE *depthTexture;	// 40 = 0x28
    MISSING_TYPE *backgroundColor;	// 48 = 0x30
    MISSING_TYPE *pointOfView;	// 56 = 0x38
    MISSING_TYPE *performMetalCaptureDuringSnapshot;	// 64 = 0x40
    MISSING_TYPE *postRenderCallback;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000a80df0
@property(nonatomic, copy) CDUnknownBlockType postRenderCallback;
@property(nonatomic) _Bool additiveWritesToAlpha;
- (id)snapshotImageWithSize:(struct CGSize)arg1 deltaTime:(double)arg2;	// IMP=0x0000000000a80c00
- (id)snapshotWithSize:(struct CGSize)arg1 deltaTime:(double)arg2;	// IMP=0x0000000000a80530
@property(nonatomic) _Bool enableDeferredRendering;
- (void)finalizeEncoding;	// IMP=0x0000000000a7fab0
- (void)encodeWithCommandBuffer:(id)arg1;	// IMP=0x0000000000a7fa60
- (_Bool)hasRenderableObjects;	// IMP=0x0000000000a7f270
- (id)init;	// IMP=0x0000000000a7f110
- (id)initWithCommandQueue:(id)arg1;	// IMP=0x0000000000a7ef10
@property(nonatomic, retain) _TtC3VFX13VFXCoreCamera *pointOfView; // @synthesize pointOfView;
@property(nonatomic, retain) UIColor *backgroundColor; // @synthesize backgroundColor;
@property(nonatomic, retain) id <MTLTexture> depthTexture; // @synthesize depthTexture;
@property(nonatomic, retain) id <MTLTexture> texture; // @synthesize texture;
@property(nonatomic, retain) _TtC3VFX9VFXEffect *effect; // @synthesize effect;
@property(nonatomic, retain) _TtC3VFX8VFXScene *scene; // @synthesize scene;

@end

