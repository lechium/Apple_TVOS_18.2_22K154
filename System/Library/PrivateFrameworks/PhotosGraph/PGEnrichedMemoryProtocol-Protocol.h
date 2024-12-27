//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/PGTriggeredMemoryProtocol-Protocol.h>

@class NSArray, NSString, PGFlexMusicCuration, PGMoodVector, PGMusicCuration;

@protocol PGEnrichedMemoryProtocol <PGTriggeredMemoryProtocol>
@property(retain, nonatomic) PGMusicCuration *musicCuration;
@property(retain, nonatomic) PGFlexMusicCuration *flexMusicCuration;
@property(readonly, nonatomic) _Bool failedEnrichment;
@property(nonatomic) unsigned long long failureReason;
@property(nonatomic) long long titleCategory;
@property(nonatomic) unsigned long long numberOfRelevantAssets;
@property(nonatomic) _Bool featuresGuestAssets;
@property(nonatomic) double score;
@property(nonatomic) long long notificationLevel;
@property(copy, nonatomic) NSArray *legacyMoodKeywords;
@property(retain, nonatomic) PGMoodVector *positiveMoodVector;
@property(nonatomic) unsigned long long forbiddenMoods;
@property(nonatomic) unsigned long long recommendedMoods;
@property(nonatomic) unsigned long long suggestedMood;
@property(copy, nonatomic) NSArray *extendedCuratedAssetUUIDs;
@property(copy, nonatomic) NSArray *representativeAssetUUIDs;
@property(copy, nonatomic) NSArray *curatedAssetUUIDs;
@property(copy, nonatomic) NSString *keyAssetUUID;
@property(copy, nonatomic) NSArray *chapterTitles;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (NSString *)enrichedDescription;
@end

