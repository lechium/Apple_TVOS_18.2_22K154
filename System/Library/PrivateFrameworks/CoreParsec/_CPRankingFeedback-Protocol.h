//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, _CPSearchResultForFeedback, _CPSectionRankingFeedback;

@protocol _CPRankingFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) int spotlightQueryIntent;
@property(copy, nonatomic) NSArray *hiddenResults;
@property(copy, nonatomic) NSArray *sections;
@property(nonatomic) double blendingDuration;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_CPSearchResultForFeedback *)hiddenResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)hiddenResultsCount;
- (void)addHiddenResults:(_CPSearchResultForFeedback *)arg1;
- (void)clearHiddenResults;
- (_CPSectionRankingFeedback *)sectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionsCount;
- (void)addSections:(_CPSectionRankingFeedback *)arg1;
- (void)clearSections;
@end

