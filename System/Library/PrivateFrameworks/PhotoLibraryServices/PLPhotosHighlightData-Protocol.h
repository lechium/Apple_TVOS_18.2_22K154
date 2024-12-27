//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLHighlightItem-Protocol.h>
#import <PhotoLibraryServices/PLMomentRefreshable-Protocol.h>
#import <PhotoLibraryServices/PLSharedAssetsContainer-Protocol.h>

@class NSArray, NSDate, NSObject, NSSet, NSString;
@protocol NSCopying, PLMomentAssetData, PLPhotosHighlightData;

@protocol PLPhotosHighlightData <PLMomentRefreshable, PLHighlightItem, PLSharedAssetsContainer>
+ (NSArray *)sortByTimeSortDescriptors;
@property(retain, nonatomic) NSSet *dayGroupSummaryAssets;
@property(retain, nonatomic) NSSet *dayGroupExtendedAssets;
@property(retain, nonatomic) NSSet *dayGroupAssets;
@property(retain, nonatomic) NSSet *extendedAssets;
@property(retain, nonatomic) NSSet *summaryAssets;
@property(retain, nonatomic) NSSet *assets;
@property(retain, nonatomic) id <PLMomentAssetData> keyAssetForKindPrivate;
@property(readonly, retain, nonatomic) NSArray *momentsSortedByTime;
@property(retain, nonatomic) NSSet *moments;
@property(readonly, nonatomic) _Bool missingKeyAssetForKindShared;
@property(readonly, nonatomic) _Bool missingKeyAssetForKindPrivate;
@property(readonly, retain, nonatomic) NSSet *dayGroupSummaryAssetsShared;
@property(readonly, retain, nonatomic) NSSet *dayGroupExtendedAssetsShared;
@property(readonly, retain, nonatomic) NSSet *dayGroupAssetsShared;
@property(readonly, retain, nonatomic) NSSet *extendedAssetsShared;
@property(readonly, retain, nonatomic) NSSet *summaryAssetsShared;
@property(readonly, retain, nonatomic) NSSet *assetsShared;
@property(readonly, retain, nonatomic) NSSet *dayGroupSummaryAssetsPrivate;
@property(readonly, retain, nonatomic) NSSet *dayGroupExtendedAssetsPrivate;
@property(readonly, retain, nonatomic) NSSet *dayGroupAssetsPrivate;
@property(readonly, retain, nonatomic) NSSet *extendedAssetsPrivate;
@property(readonly, retain, nonatomic) NSSet *summaryAssetsPrivate;
@property(readonly, retain, nonatomic) NSSet *assetsPrivate;
@property(nonatomic) unsigned short mixedSharingCompositionKeyAssetRelationship;
@property(retain, nonatomic) id <PLMomentAssetData> keyAssetForKindShared;
@property(nonatomic) unsigned short visibilityStateMixed;
@property(nonatomic) unsigned short visibilityStateShared;
@property(retain, nonatomic) NSString *subtitleMixed;
@property(retain, nonatomic) NSString *subtitleShared;
@property(retain, nonatomic) NSString *titleMixed;
@property(retain, nonatomic) NSString *titleShared;
@property(readonly, nonatomic) int dayGroupSummaryAssetsCountPrivate;
@property(nonatomic) int dayGroupSummaryAssetsCountShared;
@property(nonatomic) int dayGroupSummaryAssetsCount;
@property(readonly, nonatomic) int dayGroupExtendedAssetsCountPrivate;
@property(nonatomic) int dayGroupExtendedAssetsCountShared;
@property(nonatomic) int dayGroupExtendedAssetsCount;
@property(readonly, nonatomic) int dayGroupAssetsCountPrivate;
@property(nonatomic) int dayGroupAssetsCountShared;
@property(nonatomic) int dayGroupAssetsCount;
@property(readonly, nonatomic) int summaryCountPrivate;
@property(nonatomic) int summaryCountShared;
@property(nonatomic) int summaryCount;
@property(readonly, nonatomic) int extendedCountPrivate;
@property(nonatomic) int extendedCountShared;
@property(nonatomic) int extendedCount;
@property(readonly, nonatomic) int assetsCountPrivate;
@property(nonatomic) int assetsCountShared;
@property(nonatomic) int assetsCount;
@property(readonly, retain, nonatomic) NSObject<NSCopying> *uniqueObjectID;
@property(retain, nonatomic) NSSet *childDayGroupPhotosHighlights;
@property(retain, nonatomic) NSSet *childPhotosHighlights;
@property(retain, nonatomic) id <PLPhotosHighlightData> parentDayGroupPhotosHighlight;
@property(retain, nonatomic) id <PLPhotosHighlightData> parentPhotosHighlight;
@property(retain, nonatomic) NSDate *lastEnrichmentDate;
@property(nonatomic) unsigned short enrichmentState;
@property(nonatomic) unsigned short visibilityState;
@property(nonatomic) unsigned short category;
@property(nonatomic) unsigned short kind;
@property(nonatomic) unsigned short type;
@property(nonatomic) double promotionScore;
@property(nonatomic) int endTimeZoneOffset;
@property(nonatomic) int startTimeZoneOffset;
@property(readonly, retain, nonatomic) NSDate *localEndDate;
@property(readonly, retain, nonatomic) NSDate *localStartDate;
@property(retain, nonatomic) NSDate *startDate;
@property(retain, nonatomic) NSDate *endDate;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSString *uuid;
- (void)removeAssetData:(id <PLMomentAssetData>)arg1;
- (void)bumpHighlightVersion;
- (void)delete;
- (_Bool)isDeleted;
@end

