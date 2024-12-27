//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MTLBuffer, MTLCommandQueue, MTLComputePipelineState, MTLDevice, MTLFunction, MTLLibrary;

@interface MetalRANSACDispatcher : NSObject
{
    float inlierLimit;	// 8 = 0x8
    struct CGSize frameSize;	// 16 = 0x10
    id <MTLCommandQueue> m_metalCommandQueue;	// 32 = 0x20
    id <MTLDevice> m_metalDevice;	// 40 = 0x28
    id <MTLFunction> m_metalKernelFunction;	// 48 = 0x30
    id <MTLLibrary> m_metalLibrary;	// 56 = 0x38
    id <MTLComputePipelineState> m_metalPipeline;	// 64 = 0x40
    unsigned long long _m_numThreadsPerGroup;	// 72 = 0x48
    unsigned long long _m_maxCorrespondences;	// 80 = 0x50
    id <MTLBuffer> _m_mX;	// 88 = 0x58
    id <MTLBuffer> _m_mXhat;	// 96 = 0x60
    id <MTLBuffer> _m_ScoreBuffer;	// 104 = 0x68
    id <MTLBuffer> _m_RansacParams;	// 112 = 0x70
    id <MTLBuffer> _m_RansacHomographies;	// 120 = 0x78
    id <MTLBuffer> _m_ModelScores;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000005541d
@property(retain, nonatomic) id <MTLBuffer> m_ModelScores; // @synthesize m_ModelScores=_m_ModelScores;
@property(retain, nonatomic) id <MTLBuffer> m_RansacHomographies; // @synthesize m_RansacHomographies=_m_RansacHomographies;
@property(retain, nonatomic) id <MTLBuffer> m_RansacParams; // @synthesize m_RansacParams=_m_RansacParams;
@property(retain, nonatomic) id <MTLBuffer> m_ScoreBuffer; // @synthesize m_ScoreBuffer=_m_ScoreBuffer;
@property(retain, nonatomic) id <MTLBuffer> m_mXhat; // @synthesize m_mXhat=_m_mXhat;
@property(retain, nonatomic) id <MTLBuffer> m_mX; // @synthesize m_mX=_m_mX;
@property(nonatomic) unsigned long long m_maxCorrespondences; // @synthesize m_maxCorrespondences=_m_maxCorrespondences;
@property(nonatomic) unsigned long long m_numThreadsPerGroup; // @synthesize m_numThreadsPerGroup=_m_numThreadsPerGroup;
@property(nonatomic) struct CGSize frameSize; // @synthesize frameSize;
@property(nonatomic) float inlierLimit; // @synthesize inlierLimit;
@property(retain, nonatomic) id <MTLComputePipelineState> m_metalPipeline; // @synthesize m_metalPipeline;
@property(retain, nonatomic) id <MTLLibrary> m_metalLibrary; // @synthesize m_metalLibrary;
@property(retain, nonatomic) id <MTLFunction> m_metalKernelFunction; // @synthesize m_metalKernelFunction;
@property(retain, nonatomic) id <MTLDevice> m_metalDevice; // @synthesize m_metalDevice;
@property(retain, nonatomic) id <MTLCommandQueue> m_metalCommandQueue; // @synthesize m_metalCommandQueue;
- (void)assureSizeAndCopyToMetalBuffer:(id *)arg1 fromData:(const void *)arg2 dataSize:(unsigned long long)arg3 metalResourceOptions:(unsigned long long)arg4;	// IMP=0x00000000000551b1
- (void)performRansacOnData:(unsigned int)arg1 firstPointSet:(const float *)arg2 secondPointSet:(const float *)arg3 pointWeights:(const float *)arg4 homographies:(const struct ransac_homography_record *)arg5 numHomographies:(unsigned int)arg6 homScores:(float *)arg7;	// IMP=0x0000000000054f28
- (id)initWithMaxCorrespondences:(unsigned long long)arg1;	// IMP=0x0000000000054d2e

@end

