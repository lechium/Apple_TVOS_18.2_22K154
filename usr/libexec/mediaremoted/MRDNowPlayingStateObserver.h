//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDNowPlayingServer, NSMutableArray, NSMutableDictionary;
@protocol MRDNowPlayingStateObserverDelegate, OS_dispatch_queue;

@interface MRDNowPlayingStateObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableArray *_observedNowPlayingNotifications;	// 16 = 0x10
    id _observedVolumeControlNotificationToken;	// 24 = 0x18
    unsigned int _registeredForNowPlayingCount;	// 32 = 0x20
    unsigned int _registeredForVolumeAvailabilityCount;	// 36 = 0x24
    _Bool _wantsCoalescedStateChanged;	// 40 = 0x28
    id <MRDNowPlayingStateObserverDelegate> _delegate;	// 48 = 0x30
    NSMutableDictionary *_coalescingStates;	// 56 = 0x38
    MRDNowPlayingServer *_npServer;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000cf61b
@property(readonly, nonatomic) MRDNowPlayingServer *npServer; // @synthesize npServer=_npServer;
@property(retain, nonatomic) NSMutableDictionary *coalescingStates; // @synthesize coalescingStates=_coalescingStates;
@property(readonly, nonatomic) _Bool wantsCoalescedStateChanged; // @synthesize wantsCoalescedStateChanged=_wantsCoalescedStateChanged;
@property(nonatomic) __weak id <MRDNowPlayingStateObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_onQueue_notifyCoalescedPlayerPath:(id)arg1;	// IMP=0x00100000000cf3bc
- (id)_onQueue_stateForPlayerPath:(id)arg1;	// IMP=0x00100000000cf163
- (void)_removeNowPlayingNotifications;	// IMP=0x00100000000cefe0
- (void)_addNowPlayingNotification:(id)arg1 selector:(SEL)arg2;	// IMP=0x00100000000cef3b
- (void)_onQueue_setReceiveVolumeControlUpdates:(_Bool)arg1;	// IMP=0x00100000000cecc3
- (void)_onQueue_setReceiveNowPlayingUpdates:(_Bool)arg1;	// IMP=0x00100000000cea68
- (void)_setReceiveUpdates:(_Bool)arg1 forSource:(long long)arg2;	// IMP=0x00100000000ce9da
- (void)_handleRemovePlayer:(id)arg1;	// IMP=0x00100000000ce845
- (void)_handlePlayerStateChanged:(id)arg1;	// IMP=0x00100000000ce689
- (void)_handleContentItemArtworkChanged:(id)arg1;	// IMP=0x00100000000ce48d
- (void)_handleContentItemsChanged:(id)arg1;	// IMP=0x00100000000ce291
- (void)_handlePlaybackQueueCapabilitiesChanged:(id)arg1;	// IMP=0x00100000000ce0a8
- (void)_handlePlaybackQueueChanged:(id)arg1;	// IMP=0x00100000000cdeb1
- (void)_handleNowPlayingPlaybackStateChanged:(id)arg1;	// IMP=0x00100000000cdc45
- (void)_handleSupportedCommandsDidChange:(id)arg1;	// IMP=0x00100000000cda4e
- (void)_handleDefaultSupportedCommandsChanged:(id)arg1;	// IMP=0x00100000000cd87b
- (void)_handleVolumeAvailabilityDidChangeNotification:(id)arg1;	// IMP=0x00100000000cd701
- (void)_handleRemoveClient:(id)arg1;	// IMP=0x00100000000cd64a
- (void);	// IMP=0x00100000000cd40b
- (void)_handleNowPlayingPlayerDidChange:(id)arg1;	// IMP=0x00100000000cd354
- (void)_handleNowPlayingClientDidChange:(id)arg1;	// IMP=0x00100000000cd29d
- (_Bool)_shouldNotifyChange:(id)arg1;	// IMP=0x00100000000cd295
- (void)stopReceivingUpdatesForSource:(long long)arg1;	// IMP=0x00100000000cd27e
- (void)beginReceivingUpdatesForSource:(long long)arg1;	// IMP=0x00100000000cd264
- (id)debugDescription;	// IMP=0x00100000000cd0b0
- (void)dealloc;	// IMP=0x00100000000cd050
- (id)init;	// IMP=0x00100000000ccf40

@end

