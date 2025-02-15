//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRAVEndpoint, MRAVEndpointObserver, MRArtwork, MRClient, MRNowPlayingPlayerResponse, MRPlayer, MRPlayerPath, NSMutableArray, NSString;
@protocol MRQHONowPlayingControllerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRQHONowPlayingController : NSObject
{
    _Bool _registeredForNotifications;	// 8 = 0x8
    _Bool _registeredForEndpointChanges;	// 9 = 0x9
    _Bool _registeredForPlayerPathInvalidations;	// 10 = 0xa
    _Bool _updateLoadingEnabled;	// 11 = 0xb
    _Bool _requestingQueue;	// 12 = 0xc
    NSString *_uid;	// 16 = 0x10
    MRClient *_client;	// 24 = 0x18
    MRPlayer *_player;	// 32 = 0x20
    id <MRQHONowPlayingControllerDelegate> _delegate;	// 40 = 0x28
    MRNowPlayingPlayerResponse *_response;	// 48 = 0x30
    MRPlayerPath *_unresolvedPlayerPath;	// 56 = 0x38
    MRPlayerPath *_resolvedPlayerPath;	// 64 = 0x40
    MRAVEndpoint *_endpoint;	// 72 = 0x48
    id _playerPathInvalidationObserver;	// 80 = 0x50
    MRAVEndpointObserver *_endpointObserver;	// 88 = 0x58
    NSString *_endpointObserverGroupUID;	// 96 = 0x60
    NSMutableArray *_deferredContentItemsToMerge;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_queue;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 120 = 0x78
    NSString *_cachedNowPlayingArtworkIdentifier;	// 128 = 0x80
    MRArtwork *_cachedNowPlayingArtwork;	// 136 = 0x88
}

+ (id)proactiveEndpointController;	// IMP=0x0060000000062fda
+ (id)localRouteController;	// IMP=0x0060000000062f91
- (void).cxx_destruct;	// IMP=0x000000000006b93b
@property(retain, nonatomic) MRArtwork *cachedNowPlayingArtwork; // @synthesize cachedNowPlayingArtwork=_cachedNowPlayingArtwork;
@property(retain, nonatomic) NSString *cachedNowPlayingArtworkIdentifier; // @synthesize cachedNowPlayingArtworkIdentifier=_cachedNowPlayingArtworkIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool requestingQueue; // @synthesize requestingQueue=_requestingQueue;
@property(nonatomic) _Bool updateLoadingEnabled; // @synthesize updateLoadingEnabled=_updateLoadingEnabled;
@property(nonatomic) _Bool registeredForPlayerPathInvalidations; // @synthesize registeredForPlayerPathInvalidations=_registeredForPlayerPathInvalidations;
@property(nonatomic) _Bool registeredForEndpointChanges; // @synthesize registeredForEndpointChanges=_registeredForEndpointChanges;
@property(nonatomic) _Bool registeredForNotifications; // @synthesize registeredForNotifications=_registeredForNotifications;
@property(retain, nonatomic) NSMutableArray *deferredContentItemsToMerge; // @synthesize deferredContentItemsToMerge=_deferredContentItemsToMerge;
@property(retain, nonatomic) NSString *endpointObserverGroupUID; // @synthesize endpointObserverGroupUID=_endpointObserverGroupUID;
@property(retain, nonatomic) MRAVEndpointObserver *endpointObserver; // @synthesize endpointObserver=_endpointObserver;
@property(retain, nonatomic) id playerPathInvalidationObserver; // @synthesize playerPathInvalidationObserver=_playerPathInvalidationObserver;
@property(retain, nonatomic) MRAVEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(retain, nonatomic) MRPlayerPath *resolvedPlayerPath; // @synthesize resolvedPlayerPath=_resolvedPlayerPath;
@property(retain, nonatomic) MRPlayerPath *unresolvedPlayerPath; // @synthesize unresolvedPlayerPath=_unresolvedPlayerPath;
@property(copy, nonatomic) MRNowPlayingPlayerResponse *response; // @synthesize response=_response;
@property(nonatomic) __weak id <MRQHONowPlayingControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MRPlayer *player; // @synthesize player=_player;
@property(readonly, nonatomic) MRClient *client; // @synthesize client=_client;
@property(readonly, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void)_unregisterForEndpointChanges;	// IMP=0x000000000006b3d7
- (void)_registerForEndpointChangesIfNeeded;	// IMP=0x000000000006afbb
- (void)_unregisterForPlayerPathInvalidations;	// IMP=0x000000000006af2e
- (void)_registerForPlayerPathInvalidationsIfNeeded;	// IMP=0x000000000006acfa
- (void)_handleActiveSystemEndpointChangedNotification:(id)arg1;	// IMP=0x000000000006ab67
- (void)_handleSupportedCommandsChangedNotification:(id)arg1;	// IMP=0x000000000006a7f3
- (void)_handlePlaybackStateChangedNotification:(id)arg1;	// IMP=0x000000000006a3ab
- (void)_handlePlaybackQueueContentItemsArtworkChangedNotification:(id)arg1;	// IMP=0x000000000006a019
- (void)_handlePlaybackQueueContentItemsChangedNotification:(id)arg1;	// IMP=0x0000000000069b9c
- (void)_handlePlaybackQueueChangedNotification:(id)arg1;	// IMP=0x0000000000069702
- (void)_unregisterNotificationHandlers;	// IMP=0x000000000006967b
- (void)_registerNotificationHandlersIfNeeded;	// IMP=0x00000000000694bb
- (void)_notifyDelegateOfInvalidation;	// IMP=0x00000000000693b9
- (void)_notifyDelegateOfError:(id)arg1;	// IMP=0x0000000000069275
- (void)_notifyDelegateOfUpdatedPlayerLastPlayingDate:(id)arg1;	// IMP=0x0000000000069017
- (void)_notifyDelegateOfUpdatedDeviceLastPlayingDate:(id)arg1;	// IMP=0x0000000000068db9
- (void)_notifyDelegateOfSupportedCommandsChangeFromOldCommands:(id)arg1 toNewCommands:(id)arg2;	// IMP=0x0000000000068b38
- (void)_notifyDelegateOfUpdatedArtwork:(id)arg1;	// IMP=0x00000000000688da
- (void)_notifyDelegateOfUpdatedContentItems:(id)arg1;	// IMP=0x000000000006867c
- (void)_notifyDelegateOfPlaybackQueueChangeFromOldQueue:(id)arg1 toNewQueue:(id)arg2;	// IMP=0x00000000000683fb
- (void)_notifyDelegateOfPlaybackStateChangeFromOldState:(unsigned int)arg1 toNewState:(unsigned int)arg2;	// IMP=0x00000000000681ca
- (void)_notifyDelegateOfNewResponse:(id)arg1;	// IMP=0x0000000000068086
- (void)_onQueue_clearState;	// IMP=0x0000000000067fcb
- (void)_resolvePlayerPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000067ef7
- (void)_createPlayerPathForEndpoint:(id)arg1 client:(id)arg2 player:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000067b6d
- (void)_onQueue_retrieveEndpointForUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000677d7
- (id)_onQueue_updateByMergingContentItemChanges:(id)arg1;	// IMP=0x000000000006709d
- (void)_onQueue_updateWithNewPlaybackQueue:(id)arg1;	// IMP=0x0000000000067022
- (void)_onQueue_updateWithNewSupportedCommands:(id)arg1;	// IMP=0x0000000000066fa7
- (void)_onQueue_updateWithNewPlayerLastPlayingDate:(id)arg1;	// IMP=0x0000000000066f2c
- (void)_onQueue_updateWithNewDeviceLastPlayingDate:(id)arg1;	// IMP=0x0000000000066eb1
- (void)_onQueue_updateWithNewPlaybackState:(unsigned int)arg1;	// IMP=0x0000000000066e5a
- (void)_onQueue_updateByReplacingWithNewResponse:(id)arg1;	// IMP=0x0000000000066dfb
- (void)_requestPlayerLastPlayingDateForPlayerPath:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000066c59
- (void)_requestSupportedCommandsForPlayerPath:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000066bc1
- (void)_downloadContentItemArtwork:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000667c2
- (void)_requestContentItemArtwork:(id)arg1 forPlayerPath:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000066685
- (void)_onQueue_requestAndUpdateArtworkForContentItems:(id)arg1 forPlayerPath:(id)arg2 withReason:(id)arg3;	// IMP=0x00000000000651a5
- (void)_onQueue_requestPlaybackQueueForPlayerPath:(id)arg1 includeArtwork:(_Bool)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000064e44
- (id)_loadNowPlayingStateForPlayerPath:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000644f7
- (void)_loadNowPlayingStateForEndpoint:(id)arg1 client:(id)arg2 player:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000063db4
- (void)_loadNowPlayingStateForUID:(id)arg1 client:(id)arg2 player:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000063990
- (void)_reloadForPlayerPathInvalidation;	// IMP=0x000000000006382a
- (void)_reloadForCompleteInvalidation;	// IMP=0x00000000000636d1
- (void)endLoadingUpdates;	// IMP=0x0000000000063537
- (void)beginLoadingUpdates;	// IMP=0x0000000000063314
- (void)dealloc;	// IMP=0x000000000006322b
- (id)initWithUID:(id)arg1 client:(id)arg2 player:(id)arg3;	// IMP=0x0000000000063021
- (id)initWithUID:(id)arg1;	// IMP=0x000000000006300a

@end

