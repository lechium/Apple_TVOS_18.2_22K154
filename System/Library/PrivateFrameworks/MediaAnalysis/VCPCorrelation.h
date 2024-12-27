//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MTLComputePipelineState, MTLDevice, MTLLibrary;

__attribute__((visibility("hidden")))
@interface VCPCorrelation : NSObject
{
    id <MTLDevice> _device;	// 8 = 0x8
    id <MTLLibrary> _mtlLibrary;	// 16 = 0x10
    id <MTLComputePipelineState> _correlationKernel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000368942
- (int)encodeToCommandBuffer:(id)arg1 firstInput:(id)arg2 secondInput:(id)arg3 correlation:(id)arg4;	// IMP=0x0000000000368733
- (int)configureGPU;	// IMP=0x00000000003685da
- (id)initWithDevice:(id)arg1;	// IMP=0x000000000036851b

@end

