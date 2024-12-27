//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, VNSaliencyOHeatmapBoundingBoxGenerator, VisionCoreSmartCam5InferenceNetworkDescriptor;

__attribute__((visibility("hidden")))
@interface VNSmartCam5GatingDetector
{
    VisionCoreSmartCam5InferenceNetworkDescriptor *_inferenceNetworkDescriptor;	// 16 = 0x10
    NSDictionary *_documentIdentifierToSceneLabels;	// 24 = 0x18
    VNSaliencyOHeatmapBoundingBoxGenerator *_boundingBoxGenerator;	// 32 = 0x20
}

+ (id)segmentationLabelsFilePathForConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x006000000029c811
+ (_Bool)providesSegmentationLabelsForConfiguration:(id)arg1;	// IMP=0x006000000029c809
+ (unsigned int)analysisPixelFormatTypeForConfiguration:(id)arg1;	// IMP=0x006000000029c774
+ (id)inputImageBlobNameForConfiguration:(id)arg1;	// IMP=0x006000000029c6d3
+ (id)sceneLabelsFilePathForConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x006000000029c5ea
+ (_Bool)providesSceneLabelsForConfiguration:(id)arg1;	// IMP=0x006000000029c5e2
+ (id)modelPathForConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x006000000029c534
+ (id)_inferenceNetworkDescriptorForConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x006000000029c47a
- (void).cxx_destruct;	// IMP=0x000000000029b477
- (id)observationsForLastAnalysisOfImageAnalyzer:(void *)arg1 processOptions:(id)arg2 originatingRequestSpecifier:(id)arg3 qosClass:(unsigned int)arg4 error:(id *)arg5;	// IMP=0x000000000029a9bb
- (unsigned int)analysisTypesForProcessOptions:(id)arg1;	// IMP=0x000000000029a6ed
- (_Bool)configureImageAnalyzerOptions:(void *)arg1 error:(id *)arg2;	// IMP=0x000000000029a5e6
- (unsigned long long)defaultImageCropAndScaleOption;	// IMP=0x000000000029a5db
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x000000000029a3de
@property(readonly, copy) NSArray *supportedDocumentElementIdentifiers;
- (id)supportedClassificationIdentifiersWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000029a332

@end

