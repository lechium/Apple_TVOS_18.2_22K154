//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface VFXREDrawCall : NSObject
{
    MISSING_TYPE *drawCall;	// 8 = 0x8
    MISSING_TYPE *aabb;	// 16 = 0x10
    MISSING_TYPE *_isDepthOnly;	// 48 = 0x30
    MISSING_TYPE *_writesColor;	// 49 = 0x31
    MISSING_TYPE *_writesSeparateDepth;	// 50 = 0x32
    MISSING_TYPE *_needsLinearDepth;	// 51 = 0x33
    MISSING_TYPE *_drawsForBlur;	// 52 = 0x34
    MISSING_TYPE *_isAdditive;	// 53 = 0x35
    MISSING_TYPE *_materialType;	// 56 = 0x38
    MISSING_TYPE *reProvidedBuffers;	// 64 = 0x40
    MISSING_TYPE *reProvidedTextures;	// 72 = 0x48
    MISSING_TYPE *handler;	// 80 = 0x50
    MISSING_TYPE *renderPassName;	// 96 = 0x60
    MISSING_TYPE *renderPassIdentifier;	// 112 = 0x70
    MISSING_TYPE *emitterIdentifier;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000008d72c0
- (id)init;	// IMP=0x00000000008d7250
@property(nonatomic, copy) NSString *emitterIdentifier;
@property(nonatomic, readonly) int renderingOrder;
- (MISSING_TYPE *)boundingBoxMax;	// IMP=0x00000000008d6f90
- (MISSING_TYPE *)boundingBoxMin;	// IMP=0x00000000008d6f70
@property(nonatomic, readonly) int materialType;
@property(nonatomic, readonly) _Bool isAdditive;
@property(nonatomic, readonly) _Bool drawsForBlur;
@property(nonatomic, readonly) _Bool isDepthOnly;
@property(nonatomic, readonly) _Bool needsLinearDepth;
@property(nonatomic, readonly) _Bool writesSeparateDepth;
@property(nonatomic, readonly) _Bool writesColor;
@property(nonatomic) unsigned char renderPassIdentifier; // @synthesize renderPassIdentifier;
@property(nonatomic, copy) NSString *renderPassName;
@property(nonatomic, readonly) _Bool hasCustomHandler;
@property(nonatomic, readonly) CDUnknownBlockType customHandler;
- (void)enumerateTextures:(CDUnknownBlockType)arg1;	// IMP=0x00000000008d86d0
- (unsigned long long)winding;	// IMP=0x00000000008d6ca0
- (unsigned long long)primitiveType;	// IMP=0x00000000008d6c80
- (long long)instanceCount;	// IMP=0x00000000008d6c60
- (long long)vertexCount;	// IMP=0x00000000008d6c40
- (long long)indexBufferSize;	// IMP=0x00000000008d6c20
- (long long)indexBufferOffset;	// IMP=0x00000000008d6c00
- (id)indexBuffer;	// IMP=0x00000000008d6bd0
- (unsigned char)indexType;	// IMP=0x00000000008d6b30
- (long long)indexCount;	// IMP=0x00000000008d6b10
- (void)withDefaultIBLConstantBuffer:(void *)arg1:(CDUnknownBlockType)arg2;	// IMP=0x00000000008d6a50
- (void)withDefaultLightConstantBuffer:(void *)arg1:(CDUnknownBlockType)arg2;	// IMP=0x00000000008d6a10
- (_Bool)hasLightingEnabled;	// IMP=0x00000000008d6a00
- (void)enumerateBuffers:(CDUnknownBlockType)arg1;	// IMP=0x00000000008d69e0
- (unsigned long long)materialIdentifier;	// IMP=0x00000000008d69d0

@end

