//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VFX/NSObject-Protocol.h>

@class MTLIntersectionFunctionTableDescriptor, MTLRenderPipelineFunctionsDescriptor, MTLVisibleFunctionTableDescriptor, NSString;
@protocol MTLDevice, MTLFunction, MTLFunctionHandle, MTLIntersectionFunctionTable, MTLRenderPipelineState, MTLVisibleFunctionTable;

@protocol MTLRenderPipelineState <NSObject>
@property(readonly, nonatomic) long long shaderValidation;
@property(readonly) struct MTLResourceID gpuResourceID;
@property(readonly) unsigned long long maxTotalThreadgroupsPerMeshGrid;
@property(readonly) unsigned long long meshThreadExecutionWidth;
@property(readonly) unsigned long long objectThreadExecutionWidth;
@property(readonly) unsigned long long maxTotalThreadsPerMeshThreadgroup;
@property(readonly) unsigned long long maxTotalThreadsPerObjectThreadgroup;
@property(readonly) _Bool supportIndirectCommandBuffers;
@property(readonly) unsigned long long imageblockSampleLength;
@property(readonly) _Bool threadgroupSizeMatchesTileSize;
@property(readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property(readonly) id <MTLDevice> device;
@property(readonly) NSString *label;
- (id <MTLRenderPipelineState>)newRenderPipelineStateWithAdditionalBinaryFunctions:(MTLRenderPipelineFunctionsDescriptor *)arg1 error:(id *)arg2;
- (id <MTLIntersectionFunctionTable>)newIntersectionFunctionTableWithDescriptor:(MTLIntersectionFunctionTableDescriptor *)arg1 stage:(unsigned long long)arg2;
- (id <MTLVisibleFunctionTable>)newVisibleFunctionTableWithDescriptor:(MTLVisibleFunctionTableDescriptor *)arg1 stage:(unsigned long long)arg2;
- (id <MTLFunctionHandle>)functionHandleWithFunction:(id <MTLFunction>)arg1 stage:(unsigned long long)arg2;
- (unsigned long long)imageblockMemoryLengthForDimensions:(CDStruct_14f26992)arg1;
@end

