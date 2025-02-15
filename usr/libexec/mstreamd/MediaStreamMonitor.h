//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSIOSAlbumSharingDaemon, NSString, NSTimer;

@interface MediaStreamMonitor : NSObject
{
    NSTimer *_idleTimer;	// 8 = 0x8
    _Bool _lastNotifiedState;	// 16 = 0x10
    NSTimer *_idleStateNotificationTimer;	// 24 = 0x18
    MSIOSAlbumSharingDaemon *_albumSharingDaemon;	// 32 = 0x20
    int _busyCount;	// 40 = 0x28
    NSTimer *_albumSharingDaemonPokeTimer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000001ad5
@property(nonatomic) __weak MSIOSAlbumSharingDaemon *albumSharingDaemon; // @synthesize albumSharingDaemon=_albumSharingDaemon;
- (void)doNothingTimer:(id)arg1;	// IMP=0x0010000000001aa8
- (void)mstreamdIdleTimerDidFire:(id)arg1;	// IMP=0x001000000000199a
- (void)albumSharingDaemonPokeTimerDidFire:(id)arg1;	// IMP=0x00100000000018ff
- (void)MSAlbumSharingDaemonDidUnidleMomentarily:(id)arg1;	// IMP=0x00100000000018ed
- (void)MSAlbumSharingDaemonDidUnidle:(id)arg1;	// IMP=0x0010000000001888
- (void)MSAlbumSharingDaemonDidIdle:(id)arg1;	// IMP=0x0010000000001777
- (void)_didUnidle;	// IMP=0x00100000000016b4
- (void)_resetIdleTimer;	// IMP=0x00100000000015c4
- (void)_didIdle;	// IMP=0x00100000000013f7
- (void)_stopIdleTimer;	// IMP=0x0010000000001359
- (void)_startIdleTimerWithInterval:(double)arg1;	// IMP=0x001000000000127c
- (void)dealloc;	// IMP=0x0010000000001217
- (id)init;	// IMP=0x00100000000010f5
- (id)_dormantTimerWithSelector:(SEL)arg1;	// IMP=0x0010000000001065

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

