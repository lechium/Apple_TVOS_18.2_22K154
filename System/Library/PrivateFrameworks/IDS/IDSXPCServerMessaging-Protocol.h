//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDS/NSObject-Protocol.h>

@class IDSCertifiedDeliveryContext, IDSServerMessagingOptions, NSData, NSSet, NSString;
@protocol IDSXPCServerMessagingClient;

@protocol IDSXPCServerMessaging <NSObject>
- (void)sendServerStorageFetchForTopic:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)sendCertifiedDeliveryReceipt:(IDSCertifiedDeliveryContext *)arg1;
- (void)cancelMessageWithIdentifier:(NSString *)arg1 onTopic:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)sendMessageData:(NSData *)arg1 onTopic:(NSString *)arg2 withOptions:(IDSServerMessagingOptions *)arg3 identifier:(NSString *)arg4 completion:(void (^)(_Bool, NSError *))arg5;
- (void)setupServerMessagingClient:(id <IDSXPCServerMessagingClient>)arg1 withUUID:(NSString *)arg2 forTopic:(NSString *)arg3 commands:(NSSet *)arg4;
@end

