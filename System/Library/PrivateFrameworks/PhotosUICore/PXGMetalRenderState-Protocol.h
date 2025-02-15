//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, PXGEffectComponent, PXGMetalRenderPassState, PXGMetalRenderTextureStore;
@protocol MTLBuffer, MTLDevice;

@protocol PXGMetalRenderState <NSObject>
@property(readonly, nonatomic) id <MTLBuffer> resizableCapInsetsBuffer;
@property(readonly, nonatomic) id <MTLBuffer> spriteOriginalGeometriesBuffer;
@property(readonly, nonatomic) id <MTLBuffer> spriteInfosBuffer;
@property(readonly, nonatomic) id <MTLBuffer> spriteStylesBuffer;
@property(readonly, nonatomic) id <MTLBuffer> spriteGeometriesBuffer;
@property(readonly, nonatomic) id <MTLBuffer> spriteEntitiesBuffer;
@property(readonly, nonatomic) const CDStruct_4f725fed *spriteOriginalGeometries;
@property(readonly, nonatomic) const CDStruct_12471299 *spriteInfos;
@property(readonly, nonatomic) const CDStruct_a79e78a9 *spriteStyles;
@property(readonly, nonatomic) const CDStruct_869f9c67 *spriteGeometries;
@property(readonly, nonatomic) const CDStruct_6238c8e0 *spriteEntities;
@property(nonatomic) _Bool hasParsedRenderTextures;
@property(readonly, nonatomic) PXGMetalRenderTextureStore *translucentTextures;
@property(readonly, nonatomic) PXGMetalRenderTextureStore *opaqueTextures;
@property(retain, nonatomic) NSArray *captureSpriteTextures;
@property(retain, nonatomic) NSArray *textures;
@property(readonly, nonatomic) PXGMetalRenderPassState *currentRenderPassState;
@property(readonly, nonatomic) PXGEffectComponent *effectComponent;
@property(nonatomic) CDStruct_25a052c0 values;
@property(readonly, nonatomic) CDStruct_d9de493b *uniforms;
@property(readonly, nonatomic) id <MTLDevice> device;
- (void)keepAlive;
- (void)prepareForRender:(long long)arg1;
- (PXGMetalRenderPassState *)renderPassStateForSpriteCount:(long long)arg1;
- (CDStruct_818bb265 *)resizableCapInsetsBufferWithCount:(long long)arg1;
- (CDStruct_4f725fed *)spriteOriginalGeometriesBufferWithCount:(long long)arg1;
- (CDStruct_12471299 *)spriteInfosBufferWithCount:(long long)arg1;
- (CDStruct_a79e78a9 *)spriteStylesBufferWithCount:(long long)arg1;
- (CDStruct_869f9c67 *)spriteGeometriesBufferWithCount:(long long)arg1;
- (CDStruct_6238c8e0 *)spriteEntitiesBufferWithCount:(long long)arg1;
@end

