//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _MTLDeserializer;
@protocol MTLComputeCommandEncoderSPI, MTLComputePipelineState;

__attribute__((visibility("hidden")))
@interface MTLDeserializerComputeDecoder : NSObject
{
    _MTLDeserializer *deserializer;	// 8 = 0x8
    id <MTLComputeCommandEncoderSPI> computeEncoder;	// 16 = 0x10
    id <MTLComputePipelineState> _computePipeline;	// 24 = 0x18
}

@property(readonly) unsigned char type;
- (void)fault;	// IMP=0x00000000000194c4
- (void)decodeWithHeader:(CDStruct_d6d194d4 *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000191c8
- (void)decodeBarrierResources:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000001906b
- (void)decodeBarrierScope:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000019023
- (void)decodeWaitForFence:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018fcb
- (void)decodeUpdateFence:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018f73
- (void)decodeSetThreadgroupMemoryLength:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018ebb
- (void)decodeSetStageInRegionIndirect:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018df5
- (void)decodeSetStageInRegion:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018d6d
- (void)decodeSetPipelineState:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018ca7
- (void)decodeSetBufferOffset:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018bf0
- (void)decodeUseHeaps:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018a93
- (void)decodeUseResources:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018932
- (void)decodeSetTextures:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000001874c
- (void)decodeSetSamplersLODClamp:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000001850d
- (void)decodeSetSamplers:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000001832a
- (void)decodeSetBuffers:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000001810d
- (void)decodeDispatchThreads:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018060
- (void)decodeDispatchThreadgroupsIndirect:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000017fa5
- (void)decodeDispatchThreadgroups:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000017ef8
- (void)readVariableCommand:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2 maxExpectedSize:(unsigned long long)arg3 into:(void *)arg4;	// IMP=0x0000000000017e5b
- (void)readCommand:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2 expectedSize:(unsigned long long)arg3 into:(void *)arg4;	// IMP=0x0000000000017d9c
- (void)dealloc;	// IMP=0x0000000000017d52
- (id)initWithDeserializer:(id)arg1 commandBuffer:(id)arg2;	// IMP=0x0000000000017cec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

