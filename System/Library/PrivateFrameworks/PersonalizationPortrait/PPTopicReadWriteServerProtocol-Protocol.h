//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSString, PPSource;

@protocol PPTopicReadWriteServerProtocol
- (void)computeAndCacheTopicScores:(void (^)(_Bool, NSError *))arg1;
- (void)clearWithCompletion:(void (^)(_Bool, unsigned long long, NSError *))arg1;
- (void)cloudSyncWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)deleteAllTopicsFromSourcesWithBundleId:(NSString *)arg1 groupId:(NSString *)arg2 olderThanDate:(NSDate *)arg3 completion:(void (^)(_Bool, unsigned long long, NSError *))arg4;
- (void)deleteAllTopicsFromSourcesWithBundleId:(NSString *)arg1 completion:(void (^)(_Bool, unsigned long long, NSError *))arg2;
- (void)deleteAllTopicsFromSourcesWithBundleId:(NSString *)arg1 groupIds:(NSArray *)arg2 completion:(void (^)(_Bool, unsigned long long, NSError *))arg3;
- (void)deleteAllTopicsFromSourcesWithBundleId:(NSString *)arg1 documentIds:(NSArray *)arg2 completion:(void (^)(_Bool, unsigned long long, NSError *))arg3;
- (void)deleteAllTopicsWithTopicId:(NSString *)arg1 completion:(void (^)(_Bool, unsigned long long, NSError *))arg2;
- (void)donateTopics:(NSArray *)arg1 source:(PPSource *)arg2 algorithm:(unsigned long long)arg3 cloudSync:(_Bool)arg4 sentimentScore:(double)arg5 exactMatchesInSourceText:(NSArray *)arg6 completion:(void (^)(_Bool, NSError *))arg7;
@end

