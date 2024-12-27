//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CVNLPCaptionEncoderTransformer
{
    void *encoderPlan;	// 40 = 0x28
    void *encoderCtx;	// 48 = 0x30
    CDStruct_2bc666a5 encoderNet;	// 56 = 0x38
    vector_bfe5b09a encoderInputNames;	// 72 = 0x48
    CDStruct_0a65202a attFeatsBlob;	// 96 = 0x60
}

- (id).cxx_construct;	// IMP=0x0000000000054050
- (void).cxx_destruct;	// IMP=0x000000000005402c
- (void)computeCaptionForVideoPixelBufferImpl:(void *)arg1 outputs:(id *)arg2;	// IMP=0x0000000000053e2d
- (void)computeCaptionForVideoPixelBuffer:(void *)arg1 outputs:(id *)arg2;	// IMP=0x0000000000053d5d
- (void)computeCaptionForPixelBufferImpl:(struct __CVBuffer *)arg1 outputs:(id *)arg2;	// IMP=0x0000000000053b98
- (void)computeCaptionForPixelBuffer:(struct __CVBuffer *)arg1 outputs:(id *)arg2;	// IMP=0x0000000000053ac8
- (void)computeCaptionForImageImpl:(struct vImage_Buffer *)arg1 outputs:(id *)arg2;	// IMP=0x00000000000538f0
- (void)computeCaptionForImage:(struct vImage_Buffer *)arg1 outputs:(id *)arg2;	// IMP=0x0000000000053811
- (void)dealloc;	// IMP=0x000000000005378b
- (id)initWithOptions:(id)arg1 runTimeParams:(id)arg2;	// IMP=0x0000000000053223

@end

