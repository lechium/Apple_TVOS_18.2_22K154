//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLCommandBuffer, CaptureMTLDevice, NSMutableSet, NSString;
@protocol MTLComputeCommandEncoder, MTLComputeCommandEncoderSPI, MTLDevice;

@interface CaptureMTLComputeCommandEncoder : NSObject
{
    id <MTLComputeCommandEncoderSPI> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    struct GTTraceContext *_traceContext;	// 24 = 0x18
    struct GTTraceStream *_traceStream;	// 32 = 0x20
    NSMutableSet *_retainedObjects;	// 40 = 0x28
    CaptureMTLCommandBuffer *_captureCommandBuffer;	// 48 = 0x30
    struct apr_pool_t *_pool;	// 56 = 0x38
    struct apr_hash_t *_snapshotMap;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000086a4c
- (void)waitForFence:(id)arg1;	// IMP=0x00000000000868db
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;	// IMP=0x000000000008671d
- (void)useResourceGroup:(id)arg1 usage:(unsigned long long)arg2;	// IMP=0x000000000008665f
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2;	// IMP=0x00000000000864d6
- (void)useResidencySets:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000086400
- (void)useResidencySet:(id)arg1;	// IMP=0x0000000000086351
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000086193
- (void)useHeap:(id)arg1;	// IMP=0x0000000000086022
- (void)updateFence:(id)arg1;	// IMP=0x0000000000085eb1
- (void)setVisibleFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x0000000000085cf2
- (void)setVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000085b69
- (void)setThreadgroupPackingDisabled:(_Bool)arg1;	// IMP=0x0000000000085a79
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000008597b
- (void)setThreadgroupDistributionModeWithClusterGroupIndex:(unsigned int)arg1;	// IMP=0x000000000008588e
- (void)setThreadgroupDistributionMode:(long long)arg1;	// IMP=0x00000000000857a7
- (void)setTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x00000000000855e8
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000008545f
- (void)setStageInRegionWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2;	// IMP=0x00000000000852d6
- (void)setStageInRegion:(CDStruct_4c83c94d)arg1;	// IMP=0x00000000000851b8
- (void)setSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000084ff9
- (void)setSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x0000000000084dce
- (void)setSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x0000000000084c1e
- (void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000084a95
- (void)setIntersectionFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x00000000000848d6
- (void)setIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x000000000008474d
- (void)setImageblockWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;	// IMP=0x000000000008464f
- (void)setComputePipelineState:(id)arg1;	// IMP=0x00000000000844de
- (void)setBytes:(const void *)arg1 length:(unsigned long long)arg2 attributeStride:(unsigned long long)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x0000000000084386
- (void)setBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000084250
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x0000000000084067
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 attributeStrides:(const unsigned long long *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x0000000000083e26
- (void)setBufferOffset:(unsigned long long)arg1 attributeStride:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000083d1c
- (void)setBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000083c1e
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 attributeStride:(unsigned long long)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x0000000000083a78
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000000838e4
- (void)sampleCountersInBuffer:(id)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(_Bool)arg3;	// IMP=0x0000000000083746
- (void)pushDebugGroup:(id)arg1;	// IMP=0x00000000000835cf
- (void)popDebugGroup;	// IMP=0x00000000000834f6
- (id)newKernelDebugInfo;	// IMP=0x00000000000834e0
- (void)memoryBarrierWithScope:(unsigned long long)arg1;	// IMP=0x00000000000833ed
- (void)memoryBarrierWithResources:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000008320f
- (void)insertDebugSignpost:(id)arg1;	// IMP=0x0000000000083098
- (void)endEncoding;	// IMP=0x0000000000082fbf
- (void)encodeStartWhile:(id)arg1 offset:(unsigned long long)arg2 comparison:(unsigned long long)arg3 referenceValue:(unsigned int)arg4;	// IMP=0x0000000000082eee
- (void)encodeStartIf:(id)arg1 offset:(unsigned long long)arg2 comparison:(unsigned long long)arg3 referenceValue:(unsigned int)arg4;	// IMP=0x0000000000082e1d
- (void)encodeStartElse;	// IMP=0x0000000000082de6
- (void)encodeStartDoWhile;	// IMP=0x0000000000082daf
- (_Bool)encodeEndWhile;	// IMP=0x0000000000082d78
- (_Bool)encodeEndIf;	// IMP=0x0000000000082d41
- (_Bool)encodeEndDoWhile:(id)arg1 offset:(unsigned long long)arg2 comparison:(unsigned long long)arg3 referenceValue:(unsigned int)arg4;	// IMP=0x0000000000082c6b
- (void)dispatchThreadsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2;	// IMP=0x0000000000082ae2
- (void)dispatchThreads:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;	// IMP=0x00000000000829b3
- (void)dispatchThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerThreadgroup:(CDStruct_14f26992)arg3;	// IMP=0x0000000000082800
- (void)dispatchThreadgroups:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;	// IMP=0x00000000000826d1
@property(copy) NSString *label;
@property(readonly) unsigned long long dispatchType;
@property(readonly) id <MTLDevice> device;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x00000000000824c9
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000824b8
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000000823f7
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x0000000000082397
- (id)originalObject;	// IMP=0x0000000000082389
- (void)setAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x000000000008215c
- (void)enableNullBufferBinds:(_Bool)arg1;	// IMP=0x000000000008206c
- (void)executeCommandsInBuffer:(id)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000081c3e
- (void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;	// IMP=0x00000000000814c2
@property(readonly) id <MTLComputeCommandEncoder> baseObject;
- (void)dealloc;	// IMP=0x00000000000813b8
- (id)initWithBaseObject:(id)arg1 captureCommandBuffer:(id)arg2;	// IMP=0x0000000000081231

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

