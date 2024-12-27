//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNDocumentSegmentationDetector
{
}

+ (id)segmentationLabelsFilePathForConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0080000000238ad1
+ (_Bool)providesSegmentationLabelsForConfiguration:(id)arg1;	// IMP=0x0080000000238ac9
+ (unsigned int)analysisPixelFormatTypeForConfiguration:(id)arg1;	// IMP=0x0080000000238abe
+ (id)inputImageBlobNameForConfiguration:(id)arg1;	// IMP=0x0080000000238a8e
+ (id)modelPathForConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0080000000238a04
- (id)observationsForLastAnalysisOfImageAnalyzer:(void *)arg1 processOptions:(id)arg2 originatingRequestSpecifier:(id)arg3 qosClass:(unsigned int)arg4 error:(id *)arg5;	// IMP=0x0000000000235f7f
- (unsigned int)analysisTypesForProcessOptions:(id)arg1;	// IMP=0x0000000000235f74
- (_Bool)configureImageAnalyzerOptions:(void *)arg1 error:(id *)arg2;	// IMP=0x0000000000235e73

@end

