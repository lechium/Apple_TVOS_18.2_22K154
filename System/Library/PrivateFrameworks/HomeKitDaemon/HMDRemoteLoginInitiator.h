//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDRemoteLoginAnisetteDataProviderBridge, HMDRemoteLoginInitiatorSession, HMDRemoteLoginMessageSender, NSString;

__attribute__((visibility("hidden")))
@interface HMDRemoteLoginInitiator
{
    HMDRemoteLoginInitiatorSession *_loginSession;	// 8 = 0x8
    HMDRemoteLoginAnisetteDataProviderBridge *_anisetteProviderBridge;	// 16 = 0x10
    HMDRemoteLoginMessageSender *_remoteMessageSender;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x001000000048ff54
- (void).cxx_destruct;	// IMP=0x000000000048fa39
@property(retain, nonatomic) HMDRemoteLoginMessageSender *remoteMessageSender; // @synthesize remoteMessageSender=_remoteMessageSender;
@property(retain, nonatomic) HMDRemoteLoginAnisetteDataProviderBridge *anisetteProviderBridge; // @synthesize anisetteProviderBridge=_anisetteProviderBridge;
@property(retain, nonatomic) HMDRemoteLoginInitiatorSession *loginSession; // @synthesize loginSession=_loginSession;
- (void)didCompleteAuthentication:(id)arg1 error:(id)arg2 loggedInAccount:(id)arg3;	// IMP=0x000000000048f8bf
- (void)_resetCurrentSession:(id)arg1;	// IMP=0x000000000048f8ab
- (void)_callCompletion:(id)arg1 loggedInAccount:(id)arg2 authSession:(id)arg3;	// IMP=0x000000000048f565
- (void)_handleSignoutResponse:(id)arg1 error:(id)arg2 message:(id)arg3;	// IMP=0x000000000048f36d
- (void)_handleRemoteLoginSignout:(id)arg1;	// IMP=0x000000000048f0ff
- (void)_proxyLoginWithSessionID:(id)arg1 authResults:(id)arg2 remoteDevice:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000048eea4
- (void)_handleRemoteLoginProxyAuthentication:(id)arg1;	// IMP=0x000000000048eb48
- (void)_handleProxyDeviceResponse:(id)arg1 error:(id)arg2 message:(id)arg3;	// IMP=0x000000000048e564
- (void)_handleRemoteLoginProxiedDevice:(id)arg1;	// IMP=0x000000000048e2f6
- (void)_companionLoginWithSessionID:(id)arg1 account:(id)arg2 remoteDevice:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000048e09b
- (void)_handleRemoteLoginCompanionAuthentication:(id)arg1;	// IMP=0x000000000048de06
- (void)registerForMessages;	// IMP=0x000000000048dae1
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x000000000048d8ef
- (id)initWithUUID:(id)arg1 accessory:(id)arg2 remoteLoginHandler:(id)arg3;	// IMP=0x000000000048d84f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

