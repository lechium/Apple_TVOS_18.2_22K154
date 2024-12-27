//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaAnalysis/NSObject-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSSet, NSURL;
@protocol NSFastEnumeration, PNFaceGroupProtocol, PNFetchResultProtocol, PNMomentProtocol, PNPersonProtocol;

@protocol PNPhotoLibraryProtocol <NSObject>
- (NSSet *)pn_fetchInvalidAssetIdentifiersForCommonComparison;
- (NSDate *)pn_lastAssetDate;
- (float)pn_faceProcessingProgress;
- (id <PNFetchResultProtocol>)pn_fetchFaceGroupsForPerson:(id <PNPersonProtocol>)arg1;
- (id <PNFetchResultProtocol>)pn_fetchFaceGroups;
- (id <PNFetchResultProtocol>)pn_fetchAssetsForFaceLocalIdentifiers:(id <NSFastEnumeration>)arg1;
- (id <PNFetchResultProtocol>)pn_fetchAssetsForFaceGroup:(id <PNFaceGroupProtocol>)arg1;
- (id <PNFetchResultProtocol>)pn_fetchAssetsForPerson:(id <PNPersonProtocol>)arg1;
- (id <PNFetchResultProtocol>)pn_fetchAssetsInMoment:(id <PNMomentProtocol>)arg1;
- (id <PNFetchResultProtocol>)pn_fetchAssetsWithLocalIdentifiers:(NSArray *)arg1;
- (id <PNFetchResultProtocol>)pn_fetchMomentsForAssetsWithLocalIdentifiers:(NSArray *)arg1;
- (id <PNFetchResultProtocol>)pn_fetchMomentsForPerson:(id <PNPersonProtocol>)arg1;
- (id <PNFetchResultProtocol>)pn_fetchMomentsWithLocalIdentifiers:(NSArray *)arg1;
- (id <PNFetchResultProtocol>)pn_fetchMoments;
- (unsigned long long)pn_numberOfFacesWithFaceprints;
- (NSDictionary *)pn_fetchFacesGroupedByAssetLocalIdentifierForAssets:(id <PNFetchResultProtocol>)arg1;
- (id <PNFetchResultProtocol>)pn_fetchFacesForFaceGroup:(id <PNFaceGroupProtocol>)arg1;
- (id <PNFetchResultProtocol>)pn_fetchFacesForPersonLocalIdentifiers:(NSArray *)arg1 inMoment:(id <PNMomentProtocol>)arg2;
- (id <PNFetchResultProtocol>)pn_fetchFacesForPerson:(id <PNPersonProtocol>)arg1 inMoment:(id <PNMomentProtocol>)arg2;
- (id <PNFetchResultProtocol>)pn_fetchFacesForPerson:(id <PNPersonProtocol>)arg1;
- (id <PNFetchResultProtocol>)pn_fetchFacesWithLocalIdentifiers:(NSArray *)arg1;
- (NSDictionary *)pn_fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id <PNFetchResultProtocol>)arg1;
- (id <PNFetchResultProtocol>)pn_fetchInvalidCandidatePersonsForPerson:(id <PNPersonProtocol>)arg1;
- (id <PNFetchResultProtocol>)pn_fetchCandidatePersonsForPerson:(id <PNPersonProtocol>)arg1;
- (id <PNFetchResultProtocol>)pn_fetchPersonsInMoment:(id <PNMomentProtocol>)arg1;
- (id <PNFetchResultProtocol>)pn_fetchPersonsWithType:(unsigned long long)arg1;
- (id <PNFetchResultProtocol>)pn_fetchPersonsWithLocalIdentifiers:(NSArray *)arg1;
- (_Bool)pn_performChangesAndWait:(void (^)(void))arg1 error:(id *)arg2;
- (NSURL *)pn_persistentStorageDirectoryURL;
@end

