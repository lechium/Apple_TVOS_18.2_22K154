//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSNumber, NSString, NSUUID;
@protocol OS_xpc_object;

@protocol LXSessionXPCServerProtocol
- (void)fetchSessionClientIdWithReply:(void (^)(NSUUID *, NSError *))arg1;
- (void)detachObservationFrom:(NSUUID *)arg1 with:(void (^)(NSNumber *, NSError *))arg2;
- (void)attachAsObserverTo:(NSUUID *)arg1 with:(void (^)(NSNumber *, NSError *))arg2;
- (void)updateTransactionHookAttachmentStatus:(NSNumber *)arg1 with:(void (^)(NSNumber *, NSError *))arg2;
- (void)postTransactionWithSessionId:(NSUUID *)arg1 eventProtos:(NSArray *)arg2 with:(void (^)(NSNumber *, NSError *))arg3;
- (void)generateStatementIdWithId:(NSUUID *)arg1 with:(void (^)(NSNumber *, NSError *))arg2;
- (void)sendWithMessageData:(NSData *)arg1 with:(void (^)(NSData *, NSError *))arg2;
- (void)endSessionWithId:(NSUUID *)arg1 with:(void (^)(NSNumber *, NSError *))arg2;
- (void)createSessionFromProtoEventsWithEventProtos:(NSArray *)arg1 configData:(NSData *)arg2 xpcData:(id <OS_xpc_object>)arg3 with:(void (^)(NSUUID *, NSError *))arg4;
- (void)startSessionWithId:(NSString *)arg1 configData:(NSData *)arg2 xpcData:(id <OS_xpc_object>)arg3 with:(void (^)(NSUUID *, NSError *))arg4;
- (void)performSetupWithConfigData:(NSData *)arg1 reply:(void (^)(NSNumber *, NSError *))arg2;
@end

