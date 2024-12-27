//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MTLSimDriver/NSObject-Protocol.h>

@class MTLIntersectionFunctionTableDescriptor, MTLVisibleFunctionTableDescriptor, NSArray, NSString;
@protocol MTLComputePipelineState, MTLDevice, MTLFunction, MTLFunctionHandle, MTLIntersectionFunctionTable, MTLVisibleFunctionTable;

@protocol MTLComputePipelineState <NSObject>
@property(readonly, nonatomic) long long shaderValidation;
@property(readonly) struct MTLResourceID gpuResourceID;
@property(readonly) _Bool supportIndirectCommandBuffers;
@property(readonly) unsigned long long staticThreadgroupMemoryLength;
@property(readonly) unsigned long long threadExecutionWidth;
@property(readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property(readonly) id <MTLDevice> device;
@property(readonly) NSString *label;
- (id <MTLIntersectionFunctionTable>)newIntersectionFunctionTableWithDescriptor:(MTLIntersectionFunctionTableDescriptor *)arg1;
- (id <MTLVisibleFunctionTable>)newVisibleFunctionTableWithDescriptor:(MTLVisibleFunctionTableDescriptor *)arg1;
- (id <MTLComputePipelineState>)newComputePipelineStateWithAdditionalBinaryFunctions:(NSArray *)arg1 error:(id *)arg2;
- (id <MTLFunctionHandle>)functionHandleWithFunction:(id <MTLFunction>)arg1;
- (unsigned long long)imageblockMemoryLengthForDimensions:(CDStruct_da2e99ad)arg1;
@end

