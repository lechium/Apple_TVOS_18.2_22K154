//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSUUID;

@protocol LXSessionXPCClientProtocol
- (void)runTransactionHookWithSessionId:(NSUUID *)arg1 transaction:(NSArray *)arg2 with:(void (^)(NSArray *, NSError *))arg3;
- (void)connectionClosedWith:(void (^)(NSNumber *, NSError *))arg1;
- (void)sendWithMessageData:(NSData *)arg1 with:(void (^)(NSNumber *, NSError *))arg2;
@end

