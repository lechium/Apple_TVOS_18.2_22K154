//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalTools/MTLIndirectRenderCommand-Protocol.h>

@class _MTLIndirectDrawArguments, _MTLIndirectDrawIndexedArguments, _MTLIndirectDrawIndexedPatchesArguments, _MTLIndirectDrawMeshThreadgroupsArguments, _MTLIndirectDrawMeshThreadsArguments, _MTLIndirectDrawPatchesArguments, _MTLIndirectTessellationFactorArguments;
@protocol MTLBuffer;

@protocol MTLIndirectRenderCommandSPI <MTLIndirectRenderCommand>
- (unsigned long long)getPipelineStateUniqueIdentifier;
- (unsigned long long)getOptimizedStatus;
- (unsigned long long)getObjectThreadgroupMemoryLengthAtIndex:(unsigned long long)arg1;
- (void)drawMeshThreads:(CDStruct_14f26992)arg1 threadsPerObjectThreadgroup:(CDStruct_14f26992)arg2 threadsPerMeshThreadgroup:(CDStruct_14f26992)arg3;
- (void)drawMeshThreadgroups:(CDStruct_14f26992)arg1 threadsPerObjectThreadgroup:(CDStruct_14f26992)arg2 threadsPerMeshThreadgroup:(CDStruct_14f26992)arg3;
- (_Bool)hasBarrier;
- (void)clearBarrier;
- (void)setBarrier;
- (void)setMeshBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setObjectBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (_MTLIndirectDrawMeshThreadsArguments *)drawMeshThreadsArguments;
- (_MTLIndirectDrawMeshThreadgroupsArguments *)drawMeshThreadgroupsArguments;
- (_MTLIndirectTessellationFactorArguments *)getTessellationFactorArguments;
- (_MTLIndirectDrawIndexedPatchesArguments *)drawIndexedPatchesArguments;
- (_MTLIndirectDrawPatchesArguments *)drawPatchesArguments;
- (_MTLIndirectDrawIndexedArguments *)drawIndexedArguments;
- (_MTLIndirectDrawArguments *)drawArguments;
- (unsigned long long)getCommandType;
- (unsigned long long)getMeshBufferAddressAtIndex:(unsigned long long)arg1;
- (unsigned long long)getObjectBufferAddressAtIndex:(unsigned long long)arg1;
- (unsigned long long)getFragmentBufferAddressAtIndex:(unsigned long long)arg1;
- (unsigned long long)getVertexBufferAddressAtIndex:(unsigned long long)arg1;
- (unsigned long long)getVertexAttributeStrideAtIndex:(unsigned long long)arg1;
- (void *)getFragmentBufferAtIndex:(unsigned long long)arg1;
- (void *)getVertexBufferAtIndex:(unsigned long long)arg1;
@end

