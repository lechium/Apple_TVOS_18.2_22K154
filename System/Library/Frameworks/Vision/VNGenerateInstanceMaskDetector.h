//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNGenerateInstanceMaskDetector
{
    CDStruct_0a65202a _outputMaskEspressoBuffer;	// 16 = 0x10
    CDStruct_0a65202a _outputConfidenceEspressoBuffer;	// 184 = 0xb8
    _Bool _gatingOnly;	// 352 = 0x160
}

+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:(id)arg1;	// IMP=0x00600000001bead9
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)arg1;	// IMP=0x00600000001beace
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;	// IMP=0x00600000001beac1
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;	// IMP=0x00600000001beab4
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00600000001be9fa
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;	// IMP=0x00600000001be95e
+ (void)fullyPopulateConfigurationOptions:(id)arg1;	// IMP=0x00600000001be88a
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x00600000001be827
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000001bf649
- (_Bool)_createLowResMaskFromLowResImage:(struct __CVBuffer *)arg1 outMaskPixelBuffer:(struct __CVBuffer **)arg2 outInstanceMaskPixelBuffer:(struct __CVBuffer **)arg3 outNumComponents:(unsigned long long *)arg4 outConfidenceScore:(float *)arg5 error:(id *)arg6;	// IMP=0x00000000001bf548
- (_Bool)_filterUsingConnectedComponentsFromSegmentation:(CDStruct_0a65202a *)arg1 outInstanceMask:(struct __CVBuffer **)arg2 numComponents:(unsigned long long *)arg3;	// IMP=0x00000000001beddf
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer **)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000001becde
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001beba3

@end

