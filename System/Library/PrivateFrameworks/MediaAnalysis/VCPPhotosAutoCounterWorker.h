//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHPhotoLibrary;

@interface VCPPhotosAutoCounterWorker : NSObject
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    unsigned long long _detectionVersion;	// 16 = 0x10
    unsigned long long _recognitionVersion;	// 24 = 0x18
    unsigned long long _personClusterVersion;	// 32 = 0x20
    int _processingVersion;	// 40 = 0x28
    unsigned long long _madVersion;	// 48 = 0x30
    unsigned long long _vuVersion;	// 56 = 0x38
    unsigned long long _clusterDumpFaceFetched;	// 64 = 0x40
}

+ (_Bool)_dumpAssetsToFaces;	// IMP=0x00600000002e9d98
+ (_Bool)_dumpFaceprint;	// IMP=0x00600000002e3185
+ (id)workerWithPhotoLibrary:(id)arg1;	// IMP=0x00600000002e28f2
- (void).cxx_destruct;	// IMP=0x00000000002f5f9d
- (int)validateClusterAccuracyWithSIMLGroundtruth:(id)arg1 results:(id *)arg2 extendTimeoutBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000002f553d
- (int)_parseSIMLGroundTruthWithURL:(id)arg1 faceCountPerPerson:(id *)arg2 personInformation:(id *)arg3 faceToPerson:(id *)arg4 assetToFaces:(id *)arg5 extendTimeoutBlock:(CDUnknownBlockType)arg6 cancelBlock:(CDUnknownBlockType)arg7;	// IMP=0x00000000002f453f
- (int)calculateAndReportClusterAccuracyWithVisionClusterURL:(id)arg1 andPersonClusters:(id)arg2 results:(id *)arg3 extendTimeoutBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000002f4432
- (int)calculateAndReportClusterAccuracyWithVisionClusterURL:(id)arg1 andPersonClusters:(id)arg2 withGroundtruth:(id)arg3 results:(id *)arg4 extendTimeoutBlock:(CDUnknownBlockType)arg5 cancelBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000002f3942
- (int)_reportCoreAnalyticsWithVisionClusterMeasure:(id)arg1 personClusterMeasure:(id)arg2 personClusters:(id)arg3 andGroundTruthInformation:(id)arg4;	// IMP=0x00000000002f1516
- (int)_measurePNPersonClusters:(id)arg1 groundTruthFaceCountPerPerson:(id)arg2 groundTruthPersonInformation:(id)arg3 groundTruthFaceToPerson:(id)arg4 groundTruthAssetToFaces:(id)arg5 measures:(id *)arg6 extendTimeoutBlock:(CDUnknownBlockType)arg7 cancelBlock:(CDUnknownBlockType)arg8;	// IMP=0x00000000002edf10
- (int)_measureClusterWithClusterStateURL:(id)arg1 groundTruthFaceCountPerPerson:(id)arg2 groundTruthPersonInformation:(id)arg3 groundTruthFaceToPerson:(id)arg4 groundTruthAssetToFaces:(id)arg5 measures:(id *)arg6 extendTimeoutBlock:(CDUnknownBlockType)arg7 cancelBlock:(CDUnknownBlockType)arg8;	// IMP=0x00000000002e9da0
- (void)_exportAssetsToFacesDetails:(id)arg1;	// IMP=0x00000000002e9ace
- (int)_parseGroundTruthWithURL:(id)arg1 faceCountPerPerson:(id *)arg2 personInformation:(id *)arg3 faceToPerson:(id *)arg4 assetToFaces:(id *)arg5 extendTimeoutBlock:(CDUnknownBlockType)arg6 cancelBlock:(CDUnknownBlockType)arg7;	// IMP=0x00000000002e8d62
- (double)_overlapRatioOf:(struct CGRect)arg1 with:(struct CGRect)arg2;	// IMP=0x00000000002e8cef
- (int)exportClustersStates:(id *)arg1 error:(id *)arg2 extendTimeoutBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000002e79ef
- (int)_processFetchedVURawCluster:(id)arg1 forPersonLocalIdentifier:(id)arg2 facesPerAsset:(id)arg3 assetInformation:(id)arg4 extendTimeoutBlock:(CDUnknownBlockType)arg5 cancelBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000002e5d37
- (_Bool)optInUserPickedPerson:(id)arg1 error:(id *)arg2 extendTimeoutBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000002e4efc
- (_Bool)optInStatus:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002e4dc7
- (void)_fetchPersonWithIdentifier:(id)arg1 facesPerAsset:(id)arg2 assetInformation:(id)arg3 extendTimeoutBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000002e4a80
- (int)_processFetchedFaceGroup:(id)arg1 forPersonID:(id)arg2 facesPerAsset:(id)arg3 assetInformation:(id)arg4 extendTimeoutBlock:(CDUnknownBlockType)arg5 cancelBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000002e318d
- (id)_anonymizedName:(id)arg1;	// IMP=0x00000000002e301b
- (id)_fetchPeopleHomePersons;	// IMP=0x00000000002e2e83
- (unsigned long long)optInPersonCount;	// IMP=0x00000000002e2e06
- (int)_loadGroundTruth:(id *)arg1 error:(id *)arg2;	// IMP=0x00000000002e2d8b
- (int)_loadGroundTruthURL:(id)arg1 toGroundTruth:(id *)arg2 error:(id *)arg3;	// IMP=0x00000000002e2af7
- (id)_groundTruthURL;	// IMP=0x00000000002e29d0
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x00000000002e27a5

@end

