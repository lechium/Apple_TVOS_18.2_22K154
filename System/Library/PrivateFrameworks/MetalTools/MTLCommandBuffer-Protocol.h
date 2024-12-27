//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalTools/NSObject-Protocol.h>

@class MTLAccelerationStructurePassDescriptor, MTLBlitPassDescriptor, MTLComputePassDescriptor, MTLRenderPassDescriptor, MTLResourceStatePassDescriptor, NSError, NSString;
@protocol MTLAccelerationStructureCommandEncoder, MTLBlitCommandEncoder, MTLCommandQueue, MTLComputeCommandEncoder, MTLDevice, MTLDrawable, MTLEvent, MTLLogContainer, MTLParallelRenderCommandEncoder, MTLRenderCommandEncoder, MTLResidencySet, MTLResourceStateCommandEncoder;

@protocol MTLCommandBuffer <NSObject>
@property(readonly) NSError *error;
@property(readonly) unsigned long long status;
@property(readonly) double GPUEndTime;
@property(readonly) double GPUStartTime;
@property(readonly) id <MTLLogContainer> logs;
@property(readonly) double kernelEndTime;
@property(readonly) double kernelStartTime;
@property(copy) NSString *label;
@property(readonly) unsigned long long errorOptions;
@property(readonly) _Bool retainedReferences;
@property(readonly) id <MTLCommandQueue> commandQueue;
@property(readonly) id <MTLDevice> device;
- (void)useResidencySets:(const id *)arg1 count:(unsigned long long)arg2;
- (void)useResidencySet:(id <MTLResidencySet>)arg1;
- (void)popDebugGroup;
- (void)pushDebugGroup:(NSString *)arg1;
- (id <MTLAccelerationStructureCommandEncoder>)accelerationStructureCommandEncoderWithDescriptor:(MTLAccelerationStructurePassDescriptor *)arg1;
- (id <MTLAccelerationStructureCommandEncoder>)accelerationStructureCommandEncoder;
- (id <MTLResourceStateCommandEncoder>)resourceStateCommandEncoderWithDescriptor:(MTLResourceStatePassDescriptor *)arg1;
- (id <MTLResourceStateCommandEncoder>)resourceStateCommandEncoder;
- (id <MTLParallelRenderCommandEncoder>)parallelRenderCommandEncoderWithDescriptor:(MTLRenderPassDescriptor *)arg1;
- (void)encodeSignalEvent:(id <MTLEvent>)arg1 value:(unsigned long long)arg2;
- (void)encodeWaitForEvent:(id <MTLEvent>)arg1 value:(unsigned long long)arg2;
- (id <MTLComputeCommandEncoder>)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;
- (id <MTLComputeCommandEncoder>)computeCommandEncoder;
- (id <MTLBlitCommandEncoder>)blitCommandEncoderWithDescriptor:(MTLBlitPassDescriptor *)arg1;
- (id <MTLComputeCommandEncoder>)computeCommandEncoderWithDescriptor:(MTLComputePassDescriptor *)arg1;
- (id <MTLRenderCommandEncoder>)renderCommandEncoderWithDescriptor:(MTLRenderPassDescriptor *)arg1;
- (id <MTLBlitCommandEncoder>)blitCommandEncoder;
- (void)waitUntilCompleted;
- (void)addCompletedHandler:(void (^)(id <MTLCommandBuffer>))arg1;
- (void)waitUntilScheduled;
- (void)presentDrawable:(id <MTLDrawable>)arg1 atTime:(double)arg2;
- (void)presentDrawable:(id <MTLDrawable>)arg1;
- (void)addScheduledHandler:(void (^)(id <MTLCommandBuffer>))arg1;
- (void)commit;
- (void)enqueue;
@end

