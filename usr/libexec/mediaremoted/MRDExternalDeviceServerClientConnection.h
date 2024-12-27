//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/MRExternalClientConnection.h>

@class MRAVEndpoint, MRCoreUtilsPairingSessionPeer, MRPasscodeCredentials, MRPlaybackQueueClient, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol MRDExternalDeviceServerClientConnectionDelegate, OS_dispatch_queue;

@interface MRDExternalDeviceServerClientConnection : MRExternalClientConnection
{
    NSMutableArray *_virtualTouchDevices;	// 8 = 0x8
    NSMutableArray *_registeredVirtualVoiceInputDevices;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serialQueue;	// 24 = 0x18
    NSMutableDictionary *_packedDeviceIDToDeviceIDMapping;	// 32 = 0x20
    short _deviceIDCounter;	// 40 = 0x28
    NSMutableDictionary *_gameControllers;	// 48 = 0x30
    short _gameControllerDeviceIDCounter;	// 56 = 0x38
    NSMutableArray *_lyricsEvents;	// 64 = 0x40
    struct _MRHIDButtonEvent _lastVolumeIncrementEvent;	// 72 = 0x48
    struct _MRHIDButtonEvent _lastVolumeDecrementEvent;	// 84 = 0x54
    NSMutableDictionary *_pendingPlaybackSessionMigrateEvents;	// 96 = 0x60
    MRAVEndpoint *_destinationEndpoint;	// 104 = 0x68
    NSMutableDictionary *_discoveryModes;	// 112 = 0x70
    MRPasscodeCredentials *_credentials;	// 120 = 0x78
    MRPlaybackQueueClient *_playbackQueueRequests;	// 128 = 0x80
    MRCoreUtilsPairingSessionPeer *_sessionPeer;	// 136 = 0x88
    id _pinPairingToken;	// 144 = 0x90
    NSString *_destinationOutputDeviceUID;	// 152 = 0x98
    NSString *_destinationGroupUID;	// 160 = 0xa0
    id <MRDExternalDeviceServerClientConnectionDelegate> _serverDelegate;	// 168 = 0xa8
    NSDictionary *_connectUserInfo;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0020000000073023
@property(retain, nonatomic) NSDictionary *connectUserInfo; // @synthesize connectUserInfo=_connectUserInfo;
@property(nonatomic) __weak id <MRDExternalDeviceServerClientConnectionDelegate> serverDelegate; // @synthesize serverDelegate=_serverDelegate;
@property(copy, nonatomic) NSString *destinationGroupUID; // @synthesize destinationGroupUID=_destinationGroupUID;
@property(copy, nonatomic) NSString *destinationOutputDeviceUID; // @synthesize destinationOutputDeviceUID=_destinationOutputDeviceUID;
@property(retain, nonatomic) id pinPairingToken; // @synthesize pinPairingToken=_pinPairingToken;
@property(readonly, nonatomic) MRCoreUtilsPairingSessionPeer *sessionPeer; // @synthesize sessionPeer=_sessionPeer;
@property(readonly, nonatomic) MRPlaybackQueueClient *playbackQueueRequests; // @synthesize playbackQueueRequests=_playbackQueueRequests;
@property(retain, nonatomic) MRPasscodeCredentials *credentials; // @synthesize credentials=_credentials;
- (void)gameController:(id)arg1 propertiesDidChange:(id)arg2;	// IMP=0x0010000000072ce4
- (void)_handleEndpointDidDisconnect:(id)arg1;	// IMP=0x0010000000072c50
- (_Bool)isAllowedToSendCommand:(unsigned int)arg1;	// IMP=0x0010000000072c01
- (_Bool)isAllowedToSendMessageType:(unsigned long long)arg1;	// IMP=0x0010000000072bb0
- (_Bool)hasAccessToPlayerPath:(id)arg1;	// IMP=0x0010000000072b42
- (id)outputDevicesForEndpoint:(id)arg1;	// IMP=0x001000000007293e
@property(readonly, nonatomic) NSArray *discoverySessionConfigurations;
- (void)setDiscoveryMode:(unsigned int)arg1 forConfiguration:(id)arg2;	// IMP=0x0010000000072823
- (unsigned int)discoveryModeForConfiguration:(id)arg1;	// IMP=0x0010000000072772
- (id)exportContentItemArtworkUpdates:(id)arg1 forPlayerPath:(id)arg2;	// IMP=0x0010000000072671
- (id)exportContentItems:(id)arg1 forPlayerPath:(id)arg2;	// IMP=0x00100000000723f8
- (id)exportPlaybackQueue:(id)arg1 forPlayerPath:(id)arg2;	// IMP=0x001000000007214c
- (id)exportSupportedCommands:(id)arg1;	// IMP=0x0010000000072022
- (id)exportNowPlayingState:(id)arg1 forPlayerPath:(id)arg2;	// IMP=0x0010000000071ede
- (_Bool)_wantsLibraryCommands;	// IMP=0x0010000000071e24
@property(retain, nonatomic) MRAVEndpoint *destinationEndpoint;
@property(readonly, nonatomic, getter=isDestinationLocal) _Bool destinationLocal;
- (void)requestDestinationEndpoint:(CDUnknownBlockType)arg1;	// IMP=0x0010000000071679
- (void)requestConnectedDestinationEndpoint:(CDUnknownBlockType)arg1;	// IMP=0x00100000000714da
- (void)localizeDestinationOrigin:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000713ba
- (void)localizeDestinationPlayerPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000071200
- (void)flushPendingPlaybackSessionMigrateEvents:(CDUnknownBlockType)arg1;	// IMP=0x0010000000070f07
- (_Bool)removePendingPlaybackSessionMigrateEvent:(id)arg1;	// IMP=0x0010000000070d59
- (void)addPendingPlaybackSessionMigrateEvent:(id)arg1 playerPath:(id)arg2;	// IMP=0x0010000000070be1
- (void)flushVolumeEvents:(CDUnknownBlockType)arg1;	// IMP=0x0010000000070a68
- (void)addVolumeEvent:(struct _MRHIDButtonEvent)arg1;	// IMP=0x00100000000709b7
- (void)flushLyricsEvents:(CDUnknownBlockType)arg1;	// IMP=0x0010000000070767
- (void)removeLyricsEvent:(id)arg1;	// IMP=0x00100000000704c7
- (void)addLyricsEvent:(id)arg1;	// IMP=0x001000000007040d
- (unsigned long long)virtualTouchIDWithPackedID:(unsigned long long)arg1;	// IMP=0x001000000007038a
- (void)unregisterAllVirtualVoiceInputDevices;	// IMP=0x001000000007011f
- (void)addRegisteredVirtualVoiceInputDevice:(unsigned int)arg1;	// IMP=0x001000000006fe74
- (void)removeAllVirtualTouchDevices;	// IMP=0x001000000006fdd1
- (id)virtualTouchDeviceWithID:(unsigned long long)arg1;	// IMP=0x001000000006fb31
- (unsigned long long)addVirtualTouchDevice:(id)arg1;	// IMP=0x001000000006f9aa
- (void)removeGameController:(unsigned long long)arg1;	// IMP=0x001000000006f8f1
- (id)gameControllerWithID:(unsigned long long)arg1;	// IMP=0x001000000006f7a8
- (unsigned long long)addGameController:(id)arg1;	// IMP=0x001000000006f5ec
@property(readonly, nonatomic) NSArray *registeredVirtualVoiceInputDevices;
@property(readonly, nonatomic) NSArray *virtualTouchDevices;
@property(readonly, nonatomic) unsigned int connectOptions;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x001000000006ee0a
- (id)initWithConnection:(id)arg1 queue:(id)arg2;	// IMP=0x001000000006ec43

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

