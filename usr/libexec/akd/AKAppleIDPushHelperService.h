//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAccountManager, AKPCSAuthPushHandler, APSConnection, NSArray, NSMutableDictionary, NSSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AKAppleIDPushHelperService : NSObject
{
    AKAccountManager *_accountManager;	// 8 = 0x8
    APSConnection *_apsConnection;	// 16 = 0x10
    NSString *_activeAPSEnvironment;	// 24 = 0x18
    NSObject<OS_dispatch_semaphore> *_apsTokenSemaphore;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_pushServiceQueue;	// 40 = 0x28
    NSString *_loginCodeNotificationID;	// 48 = 0x30
    NSString *_appleCareNotificationID;	// 56 = 0x38
    NSMutableDictionary *_notificationsByPushID;	// 64 = 0x40
    NSArray *_pushDelegates;	// 72 = 0x48
    NSSet *_pushTopics;	// 80 = 0x50
    AKPCSAuthPushHandler *_pcsAuthPushHandler;	// 88 = 0x58
    NSString *_activeCode;	// 96 = 0x60
}

+ (id)sharedService;	// IMP=0x00200000000be9a9
- (void).cxx_destruct;	// IMP=0x00200000000c2fa9
@property(copy, nonatomic) NSString *activeCode; // @synthesize activeCode=_activeCode;
- (void)setEnableCriticalReliability:(_Bool)arg1;	// IMP=0x00100000000c2f8a
- (id)_pushCommandsPostingCFUserNotification;	// IMP=0x00100000000c2f43
- (_Bool)_isPrimaryAccount:(id)arg1;	// IMP=0x00100000000c2e86
- (_Bool)_canProceedWithArmingForMessage:(id)arg1 account:(id)arg2;	// IMP=0x00100000000c2c9e
- (void)_unsafe_showNotificationForMessage:(id)arg1 account:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c2600
- (void)_startPasswordResetFlowForAccount:(id)arg1;	// IMP=0x00100000000c23b4
- (void)_unsafe_tearDownNotificationWithID:(id)arg1;	// IMP=0x00100000000c2230
- (void)_unsafe_teardownCurrentLoginNotification;	// IMP=0x00100000000c218a
- (void)_unsafe_showLoginNotificationWithCode:(id)arg1 incomingMessage:(id)arg2 piggy:(_Bool)arg3;	// IMP=0x00100000000c2026
- (void)tearDownLoginNotifications;	// IMP=0x00100000000c1fc5
- (void)showPigCode:(id)arg1 withIncomingMessage:(id)arg2;	// IMP=0x00100000000c1e84
- (void)_generateLoginCodeForAccount:(id)arg1 withIncomingMessage:(id)arg2;	// IMP=0x00100000000c1aaa
- (void);	// IMP=0x00100000000c18e4
- (_Bool)_messageSupportsAlerts:(id)arg1;	// IMP=0x00100000000c1861
- (void)_armDeviceWithMessage:(id)arg1 account:(id)arg2 notificationResult:(unsigned long long)arg3;	// IMP=0x00100000000c16ba
- (void)_unsafe_presentMessage:(id)arg1 forAccount:(id)arg2;	// IMP=0x00100000000c136f
- (_Bool)_shouldProcessPushMessage:(id)arg1 withAccount:(id)arg2;	// IMP=0x00100000000c0fdc
- (id)_akPCSAuthPushHandler;	// IMP=0x00100000000c0f39
- (void)_unsafe_processPushMessage:(id)arg1;	// IMP=0x00100000000c09f1
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x00100000000c074a
- (id)_publicAPSToken;	// IMP=0x00100000000c03b2
- (id)publicAPSTokenString;	// IMP=0x00100000000c0362
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x00100000000bffac
- (void)connectionDidReconnect:(id)arg1;	// IMP=0x00100000000bff50
- (void)connection:(id)arg1 didChangeConnectedStatus:(_Bool)arg2;	// IMP=0x00100000000bfebe
- (void)dealloc;	// IMP=0x00100000000bfdf3
- (void)_ensureDesiredAPSEnvironmentIsInUse:(id)arg1;	// IMP=0x00100000000bfa4a
- (void)_processMessageWithDelegates:(id)arg1;	// IMP=0x00100000000bf7ac
- (_Bool)_queryDelegatesForSuppressAction:(id)arg1;	// IMP=0x00100000000bf563
- (void)_notifyDelegatesOfMessageActivation:(id)arg1 result:(unsigned long long)arg2 payload:(id)arg3;	// IMP=0x00100000000bf349
- (void)_notifyDelegatesOfMessageActivation:(id)arg1 result:(unsigned long long)arg2;	// IMP=0x00100000000bf154
- (void)setDelegates:(id)arg1;	// IMP=0x00100000000bf0d5
- (void)startWithDelegates:(id)arg1;	// IMP=0x00100000000beb0b
- (id)init;	// IMP=0x00100000000be9fe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

