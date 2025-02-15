//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHPhotoLibrary.h>

@class NSString;

@interface PHPhotoLibrary (PNPhotoLibraryProtocol)
+ (id)_defaultFacePropertySets;	// IMP=0x001000000000ab7c
+ (id)_defaultAssetPropertySets;	// IMP=0x001000000000aae4
+ (id)_phPeopleSortDescriptors;	// IMP=0x001000000000aa48
+ (id)_phFaceSortDescriptors;	// IMP=0x001000000000a9ac
+ (_Bool)mad_clusterVideoFaces;	// IMP=0x00100000000f043e
+ (_Bool)mad_isProcessingNeededOnAsset:(id)arg1 forTaskID:(unsigned long long)arg2;	// IMP=0x00100000000ec6c2
+ (unsigned long long)mad_maxIgnoredAssetsToMarkAsProcessed;	// IMP=0x00100000000ec6b7
+ (id)vcp_defaultMediaAnalysisDatabaseFilepath;	// IMP=0x00100000000ec64b
+ (id)vcp_defaultURL;	// IMP=0x00100000000ec5df
+ (id)vcp_defaultPhotoLibrary;	// IMP=0x00100000000ec574
- (id)pn_fetchAssetsForFaceLocalIdentifiers:(id)arg1;	// IMP=0x001000000000cd6e
- (id)pn_lastAssetDate;	// IMP=0x001000000000cc0c
- (id)pn_fetchInvalidAssetIdentifiersForCommonComparison;	// IMP=0x001000000000c7f1
- (float)pn_faceProcessingProgress;	// IMP=0x001000000000c7da
- (double)_progressFromWorkerStatesDictionary:(id)arg1;	// IMP=0x001000000000c567
- (id)pn_fetchFaceGroupsForPerson:(id)arg1;	// IMP=0x001000000000c4e6
- (id)pn_fetchFaceGroups;	// IMP=0x001000000000c48f
- (id)pn_fetchAssetsForFaceGroup:(id)arg1;	// IMP=0x001000000000c3ae
- (id)pn_fetchAssetsForPerson:(id)arg1;	// IMP=0x001000000000c2cd
- (id)pn_fetchAssetsInMoment:(id)arg1;	// IMP=0x001000000000c24c
- (id)pn_fetchAssetsWithLocalIdentifiers:(id)arg1;	// IMP=0x001000000000c1cb
- (id)pn_fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1;	// IMP=0x001000000000c10f
- (id)pn_fetchMomentsForPerson:(id)arg1;	// IMP=0x001000000000c0fd
- (id)pn_fetchMomentsWithLocalIdentifiers:(id)arg1;	// IMP=0x001000000000c041
- (id)pn_fetchMoments;	// IMP=0x001000000000bfac
- (id)pn_fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)arg1;	// IMP=0x001000000000be7e
- (id)pn_fetchFacesForFaceGroup:(id)arg1;	// IMP=0x001000000000bd50
- (id)pn_fetchFacesForPersonLocalIdentifiers:(id)arg1 inMoment:(id)arg2;	// IMP=0x001000000000bcf1
- (id)pn_fetchFacesForPerson:(id)arg1 inMoment:(id)arg2;	// IMP=0x001000000000bc14
- (id)pn_fetchFacesForPerson:(id)arg1;	// IMP=0x001000000000bad4
- (id)pn_fetchFacesWithLocalIdentifiers:(id)arg1;	// IMP=0x001000000000b9a6
- (unsigned long long)pn_numberOfFacesWithFaceprints;	// IMP=0x001000000000b85b
- (id)pn_fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)arg1;	// IMP=0x001000000000b769
- (id)pn_fetchInvalidCandidatePersonsForPerson:(id)arg1;	// IMP=0x001000000000b69b
- (id)pn_fetchCandidatePersonsForPerson:(id)arg1;	// IMP=0x001000000000b5cd
- (id)pn_fetchPersonsInMoment:(id)arg1;	// IMP=0x001000000000b4db
- (id)pn_fetchPersonsWithType:(unsigned long long)arg1;	// IMP=0x001000000000b00a
- (id)pn_fetchPersonsWithLocalIdentifiers:(id)arg1;	// IMP=0x001000000000af18
- (id)pn_persistentStorageDirectoryURL;	// IMP=0x001000000000acca
- (id)_defaultAssetFetchOptions;	// IMP=0x001000000000ac56
- (id)_defaultFetchOptions;	// IMP=0x001000000000ac02
- (_Bool)pn_performChangesAndWait:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x001000000000ab6a
- (_Bool)vcp_requiresDownloadForTask:(unsigned long long)arg1;	// IMP=0x00100000000f11d8
- (id)vcp_description;	// IMP=0x00100000000f1188
- (unsigned long long)vcp_requiredFaceLibraryProcessingSubTasks;	// IMP=0x00100000000f116b
- (_Bool)vcp_requiresProcessingForTask:(unsigned long long)arg1;	// IMP=0x00100000000f109e
- (_Bool)vcp_isSyndicationLibrary;	// IMP=0x00100000000f1084
- (id)mad_allPersonsFetchOptionsWithDetectionTypes:(id)arg1 andVerifiedTypes:(id)arg2;	// IMP=0x00100000000f0cfc
- (id)mad_allPersonsFetchOptions;	// IMP=0x00100000000f0c6c
- (id)mad_allFacesFetchOptions;	// IMP=0x00100000000f0bae
- (unsigned long long)mad_countOfUnclusteredFaces;	// IMP=0x00100000000f0aff
- (id)mad_clusteredAndUnidentifiedFacesFetchOptions;	// IMP=0x00100000000f0925
- (id)mad_clusteredFacesFetchOptions;	// IMP=0x00100000000f074b
- (id)mad_unclusteredFacesFetchOptions;	// IMP=0x00100000000f0540
- (long long)mad_pauseFCPeopleFurtherProcessing;	// IMP=0x00100000000f0525
- (_Bool)mad_useVUGallery;	// IMP=0x00100000000f04a8
- (int)mad_faceProcessingInternalVersion;	// IMP=0x00100000000f0446
- (id)vcp_faceAnalysisStateFilepath;	// IMP=0x00100000000f036e
- (id)vcp_vipModelLastGenerationDateForVIPType:(unsigned long long)arg1;	// IMP=0x00100000000f01ba
- (id)vcp_vipModelFilepathForVIPType:(unsigned long long)arg1;	// IMP=0x00100000000eff16
- (void)vcp_setAnalysisPreferencesValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000efd5e
- (void)_updateAnalysisPreferencesWithEntries:(id)arg1 keysToRemove:(id)arg2;	// IMP=0x00100000000ef975
- (id)vcp_analysisPreferences;	// IMP=0x00100000000ef8be
- (id)_analysisPreferencesURL;	// IMP=0x00100000000ef853
- (id)vcp_visionCacheStorageDirectoryURL;	// IMP=0x00100000000ef2b5
- (_Bool)mad_performChangesAndWait:(CDUnknownBlockType)arg1 cancelBlock:(CDUnknownBlockType)arg2 extendTimeoutBlock:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x00100000000ee478
- (void)mad_markAsProcessedByTask:(unsigned long long)arg1 forAssets:(id)arg2;	// IMP=0x00100000000edffc
- (void)_mad_markAsProcessedByTask:(unsigned long long)arg1 forAsset:(id)arg2;	// IMP=0x00100000000eda1b
- (id)mad_localIdentifierForCloudIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000ed837
- (id)mad_cloudIdentifierForLocalIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000ed663
- (id)vcp_libraryScaleShortDescription;	// IMP=0x00100000000ed587
- (unsigned long long)vcp_libraryScale;	// IMP=0x00100000000ed4fe
- (_Bool)vcp_allowInMemoryDownload;	// IMP=0x00100000000ed489
- (_Bool)vcp_supportsInMemoryDownload;	// IMP=0x00100000000ed450
- (_Bool)vcp_eligibleForStreaming:(_Bool)arg1;	// IMP=0x00100000000ed40e
- (_Bool)vcp_isCPLDownloadComplete;	// IMP=0x00100000000ed342
- (_Bool)vcp_isCPLSyncComplete;	// IMP=0x00100000000ed276
- (_Bool)vcp_isCPLEnabled;	// IMP=0x00100000000ed264
- (_Bool)mad_calculateProgressPercentage:(unsigned long long *)arg1 totalAssetCount:(unsigned long long *)arg2 progressPercentageWithFailure:(unsigned long long *)arg3 taskID:(unsigned long long)arg4 phTaskID:(unsigned long long)arg5 priority:(unsigned long long)arg6 failedAssetCount:(unsigned long long)arg7 error:(id *)arg8;	// IMP=0x00100000000ece96
- (unsigned long long)vcp_assetCountWithInternalPredicate:(id)arg1 forTaskID:(unsigned long long)arg2;	// IMP=0x00100000000ecbc2
- (unsigned long long)vcp_assetCountWithMediaType:(long long)arg1 forTaskID:(unsigned long long)arg2;	// IMP=0x00100000000ecb03
- (unsigned long long)vcp_processedAssetCountForTaskID:(unsigned long long)arg1;	// IMP=0x00100000000ecaef
- (unsigned long long)vcp_processedAssetCountForTaskID:(unsigned long long)arg1 withPriority:(unsigned long long)arg2;	// IMP=0x00100000000eca0a
- (unsigned long long)vcp_assetCountForTaskID:(unsigned long long)arg1;	// IMP=0x00100000000ec9f6
- (unsigned long long)vcp_assetCountForTaskID:(unsigned long long)arg1 withPriority:(unsigned long long)arg2;	// IMP=0x00100000000ec965
- (_Bool)vcp_anyAssetsForTaskID:(unsigned long long)arg1;	// IMP=0x00100000000ec890
- (id)vcp_mediaAnalysisDatabaseFilepath;	// IMP=0x00100000000ec81c
- (id)vcp_mediaAnalysisDirectory;	// IMP=0x00100000000ec74d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

