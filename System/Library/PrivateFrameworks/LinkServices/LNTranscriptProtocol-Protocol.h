//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkServices/NSObject-Protocol.h>

@class LNTranscriptActionRecord, LNTranscriptMatchingPredicate, NSData;

@protocol LNTranscriptProtocol <NSObject>
- (void)deleteAllRecordsWithReply:(void (^)(NSError *))arg1;
- (void)deleteRecordsWithMatchingPredicate:(LNTranscriptMatchingPredicate *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)requestReadAccessWithReply:(void (^)(NSSecurityScopedURLWrapper *, NSError *))arg1;
- (void)donateActionRecordData:(NSData *)arg1 writeImmediately:(_Bool)arg2 reply:(void (^)(NSError *))arg3;
- (void)donateWithActionRecord:(LNTranscriptActionRecord *)arg1 reply:(void (^)(NSError *))arg2;
@end

