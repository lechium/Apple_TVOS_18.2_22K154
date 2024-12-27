//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalTools/MTLCommandEncoder-Protocol.h>

@class MTLAccelerationStructureDescriptor;
@protocol MTLAccelerationStructure, MTLBuffer, MTLCounterSampleBuffer, MTLFence, MTLHeap, MTLResource;

@protocol MTLAccelerationStructureCommandEncoder <MTLCommandEncoder>
- (void)sampleCountersInBuffer:(id <MTLCounterSampleBuffer>)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(_Bool)arg3;
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2;
- (void)useHeap:(id <MTLHeap>)arg1;
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;
- (void)useResource:(id <MTLResource>)arg1 usage:(unsigned long long)arg2;
- (void)waitForFence:(id <MTLFence>)arg1;
- (void)updateFence:(id <MTLFence>)arg1;
- (void)copyAndCompactAccelerationStructure:(id <MTLAccelerationStructure>)arg1 toAccelerationStructure:(id <MTLAccelerationStructure>)arg2;
- (void)writeCompactedAccelerationStructureSize:(id <MTLAccelerationStructure>)arg1 toBuffer:(id <MTLBuffer>)arg2 offset:(unsigned long long)arg3 sizeDataType:(unsigned long long)arg4;
- (void)writeCompactedAccelerationStructureSize:(id <MTLAccelerationStructure>)arg1 toBuffer:(id <MTLBuffer>)arg2 offset:(unsigned long long)arg3;
- (void)copyAccelerationStructure:(id <MTLAccelerationStructure>)arg1 toAccelerationStructure:(id <MTLAccelerationStructure>)arg2;
- (void)refitAccelerationStructure:(id <MTLAccelerationStructure>)arg1 descriptor:(MTLAccelerationStructureDescriptor *)arg2 destination:(id <MTLAccelerationStructure>)arg3 scratchBuffer:(id <MTLBuffer>)arg4 scratchBufferOffset:(unsigned long long)arg5 options:(unsigned long long)arg6;
- (void)refitAccelerationStructure:(id <MTLAccelerationStructure>)arg1 descriptor:(MTLAccelerationStructureDescriptor *)arg2 destination:(id <MTLAccelerationStructure>)arg3 scratchBuffer:(id <MTLBuffer>)arg4 scratchBufferOffset:(unsigned long long)arg5;
- (void)buildAccelerationStructure:(id <MTLAccelerationStructure>)arg1 descriptor:(MTLAccelerationStructureDescriptor *)arg2 scratchBuffer:(id <MTLBuffer>)arg3 scratchBufferOffset:(unsigned long long)arg4;
@end

