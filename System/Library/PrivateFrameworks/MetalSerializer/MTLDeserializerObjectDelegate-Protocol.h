//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalSerializer/NSObject-Protocol.h>

@class _MTLIndirectArgumentBufferLayout;
@protocol MTLArgumentEncoder, MTLBuffer, MTLCommandQueue, MTLComputePipelineState, MTLDepthStencilState, MTLEvent, MTLFence, MTLFunction, MTLHeap, MTLRenderPipelineState, MTLResource, MTLSamplerState, MTLTexture;

@protocol MTLDeserializerObjectDelegate <NSObject>
- (void)deleteResourceForReference:(unsigned int)arg1;
- (id <MTLResource>)getResourceForReference:(unsigned int)arg1;
- (void)deleteEventForReference:(unsigned int)arg1;
- (id <MTLEvent>)getEventForReference:(unsigned int)arg1;
- (unsigned int)registerEventForReference:(unsigned int)arg1 event:(id <MTLEvent>)arg2;
- (void)deleteHeapForReference:(unsigned int)arg1;
- (id <MTLHeap>)getHeapForReference:(unsigned int)arg1;
- (unsigned int)registerHeapForReference:(unsigned int)arg1 heap:(id <MTLHeap>)arg2;
- (void)deleteArgumentEncoderForReference:(unsigned int)arg1;
- (id <MTLArgumentEncoder>)getArgumentEncoderForReference:(unsigned int)arg1;
- (unsigned int)registerArgumentEncoderForReference:(unsigned int)arg1 argumentEncoder:(id <MTLArgumentEncoder>)arg2;
- (void)deleteArgumentBufferLayoutForReference:(unsigned int)arg1;
- (_MTLIndirectArgumentBufferLayout *)getArgumentBufferLayoutForReference:(unsigned int)arg1;
- (unsigned int)registerArgumentBufferLayoutForReference:(unsigned int)arg1 argumentBufferLayout:(_MTLIndirectArgumentBufferLayout *)arg2;
- (void)deleteFenceForReference:(unsigned int)arg1;
- (id <MTLFence>)getFenceForReference:(unsigned int)arg1;
- (unsigned int)registerFenceForReference:(unsigned int)arg1 fence:(id <MTLFence>)arg2;
- (void)deleteDepthStencilStateForReference:(unsigned int)arg1;
- (id <MTLDepthStencilState>)getDepthStencilStateForReference:(unsigned int)arg1;
- (unsigned int)registerDepthStencilStateForReference:(unsigned int)arg1 depthStencil:(id <MTLDepthStencilState>)arg2;
- (void)deleteSamplerStateForReference:(unsigned int)arg1;
- (id <MTLSamplerState>)getSamplerStateForReference:(unsigned int)arg1;
- (unsigned int)registerSamplerStateForReference:(unsigned int)arg1 sampler:(id <MTLSamplerState>)arg2;
- (void)deleteTextureForReference:(unsigned int)arg1;
- (id <MTLTexture>)getTextureForReference:(unsigned int)arg1;
- (unsigned int)registerTextureForReference:(unsigned int)arg1 texture:(id <MTLTexture>)arg2;
- (void)deleteBufferForReference:(unsigned int)arg1;
- (id <MTLBuffer>)getBufferForReference:(unsigned int)arg1;
- (unsigned int)registerBufferForReference:(unsigned int)arg1 buffer:(id <MTLBuffer>)arg2;
- (void)deleteRenderPipelineStateForReference:(unsigned int)arg1;
- (id <MTLRenderPipelineState>)getRenderPipelineStateForReference:(unsigned int)arg1;
- (unsigned int)registerRenderPipelineStateForReference:(unsigned int)arg1 renderPipeline:(id <MTLRenderPipelineState>)arg2;
- (void)deleteComputePipelineStateForReference:(unsigned int)arg1;
- (id <MTLComputePipelineState>)getComputePipelineStateForReference:(unsigned int)arg1;
- (unsigned int)registerComputePipelineStateForReference:(unsigned int)arg1 computePipeline:(id <MTLComputePipelineState>)arg2;
- (void)deleteFunctionForReference:(unsigned int)arg1;
- (id <MTLFunction>)getFunctionForReference:(unsigned int)arg1;
- (unsigned int)registerFunctionForReference:(unsigned int)arg1 function:(id <MTLFunction>)arg2;
- (void)deleteCommandQueueForReference:(unsigned int)arg1;
- (id <MTLCommandQueue>)getCommandQueueForReference:(unsigned int)arg1;
- (unsigned int)registerCommandQueueForReference:(unsigned int)arg1 commandQueue:(id <MTLCommandQueue>)arg2;
@end

