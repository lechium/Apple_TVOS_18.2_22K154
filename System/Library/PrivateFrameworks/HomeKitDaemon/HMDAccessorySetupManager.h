//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessorySetupCoordinator, HMDHomeManager, HMDSBSRemoteAlertHandleProvider, HMDXPCClientConnection, HMDXPCMessageTransport, HMFMessageDispatcher, NSObject, NSString, NSUUID;
@protocol HMDSBSRemoteAlertHandle, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessorySetupManager : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HMFMessageDispatcher *_messageDispatcher;	// 16 = 0x10
    HMDXPCClientConnection *_accessorySetupHostClientConnection;	// 24 = 0x18
    HMDAccessorySetupCoordinator *_accessorySetupCoordinator;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
    HMDHomeManager *_homeManager;	// 48 = 0x30
    HMDXPCMessageTransport *_xpcMessageTransport;	// 56 = 0x38
    HMDSBSRemoteAlertHandleProvider *_alertHandleProvider;	// 64 = 0x40
    CDUnknownBlockType _pendingAccessorySetupCompletionHandler;	// 72 = 0x48
    id <HMDSBSRemoteAlertHandle> _alertHandle;	// 80 = 0x50
    double _activationStartTime;	// 88 = 0x58
}

+ (id)logCategory;	// IMP=0x00100000001a74c5
+ (id)accessorySetupHostBundleIdentifier;	// IMP=0x00100000001a74b1
- (void).cxx_destruct;	// IMP=0x00000000001a658c
@property double activationStartTime; // @synthesize activationStartTime=_activationStartTime;
@property(retain) id <HMDSBSRemoteAlertHandle> alertHandle; // @synthesize alertHandle=_alertHandle;
@property(copy) CDUnknownBlockType pendingAccessorySetupCompletionHandler; // @synthesize pendingAccessorySetupCompletionHandler=_pendingAccessorySetupCompletionHandler;
@property(readonly) HMDSBSRemoteAlertHandleProvider *alertHandleProvider; // @synthesize alertHandleProvider=_alertHandleProvider;
@property(readonly) HMDXPCMessageTransport *xpcMessageTransport; // @synthesize xpcMessageTransport=_xpcMessageTransport;
@property __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) HMDAccessorySetupCoordinator *accessorySetupCoordinator; // @synthesize accessorySetupCoordinator=_accessorySetupCoordinator;
@property(retain, nonatomic) HMDXPCClientConnection *accessorySetupHostClientConnection; // @synthesize accessorySetupHostClientConnection=_accessorySetupHostClientConnection;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x00000000001a6353
- (void)remoteAlertHandleDidDeactivate:(id)arg1;	// IMP=0x00000000001a629b
- (void)remoteAlertHandleDidActivate:(id)arg1;	// IMP=0x00000000001a61e3
- (void)handleNFCProxSetupNotification:(id)arg1;	// IMP=0x00000000001a5e3b
- (void)_handleFailAccessorySetupMessage:(id)arg1;	// IMP=0x00000000001a5bb1
- (void)_handleFinishAccessorySetupMessage:(id)arg1;	// IMP=0x00000000001a59e4
- (void)_handleResumeAccessorySetupMessage:(id)arg1;	// IMP=0x00000000001a57b0
- (void)_handlePerformAccessorySetupMessage:(id)arg1;	// IMP=0x00000000001a535e
- (id)_accessorySetupResultFromCompletedInfo:(id)arg1 clientIdentifierSalt:(id)arg2;	// IMP=0x00000000001a51d7
- (void)_finishAccessorySetupWithSetupCompletedInfo:(id)arg1 setupError:(id)arg2;	// IMP=0x00000000001a4ee1
- (void)_launchHUISWithSetupAccessoryDescription:(id)arg1 resumeSetupUserInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a45e1
- (void)_updateAccessoryDescription:(id)arg1 usingConnection:(id)arg2;	// IMP=0x00000000001a44d3
- (void)_launchHUISWithRequest:(id)arg1 connection:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a35f2
- (void)_launchHUISWithNFCProxSetupURL:(id)arg1;	// IMP=0x00000000001a31df
- (id)_createSetupAccessoryPayloadWithSetupPayloadURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001a2fb4
- (void)launchAccessorySetupHostToRequestSetupCodeForAccessoryWithUUID:(id)arg1 accessoryName:(id)arg2 homeUUID:(id)arg3 clientConnection:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000001a2e40
- (void)configure;	// IMP=0x00000000001a2b3b
- (id)initWithWorkQueue:(id)arg1 homeManager:(id)arg2 xpcMessageTransport:(id)arg3 messageDispatcher:(id)arg4 alertHandleProvider:(id)arg5;	// IMP=0x00000000001a28f1
- (id)initWithWorkQueue:(id)arg1 homeManager:(id)arg2;	// IMP=0x00000000001a27df

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

