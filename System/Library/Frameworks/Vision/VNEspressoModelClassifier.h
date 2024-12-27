//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;
@protocol MLComputeDeviceProtocol;

__attribute__((visibility("hidden")))
@interface VNEspressoModelClassifier
{
    shared_ptr_b26ea6de mDescriptorProcessor;	// 16 = 0x10
    shared_ptr_047f28ed mClassifier;	// 32 = 0x20
    id <MLComputeDeviceProtocol> _computeDevice;	// 48 = 0x30
    NSSet *_disallowedIdentifiers;	// 56 = 0x38
}

+ (void)initDumpDebugIntermediates:(id *)arg1 debugInfo:(id *)arg2;	// IMP=0x00400000002737ae
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00400000002736f4
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x0040000000273691
+ (id)classifierResourceTypesToNamesForOriginatingRequestSpecifier:(id)arg1;	// IMP=0x0040000000273684
+ (void)convertRelationships:(id)arg1 toStdRelationships:(void *)arg2;	// IMP=0x00400000002735ec
+ (shared_ptr_eb20c8f2)createHierarchicalModelForOriginatingRequestSpecifier:(id)arg1 error:(id *)arg2;	// IMP=0x0040000000272fef
+ (id)createObservationWithDescriptors:(id)arg1 forOriginatingRequestSpecifier:(id)arg2;	// IMP=0x0040000000272fbc
+ (shared_ptr_b26ea6de)createDescriprorProcessorWithModelPath:(const char *)arg1 nBatch:(int)arg2 computePlatform:(int)arg3 computePath:(int)arg4 options:(struct Options)arg5;	// IMP=0x0040000000272f8f
+ (shared_ptr_047f28ed)createClassifierWithDescriptor:(shared_ptr_b26ea6de)arg1 classifierAbsolutePath:(const char *)arg2 computePlatform:(int)arg3 computePath:(int)arg4 labelsFilename:(const char *)arg5 options:(struct Options)arg6;	// IMP=0x0040000000272f62
- (id).cxx_construct;	// IMP=0x0000000000277b98
- (void).cxx_destruct;	// IMP=0x0000000000277b45
- (id)disallowedIdentifiers;	// IMP=0x0000000000277b30
- (id)getLabels;	// IMP=0x00000000002779ee
- (id)calculateImageDescriptors:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 canceller:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000276d40
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000000276363
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer **)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000027627d
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect)arg3 warningRecorder:(id)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000275fe6
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000275b5c
- (id)boundComputeStageDevices;	// IMP=0x0000000000275ae2

@end

