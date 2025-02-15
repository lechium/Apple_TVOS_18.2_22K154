//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPImageMotionFlowAnalyzer;

@interface VCPMotionFlowRequest
{
    VCPImageMotionFlowAnalyzer *_motionFlowAnalyzer;	// 64 = 0x40
    _Bool _useSingleEspressoModel;	// 72 = 0x48
    int _preferredWidth;	// 76 = 0x4c
    int _preferredHeight;	// 80 = 0x50
    unsigned int _preferredFormat;	// 84 = 0x54
    struct OpaqueVTPixelTransferSession *_transferSession;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000fd48b
- (void)dealloc;	// IMP=0x00000000000fd3f7
- (_Bool)cleanupWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000fd3d3
- (unsigned int)preferredPixelFormat;	// IMP=0x00000000000fd3c3
- (struct CGSize)preferredInputSizeWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000fd362
- (_Bool)updateWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000fd242
- (id)estimateMotionBetweenFirstImage:(struct __CVBuffer *)arg1 andSecondImage:(struct __CVBuffer *)arg2 withUpsample:(_Bool)arg3 withGuidedImage:(struct __CVBuffer *)arg4 error:(id *)arg5;	// IMP=0x00000000000fce1e
- (id)estimateMotionBetweenFirstImage:(struct __CVBuffer *)arg1 andSecondImage:(struct __CVBuffer *)arg2 error:(id *)arg3;	// IMP=0x00000000000fcaa6
- (int)convertPixelBuffer:(struct __CVBuffer *)arg1 toPixelBuffer:(struct __CVBuffer **)arg2 withPixelFormat:(int)arg3;	// IMP=0x00000000000fc9ff
- (int)createPixelBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(int)arg3 pixelBuffer:(struct __CVBuffer **)arg4;	// IMP=0x00000000000fc916
- (id)initWithOptions:(id)arg1 cancel:(CDUnknownBlockType)arg2;	// IMP=0x00000000000fc752
- (id)initWithOptions:(id)arg1;	// IMP=0x00000000000fc5b1
- (id)init;	// IMP=0x00000000000fc511

@end

