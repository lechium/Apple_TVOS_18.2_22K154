//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNTorsoprintGeneratorHumanDetectorBased
{
    struct shared_ptr<vision::mod::TorsoprintGenerator> _torsoprintGenerator;	// 16 = 0x10
}

+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;	// IMP=0x00600000003ac4ea
+ (const void *)modelVersionForOptions:(id)arg1;	// IMP=0x00600000003ac4b2
- (id).cxx_construct;	// IMP=0x00000000003ac49b
- (void).cxx_destruct;	// IMP=0x00000000003ac454
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000003ac1d3
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer **)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000003abfbb
- (id)torsoprintForImageBuffer:(struct __CVBuffer *)arg1 requestRevision:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000003ab666
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x00000000003aab0e

@end

