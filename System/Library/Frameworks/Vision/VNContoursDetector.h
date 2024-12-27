//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNCIContrastFromAverageColorFilter, VNCIContrastWithPivotColorFilter;

__attribute__((visibility("hidden")))
@interface VNContoursDetector
{
    VNCIContrastFromAverageColorFilter *_ciContrastFromAvgFilter;	// 16 = 0x10
    VNCIContrastWithPivotColorFilter *_ciContrastWithPivotFilter;	// 24 = 0x18
}

+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x00600000002f0ebe
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00600000002f0e04
- (void).cxx_destruct;	// IMP=0x00000000002f2a08
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000002f1c8a
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer **)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000002f10d3
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002f0fcc

@end

