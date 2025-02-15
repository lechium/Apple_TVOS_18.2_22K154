//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISOperationQueue, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface PushNotificationController : NSObject
{
    NSMutableDictionary *_connections;	// 8 = 0x8
    struct MGNotificationTokenStruct *_deviceNameChangedToken;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    double _lastRegisterAttemptTime;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 40 = 0x28
    ISOperationQueue *_operationQueue;	// 48 = 0x30
    long long _pushEnabledState;	// 56 = 0x38
    NSMutableArray *_registerBlocks;	// 64 = 0x40
    NSMutableArray *_tokenOperations;	// 72 = 0x48
}

+ (id)_newPushHandlerWithURLBag:(id)arg1;	// IMP=0x0020000000093c33
+ (_Bool)_amsHandleNotification:(id)arg1 urlBag:(id)arg2;	// IMP=0x00100000000917ea
+ (id)soundFilesDirectoryPath;	// IMP=0x001000000008e559
+ (id)sharedInstance;	// IMP=0x001000000008e4cc
- (void).cxx_destruct;	// IMP=0x002000000009705c
- (void)_updatePushEnabledState;	// IMP=0x0010000000096ae1
- (void)_updateEnvironmentAfterTokenPost:(id)arg1;	// IMP=0x00100000000967e0
- (_Bool)_shouldAggressivelySendToken;	// IMP=0x00100000000967bd
- (void)_setShouldAggressivelySendToken:(_Bool)arg1;	// IMP=0x0010000000096779
- (void)_resetLastRegisterAttemptTime;	// IMP=0x0010000000096757
- (void)_reloadPushStateInContext:(id)arg1;	// IMP=0x00100000000961be
- (void)_reloadDaemonClientInContext:(id)arg1;	// IMP=0x0010000000095d26
- (void)_reloadActiveEnvironmentInContext:(id)arg1;	// IMP=0x00100000000954cd
- (void)_postTokensInContext:(id)arg1 force:(_Bool)arg2;	// IMP=0x0010000000094ba8
- (void)_postTokensIfNecessaryInContext:(id)arg1;	// IMP=0x0010000000094b94
- (void)_postTokenForEnvironment:(id)arg1;	// IMP=0x00100000000944e8
- (void)_postNotificationsAvailableForClient:(id)arg1 inContext:(id)arg2;	// IMP=0x0010000000094204
- (id)_portNameForEnvironmentName:(id)arg1;	// IMP=0x0010000000094190
- (void)_openConnectionForEnvironment:(id)arg1;	// IMP=0x0010000000093e37
- (long long)_numberOfClientsInContext:(id)arg1;	// IMP=0x0010000000093d95
- (id)_newPostTokenOperationForEnvironment:(id)arg1 account:(id)arg2;	// IMP=0x0010000000093b3e
- (id)_newAPSConnectionWithEnvironment:(id)arg1;	// IMP=0x0010000000093a3b
- (void)_loadConnectionsInContext:(id)arg1;	// IMP=0x0010000000093296
- (_Bool)_isValidEnvironment:(id)arg1;	// IMP=0x001000000009320c
- (_Bool)_isPushEnabled;	// IMP=0x00100000000931fe
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000009303b
- (void)_fireRegisterBlocksAfterOperation:(id)arg1;	// IMP=0x0010000000092aa7
- (id)_environmentNameForConnection:(id)arg1;	// IMP=0x0010000000092901
- (id)_environmentForName:(id)arg1 createIfNeeded:(_Bool)arg2 inContext:(id)arg3;	// IMP=0x00100000000923e5
- (id)_enabledTopics;	// IMP=0x00100000000923a0
- (void)_closeEnvironment:(id)arg1 inContext:(id)arg2;	// IMP=0x0010000000091f65
- (id)_clientForIdentifier:(id)arg1 createIfNeeded:(_Bool)arg2 inContext:(id)arg3;	// IMP=0x0010000000091a86
- (id)_bag;	// IMP=0x00100000000919ec
- (void)_addNotificationWithUserInfo:(id)arg1 client:(id)arg2 context:(id)arg3;	// IMP=0x00100000000916d7
- (void)_urlBagDidLoadNotification:(id)arg1;	// IMP=0x00100000000915c0
- (void)_storeFrontChangedNotification:(id)arg1;	// IMP=0x00000000000914fa
- (void)_networkTypeChanged:(id)arg1;	// IMP=0x00100000000913dc
- (void)_deviceNameChanged;	// IMP=0x0010000000091188
- (void)_accountStoreChangedNotification:(id)arg1;	// IMP=0x00100000000910c2
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;	// IMP=0x0010000000090754
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x001000000009036f
- (void)unregisterNotificationClientWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000008fe32
- (void)showLocalNotificationWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000008fd7a
- (void)registerNotificationClientWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000008f9ef
- (void)popRemoteNotificationWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000008f5cc
- (void)observeXPCServer:(id)arg1;	// IMP=0x001000000008f523
- (void)registerTokenForEnvironmentName:(id)arg1 accountIdentifier:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000008efcf
- (void)postPushTokens;	// IMP=0x001000000008ed7e
- (void)postClientNotificationWithUserInfo:(id)arg1;	// IMP=0x001000000008e61c
- (void)dealloc;	// IMP=0x001000000008e241
- (id)init;	// IMP=0x001000000008de2a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

