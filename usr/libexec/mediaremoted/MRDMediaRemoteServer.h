//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSDisplayLayoutMonitor, MISSING_TYPE, MRDAVRoutingDataSource, MRDAVRoutingServer, MRDBackgroundTasks, MRDBrowsableContentServer, MRDExternalDeviceRemoteServer, MRDGroupSessionServer, MRDMediaControlIPCServer, MRDMediaRemoteClient, MRDNowPlayingServer, MRDRemoteControlServer, MRDTransactionServer, MRDUIServer, MRDVirtualAudioInputServer, MRDVolumeController, MRDeviceInfo, MSVTimer, NSArray, NSMutableArray, NSMutableDictionary, NSString, RPCompanionLinkClient;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface MRDMediaRemoteServer : NSObject
{
    NSObject<OS_xpc_object> *_listenerConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 24 = 0x18
    MRDAVRoutingDataSource *_localRoutingDataSource;	// 32 = 0x20
    MRDNowPlayingServer *_nowPlayingServer;	// 40 = 0x28
    MRDVolumeController *_volumeController;	// 48 = 0x30
    MRDRemoteControlServer *_remoteControlServer;	// 56 = 0x38
    MRDBrowsableContentServer *_browsableContentServer;	// 64 = 0x40
    MRDExternalDeviceRemoteServer *_externalDeviceServer;	// 72 = 0x48
    MRDAVRoutingServer *_routingServer;	// 80 = 0x50
    MRDUIServer *_uiServer;	// 88 = 0x58
    MRDMediaControlIPCServer *_mediaControlServer;	// 96 = 0x60
    MRDVirtualAudioInputServer *_virtualAudioInputServer;	// 104 = 0x68
    MRDTransactionServer *_transactionServer;	// 112 = 0x70
    MRDBackgroundTasks *_tasks;	// 120 = 0x78
    NSMutableDictionary *_activeClients;	// 128 = 0x80
    NSObject<OS_dispatch_source> *_termSigHandler;	// 136 = 0x88
    MSVTimer *_timer;	// 144 = 0x90
    NSMutableArray *_startHandlers;	// 152 = 0x98
    MISSING_TYPE *_shouldSendCommandsDuringPhoneCall;	// 160 = 0xa0
    NSArray *_availableOrigins;	// 168 = 0xa8
    MRDGroupSessionServer *_groupSessionServer;	// 176 = 0xb0
    FBSDisplayLayoutMonitor *_sharedDisplayMonitor;	// 184 = 0xb8
}

+ (id)server;	// IMP=0x002000000011b7c4
- (void).cxx_destruct;	// IMP=0x00200000001240c7
@property(readonly, nonatomic) FBSDisplayLayoutMonitor *sharedDisplayMonitor; // @synthesize sharedDisplayMonitor=_sharedDisplayMonitor;
@property(readonly, nonatomic) MRDUIServer *uiServer; // @synthesize uiServer=_uiServer;
@property(readonly, nonatomic) MRDGroupSessionServer *groupSessionServer; // @synthesize groupSessionServer=_groupSessionServer;
@property(readonly, nonatomic) _Bool shouldSendCommandsDuringPhoneCall; // @synthesize shouldSendCommandsDuringPhoneCall=_shouldSendCommandsDuringPhoneCall;
@property(readonly, nonatomic) MRDExternalDeviceRemoteServer *externalDeviceServer; // @synthesize externalDeviceServer=_externalDeviceServer;
@property(readonly, nonatomic) MRDTransactionServer *transactionServer; // @synthesize transactionServer=_transactionServer;
@property(readonly, nonatomic) MRDAVRoutingServer *routingServer; // @synthesize routingServer=_routingServer;
@property(readonly, nonatomic) MRDRemoteControlServer *remoteControlServer; // @synthesize remoteControlServer=_remoteControlServer;
@property(readonly, nonatomic) MRDNowPlayingServer *nowPlayingServer; // @synthesize nowPlayingServer=_nowPlayingServer;
@property(readonly, nonatomic) NSArray *availableOrigins; // @synthesize availableOrigins=_availableOrigins;
- (void)_terminationHandler;	// IMP=0x0010000000123ff0
- (void)_restoreNowPlayingClientState;	// IMP=0x001000000012389b
@property(readonly, nonatomic) _Bool isFirstLaunchAfterBoot;
- (void)_validateAuditTokens:(id)arg1 pids:(id)arg2 auditTokens:(id)arg3;	// IMP=0x00100000001232bd
- (void)_sendMediaRemoteCommand:(unsigned int)arg1 withOrigin:(id)arg2;	// IMP=0x00100000001232ac
- (void)_removeClient:(id)arg1;	// IMP=0x00100000001230ec
- (_Bool)_internalMediaRemoteNotificationIsLegal:(id)arg1;	// IMP=0x0010000000122fbb
- (void)_postAppActivityNotificationNamed:(id)arg1 withActivity:(id)arg2;	// IMP=0x0010000000122eee
- (void)collectDiagnostic:(id)arg1;	// IMP=0x0010000000122b8e
- (void)virtualAudioInputServer:(id)arg1 didUpdateRecordingState:(unsigned int)arg2 forDevice:(id)arg3;	// IMP=0x0010000000122a66
- (void)reevaluateClientsForActiveCriticalSection;	// IMP=0x0010000000122807
- (_Bool)_isACriticalSectionActive;	// IMP=0x0010000000122766
- (void)_handleCriticalSectionTransition:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000001224b8
- (void)_handleSuspendDisconnectionPauseMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000001224b2
- (void)_handleCompletePairingHandlerMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000122315
- (void)_handleUnregisterPairingHandler:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000122174
- (void)_handleRegisterPairingHandlerMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000121d9d
- (void)_handleCollectClientDiagnosticsMessageWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001214f0
- (void)_handleCollectClientDiagnosticsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000001213cb
- (void)_handleCollectDiagnosticMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000120b9b
- (void)_handleGetSupportsSystemPairingMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000120b00
- (void)_handleRequestBlessMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000001208d6
- (void)_handlePing:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000001208c7
- (void)_handleWakePlayerServiceMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000001202a6
- (void)_handleWakeMediaAppMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000011fff6
- (_Bool)_isMediaAppInstalled:(id)arg1;	// IMP=0x001000000011ff42
- (void)_handleGetIsMusicAppInstalledMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000011fed5
- (void)_handleGetIsBooksAppInstalledMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000011fe68
- (void)_handleAdjustSystemVolumeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000011fd68
- (void)_handleGetSystemIsMutedMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000011fc15
- (void)_handleSetSystemIsMutedMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000011fb1d
- (void)_handleAdjustSystemVolumeByStepMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000011f9a1
- (void)_handleSetSystemVolumeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000011f825
- (void)_handleGetSystemVolumeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000011f74d
- (void)_handlePostNotificationMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000011f747
- (void)_handleKeepAliveMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000011f72d
- (void)_handleSelectSourceMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000011f603
- (void)_collectDiagnosticFromClient:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000011f50c
- (void)_handleServerXPCMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000011f204
- (void)handleXPCMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000011f066
- (void)_clientDidOpenConnection:(id)arg1;	// IMP=0x001000000011ef5a
@property(readonly, nonatomic) MRDeviceInfo *deviceInfo;
@property(readonly, nonatomic) RPCompanionLinkClient *sharedCompanionLinkClient;
@property(readonly, nonatomic) MRDMediaRemoteClient *MRUIClient;
@property(readonly, nonatomic) MRDMediaRemoteClient *daemonClient;
@property(readonly, nonatomic) MRDMediaRemoteClient *frontmostClient;
@property(readonly, nonatomic) MRDMediaRemoteClient *systemPodcastClient;
@property(readonly, nonatomic) MRDMediaRemoteClient *systemMediaClient;
@property(readonly, nonatomic) MRDMediaRemoteClient *localNowPlayingClient;
- (void)restoreClientState:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000011e7b6
- (void)restoreClientDeviceInfo:(id)arg1;	// IMP=0x001000000011e5aa
- (void)postClientNotificationNamed:(id)arg1 userInfo:(id)arg2 predicate:(CDUnknownBlockType)arg3;	// IMP=0x001000000011ddba
- (void)postClientNotificationNamed:(id)arg1 userInfo:(id)arg2;	// IMP=0x001000000011dda5
- (void)postClientNotificationNamed:(id)arg1 predicate:(CDUnknownBlockType)arg2;	// IMP=0x001000000011dd8e
- (void)postClientNotificationNamed:(id)arg1;	// IMP=0x001000000011dd7a
- (void)addMediaRemoteSeverStartedHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000011dc39
- (id)clientForPlayerPath:(id)arg1;	// IMP=0x001000000011db42
- (id)canBeNowPlayingClients;	// IMP=0x001000000011d9a5
- (id)allClients;	// IMP=0x001000000011d7a7
- (id)mostRecentPlayingClient;	// IMP=0x001000000011d477
- (id)mostRecentCanBeNowPlayingClient;	// IMP=0x001000000011d00b
- (id)clientWithRegisteredCustomOrigin:(id)arg1;	// IMP=0x001000000011cfab
- (id)clientForBundleIdentifier:(id)arg1;	// IMP=0x001000000011cd93
- (id)clientForPID:(int)arg1;	// IMP=0x001000000011cc57
- (void)removeClientForPID:(int)arg1;	// IMP=0x001000000011c90b
- (void)addClient:(id)arg1;	// IMP=0x001000000011c3ad
- (void)stop;	// IMP=0x001000000011c2f4
- (void)start;	// IMP=0x001000000011beb5
- (void)dealloc;	// IMP=0x001000000011be5c
- (void)initializeServer;	// IMP=0x001000000011b927
- (id)_init;	// IMP=0x001000000011b86b
- (id)init;	// IMP=0x001000000011b829

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

