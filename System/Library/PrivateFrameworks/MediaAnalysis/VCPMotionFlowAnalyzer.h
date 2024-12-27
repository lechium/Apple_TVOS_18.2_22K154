//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPMotionFlowRequest;

__attribute__((visibility("hidden")))
@interface VCPMotionFlowAnalyzer
{
    float *_flow;	// 8 = 0x8
    _Bool _scale;	// 16 = 0x10
    struct Scaler _scaler;	// 24 = 0x18
    VCPMotionFlowRequest *_moflowRequest;	// 56 = 0x38
    struct vector<__CVBuffer *, std::allocator<__CVBuffer *>> _frameArray;	// 64 = 0x40
    struct OpaqueVTPixelTransferSession *_transferSession;	// 88 = 0x58
    int _frameWidth;	// 96 = 0x60
    int _frameHeight;	// 100 = 0x64
    int _downScaleWidth;	// 104 = 0x68
    int _downScaleHeight;	// 108 = 0x6c
    int _flowWidth;	// 112 = 0x70
    int _flowHeight;	// 116 = 0x74
    int _frameNum;	// 120 = 0x78
    _Bool _initialized;	// 124 = 0x7c
}

- (id).cxx_construct;	// IMP=0x000000000038f103
- (void).cxx_destruct;	// IMP=0x000000000038f0aa
- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 withFrame:(void *)arg2 withTimestamp:(CDStruct_1b6d18a9)arg3 andDuration:(CDStruct_1b6d18a9)arg4 cancel:(CDUnknownBlockType)arg5;	// IMP=0x000000000038efd6
- (int)generateMotionFlow;	// IMP=0x000000000038ed8a
- (int)preProcessing:(struct __CVBuffer *)arg1;	// IMP=0x000000000038eae7
- (int)convertPixelBuffer:(struct __CVBuffer *)arg1 toPixelBuffer:(struct __CVBuffer **)arg2 withPixelFormat:(int)arg3;	// IMP=0x000000000038ea40
- (int)createPixelBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(int)arg3 pixelBuffer:(struct __CVBuffer **)arg4;	// IMP=0x000000000038e957
- (int)convertFlow:(struct __CVBuffer *)arg1;	// IMP=0x000000000038e76c
- (int)prepareAnalyzerWithCVPixelBuffer:(struct __CVBuffer *)arg1 cancel:(CDUnknownBlockType)arg2;	// IMP=0x000000000038e484
- (void)dealloc;	// IMP=0x000000000038e3a1
- (id)init;	// IMP=0x000000000038e2bc

@end

