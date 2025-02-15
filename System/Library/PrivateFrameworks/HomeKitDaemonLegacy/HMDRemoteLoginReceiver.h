//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDRemoteLoginReceiverSession, NSString;

__attribute__((visibility("hidden")))
@interface HMDRemoteLoginReceiver
{
    HMDRemoteLoginReceiverSession *_loginSession;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x0010000000a3e57c
- (void).cxx_destruct;	// IMP=0x0000000000a3e221
@property(retain, nonatomic) HMDRemoteLoginReceiverSession *loginSession; // @synthesize loginSession=_loginSession;
- (void)didCompleteAuthentication:(id)arg1 response:(id)arg2;	// IMP=0x0000000000a3e11e
- (void)_handleACAccountDidChangeNotification:(id)arg1;	// IMP=0x0000000000a3dd38
- (void)_callCompletion:(id)arg1;	// IMP=0x0000000000a3db2b
- (void)_auditLoggedInAccountFor:(id)arg1;	// IMP=0x0000000000a3d9cf
- (void)auditLoggedInAccountFor:(id)arg1;	// IMP=0x0000000000a3d917
- (void)auditLoggedInAccount;	// IMP=0x0000000000a3d8a6
- (void)_handleSignoutRequest:(id)arg1;	// IMP=0x0000000000a3d415
- (void)_authenticate:(id)arg1 message:(id)arg2;	// IMP=0x0000000000a3d1d0
- (void)_handleProxyAuthenticationRequest:(id)arg1;	// IMP=0x0000000000a3cc50
- (void)_handleProxyDeviceRequest:(id)arg1;	// IMP=0x0000000000a3c7c4
- (void)_handleCompanionAuthenticationRequest:(id)arg1;	// IMP=0x0000000000a3c244
- (void)registerForNotifications;	// IMP=0x0000000000a3c1a2
- (void)registerForMessages;	// IMP=0x0000000000a3be07
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x0000000000a3bdc6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

