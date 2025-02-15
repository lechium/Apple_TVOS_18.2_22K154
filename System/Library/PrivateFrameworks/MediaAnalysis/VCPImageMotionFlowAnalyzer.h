//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPSImageBilinearScale, MPSImageSpatioTemporalGuidedFilter;
@protocol MTLCommandQueue, MTLDeviceSPI;

__attribute__((visibility("hidden")))
@interface VCPImageMotionFlowAnalyzer
{
    int _cnnInputHeight;	// 8 = 0x8
    int _cnnInputWidth;	// 12 = 0xc
    int _cnnOutputHeight;	// 16 = 0x10
    int _cnnOutputWidth;	// 20 = 0x14
    unsigned int _computationAccuracy;	// 24 = 0x18
    id <MTLDeviceSPI> _device;	// 32 = 0x20
    id <MTLCommandQueue> _commandQueue;	// 40 = 0x28
    MPSImageBilinearScale *_bilinearScale;	// 48 = 0x30
    MPSImageSpatioTemporalGuidedFilter *_guidedFilter;	// 56 = 0x38
}

+ (id)analyzeWithLightweightOption:(_Bool)arg1 aspectRatio:(id)arg2 computationAccuracy:(unsigned int)arg3 forceCPU:(_Bool)arg4 sharedModel:(_Bool)arg5 flushModel:(_Bool)arg6 cancel:(CDUnknownBlockType)arg7;	// IMP=0x00600000002def92
- (void).cxx_destruct;	// IMP=0x00000000002e0080
@property(readonly, nonatomic) int cnnOutputWidth; // @synthesize cnnOutputWidth=_cnnOutputWidth;
@property(readonly, nonatomic) int cnnOutputHeight; // @synthesize cnnOutputHeight=_cnnOutputHeight;
- (int)preferredInputFormat:(int *)arg1 height:(int *)arg2 format:(unsigned int *)arg3;	// IMP=0x00000000002e0025
- (int)updateModelForAspectRatio:(id)arg1 computationAccuracy:(unsigned int)arg2;	// IMP=0x00000000002e001a
- (int)guidedUpsampling:(struct __CVBuffer *)arg1 inBGRA:(struct __CVBuffer *)arg2;	// IMP=0x00000000002dfb0b
- (int)combineBufferTo:(struct __CVBuffer *)arg1 flowX:(struct __CVBuffer *)arg2 flowY:(struct __CVBuffer *)arg3;	// IMP=0x00000000002df5dc
- (int)scaleFlowTo:(struct __CVBuffer *)arg1;	// IMP=0x00000000002df37a
- (int)flowScalingTo:(struct __CVBuffer *)arg1 flowBufferY:(struct __CVBuffer *)arg2 scalerX:(float)arg3 scalerY:(float)arg4;	// IMP=0x00000000002df36f
- (int)flowScalingTo:(struct __CVBuffer *)arg1 scalerX:(float)arg2 scalerY:(float)arg3;	// IMP=0x00000000002df364
- (int)getFlowToBuffer:(struct __CVBuffer *)arg1;	// IMP=0x00000000002df359
- (float *)getFlowWithHeight:(int *)arg1 andWidth:(int *)arg2;	// IMP=0x00000000002df351
- (int)analyzeImages:(struct __CVBuffer *)arg1 secondImage:(struct __CVBuffer *)arg2 cancel:(CDUnknownBlockType)arg3;	// IMP=0x00000000002df346
- (int)configForAspectRatio:(id)arg1;	// IMP=0x00000000002df33b
- (int)reInitModel;	// IMP=0x00000000002df330
- (int)prepareWithLightweightOption:(_Bool)arg1 aspectRatio:(id)arg2 numLevels:(int)arg3 startLevel:(int)arg4 cancel:(CDUnknownBlockType)arg5;	// IMP=0x00000000002df325
- (int)prepareWithLightweightOption:(_Bool)arg1 aspectRatio:(id)arg2 forceCPU:(_Bool)arg3 sharedModel:(_Bool)arg4 flushModel:(_Bool)arg5;	// IMP=0x00000000002df31a
- (id)initWithLightweightOption:(_Bool)arg1 aspectRatio:(id)arg2 computationAccuracy:(unsigned int)arg3 forceCPU:(_Bool)arg4 sharedModel:(_Bool)arg5 flushModel:(_Bool)arg6 cancel:(CDUnknownBlockType)arg7;	// IMP=0x00000000002df085
- (id)init;	// IMP=0x00000000002def84

@end

