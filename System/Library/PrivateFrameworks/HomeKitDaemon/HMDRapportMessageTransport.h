//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDAppleAccountManager, HMDRapportMessaging;
@protocol HMDRemoteMessageListener, HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDRapportMessageTransport
{
    id <HMDRemoteMessageListener> _remoteMessageListener;	// 8 = 0x8
    HMDRapportMessaging *_rapportMessaging;	// 16 = 0x10
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 24 = 0x18
    HMDAppleAccountManager *_appleAccountManager;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0010000000a9d389
+ (unsigned long long)restriction;	// IMP=0x0010000000a9d37e
- (void).cxx_destruct;	// IMP=0x0000000000a9c333
@property(readonly, nonatomic) HMDAppleAccountManager *appleAccountManager; // @synthesize appleAccountManager=_appleAccountManager;
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly, nonatomic) HMDRapportMessaging *rapportMessaging; // @synthesize rapportMessaging=_rapportMessaging;
@property(retain, nonatomic) id <HMDRemoteMessageListener> remoteMessageListener; // @synthesize remoteMessageListener=_remoteMessageListener;
- (id)_rpOptions:(id)arg1 stringForKey:(id)arg2;	// IMP=0x0000000000a9c282
- (void)_didReceiveRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a9b42f
- (id)_serializeRemoteMessage:(id)arg1 withResponseErrorData:(id)arg2 serializationError:(id *)arg3;	// IMP=0x0000000000a9b33a
- (void)_sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 requestID:(id)arg3;	// IMP=0x0000000000a9ac3c
- (void)_sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a9ac27
- (void)_setSharedUserIDSIdentifierForDevice:(id)arg1 idsIdentifier:(id)arg2;	// IMP=0x0000000000a9aa02
- (id)_IDSIdentifierForDestination:(id)arg1;	// IMP=0x0000000000a9a8e2
- (id)_IDSIdentifiersForMessage:(id)arg1;	// IMP=0x0000000000a9a686
- (id)_IDSIdentifierForDevice:(id)arg1;	// IMP=0x0000000000a9a5fc
- (void)_configureHMMMEnergyRapport;	// IMP=0x0000000000a9a4ce
- (void)_configureHMMMRapport;	// IMP=0x0000000000a9a3a0
- (void)_configureRapport;	// IMP=0x0000000000a9a272
- (void)rapportMessaging:(id)arg1 idsIdentifier:(id)arg2 didAppearReachable:(_Bool)arg3;	// IMP=0x0000000000a9a1f8
- (void)sendHMMMEnergyMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a9a1df
- (void)sendHMMMMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a9a1c6
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a9a1b4
- (_Bool)isValidMessage:(id)arg1;	// IMP=0x0000000000a9a0d1
- (_Bool)canSendMessage:(id)arg1;	// IMP=0x0000000000a99f2f
- (id)startHMMMEnergy;	// IMP=0x0000000000a99e24
- (id)startHMMM;	// IMP=0x0000000000a99d19
- (id)start;	// IMP=0x0000000000a99c0e
- (int)transportType;	// IMP=0x0000000000a99c03
- (_Bool)isSecure;	// IMP=0x0000000000a99bfb
- (id)initWithAccountRegistry:(id)arg1 rapportMessaging:(id)arg2 logEventSubmitter:(id)arg3 appleAccountManager:(id)arg4;	// IMP=0x0000000000a99b22
- (id)initWithAccountRegistry:(id)arg1;	// IMP=0x0000000000a99a51

@end

