//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol MTLCommandQueue, MTLComputePipelineState, MTLDevice, MTLLibrary, OS_dispatch_queue;

@interface VCPSideCarMetal : NSObject
{
    id <MTLDevice> _device;	// 8 = 0x8
    id <MTLCommandQueue> _commandQueue;	// 16 = 0x10
    id <MTLLibrary> _library;	// 24 = 0x18
    _Bool _supportsSIMDPermute;	// 32 = 0x20
    _Bool _supportsQuadPermute;	// 33 = 0x21
    id <MTLComputePipelineState> _transitionDetection;	// 40 = 0x28
    id <MTLComputePipelineState> _transitionDetectionUnorm;	// 48 = 0x30
    id <MTLComputePipelineState> _blitKernel;	// 56 = 0x38
    id <MTLComputePipelineState> _deblockLumaH;	// 64 = 0x40
    id <MTLComputePipelineState> _deblockChromaH;	// 72 = 0x48
    int _deblockBitdepth;	// 80 = 0x50
    struct CF<__CVMetalTextureCache *> _textureCacheLuma;	// 88 = 0x58
    struct CF<__CVMetalTextureCache *> _textureCacheChroma;	// 96 = 0x60
    struct CF<__CVMetalTextureCache *> _textureCacheRGBALuma;	// 104 = 0x68
    struct CF<__CVMetalTextureCache *> _textureCacheRGBAChroma;	// 112 = 0x70
    NSDictionary *_readAttributes;	// 120 = 0x78
    NSDictionary *_writeAttributes;	// 128 = 0x80
    NSDictionary *_readWriteAttributes;	// 136 = 0x88
    struct MetalBufferPool _packetPool;	// 144 = 0x90
    struct MetalBufferPool _blockDist;	// 176 = 0xb0
    NSObject<OS_dispatch_queue> *_submissionQueue;	// 208 = 0xd0
    NSObject<OS_dispatch_queue> *_completionQueue;	// 216 = 0xd8
    unsigned int _planeOffset[4];	// 224 = 0xe0
    unsigned int _planeBytesPerRow[4];	// 240 = 0xf0
}

- (id).cxx_construct;	// IMP=0x0000000000014ade
- (void).cxx_destruct;	// IMP=0x00000000000149df
- (future_5546453e)createEncodePacket:(struct __CVBuffer *)arg1 forRegion:(CDStruct_4c83c94d)arg2 instance:(unsigned int)arg3 sequenceNumber:(unsigned int)arg4 frameIndex:(unsigned int)arg5 pts:(CDStruct_198678f7)arg6 duration:(CDStruct_198678f7)arg7 frameProperties:(struct __CFDictionary *)arg8;	// IMP=0x0000000000013f03
- (int)copySubframe:(struct __CVBuffer *)arg1 toFrame:(struct __CVBuffer *)arg2 atOffset:(CDStruct_14f26992)arg3;	// IMP=0x000000000001396e
- (int)copyFromFrame:(struct __CVBuffer *)arg1 toTile:(struct __CVBuffer *)arg2 origin:(CDStruct_14f26992)arg3 size:(CDStruct_14f26992)arg4 withFence:(void *)arg5;	// IMP=0x0000000000013386
- (int)subframeDeblock:(struct __CVBuffer *)arg1 withOffsetsY:(unsigned int *)arg2 numEdges:(int)arg3;	// IMP=0x0000000000012ee4
- (future_1676b93f)temporalTransitionScore:(struct __CVBuffer *)arg1 previousFrame:(struct __CVBuffer *)arg2 forRegion:(CDStruct_4c83c94d)arg3;	// IMP=0x0000000000012828
- (id)rgbaUintTextureForChroma:(struct __CVBuffer *)arg1 withAttributes:(id)arg2;	// IMP=0x0000000000012718
- (id)rgbaUintTextureForLuma:(struct __CVBuffer *)arg1 withAttributes:(id)arg2;	// IMP=0x0000000000012617
- (id)rgbaUnormTextureForLuma:(struct __CVBuffer *)arg1 withAttributes:(id)arg2;	// IMP=0x0000000000012516
- (id)uintTexture:(struct __CVBuffer *)arg1 forPlane:(int)arg2 withAttributes:(id)arg3;	// IMP=0x00000000000123fa
- (id)unormTexture:(struct __CVBuffer *)arg1 forPlane:(int)arg2 withAttributes:(id)arg3;	// IMP=0x00000000000122df
- (void)compileDeblockForFrame:(struct __CVBuffer *)arg1;	// IMP=0x0000000000012194
- (void)compileTransitionDetection;	// IMP=0x00000000000120dc
- (id)compileFunction:(id)arg1;	// IMP=0x00000000000120b8
- (id)compileFunction:(id)arg1 constantValues:(id)arg2;	// IMP=0x0000000000011ea0
- (int)selectGPUForFrame:(struct __CVBuffer *)arg1;	// IMP=0x0000000000011732
- (void)setPacketLayout:(id)arg1;	// IMP=0x000000000001156c

@end

