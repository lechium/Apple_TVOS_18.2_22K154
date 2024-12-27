//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PersonalizationPortrait/PPFeedbackAccepting-Protocol.h>
#import <PersonalizationPortrait/PPUniversalSearchSpotlightFeedbackAccepting-Protocol.h>

@class NSString, PPTopicQuery;

@protocol PPTopicReadOnlyServerProtocol <PPFeedbackAccepting, PPUniversalSearchSpotlightFeedbackAccepting>
- (void)topicCacheSandboxExtensionToken:(void (^)(NSString *, NSError *))arg1;
- (void)cachePath:(void (^)(NSString *, NSError *))arg1;
- (void)unmapMappedTopicIdentifier:(NSString *)arg1 mappingIdentifier:(NSString *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)scoresForTopicMapping:(NSString *)arg1 query:(PPTopicQuery *)arg2 queryId:(unsigned long long)arg3;
- (void)topicExtractionsFromText:(NSString *)arg1 queryId:(unsigned long long)arg2;
- (void)topicRecordsWithQuery:(PPTopicQuery *)arg1 queryId:(unsigned long long)arg2;
- (void)rankedTopicsWithQuery:(PPTopicQuery *)arg1 queryId:(unsigned long long)arg2;
@end

