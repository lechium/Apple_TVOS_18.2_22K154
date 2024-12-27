//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StatusKit/NSObject-Protocol.h>

@class NSArray, NSString, SKHandle, SKPresenceOptions, SKPresencePayload;

@protocol SKPresenceDaemonProtocol <NSObject>
- (void)hasInitialCloudKitImportOccurredWithCompletion:(void (^)(NSError *, _Bool))arg1;
- (void)registerForDelegateCallbacksWithPresenceIdentifier:(NSString *)arg1 options:(SKPresenceOptions *)arg2 completion:(void (^)(NSError *))arg3;
- (void)fetchPresenceCapability:(void (^)(_Bool))arg1;
- (void)releasePresenceForIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)assertPresenceForIdentifier:(NSString *)arg1 withPresencePayload:(SKPresencePayload *)arg2 completion:(void (^)(NSError *))arg3;
- (void)releaseTransientSubscriptionAssertionForPresenceIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)retainTransientSubscriptionAssertionForPresenceIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)removeInvitedHandles:(NSArray *)arg1 presenceIdentifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)inviteHandles:(NSArray *)arg1 fromSenderHandle:(SKHandle *)arg2 presenceIdentifier:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)fetchHandleInvitability:(SKHandle *)arg1 fromHandle:(SKHandle *)arg2 forPresenceIdentifier:(NSString *)arg3 completion:(void (^)(SKHandleInvitability *, NSError *))arg4;
- (void)isHandleInvited:(SKHandle *)arg1 fromSenderHandle:(SKHandle *)arg2 forPresenceIdentifier:(NSString *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)presentDevicesForPresenceIdentifier:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)invitedHandlesForPresenceIdentifier:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
@end

