//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DUSchemaDUEvent, NSString, NSUUID, SISchemaTopLevelUnionType, SiriAnalyticsTagShim;

@protocol SiriAnalyticsService
- (void)createTag:(SiriAnalyticsTagShim *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)sensitiveCondition:(int)arg1 endedAt:(unsigned long long)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)sensitiveCondition:(int)arg1 startedAt:(unsigned long long)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)enqueueLargeMessageObjectFromPath:(NSString *)arg1 dataUploadEvent:(DUSchemaDUEvent *)arg2 requestIdentifier:(NSUUID *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)barrierWithCompletion:(void (^)(void))arg1;
- (void)resolvePartialMessage:(SISchemaTopLevelUnionType *)arg1 timestamp:(unsigned long long)arg2 messageUUID:(NSUUID *)arg3 isolatedStreamUUID:(NSUUID *)arg4 completion:(void (^)(void))arg5;
- (void)emitMessage:(SISchemaTopLevelUnionType *)arg1 timestamp:(unsigned long long)arg2 messageUUID:(NSUUID *)arg3 isolatedStreamUUID:(NSUUID *)arg4 completion:(void (^)(void))arg5;
@end

