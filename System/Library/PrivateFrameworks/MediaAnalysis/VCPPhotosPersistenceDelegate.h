//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PHPhotoLibrary;

@interface VCPPhotosPersistenceDelegate : NSObject
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    _Bool _personBuilderMergeCandidatesDisabled;	// 16 = 0x10
}

+ (id)newVerifiedPersonsWithAtLeastOneFaceFetchOptionsWithPhotoLibrary:(id)arg1;	// IMP=0x00100000001a9435
+ (struct CGSize)faceTileSizeAdjustingForImageAspectRatio:(struct CGSize)arg1 imgWidth:(double)arg2 imgHeight:(double)arg3;	// IMP=0x001000000018cbe3
+ (void)enumerateFetchResult:(id)arg1 withBatchSize:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001886f5
+ (id)newVerifiedPersonsFetchOptionsWithPhotoLibrary:(id)arg1;	// IMP=0x001000000017c362
+ (id)newAllPersonsFetchOptionsWithPhotoLibrary:(id)arg1;	// IMP=0x001000000017c2d3
+ (id)newFacesDeterministicSortDescriptors;	// IMP=0x001000000017c2b1
+ (id)newVisibleFacesFetchOptionsWithPhotoLibrary:(id)arg1;	// IMP=0x001000000017c237
+ (id)newAllFacesFetchOptionsWithPhotoLibrary:(id)arg1;	// IMP=0x001000000017c18a
+ (id)newAssetFetchOptionsWithPhotoLibrary:(id)arg1;	// IMP=0x001000000017c0b9
+ (id)newAllPersonsWithAtLeastOneFaceFetchOptionsWithPhotoLibrary:(id)arg1;	// IMP=0x001000000017c039
- (void).cxx_destruct;	// IMP=0x00000000001aa35a
@property(nonatomic) _Bool personBuilderMergeCandidatesDisabled; // @synthesize personBuilderMergeCandidatesDisabled=_personBuilderMergeCandidatesDisabled;
- (_Bool)removeAutoAssignedFacesFromVerifiedPersonsAndPrepareForPersonBuilding:(id)arg1 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x00000000001a9504
- (id)fetchPersonWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001a9107
- (id)fetchFaceWithClusterSequenceNumber:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001a8d17
- (id)fetchFaceWithLocalIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001a89b6
- (id)densityClusteringForObjects:(id)arg1 maximumDistance:(double)arg2 minimumNumberOfObjects:(unsigned long long)arg3 withDistanceBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000001a8910
- (id)performSocialGroupsIdentifiersWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 overTheYearsComputation:(_Bool)arg3 updateBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000001a8845
- (id)suggestedMeIdentifierWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a86e1
- (id)keyFaceForPerson:(id)arg1 qualityMeasureByFace:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a85db
- (void)buildPersonWithFaceClusterer:(id)arg1 keyFaceUpdateBlock:(CDUnknownBlockType)arg2 context:(id)arg3 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000001a74d2
- (void)_buildPersonsFromUpdatedFaceGroups:(id)arg1 faceClusterer:(id)arg2 keyFaceUpdateBlock:(CDUnknownBlockType)arg3 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg4 context:(id)arg5;	// IMP=0x000000000019bb96
- (void)_processNewlyClusteredFaceCropsInFaceGroups:(id)arg1 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000019a99b
- (void)_detectDuplicationInExistingFaceCrops:(id)arg1 withFetchedFaces:(id)arg2 faceCropFaceIdentifiersToEvaluate:(id)arg3 duplicationResults:(id *)arg4 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000000198c85
- (void)_adjustConfirmingAndRejectionWithFaces:(id)arg1 faceCrops:(id)arg2 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000196b03
- (void)_updateFaceCSNsToAddByPerson:(id)arg1 faceCSNsToRemoveByPerson:(id)arg2 faceInFaceGroupByCSN:(id)arg3 faceCSNsByPersonLocalIdentifier:(id)arg4 faceCSNsByMigratedPersonLocalIdentifier:(id)arg5 personsToUpdate:(id)arg6;	// IMP=0x00000000001964ce
- (id)_duplicateFaceCSNsOnAssetForPerson:(id)arg1 faceCSNsOnPerson:(id)arg2 faceByCSNCache:(id)arg3;	// IMP=0x0000000000195c6b
- (id)otherFacesOnAssetWithFace:(id)arg1 options:(id)arg2;	// IMP=0x0000000000195c00
- (unsigned long long)_level0ClusterIdForFaceCSN:(unsigned long long)arg1 level0Clusters:(id)arg2;	// IMP=0x0000000000195a1c
- (_Bool)_completePersonBuildingWithPersonsToUpdate:(id)arg1 facesToRemoveByPerson:(id)arg2 facesToAddByPerson:(id)arg3 updateFaceGroup:(id)arg4 newMergeCandidatePairs:(id)arg5 newInvalidMergeCandidatePairs:(id)arg6 faceInFaceGroupByCSN:(id)arg7 personCache:(id)arg8 keyFaceUpdateBlock:(CDUnknownBlockType)arg9 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg10 context:(id)arg11 error:(id *)arg12;	// IMP=0x0000000000192730
- (void)_getRejectedTrainingFaceCSNs:(id *)arg1 rejectedFaceCSNs:(id *)arg2 rejectedPersonLocalIdentifiers:(id *)arg3 forPerson:(id)arg4 faceInFaceGroupByCSN:(id)arg5;	// IMP=0x000000000019208a
- (void)_getTrainingFacesByPerson:(id *)arg1 confirmedFaceCSNs:(id *)arg2 faceCSNsByPerson:(id *)arg3 faceCSNsByMigratedPerson:(id *)arg4 faceCSNsByQuickClassificationPerson:(id *)arg5 mergeCandidates:(id *)arg6 invalidMergeCandidates:(id *)arg7 rejectedPersonsByPerson:(id *)arg8 faceInFaceGroupByCSN:(id *)arg9 inFaces:(id)arg10 personCache:(id)arg11 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg12;	// IMP=0x0000000000190fba
- (void)_getMergeCandidates:(id)arg1 invalidMergeCandidates:(id)arg2 forPersonsWithLocalIdentifiers:(id)arg3;	// IMP=0x0000000000190619
- (void)dedupeGraphVerifiedPersonsInFaceGroup:(id)arg1 personCache:(id)arg2;	// IMP=0x000000000018fb57
- (void)_enumeratePersonsWithLocalIdentifiers:(id)arg1 fetchOptions:(id)arg2 personCache:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000018f5af
- (id)_updatedFaceGroupByFGLocalIdentifierFromClusterCSNs:(CDUnknownBlockType)arg1 fetchLimit:(unsigned long long)arg2;	// IMP=0x000000000018f296
- (_Bool)cleanupMergeCandidatesWithMinimumFaceGroupSize:(unsigned long long)arg1 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x000000000018eff1
- (_Bool)_cleanupMergeCandidatesForVerifiedPersons:(id)arg1 minimumFaceGroupSize:(unsigned long long)arg2 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x000000000018d224
- (_Bool)needsPersonBuilding;	// IMP=0x000000000018d0de
- (id)groupedClusterSequenceNumbersOfFacesInFaceGroupsOfMinimumSize:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000018cc7a
- (id)_faceToFaceCountMapForFaces:(id)arg1;	// IMP=0x000000000018c5f3
- (id)_representativenessByFaceCSNFromFaces:(id)arg1 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000018bd1e
- (id)bestRepresentativeFaceForPerson:(id)arg1 qualityMeasureByFace:(id)arg2 candidateFaces:(id)arg3 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000018b49a
- (id)_bestVURepresentativeFaceForPerson:(id)arg1 qualityMeasureByFace:(id)arg2 candidateFaces:(id)arg3 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000018b3e6
- (double)_keyFacePortraitFactorCoefficient;	// IMP=0x000000000018b1e6
- (double)_keyFaceSunglassesFactorCoefficient;	// IMP=0x000000000018afe6
- (double)_keyFaceWeightingFactorCoefficient;	// IMP=0x000000000018ade6
- (_Bool)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(_Bool)arg2 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x0000000000189519
- (_Bool)deleteEmptyGroupsAndReturnError:(id *)arg1;	// IMP=0x0000000000189360
- (_Bool)resetLibraryClustersWithCancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x0000000000188885
- (_Bool)persistChangesToAlgorithmicFaceGroups:(id)arg1 l1ClustersByFaceCSNRepresentingFaceGroup:(id)arg2 l0ClustersByFaceCSNRepresentingFaceGroup:(id)arg3 faceCSNByLocalIdentifierForNewlyClusteredFaces:(id)arg4 faceCSNsOfUnclusteredFaces:(id)arg5 localIdentifiersOfUnclusteredFaces:(id)arg6 persistenceCompletionBlock:(CDUnknownBlockType)arg7 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg8 error:(id *)arg9;	// IMP=0x0000000000183311
- (id)identifyConflictingL0Clusters:(id)arg1 csnToRejectedPersonForNewlyClusteredFaces:(id)arg2 csnToConfirmedPersonForNewlyClusteredFaces:(id)arg3;	// IMP=0x0000000000181b6b
- (id)_localIdentifiersOfUnverifiedPersonsAssociatedWithFaceGroups:(id)arg1 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000181764
- (id)_facesFromFaceGroupWithMostNumberOfFacesOnPerson:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000181008
- (_Bool)cleanupGroupedFacesWithClusterSequenceNumberSetToZero:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x0000000000180555
- (_Bool)cleanupUngroupedFacesWithNonZeroClusterSequenceNumbers:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x00000000001800b3
- (_Bool)_resetFaceClusterSequenceNumberOfFacesInFetchResult:(id)arg1 inPhotoLibrary:(id)arg2 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x000000000017fc25
- (id)_fetchResultForUngroupedFacesWithNonZeroClusterSequenceNumberInPhotoLibrary:(id)arg1;	// IMP=0x000000000017faa6
- (id)_fetchResultForGroupedFacesWithClusterSequenceNumberSetToZeroInPhotoLibrary:(id)arg1;	// IMP=0x000000000017f912
- (_Bool)_ungroupFaceClusterSequenceNumbers:(id)arg1 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x000000000017e89e
- (_Bool)ungroupFaceClusterSequenceNumbers:(id)arg1 batchSizeForUnclusteringFaces:(unsigned long long)arg2 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x000000000017e205
- (void)_categorizeGroupedFacesInFetchResult:(id)arg1 intoFaceLocalIdentifiersByFaceGroup:(id)arg2 ungroupedFaceLocalIdentifiers:(id *)arg3 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg4 photoLibrary:(id)arg5;	// IMP=0x000000000017dd1a
- (id)invalidFaceClusterSequenceNumbersInClusterSequenceNumbers:(id)arg1 cancelOrExtendTimeoutBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x000000000017d6a3
- (id)facesForClusteringWithLocalIdentifiers:(id)arg1 faceprintVersion:(int)arg2 groupingIdentifiers:(id)arg3;	// IMP=0x000000000017cf48
- (id)deterministicallyOrderedFaceIdentifiersWithLocalIdentifiers:(id)arg1 faceprintVersion:(int)arg2;	// IMP=0x000000000017cc3d
- (id)unclusteredClusteringEligibleFaceLocalIdentifiers:(id *)arg1;	// IMP=0x000000000017c9d6
- (unsigned long long)countOfClusteredFaces;	// IMP=0x000000000017c81b
- (unsigned long long)countOfUnclusteredClusteringEligibleFaces;	// IMP=0x000000000017c7d0
- (unsigned long long)countOfClusteringEligibleFaces;	// IMP=0x000000000017c5ae
- (unsigned long long)countOfFaces;	// IMP=0x000000000017c445
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x000000000017bfc1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

