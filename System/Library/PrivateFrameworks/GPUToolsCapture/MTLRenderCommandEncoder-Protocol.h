//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GPUToolsCapture/MTLCommandEncoder-Protocol.h>

@protocol MTLAccelerationStructure, MTLBuffer, MTLCounterSampleBuffer, MTLDepthStencilState, MTLFence, MTLHeap, MTLIndirectCommandBuffer, MTLIntersectionFunctionTable, MTLRenderPipelineState, MTLResource, MTLSamplerState, MTLTexture, MTLVisibleFunctionTable;

@protocol MTLRenderCommandEncoder <MTLCommandEncoder>
@property(readonly) unsigned long long tileHeight;
@property(readonly) unsigned long long tileWidth;
- (void)sampleCountersInBuffer:(id <MTLCounterSampleBuffer>)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(_Bool)arg3;
- (void)memoryBarrierWithResources:(const id *)arg1 count:(unsigned long long)arg2 afterStages:(unsigned long long)arg3 beforeStages:(unsigned long long)arg4;
- (void)memoryBarrierWithScope:(unsigned long long)arg1 afterStages:(unsigned long long)arg2 beforeStages:(unsigned long long)arg3;
- (void)executeCommandsInBuffer:(id <MTLIndirectCommandBuffer>)arg1 indirectBuffer:(id <MTLBuffer>)arg2 indirectBufferOffset:(unsigned long long)arg3;
- (void)executeCommandsInBuffer:(id <MTLIndirectCommandBuffer>)arg1 withRange:(struct _NSRange)arg2;
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2 stages:(unsigned long long)arg3;
- (void)useHeap:(id <MTLHeap>)arg1 stages:(unsigned long long)arg2;
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2;
- (void)useHeap:(id <MTLHeap>)arg1;
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 stages:(unsigned long long)arg4;
- (void)useResource:(id <MTLResource>)arg1 usage:(unsigned long long)arg2 stages:(unsigned long long)arg3;
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;
- (void)useResource:(id <MTLResource>)arg1 usage:(unsigned long long)arg2;
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)dispatchThreadsPerTile:(CDStruct_14f26992)arg1;
- (void)setTileAccelerationStructure:(id <MTLAccelerationStructure>)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setTileIntersectionFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;
- (void)setTileIntersectionFunctionTable:(id <MTLIntersectionFunctionTable>)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setTileVisibleFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;
- (void)setTileVisibleFunctionTable:(id <MTLVisibleFunctionTable>)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setTileSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;
- (void)setTileSamplerState:(id <MTLSamplerState>)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setTileSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setTileSamplerState:(id <MTLSamplerState>)arg1 atIndex:(unsigned long long)arg2;
- (void)setTileTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setTileTexture:(id <MTLTexture>)arg1 atIndex:(unsigned long long)arg2;
- (void)setTileBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)setTileBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setTileBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setTileBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)drawIndexedPatches:(unsigned long long)arg1 patchIndexBuffer:(id <MTLBuffer>)arg2 patchIndexBufferOffset:(unsigned long long)arg3 controlPointIndexBuffer:(id <MTLBuffer>)arg4 controlPointIndexBufferOffset:(unsigned long long)arg5 indirectBuffer:(id <MTLBuffer>)arg6 indirectBufferOffset:(unsigned long long)arg7;
- (void)drawIndexedPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id <MTLBuffer>)arg4 patchIndexBufferOffset:(unsigned long long)arg5 controlPointIndexBuffer:(id <MTLBuffer>)arg6 controlPointIndexBufferOffset:(unsigned long long)arg7 instanceCount:(unsigned long long)arg8 baseInstance:(unsigned long long)arg9;
- (void)drawPatches:(unsigned long long)arg1 patchIndexBuffer:(id <MTLBuffer>)arg2 patchIndexBufferOffset:(unsigned long long)arg3 indirectBuffer:(id <MTLBuffer>)arg4 indirectBufferOffset:(unsigned long long)arg5;
- (void)drawPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id <MTLBuffer>)arg4 patchIndexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseInstance:(unsigned long long)arg7;
- (void)setTessellationFactorScale:(float)arg1;
- (void)setTessellationFactorBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 instanceStride:(unsigned long long)arg3;
- (void)waitForFence:(id <MTLFence>)arg1 beforeStages:(unsigned long long)arg2;
- (void)updateFence:(id <MTLFence>)arg1 afterStages:(unsigned long long)arg2;
- (void)textureBarrier;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexType:(unsigned long long)arg2 indexBuffer:(id <MTLBuffer>)arg3 indexBufferOffset:(unsigned long long)arg4 indirectBuffer:(id <MTLBuffer>)arg5 indirectBufferOffset:(unsigned long long)arg6;
- (void)drawPrimitives:(unsigned long long)arg1 indirectBuffer:(id <MTLBuffer>)arg2 indirectBufferOffset:(unsigned long long)arg3;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id <MTLBuffer>)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseVertex:(long long)arg7 baseInstance:(unsigned long long)arg8;
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 baseInstance:(unsigned long long)arg5;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id <MTLBuffer>)arg4 indexBufferOffset:(unsigned long long)arg5;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id <MTLBuffer>)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6;
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3;
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4;
- (void)drawMeshThreadgroupsWithIndirectBuffer:(id <MTLBuffer>)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerObjectThreadgroup:(CDStruct_14f26992)arg3 threadsPerMeshThreadgroup:(CDStruct_14f26992)arg4;
- (void)drawMeshThreads:(CDStruct_14f26992)arg1 threadsPerObjectThreadgroup:(CDStruct_14f26992)arg2 threadsPerMeshThreadgroup:(CDStruct_14f26992)arg3;
- (void)drawMeshThreadgroups:(CDStruct_14f26992)arg1 threadsPerObjectThreadgroup:(CDStruct_14f26992)arg2 threadsPerMeshThreadgroup:(CDStruct_14f26992)arg3;
- (void)setMeshSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;
- (void)setMeshSamplerState:(id <MTLSamplerState>)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setMeshSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setMeshSamplerState:(id <MTLSamplerState>)arg1 atIndex:(unsigned long long)arg2;
- (void)setMeshTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setMeshTexture:(id <MTLTexture>)arg1 atIndex:(unsigned long long)arg2;
- (void)setMeshBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)setMeshBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setMeshBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setMeshBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setObjectThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setObjectSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;
- (void)setObjectSamplerState:(id <MTLSamplerState>)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setObjectSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setObjectSamplerState:(id <MTLSamplerState>)arg1 atIndex:(unsigned long long)arg2;
- (void)setObjectTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setObjectTexture:(id <MTLTexture>)arg1 atIndex:(unsigned long long)arg2;
- (void)setObjectBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)setObjectBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setObjectBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setObjectBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setStencilStoreActionOptions:(unsigned long long)arg1;
- (void)setDepthStoreActionOptions:(unsigned long long)arg1;
- (void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setStencilStoreAction:(unsigned long long)arg1;
- (void)setDepthStoreAction:(unsigned long long)arg1;
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setVisibilityResultMode:(unsigned long long)arg1 offset:(unsigned long long)arg2;
- (void)setStencilFrontReferenceValue:(unsigned int)arg1 backReferenceValue:(unsigned int)arg2;
- (void)setStencilReferenceValue:(unsigned int)arg1;
- (void)setDepthStencilState:(id <MTLDepthStencilState>)arg1;
- (void)setBlendColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)setFragmentAccelerationStructure:(id <MTLAccelerationStructure>)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setFragmentIntersectionFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;
- (void)setFragmentIntersectionFunctionTable:(id <MTLIntersectionFunctionTable>)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setFragmentVisibleFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;
- (void)setFragmentVisibleFunctionTable:(id <MTLVisibleFunctionTable>)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setFragmentSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;
- (void)setFragmentSamplerState:(id <MTLSamplerState>)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setFragmentSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setFragmentSamplerState:(id <MTLSamplerState>)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setFragmentTexture:(id <MTLTexture>)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)setFragmentBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setFragmentBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setTriangleFillMode:(unsigned long long)arg1;
- (void)setScissorRects:(const CDStruct_33dcf794 *)arg1 count:(unsigned long long)arg2;
- (void)setScissorRect:(CDStruct_33dcf794)arg1;
- (void)setDepthBias:(float)arg1 slopeScale:(float)arg2 clamp:(float)arg3;
- (void)setDepthClipMode:(unsigned long long)arg1;
- (void)setCullMode:(unsigned long long)arg1;
- (void)setVertexAmplificationCount:(unsigned long long)arg1 viewMappings:(const CDStruct_c0454aff *)arg2;
- (void)setFrontFacingWinding:(unsigned long long)arg1;
- (void)setViewports:(const CDStruct_8727d297 *)arg1 count:(unsigned long long)arg2;
- (void)setViewport:(CDStruct_8727d297)arg1;
- (void)setVertexAccelerationStructure:(id <MTLAccelerationStructure>)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setVertexIntersectionFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;
- (void)setVertexIntersectionFunctionTable:(id <MTLIntersectionFunctionTable>)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setVertexVisibleFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;
- (void)setVertexVisibleFunctionTable:(id <MTLVisibleFunctionTable>)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setVertexSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;
- (void)setVertexSamplerState:(id <MTLSamplerState>)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setVertexSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setVertexSamplerState:(id <MTLSamplerState>)arg1 atIndex:(unsigned long long)arg2;
- (void)setVertexTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setVertexTexture:(id <MTLTexture>)arg1 atIndex:(unsigned long long)arg2;
- (void)setVertexBytes:(const void *)arg1 length:(unsigned long long)arg2 attributeStride:(unsigned long long)arg3 atIndex:(unsigned long long)arg4;
- (void)setVertexBufferOffset:(unsigned long long)arg1 attributeStride:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setVertexBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 attributeStrides:(const unsigned long long *)arg3 withRange:(struct _NSRange)arg4;
- (void)setVertexBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 attributeStride:(unsigned long long)arg3 atIndex:(unsigned long long)arg4;
- (void)setVertexBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)setVertexBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setVertexBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setVertexBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setRenderPipelineState:(id <MTLRenderPipelineState>)arg1;
@end

