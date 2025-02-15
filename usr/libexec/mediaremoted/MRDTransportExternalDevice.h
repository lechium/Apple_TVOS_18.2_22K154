//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/MRExternalDevice.h>

@class MISSING_TYPE, MRDeviceInfo, MRExternalClientConnection, MRExternalDeviceTransport, MROSTransaction, MROrigin, MSVTimer, NSArray, NSDate, NSMutableArray, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MRDTransportExternalDevice : MRExternalDevice
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 16 = 0x10
    _Bool _wantsNowPlayingNotifications;	// 24 = 0x18
    _Bool _wantsNowPlayingArtworkNotifications;	// 25 = 0x19
    _Bool _wantsVolumeNotifications;	// 26 = 0x1a
    _Bool _wantsOutputDeviceNotifications;	// 27 = 0x1b
    _Bool _wantsSystemEndpointNotifications;	// 28 = 0x1c
    _Bool _wantsEndpointChangeNotifications;	// 29 = 0x1d
    _Bool _usingSystemPairing;	// 30 = 0x1e
    NSDate *_connectionStateTimestamp;	// 32 = 0x20
    unsigned int _connectionState;	// 40 = 0x28
    unsigned int _connectionOptions;	// 44 = 0x2c
    unsigned long long _reconnectionAttemptCount;	// 48 = 0x30
    _Bool;	// 56 = 0x38
    _Bool _disconnecting;	// 57 = 0x39
    _Bool _isClientSyncActive;	// 58 = 0x3a
    MROSTransaction *_transaction;	// 64 = 0x40
    NSArray *_subscribedPlayerPaths;	// 72 = 0x48
    NSDate *_originalConnectionStartDate;	// 80 = 0x50
    NSString *_connectionUID;	// 88 = 0x58
    NSMutableArray *_batchedRequestsDuringReconnectionAttempt;	// 96 = 0x60
    NSMutableSet *_requestGroupSessionCompletions;	// 104 = 0x68
    _Bool _isCallingClientCallback;	// 112 = 0x70
    MRExternalClientConnection *_clientConnection;	// 120 = 0x78
    MROrigin *_customOrigin;	// 128 = 0x80
    MRDeviceInfo *_deviceInfo;	// 136 = 0x88
    long long _connectionRecoveryBehavior;	// 144 = 0x90
    MRExternalDeviceTransport *_transport;	// 152 = 0x98
    CDUnknownBlockType _pairingCallback;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_pairingCallbackQueue;	// 168 = 0xa8
    CDUnknownBlockType _connectionStateCallback;	// 176 = 0xb0
    NSObject<OS_dispatch_queue> *_connectionStateCallbackQueue;	// 184 = 0xb8
    CDUnknownBlockType _nameCallback;	// 192 = 0xc0
    NSObject<OS_dispatch_queue> *_nameCallbackQueue;	// 200 = 0xc8
    CDUnknownBlockType _pairingAllowedCallback;	// 208 = 0xd0
    NSObject<OS_dispatch_queue> *_pairingAllowedCallbackQueue;	// 216 = 0xd8
    CDUnknownBlockType _customDataCallback;	// 224 = 0xe0
    NSObject<OS_dispatch_queue> *_customDataCallbackQueue;	// 232 = 0xe8
    CDUnknownBlockType _outputDevicesUpdatedCallback;	// 240 = 0xf0
    NSObject<OS_dispatch_queue> *_outputDevicesUpdatedCallbackQueue;	// 248 = 0xf8
    CDUnknownBlockType _outputDevicesRemovedCallback;	// 256 = 0x100
    NSObject<OS_dispatch_queue> *_outputDevicesRemovedCallbackQueue;	// 264 = 0x108
    CDUnknownBlockType _volumeCallback;	// 272 = 0x110
    NSObject<OS_dispatch_queue> *_volumeCallbackQueue;	// 280 = 0x118
    CDUnknownBlockType _volumeControlCapabilitiesCallback;	// 288 = 0x120
    NSObject<OS_dispatch_queue> *_volumeControlCapabilitiesCallbackQueue;	// 296 = 0x128
    CDUnknownBlockType _volumeMutedCallback;	// 304 = 0x130
    NSObject<OS_dispatch_queue> *_volumeMutedCallbackQueue;	// 312 = 0x138
    CDUnknownBlockType _deviceInfoCallback;	// 320 = 0x140
    NSObject<OS_dispatch_queue> *_deviceInfoCallbackQueue;	// 328 = 0x148
    NSObject<OS_dispatch_queue> *_outputContextCallbackQueue;	// 336 = 0x150
    NSObject<OS_dispatch_queue> *_workerQueue;	// 344 = 0x158
    NSMutableArray *_pendingConnectCompletionHandlers;	// 352 = 0x160
    MSVTimer *_powerLogIntervalTimer;	// 360 = 0x168
}

- (void).cxx_destruct;	// IMP=0x00200000000bc5e2
@property(retain, nonatomic) MSVTimer *powerLogIntervalTimer; // @synthesize powerLogIntervalTimer=_powerLogIntervalTimer;
@property(retain, nonatomic) NSMutableArray *pendingConnectCompletionHandlers; // @synthesize pendingConnectCompletionHandlers=_pendingConnectCompletionHandlers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *outputContextCallbackQueue; // @synthesize outputContextCallbackQueue=_outputContextCallbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *deviceInfoCallbackQueue; // @synthesize deviceInfoCallbackQueue=_deviceInfoCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType deviceInfoCallback; // @synthesize deviceInfoCallback=_deviceInfoCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *volumeMutedCallbackQueue; // @synthesize volumeMutedCallbackQueue=_volumeMutedCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType volumeMutedCallback; // @synthesize volumeMutedCallback=_volumeMutedCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *volumeControlCapabilitiesCallbackQueue; // @synthesize volumeControlCapabilitiesCallbackQueue=_volumeControlCapabilitiesCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType volumeControlCapabilitiesCallback; // @synthesize volumeControlCapabilitiesCallback=_volumeControlCapabilitiesCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *volumeCallbackQueue; // @synthesize volumeCallbackQueue=_volumeCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType volumeCallback; // @synthesize volumeCallback=_volumeCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *outputDevicesRemovedCallbackQueue; // @synthesize outputDevicesRemovedCallbackQueue=_outputDevicesRemovedCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType outputDevicesRemovedCallback; // @synthesize outputDevicesRemovedCallback=_outputDevicesRemovedCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *outputDevicesUpdatedCallbackQueue; // @synthesize outputDevicesUpdatedCallbackQueue=_outputDevicesUpdatedCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType outputDevicesUpdatedCallback; // @synthesize outputDevicesUpdatedCallback=_outputDevicesUpdatedCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *customDataCallbackQueue; // @synthesize customDataCallbackQueue=_customDataCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType customDataCallback; // @synthesize customDataCallback=_customDataCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pairingAllowedCallbackQueue; // @synthesize pairingAllowedCallbackQueue=_pairingAllowedCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType pairingAllowedCallback; // @synthesize pairingAllowedCallback=_pairingAllowedCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *nameCallbackQueue; // @synthesize nameCallbackQueue=_nameCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType nameCallback; // @synthesize nameCallback=_nameCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionStateCallbackQueue; // @synthesize connectionStateCallbackQueue=_connectionStateCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType connectionStateCallback; // @synthesize connectionStateCallback=_connectionStateCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pairingCallbackQueue; // @synthesize pairingCallbackQueue=_pairingCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType pairingCallback; // @synthesize pairingCallback=_pairingCallback;
@property(nonatomic) _Bool isCallingClientCallback; // @synthesize isCallingClientCallback=_isCallingClientCallback;
@property(readonly, nonatomic) MRExternalDeviceTransport *transport; // @synthesize transport=_transport;
- (void)setConnectionRecoveryBehavior:(long long)arg1;	// IMP=0x00100000000bc1ff
- (long long)connectionRecoveryBehavior;	// IMP=0x00100000000bc1ee
- (void)_sendClientMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000bbff2
- (void)_handleInvalidateApplicationConnectionMessage:(id)arg1;	// IMP=0x00100000000bbf67
- (void)_handleApplicationConnectionProtocolMessage:(id)arg1;	// IMP=0x00100000000bbedc
- (void)_handlePlayerClientParticipantsUpdateMessage:(id)arg1;	// IMP=0x00100000000bba3d
- (void)_handleVolumeMutedDidChangeMessage:(id)arg1;	// IMP=0x00100000000bb9b6
- (void)_handleSetOriginClientPropertiesMessage:(id)arg1;	// IMP=0x00100000000bb948
- (void)_handleSetPlayerClientPropertiesMessage:(id)arg1;	// IMP=0x00100000000bb89c
- (void)_handleUpdateActiveSystemEndpoint:(id)arg1;	// IMP=0x00100000000bb676
- (void)_handleSetDefaultSupportedCommandsMessage:(id)arg1;	// IMP=0x00100000000bb594
- (void)_handlePresentRouteAuthorizationStatusMessage:(id)arg1;	// IMP=0x00100000000bb498
- (void)_handlePromptForRouteAuthorizationMessage:(id)arg1;	// IMP=0x00100000000bb39c
- (void)_handleGenericMessage:(id)arg1;	// IMP=0x00100000000bb309
- (void)_handleSetConnectionStateMessage:(id)arg1;	// IMP=0x00100000000bb291
- (void)_onSerialQueue_completeGroupSessionRequestsWithIdentifier:(id)arg1 error:(id)arg2;	// IMP=0x00100000000bb0f3
- (void)_handleDeviceInfoChange:(id)arg1 oldDevice:(id)arg2;	// IMP=0x00100000000bad82
- (void)_handleDeviceInfoUpdateMessage:(id)arg1;	// IMP=0x00100000000bacd9
- (void)_handleLegacyVolumeControlCapabilitiesDidChangeMessage:(id)arg1;	// IMP=0x00100000000bac61
- (void)_handleVolumeControlCapabilitiesDidChangeMessage:(id)arg1;	// IMP=0x00100000000babdb
- (void)_handleVolumeDidChangeMessage:(id)arg1;	// IMP=0x00100000000bab52
- (void)_handleOutputDevicesRemovedMessage:(id)arg1;	// IMP=0x00100000000bab03
- (void)_handleOutputDevicesUpdatedMessage:(id)arg1;	// IMP=0x00100000000baab4
- (void)_handleNotificationMessage:(id)arg1;	// IMP=0x00100000000ba8a2
- (void)_handleUpdateContentItemsMessage:(id)arg1;	// IMP=0x00100000000ba68f
- (void)_handleUpdatePlayerMessage:(id)arg1;	// IMP=0x00100000000ba5f8
- (void)_handleUpdateClientMessage:(id)arg1;	// IMP=0x00100000000ba572
- (void)_handleRemovePlayerMessage:(id)arg1;	// IMP=0x00100000000ba4db
- (void)_handleRemoveClientMessage:(id)arg1;	// IMP=0x00100000000ba455
- (void)_handleSetNowPlayingPlayerMessage:(id)arg1;	// IMP=0x00100000000ba3be
- (void)_handleSetNowPlayingClientMessage:(id)arg1;	// IMP=0x00100000000ba338
- (void)_handleSetStateMessage:(id)arg1;	// IMP=0x00100000000b9eb7
- (void)_handleRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2 playerPath:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b94ed
- (_Bool)_maybeBatchRequest:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b934a
- (void)_callDeviceInfoCallback:(id)arg1 oldDeviceInfo:(id)arg2;	// IMP=0x00100000000b9024
- (void)_callIsMutedCallback:(_Bool)arg1 outputDeviceUID:(id)arg2;	// IMP=0x00100000000b8e4e
- (void)_callVolumeControlCapabilitiesCallback:(unsigned int)arg1 outputDeviceUID:(id)arg2;	// IMP=0x00100000000b8c84
- (void)_callVolumeCallback:(float)arg1 outputDeviceUID:(id)arg2;	// IMP=0x00100000000b89e8
- (void)_callOutputDevicesRemovedCallbackWithOutputDeviceUIDs:(id)arg1;	// IMP=0x00100000000b882f
- (void)_callOutputDevicesUpdatedCallbackWithOutputDevices:(id)arg1;	// IMP=0x00100000000b8676
- (void)_callClientCustomDataCallback:(id)arg1 name:(id)arg2;	// IMP=0x00100000000b841f
- (void)_callClientAllowsPairingCallback;	// IMP=0x00100000000b8205
- (void)_callClientNameCallback;	// IMP=0x00100000000b7fd4
- (void)_callClientPairingCallback:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b7bae
- (void)_callClientConnectionStateCallback:(unsigned int)arg1 previousConnectionState:(unsigned int)arg2 error:(id)arg3;	// IMP=0x00100000000b786e
- (void)_handlePlaybackSessionMigrateEndRequest:(id)arg1 error:(id)arg2 forPlayerPath:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b75b4
- (void)_handlePlaybackSessionMigrateBeginRequest:(id)arg1 forPlayerPath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b734d
- (void)_handlePlaybackSessionMigrateRequest:(id)arg1 request:(id)arg2 forPlayerPath:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b7029
- (void)_handlePlaybackSessionRequest:(id)arg1 forPlayerPath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b6cfe
- (void)_handlePlaybackQueueRequest:(id)arg1 forPlayerPath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b65f2
- (void)_onSerialQueue_registerOriginCallbacks;	// IMP=0x00100000000b5201
- (void)_cleanUpWithReason:(long long)arg1 error:(id)arg2;	// IMP=0x00100000000b514e
- (void)_cleanUpStreamsWithReason:(long long)arg1 error:(id)arg2;	// IMP=0x00100000000b4fd4
- (void)_onWorkerQueue_sendBatchedMessages;	// IMP=0x00100000000b4d22
- (id)_onWorkerQueue_syncClientStateWithUserInfo:(id)arg1;	// IMP=0x00100000000b476d
- (id)_onWorkerQueue_reRegisterCustomOriginWithUserInfo:(id)arg1;	// IMP=0x00100000000b42fc
- (id)_onWorkerQueue_registerCustomOriginWithUserInfo:(id)arg1;	// IMP=0x00100000000b3d3c
- (id)_onWorkerQueue_loadDeviceInfoWithUserInfo:(id)arg1;	// IMP=0x00100000000b3017
- (id)_onWorkerQueue_initializeConnectionWithOptions:(unsigned int)arg1 userInfo:(id)arg2;	// IMP=0x00100000000b2601
- (id)_onWorkerQueue_createClientConnectionWithTransport:(id)arg1;	// IMP=0x00100000000b253d
- (void)_activeSystemEndpointDidChangeNotification:(id)arg1;	// IMP=0x00100000000b21d8
- (void)_transportDeviceInfoDidChangeNotification:(id)arg1;	// IMP=0x00100000000b2068
- (void)_localDeviceInfoDidChangeNotification:(id)arg1;	// IMP=0x00100000000b1f24
- (void)clientDidDisconnect:(id)arg1 error:(id)arg2;	// IMP=0x00100000000b1f0f
- (void)_handleDiscoveryUpdateOutputDevicesMessage:(id)arg1;	// IMP=0x00100000000b1e7c
- (void)setDiscoveryMode:(unsigned int)arg1 forConfiguration:(id)arg2;	// IMP=0x00100000000b1d90
- (void)clientConnection:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x00100000000b19bd
- (void)requestGroupSessionWithDetails:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b13b1
- (void)removeFromParentGroup:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b0fc2
- (void)createHostedEndpointWithOutputDeviceUIDs:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b0b0e
- (void)modifyTopologyWithRequest:(id)arg1 withReplyQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b0773
- (void)setConversationDetectionEnabled:(_Bool)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b0434
- (void)setListeningMode:(id)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b00e2
- (void)outputDeviceVolumeControlCapabilities:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000afbfe
- (void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000af826
- (void)adjustOutputDeviceVolume:(long long)arg1 outputDeviceUID:(id)arg2 details:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000af3e3
- (void)muteOutputDeviceVolume:(_Bool)arg1 outputDeviceUID:(id)arg2 details:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000aefa2
- (void)setOutputDeviceVolume:(float)arg1 outputDeviceUID:(id)arg2 details:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000aeb5c
- (void)sendClientUpdatesConfigMessageWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ae6a8
- (void)sendClientUpdatesConfigMessage;	// IMP=0x00100000000ae694
- (id)currentClientUpdatesConfigMessage;	// IMP=0x00100000000ae562
- (id)errorForCurrentState;	// IMP=0x00100000000ae30d
- (void)ping:(double)arg1 callback:(CDUnknownBlockType)arg2 withQueue:(id)arg3;	// IMP=0x00100000000adf36
- (void)sendCustomData:(id)arg1 withName:(id)arg2;	// IMP=0x00100000000ade1a
- (void)verifyConnectionStatusAndMaybeDisconnect:(id)arg1;	// IMP=0x00100000000adbd9
- (void)disconnect:(id)arg1;	// IMP=0x00100000000adb23
- (void)_callAllPendingCompletionsWithError:(id)arg1;	// IMP=0x00100000000ad757
- (void)_onSerialQueue_prepareToDisconnect:(id)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ac64e
- (void)_onWorkerQueue_disconnect:(id)arg1;	// IMP=0x00100000000ac546
- (void)connectWithOptions:(unsigned int)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000abae1
- (void)_onSerialQueue_prepareToConnectWithOptions:(unsigned int)arg1 userInfo:(id)arg2 connectionAttemptDetails:(id)arg3 connectionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000ab4c0
- (void)_onWorkerQueue_connectWithOptions:(unsigned int)arg1 isRetry:(_Bool)arg2 userInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a973e
- (_Bool)supportsIdleDisconnection;	// IMP=0x00100000000a9721
- (id)personalOutputDevices;	// IMP=0x00100000000a9719
- (void)sendButtonEvent:(struct _MRHIDButtonEvent)arg1;	// IMP=0x00100000000a9672
- (void)setDeviceInfoChangedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000a9559
- (MISSING_TYPE *)setVolumeMutedChangedCallback:withQueue: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000a9440
- (void)setVolumeControlCapabilitiesCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000a9327
- (void)setVolumeChangedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000a920e
- (void)setOutputDevicesRemovedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000a90f5
- (void)setOutputDevicesUpdatedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000a8fdc
- (void)setCustomDataCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000a8ec3
- (void)setPairingAllowedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000a8daa
- (void)setNameCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000a8c91
- (void)setConnectionStateCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000a8b78
- (void)setPairingCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000a8a1b
- (void)setConnectionState:(unsigned int)arg1 error:(id)arg2;	// IMP=0x00100000000a86bd
- (unsigned int)connectionState;	// IMP=0x00100000000a85f9
- (id)supportedMessages;	// IMP=0x00100000000a85a9
@property(retain, nonatomic) MRDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
- (id)_onSerialQueue_deviceInfo;	// IMP=0x00100000000a8446
@property(retain, nonatomic) MROrigin *customOrigin; // @synthesize customOrigin=_customOrigin;
@property(retain, nonatomic) MRExternalClientConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
- (void)setName:(id)arg1;	// IMP=0x00100000000a7d26
- (void)setSubscribedPlayerPaths:(id)arg1;	// IMP=0x00100000000a7c7a
- (id)subscribedPlayerPaths;	// IMP=0x00100000000a7be8
- (void)setWantsSystemEndpointNotifications:(_Bool)arg1;	// IMP=0x00100000000a7bc5
- (_Bool)wantsSystemEndpointNotifications;	// IMP=0x00100000000a7bb5
- (void)setWantsEndpointChangeNotifications:(_Bool)arg1;	// IMP=0x00100000000a7b92
- (_Bool)wantsEndpointChangeNotifications;	// IMP=0x00100000000a7b82
- (void)setWantsOutputDeviceNotifications:(_Bool)arg1;	// IMP=0x00100000000a7b5f
- (_Bool)wantsOutputDeviceNotifications;	// IMP=0x00100000000a7b4f
- (void)setWantsVolumeNotifications:(_Bool)arg1;	// IMP=0x00100000000a7b12
- (_Bool)wantsVolumeNotifications;	// IMP=0x00100000000a7b02
- (void)setWantsNowPlayingArtworkNotifications:(_Bool)arg1;	// IMP=0x00100000000a7adf
- (_Bool)wantsNowPlayingArtworkNotifications;	// IMP=0x00100000000a7acf
- (void)setWantsNowPlayingNotifications:(_Bool)arg1;	// IMP=0x00100000000a7aac
- (_Bool)wantsNowPlayingNotifications;	// IMP=0x00100000000a7a9c
- (void)setUsingSystemPairing:(_Bool)arg1;	// IMP=0x00100000000a7a8c
- (_Bool)isUsingSystemPairing;	// IMP=0x00100000000a7a7c
- (_Bool)isPaired;	// IMP=0x00100000000a7a74
- (_Bool)isValid;	// IMP=0x00100000000a7a5f
- (id)groupSessionToken;	// IMP=0x00100000000a7933
- (id)uid;	// IMP=0x00100000000a7916
- (long long)port;	// IMP=0x00100000000a78f9
- (id)hostName;	// IMP=0x00100000000a78dc
- (id)name;	// IMP=0x00100000000a7871
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (id)shortDescription;	// IMP=0x00100000000a7616
- (void)dealloc;	// IMP=0x00100000000a7579
- (id)initWithTransport:(id)arg1;	// IMP=0x00100000000a72f0

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

