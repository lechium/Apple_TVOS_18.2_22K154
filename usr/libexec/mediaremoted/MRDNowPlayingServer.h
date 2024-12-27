//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MRDDeviceInfoDataSource, MRDElectedPlayerController, MRDLockScreenController, MRDNowPlayingClient, MRDNowPlayingLauncher, MRDNowPlayingOriginClient, MRDNowPlayingPlaybackQueueServer, MRDNowPlayingPlayerClient, MRPlayerPath, MSVTimer, NSArray, NSHashTable, NSMutableArray, NSMutableDictionary, NSSet, NSString;
@protocol MRDLockScreenRoutingControllerProtocol, OS_dispatch_queue;

@interface MRDNowPlayingServer : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSMutableArray *_originClients;	// 16 = 0x10
    NSMutableDictionary *_nowPlayingApplicationIsPlayingStates;	// 24 = 0x18
    MRDNowPlayingPlaybackQueueServer *_playbackQueueServer;	// 32 = 0x20
    NSHashTable *_originForwarders;	// 40 = 0x28
    MRDDeviceInfoDataSource *_deviceInfoDataSource;	// 48 = 0x30
    MSVTimer *_wakeDeviceTimer;	// 56 = 0x38
    id _nowPlayingInfoObserverHandle;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_nowPlayingInfoObserverQueue;	// 72 = 0x48
    MRDNowPlayingOriginClient *_activeOriginClient;	// 80 = 0x50
    MRDNowPlayingOriginClient *_localOriginClient;	// 88 = 0x58
    MRDElectedPlayerController *_electedPlayerController;	// 96 = 0x60
    MRDLockScreenController *_lockScreenController;	// 104 = 0x68
    id <MRDLockScreenRoutingControllerProtocol> _lockScreenRoutingController;	// 112 = 0x70
    MRDNowPlayingLauncher *_nowPlayingCapLauncher;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0020000000116448
@property(retain, nonatomic) MRDNowPlayingLauncher *nowPlayingCapLauncher; // @synthesize nowPlayingCapLauncher=_nowPlayingCapLauncher;
@property(readonly, nonatomic) id <MRDLockScreenRoutingControllerProtocol> lockScreenRoutingController; // @synthesize lockScreenRoutingController=_lockScreenRoutingController;
@property(readonly, nonatomic) MRDLockScreenController *lockScreenController; // @synthesize lockScreenController=_lockScreenController;
@property(readonly, nonatomic) MRDElectedPlayerController *electedPlayerController; // @synthesize electedPlayerController=_electedPlayerController;
@property(retain, nonatomic) MRDNowPlayingOriginClient *localOriginClient; // @synthesize localOriginClient=_localOriginClient;
@property(retain, nonatomic) MRDNowPlayingOriginClient *activeOriginClient; // @synthesize activeOriginClient=_activeOriginClient;
- (id)_onQueue_originClientForGroupLeaderOfDeviceUID:(id)arg1;	// IMP=0x0010000000116049
- (id)_onQueue_originClientForDeviceUID:(id)arg1;	// IMP=0x0010000000115d60
- (id)_onQueue_originClientForOrigin:(id)arg1;	// IMP=0x0010000000115b59
- (id)_onQueue_restoredActiveOrigin;	// IMP=0x0010000000115ab4
- (void)_onQueue_savePersistentActiveOrigin:(id)arg1;	// IMP=0x0010000000115978
- (void)_onQueue_setActiveOrigin:(id)arg1 saveState:(_Bool)arg2;	// IMP=0x00100000001157c1
- (void)setActiveOrigin:(id)arg1;	// IMP=0x0010000000115711
- (id)overrideClient;	// IMP=0x00100000001156c1
- (void)setOverrideClient:(id)arg1;	// IMP=0x0010000000115658
- (MISSING_TYPE *)_removeNowPlayingClient:forOrigin: /* Error: Ran out of types for this method. */;	// IMP=0x00100000001155e0
- (void)_removeOrigin:(id)arg1;	// IMP=0x00100000001151d3
- (void)_addOrigin:(id)arg1 withDeviceInfo:(id)arg2 emitNotification:(_Bool)arg3;	// IMP=0x0010000000114d26
- (_Bool)_hasForwarderForOrigin:(id)arg1;	// IMP=0x0010000000114b80
- (void)unregisterOriginForwarder:(id)arg1;	// IMP=0x0010000000114ad4
- (void)registerOriginForwarder:(id)arg1;	// IMP=0x00100000001149e3
- (id)augmentedUserInfoForPlayerPath:(id)arg1;	// IMP=0x00100000001147aa
- (void)maybePostDistributedNotifications;	// IMP=0x001000000011400b
- (void)postLockScreenControlsDidChangeDistributedNotification;	// IMP=0x0010000000113f59
- (void)postLockScreenPlayerPathDidChange:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000113b35
- (void)postLockScreenActiveDidChange:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000113a65
- (void)postLockScreenVisibleDidChange:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000113995
- (void)postElectedPlayerDidChange:(id)arg1 change:(long long)arg2 event:(long long)arg3 reason:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000001137e3
- (void)postPlayerDidUnregisterWithPlaybackState:(unsigned int)arg1 canBeNowPlaying:(_Bool)arg2 forPlayerPath:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000113693
- (void)postPlayerDidRegisterForPlayerPath:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001135ed
- (void)postPlaybackQueueParticipantsDidChange:(id)arg1 forPlayerPath:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000011350c
- (void)postPlaybackQueueCapabilitiesDidChange:(unsigned long long)arg1 forPlayerPath:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000113416
- (void)postPlaybackQueueContentItemsArtworkDidChange:(id)arg1 forPlayerPath:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000113062
- (void)postPlaybackQueueContentItemsDidChange:(id)arg1 forPlayerPath:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000112c30
- (void)postPlaybackQueueDidChange:(id)arg1 nowPlayingItemDidChange:(_Bool)arg2 forPlayerPath:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000112754
- (void)postSupportedCommandsDidChange:(id)arg1 forPlayerPath:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001125df
- (void)postNowPlayingPlayerStateDidChange:(id)arg1 forPlayerPath:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000112539
- (void)postPlaybackStateDidChange:(unsigned int)arg1 forPlayerPath:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000112415
- (void)postAudioFormatContentInfoDidChangeForOrigin:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000112328
- (void)postActivePlayerPathsDidChangeForOrigin:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000011223b
- (void)postPictureInPictureDidChange:(_Bool)arg1 forPlayerPath:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000112147
- (void)postIsPlayingDidChange:(_Bool)arg1 lastPlayingTimestamp:(double)arg2 forPlayerPath:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x001000000011200d
- (void)postActivePlayerDidChangeForPlayerPath:(id)arg1 withPlaybackState:(unsigned int)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000111f19
- (void)postNowPlayingClientStateDidChange:(id)arg1 forPlayerPath:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000111e73
- (void)postClientDidUnregisterForPlayerPath:(id)arg1 hasDefaultSupportedCommands:(_Bool)arg2 canBeNowPlaying:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000111d4b
- (void)postClientDidRegisterForPlayerPath:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000111ca5
- (void)postPlayerDidUnregisterCanBeNowPlayingForPlayerPath:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000111bff
- (void)postPlayerDidRegisterCanBeNowPlayingForPlayerPath:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000111b59
- (void)postClientDidUnregisterCanBeNowPlayingForPlayerPath:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000111ab3
- (void)postClientDidRegisterCanBeNowPlayingForPlayerPath:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001119dd
- (void)postNowPlayingApplicationDidChangeForPlayerPath:(id)arg1 withPlaybackState:(unsigned int)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000111867
- (void)postIsMutedDidChange:(id)arg1 isMuted:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000111752
- (void)postVolumeCapabilitiesDidChange:(id)arg1 capabilities:(unsigned int)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001115f7
- (void)postVolumeDidChange:(id)arg1 volume:(float)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001114db
- (void)postDeviceInfoDidChange:(id)arg1 previousDeviceInfo:(id)arg2 forOrigin:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000111363
- (void)postOriginDidUnRegister:(id)arg1 deviceInfo:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000011125d
- (void)postOriginDidRegister:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000111174
- (void)postActiveOriginDidChange:(id)arg1 withPlaybackState:(unsigned int)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000111080
- (void)postClientNowPlayingNotificationNamed:(id)arg1 userInfo:(id)arg2 predicate:(CDUnknownBlockType)arg3;	// IMP=0x0010000000110ea0
- (void)postClientNowPlayingNotificationNamed:(id)arg1 userInfo:(id)arg2;	// IMP=0x0010000000110e8b
- (void)collectDiagnostic:(id)arg1;	// IMP=0x00100000001109e7
@property(readonly, nonatomic) _Bool hasElectedPlayer;
@property(readonly, nonatomic) _Bool lockScreenRecommendationActive;
@property(readonly, nonatomic) _Bool lockScreenPlatterActive;
- (void)lockScreenController:(id)arg1 playerPathDidChange:(id)arg2;	// IMP=0x00100000001108e5
- (void)lockScreenController:(id)arg1 lockScreenWidgetVisibleDidChange:(_Bool)arg2;	// IMP=0x00100000001108cf
- (void)lockScreenController:(id)arg1 lockScreenWidgetActiveDidChange:(_Bool)arg2;	// IMP=0x00100000001108b9
- (void)electedPlayerController:(id)arg1 electedPlayerDidChange:(id)arg2 change:(long long)arg3 event:(long long)arg4 reason:(id)arg5;	// IMP=0x0010000000110886
- (_Bool)nowPlayingLauncher:(id)arg1 shouldRelaunch:(id)arg2;	// IMP=0x001000000011080a
- (void)nowPlayingServer:(id)arg1 activeOriginDidChangeFromOriginClient:(id)arg2 toOriginClient:(id)arg3;	// IMP=0x001000000011073a
- (void)nowPlayingOriginClientDidChangeAudioFormatContentInfo:(id)arg1;	// IMP=0x00100000001106e9
- (void)nowPlayingOriginClientPlaybackDidTimeout:(id)arg1;	// IMP=0x00100000001105eb
- (void)nowPlayingOriginClient:(id)arg1 activePlayerClientsDidChange:(id)arg2;	// IMP=0x001000000011059a
- (void)nowPlayingOriginClient:(id)arg1 currentRouteIsMutedDidChange:(_Bool)arg2;	// IMP=0x0010000000110545
- (void)nowPlayingOriginClient:(id)arg1 currentRouteVolumeDidChange:(float)arg2;	// IMP=0x00100000001104ea
- (void)nowPlayingOriginClient:(id)arg1 currentRouteVolumeControlCapabilitiesDidChange:(unsigned int)arg2;	// IMP=0x0010000000110495
- (void)nowPlayingOriginClient:(id)arg1 clientDidUnregister:(id)arg2;	// IMP=0x00100000001102f8
- (void)nowPlayingOriginClient:(id)arg1 clientDidRegister:(id)arg2;	// IMP=0x00100000001102a7
- (void)nowPlayingOriginClient:(id)arg1 deviceInfoDidChange:(id)arg2 previousDeviceInfo:(id)arg3;	// IMP=0x0010000000110295
- (void)handleNowPlayingOriginClient:(id)arg1 deviceInfoDidChange:(id)arg2 previousDeviceInfo:(id)arg3;	// IMP=0x0010000000110168
- (void)nowPlayingOriginClient:(id)arg1 applicationActivityStatusDidChange:(id)arg2;	// IMP=0x001000000011009c
- (void)nowPlayingOriginClient:(id)arg1 applicationActivityDidEnd:(id)arg2;	// IMP=0x001000000010ffd0
- (void)nowPlayingOriginClient:(id)arg1 applicationActivityDidBegin:(id)arg2;	// IMP=0x001000000010ff04
- (void)nowPlayingOriginClient:(id)arg1 activePlayerPathDidChange:(id)arg2 withPlaybackState:(unsigned int)arg3;	// IMP=0x001000000010fecd
- (void)nowPlayingClient:(id)arg1 applicationDidForeground:(_Bool)arg2;	// IMP=0x001000000010fd83
- (void)nowPlayingPlayerClient:(id)arg1 clientCanBeNowPlayingDidChange:(_Bool)arg2;	// IMP=0x001000000010fd21
- (void)nowPlayingClient:(id)arg1 playerDidUnregister:(id)arg2;	// IMP=0x001000000010fb24
- (void)nowPlayingClient:(id)arg1 playerDidRegister:(id)arg2;	// IMP=0x001000000010fad3
- (void)nowPlayingClient:(id)arg1 clientStateDidChange:(id)arg2;	// IMP=0x001000000010fa58
- (void)nowPlayingClient:(id)arg1 activePlayerDidChangeFromPlayerClient:(id)arg2 toPlayerClient:(id)arg3;	// IMP=0x001000000010f992
- (void)wakeDeviceIfNecessaryForNowPlayingPlayerClient:(id)arg1;	// IMP=0x001000000010f7c5
- (void)stopObservingNowPlayingInfo;	// IMP=0x001000000010f758
- (void)startObservingNowPlayingInfoForNowPlayingPlayerClient:(id)arg1;	// IMP=0x001000000010f0bf
- (void)nowPlayingPlayerClient:(id)arg1 playbackQueueParticipantsDidChange:(id)arg2;	// IMP=0x001000000010f044
- (void)nowPlayingPlayerClient:(id)arg1 playerCanBeNowPlayingDidChange:(_Bool)arg2;	// IMP=0x001000000010efe2
- (void)nowPlayingPlayerClient:(id)arg1 pictureInPictureEnabledDidChange:(_Bool)arg2;	// IMP=0x001000000010ef7e
- (void)nowPlayingPlayerClient:(id)arg1 playbackQueueArtworkContentItemsDidChange:(id)arg2;	// IMP=0x001000000010ef03
- (void)nowPlayingPlayerClient:(id)arg1 playbackQueueContentItemsDidChange:(id)arg2;	// IMP=0x001000000010ee88
- (void)nowPlayingPlayerClient:(id)arg1 playbackQueueCapabilitiesDidChange:(unsigned long long)arg2;	// IMP=0x001000000010ee31
- (void)nowPlayingPlayerClient:(id)arg1 playbackQueueDidChange:(id)arg2 nowPlayingItemDidChange:(_Bool)arg3;	// IMP=0x001000000010edb5
- (void)nowPlayingPlayerClient:(id)arg1 supportedCommandsDidChange:(id)arg2;	// IMP=0x001000000010ed3a
- (void)nowPlayingPlayerClient:(id)arg1 playbackStateDidChange:(unsigned int)arg2;	// IMP=0x001000000010ece5
- (void)nowPlayingPlayerClient:(id)arg1 isPlayingDidChange:(_Bool)arg2;	// IMP=0x001000000010eb14
- (void)nowPlayingPlayerClient:(id)arg1 playerStateDidChange:(id)arg2;	// IMP=0x001000000010ea99
- (void)_handleSendMusicHandoffEventMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010e837
- (void)_handleBeginMusicHandoffSessionMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010e409
- (void)_handleFetchPlaybackQueueParticipantsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010e230
- (void)_handleGetImageDimensionsForArtworkDataMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010e132
- (void)_handleGetAudioFormatContentInfoForOriginMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010df5f
- (void)_handleRegisterForWakingNowPlayingNotifications:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010de1f
- (void)_handleSetOriginClientPropertiesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010dc78
- (void)_handleSetPlayerClientPropertiesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010dad0
- (void)_handleGetLastPlayingDateMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010d7f0
- (void)_handleSetDefaultSupportedCommandsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010d3d2
- (void)_handleSetSupportedCommandsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010d22d
- (void)_handleGetSupportedCommandsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010c473
- (void)_handlePlaybackSessionRequest:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010c2f0
- (void)_handleGetElectedPlayerPathMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010c243
- (void)_handleGetDeviceInfo:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010c0b7
- (void)_handleContentItemArtworkChangedMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010bfca
- (void)_handleContentItemChangedMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010bea0
- (void)_handleSetPlayerPictureInPictureEnabledMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010bddd
- (void)_handleGetPlayerPictureInPictureEnabledMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010bc90
- (void)_handleGetActivePlayerPathsForLocalOriginMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010bb4e
- (void)_handleRemoveNowPlayingPlayerMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010ba59
- (void)_handleGetNowPlayingPlayerMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010b920
- (void)_handleSetNowPlayingPlayerMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010b76c
- (void)_handleGetNowPlayingPlayersMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010b440
- (void)_handleRemoveNowPlayingClientMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010b34e
- (void)_handleGetNowPlayingClientMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010b215
- (void)_handleSetNowPlayingClientMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010ae94
- (void)_handleGetNowPlayingClientsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010a948
- (void)_handleResolvePlayerPath:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010a739
- (void)_handleSendLyricsEvent:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010a497
- (void)_handleRequestAudioAmplitudeSamplesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010a1f2
- (void)_handleRequestVideoThumbnailsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000109f4d
- (void)_handleGetAnyAppIsPlayingMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000109e99
- (void)_handleSetPlaybackStateMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000109c9b
- (void)_handleGetPlaybackStateMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000109b44
- (void)_handleUpdatePlayerPropertiesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000109998
- (void)_handleSetPlayerPropertiesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010980b
- (void)_handleGetPlayerPropertiesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000001096ab
- (void)_handleUpdateClientPropertiesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000001094d5
- (void)_handleSetClientPropertiesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000109326
- (void)_handleGetClientPropertiesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000001091c6
- (void)_handleResetPlaybackQueueRequests:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010909c
- (void)_handleSetHardwareRemoteBehaviorMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000108f89
- (void)_handleSetPlaybackQueueCapabilities:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000108ece
- (void)_handleRequestPlaybackQueueCapabilities:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000108d82
- (void)_handleSetPlaybackQueue:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000108b08
- (void)_handleEndApplicationActivityMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000108a83
- (void)_handleGetApplicationActivityMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010899d
- (void)_handleBeginApplicationActivityMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000108897
- (void)_handleSetCanBeNowPlayingPlayerMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000108697
- (void)_handleSetCanBeNowPlayingAppMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000001084d5
- (void)_handleSetOverriddenNowPlayingAppMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000001080bd
- (void)_handleSetNowPlayingAppOverrideMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000107d59
- (void)updateDeviceInfo:(id)arg1 origin:(id)arg2;	// IMP=0x0010000000107ce1
- (void)unregisterOrigin:(id)arg1;	// IMP=0x0010000000107ccf
- (void)reregisterOrigin:(id)arg1 deviceInfo:(id)arg2;	// IMP=0x00100000001078db
- (void)registerOrigin:(id)arg1 deviceInfo:(id)arg2;	// IMP=0x00100000001078c3
- (void)_handleGetActiveOriginMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000001077dd
- (void)_handleSetActiveOriginMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000001076f1
- (void)_handleGetAvailableOriginsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010748a
- (void)beginMusicHandoffSessionWithSource:(id)arg1 destination:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000106e13
- (void)restoreClientState:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000105292
- (void)restoreDeviceInfoToClient:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000105077
- (void)clearNowPlayingClientForXPCClient:(id)arg1;	// IMP=0x0010000000104c53
- (id)originClientForGroupLeaderOfDeviceUID:(id)arg1;	// IMP=0x0010000000104b13
- (id)originClientForDeviceUID:(id)arg1;	// IMP=0x00100000001049d3
- (id)originClientForOrigin:(id)arg1;	// IMP=0x001000000010487f
- (id)localPlayersForXpcClient:(id)arg1;	// IMP=0x001000000010479d
- (id)xpcClientForPlayerPath:(id)arg1;	// IMP=0x0010000000104557
- (id)_onQueue_queryExistingPlayerPath:(id)arg1;	// IMP=0x0010000000104140
- (id)queryExistingPlayerPath:(id)arg1;	// IMP=0x0010000000103fec
- (id)onQueue_resolveExistingPlayerPath:(id)arg1;	// IMP=0x0010000000103c6b
- (id)resolveExistingPlayerPath:(id)arg1;	// IMP=0x0010000000103b14
- (id)resolvePlayerPath:(id)arg1 fromClient:(id)arg2 useDefaultPlayerIfNoneSpecified:(_Bool)arg3;	// IMP=0x00100000001033f3
- (id)resolvePlayerPath:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000001033db
- (id)queryExistingPlayerPathForXPCMessage:(id)arg1 forClient:(id)arg2;	// IMP=0x0010000000103055
- (id)queryPlayerPath:(id)arg1 forClient:(id)arg2;	// IMP=0x0010000000102ff6
- (id)queryPlayerPathForXPCMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000102f82
@property(readonly, nonatomic) NSArray *originClients;
- (id)_onQueue_allNowPlayingInfoClientsForOrigin:(id)arg1;	// IMP=0x0010000000102cae
@property(readonly, nonatomic) NSSet *allLocalNowPlayingInfoClients;
- (id)_onQueue_allNowPlayingInfoClients;	// IMP=0x00100000001028f8
@property(readonly, nonatomic) NSSet *allNowPlayingInfoClients;
@property(readonly, nonatomic) MRPlayerPath *localActivePlayerPath;
@property(readonly, nonatomic) MRPlayerPath *activePlayerPath;
- (id)_onQueue_companionOriginClient;	// IMP=0x0010000000102595
- (id)_onQueue_activeOriginClient;	// IMP=0x001000000010255c
@property(readonly, nonatomic) MRDNowPlayingOriginClient *companionOriginClient;
@property(readonly, nonatomic) MRDNowPlayingClient *localActiveNowPlayingClient;
@property(readonly, nonatomic) MRDNowPlayingClient *activeNowPlayingClient;
@property(readonly, nonatomic) MRDNowPlayingPlayerClient *localActivePlayerClient;
@property(readonly, nonatomic) MRDNowPlayingPlayerClient *activePlayerClient;
@property(readonly, nonatomic) unsigned int localActivePlayerPlaybackState;
@property(readonly, nonatomic) unsigned int activePlayerPlaybackState;
@property(readonly, nonatomic) _Bool localActivePlayerIsPlaying;
@property(readonly, nonatomic) _Bool activePlayerIsPlaying;
@property(readonly, nonatomic) NSString *localActiveClientBundleIdentifier;
@property(readonly, nonatomic) NSString *activeClientBundleIdentifier;
@property(readonly, nonatomic) int localActiveClientPID;
@property(readonly, nonatomic) int activeClientPID;
- (void)handleXPCMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000001016aa
- (id)_createLockScreenRoutingController;	// IMP=0x001000000010163e
- (void)dealloc;	// IMP=0x00100000001015c9
- (id)init;	// IMP=0x00100000001012e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

