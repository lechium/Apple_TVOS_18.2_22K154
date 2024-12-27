//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPSImageBilinearScale, MPSImageGaussianBlur, NSString;
@protocol MTLCommandQueue, MTLDevice, MTLLibrary;

__attribute__((visibility("hidden")))
@interface VNBGRBilinearUpsampler : NSObject
{
    id <MTLDevice> _device;	// 8 = 0x8
    id <MTLCommandQueue> _commandQueue;	// 16 = 0x10
    id <MTLLibrary> _library;	// 24 = 0x18
    MPSImageGaussianBlur *_blurFilter;	// 32 = 0x20
    MPSImageBilinearScale *_bilinearScale;	// 40 = 0x28
    struct __CVMetalTextureCache *_metalTextureCache;	// 48 = 0x30
    struct os_unfair_lock_s _lock;	// 56 = 0x38
    double _featheringSigma;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000298cc2
@property double featheringSigma; // @synthesize featheringSigma=_featheringSigma;
- (id)textureFromPixelBuffer:(struct __CVBuffer *)arg1 format:(unsigned long long)arg2;	// IMP=0x0000000000298bb2
- (id)createTextureOfSize:(struct CGSize)arg1 withFormat:(unsigned long long)arg2;	// IMP=0x0000000000298ae9
- (_Bool)applyEspressoMask:(const CDStruct_0a65202a *)arg1 toImage:(struct __CVBuffer *)arg2 highResMaskBuffer:(struct __CVBuffer *)arg3;	// IMP=0x00000000002989c2
- (_Bool)applyPixelBufferMask:(struct __CVBuffer *)arg1 toImage:(struct __CVBuffer *)arg2 highResMaskBuffer:(struct __CVBuffer *)arg3;	// IMP=0x00000000002988ed
- (_Bool)applyTextureMask:(id)arg1 toImage:(struct __CVBuffer *)arg2 highResMaskBuffer:(struct __CVBuffer *)arg3;	// IMP=0x000000000029877e
- (_Bool)handlePostProcessingRequest:(CDStruct_a4900c83 *)arg1;	// IMP=0x000000000029875e
- (id)computePipelineStateFor:(id)arg1;	// IMP=0x00000000002986f4
- (void)dealloc;	// IMP=0x0000000000298680
- (id)init;	// IMP=0x0000000000298622
- (id)initWithMetalDevice:(id)arg1;	// IMP=0x00000000002984ac
- (id)libraryReturnError:(id *)arg1;	// IMP=0x00000000002983db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

