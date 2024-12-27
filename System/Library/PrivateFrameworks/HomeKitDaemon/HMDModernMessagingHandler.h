//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, HMDModernMessagingXPCEventPublisher, HMDModernRemoteMessageTransport, HMDUserMessagePolicy, HMFMessageDispatcher, NSMutableArray, NSMutableDictionary, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDModernMessagingHandler : HMFObject
{
    HMDModernMessagingXPCEventPublisher *_eventPublisher;	// 8 = 0x8
    NSMutableDictionary *_registrationsByMessageName;	// 16 = 0x10
    struct os_unfair_recursive_lock_s _lock;	// 24 = 0x18
    NSMutableArray *_pendingMessages;	// 32 = 0x20
    HMDHome *_home;	// 40 = 0x28
    NSUUID *_homeUUID;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_workQueue;	// 56 = 0x38
    HMFMessageDispatcher *_localMessageDispatcher;	// 64 = 0x40
    HMFMessageDispatcher *_energyRemoteMessageDispatcher;	// 72 = 0x48
    HMDUserMessagePolicy *_ownerPolicy;	// 80 = 0x50
    HMDUserMessagePolicy *_adminPolicy;	// 88 = 0x58
    HMDUserMessagePolicy *_userPolicy;	// 96 = 0x60
    HMDModernRemoteMessageTransport *_modernTransportEnergyInstance;	// 104 = 0x68
    HMFMessageDispatcher *_remoteMessageDispatcher;	// 112 = 0x70
    HMDModernRemoteMessageTransport *_modernTransport;	// 120 = 0x78
}

+ (id)logCategory;	// IMP=0x0010000000a1a665
- (void).cxx_destruct;	// IMP=0x0000000000a194ed
@property(retain, nonatomic) HMDModernRemoteMessageTransport *modernTransport; // @synthesize modernTransport=_modernTransport;
@property(retain, nonatomic) HMFMessageDispatcher *remoteMessageDispatcher; // @synthesize remoteMessageDispatcher=_remoteMessageDispatcher;
@property(retain, nonatomic) HMDModernRemoteMessageTransport *modernTransportEnergyInstance; // @synthesize modernTransportEnergyInstance=_modernTransportEnergyInstance;
@property(retain, nonatomic) HMDUserMessagePolicy *userPolicy; // @synthesize userPolicy=_userPolicy;
@property(retain, nonatomic) HMDUserMessagePolicy *adminPolicy; // @synthesize adminPolicy=_adminPolicy;
@property(retain, nonatomic) HMDUserMessagePolicy *ownerPolicy; // @synthesize ownerPolicy=_ownerPolicy;
@property(retain, nonatomic) HMFMessageDispatcher *energyRemoteMessageDispatcher; // @synthesize energyRemoteMessageDispatcher=_energyRemoteMessageDispatcher;
@property(retain, nonatomic) HMFMessageDispatcher *localMessageDispatcher; // @synthesize localMessageDispatcher=_localMessageDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) NSMutableArray *pendingMessages; // @synthesize pendingMessages=_pendingMessages;
@property struct os_unfair_recursive_lock_s lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) NSMutableDictionary *registrationsByMessageName; // @synthesize registrationsByMessageName=_registrationsByMessageName;
@property(retain, nonatomic) HMDModernMessagingXPCEventPublisher *eventPublisher; // @synthesize eventPublisher=_eventPublisher;
- (void)handleSendHMMMMessage:(id)arg1;	// IMP=0x0000000000a18660
- (void)handleUnregisterHMMMMessage:(id)arg1;	// IMP=0x0000000000a1820a
- (void)_handleHMMMRemoteMessage:(id)arg1;	// IMP=0x0000000000a17e60
- (void)_sendPendingHMMMRemoteMessagesForClientIdentifier:(id)arg1;	// IMP=0x0000000000a17be1
- (void)_storePendingHMMMRemoteMessage:(id)arg1;	// IMP=0x0000000000a179b9
- (void)_sendHMMMRemoteMessageToClient:(id)arg1 clientMessageName:(id)arg2 message:(id)arg3;	// IMP=0x0000000000a170c1
- (void)handleRegisterHMMMMessage:(id)arg1;	// IMP=0x0000000000a16d2e
- (void)registerHMMMMessageHandlerWithMessageName:(id)arg1 userRestriction:(long long)arg2 clientConnection:(id)arg3 message:(id)arg4;	// IMP=0x0000000000a167ea
- (void)_handleXPCConnectionDeactivatedNotification:(id)arg1;	// IMP=0x0000000000a16499
- (id)_policiesForHMMMRequestHandlerRestriction:(long long)arg1;	// IMP=0x0000000000a1632c
- (void)registerForMessages;	// IMP=0x0000000000a15f23
- (void)configureWithHome:(id)arg1;	// IMP=0x0000000000a15ea8
- (void)configureWithHome:(id)arg1 xpcEventPublisher:(id)arg2;	// IMP=0x0000000000a15c63
- (void)_createModernTransportEnergyInstance;	// IMP=0x0000000000a15c00
- (void)_createModernTransportInstance;	// IMP=0x0000000000a15b9d
- (id)_createEnergyRemoteMessageDispatcher;	// IMP=0x0000000000a15afb
- (id)_createRemoteMessageDispatcher;	// IMP=0x0000000000a15a0b
- (id)init;	// IMP=0x0000000000a1595e
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x0000000000a15928

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

