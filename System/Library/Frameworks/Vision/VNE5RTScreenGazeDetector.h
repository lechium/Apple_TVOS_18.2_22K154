//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNE5RTScreenGazeDetector
{
}

+ (struct CGRect)normalizedScaledFaceBoundingBox:(id)arg1;	// IMP=0x004000000021c11c
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x004000000021c062
+ (id)E5RTFunctionDescriptorForConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x004000000021be21
+ (id)modelURLForConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x004000000021bd68
+ (id)modelOutputDeviceGazeProbabilitiesName;	// IMP=0x004000000021bd5b
+ (id)modelOutputXYName;	// IMP=0x004000000021bd4e
+ (id)modelFunctionName;	// IMP=0x004000000021bd41
+ (id)modelInputImageName;	// IMP=0x004000000021bd34
+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x004000000021bbaa
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x004000000021bb47
- (id)observationsFromE5RTExecutionOutputs:(id)arg1 forFunctionDescriptor:(id)arg2 originatingRequestSpecifier:(id)arg3 options:(id)arg4 error:(id *)arg5;	// IMP=0x000000000021c488
- (_Bool)needsMetalContext;	// IMP=0x000000000021c480

@end

