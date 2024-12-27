//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MRDIdleTopologySimplifier : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSMutableDictionary *_playbackTimers;	// 16 = 0x10
    double _recentlyPlayingInterval;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000139077
@property(readonly, nonatomic) double recentlyPlayingInterval; // @synthesize recentlyPlayingInterval=_recentlyPlayingInterval;
@property(retain, nonatomic) NSMutableDictionary *playbackTimers; // @synthesize playbackTimers=_playbackTimers;
- (void)_onQueue_simplifyToplogyOfPlayerPathIfNeeded:(id)arg1;	// IMP=0x0010000000138609
- (void)_onQueue_adjustPlaybackTimerIfNeededForPlayerPath:(id)arg1;	// IMP=0x001000000013819b
- (void)_handleIsPlayingDidChangeNotification:(id)arg1;	// IMP=0x0010000000138050
- (void)unregisterForChanges;	// IMP=0x0010000000137ff6
- (void)registerForChanges;	// IMP=0x0010000000137f85
- (_Bool)isMultiplayerHost;	// IMP=0x0010000000137f3a
- (id)localDeviceUID;	// IMP=0x0010000000137f28
- (double)timeSincePlayingForPlayerPath:(id)arg1;	// IMP=0x0010000000137e4f
- (id)lastPlayingDateForPlayerPath:(id)arg1;	// IMP=0x0010000000137d71
- (unsigned int)playbackStateForPlayerPath:(id)arg1;	// IMP=0x0010000000137c9f
- (void)dealloc;	// IMP=0x0010000000137bde
- (void)_initialize;	// IMP=0x0010000000137b3b
- (id)init;	// IMP=0x0010000000137a36

@end

