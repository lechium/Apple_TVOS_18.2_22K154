//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class KVProfile, NSString, NSURL;

@protocol CKVAdminService
- (oneway void)endEvaluation:(void (^)(long long))arg1;
- (oneway void)beginEvaluation:(KVProfile *)arg1 clean:(_Bool)arg2 completion:(void (^)(long long))arg3;
- (oneway void)deleteAllItemsWithUserId:(NSString *)arg1 deviceId:(NSString *)arg2 completion:(void (^)(long long))arg3;
- (oneway void)deleteAllItemsWithUserId:(NSString *)arg1 completion:(void (^)(long long))arg2;
- (oneway void)rebuildSpeechProfileForUserId:(NSString *)arg1 completion:(void (^)(long long))arg2;
- (oneway void)captureVocabularySnapshot:(NSURL *)arg1 completion:(void (^)(long long, NSURL *))arg2;
- (oneway void)triggerMaintenance:(void (^)(long long))arg1;
- (oneway void)triggerMigration:(_Bool)arg1 completeAfterTrigger:(_Bool)arg2 completion:(void (^)(long long))arg3;
- (oneway void)finishEventSimulation:(void (^)(long long))arg1;
- (oneway void)handleTask:(unsigned short)arg1 reason:(unsigned short)arg2 completion:(void (^)(long long))arg3;
- (oneway void)startEventSimulation:(_Bool)arg1 completion:(void (^)(long long))arg2;
@end

