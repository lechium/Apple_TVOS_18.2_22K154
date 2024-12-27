//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHPhotoLibrary, VCPClusterer, VCPPhotosFaceProcessingContext;

@interface VCPFaceClusterer : NSObject
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    VCPClusterer *_clusterer;	// 16 = 0x10
    VCPPhotosFaceProcessingContext *_context;	// 24 = 0x18
    CDUnknownBlockType _cancelOrExtendTimeoutBlock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000033df5c
- (int)clusterFacesIfNecessary;	// IMP=0x000000000033dc69
- (int)clusterFaces;	// IMP=0x000000000033d976
- (_Bool)reclusterFacesWithThreshold:(id)arg1 shouldRecluster:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000033d39b
- (_Bool)_resetFaceClusteringState:(id *)arg1;	// IMP=0x000000000033d235
- (id)clusterer;	// IMP=0x000000000033d227
- (_Bool)clustererIsReadyToReturnSuggestions;	// IMP=0x000000000033d211
- (unsigned long long)clustererState;	// IMP=0x000000000033d1fb
- (_Bool)getFaceClusters:(id *)arg1 clusteringThreshold:(double *)arg2 utilizingGPU:(_Bool *)arg3 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg4 error:(id *)arg5;	// IMP=0x000000000033d056
- (_Bool)resetFaceClusteringState:(id *)arg1;	// IMP=0x000000000033cdef
- (unsigned long long)numberOfFacesPendingClustering;	// IMP=0x000000000033cdd9
- (void)scheduleUnclusteringOfFacesWithClusterSequenceNumbers:(id)arg1;	// IMP=0x000000000033cb72
- (void)scheduleClusteringOfFacesWithLocalIdentifiers:(id)arg1;	// IMP=0x000000000033cb57
- (id)initWithPhotoLibrary:(id)arg1 context:(id)arg2 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000033c889

@end

