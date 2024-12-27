//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MTLBuffer, MTLComputePipelineState;

__attribute__((visibility("hidden")))
@interface IndirectComputeCommandEncoderState : NSObject
{
    id <MTLComputePipelineState> _pipelineState;	// 8 = 0x8
    id <MTLBuffer> _kernelBuffers[31];	// 16 = 0x10
    void *_kernelBytes[31];	// 264 = 0x108
    unsigned long long _kernelBufferOffsets[31];	// 512 = 0x200
    unsigned long long _kernelBytesLength[31];	// 760 = 0x2f8
}

+ (id)saveEncoder:(id)arg1 withDescriptor:(id)arg2 player:(id)arg3;	// IMP=0x006000000000c4c3
- (void).cxx_destruct;	// IMP=0x000000000000c8be
- (void)restoreEncoder:(id)arg1 withDescriptor:(id)arg2;	// IMP=0x000000000000c789

@end

