//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ADSystemMuteModeObserver : NSObject
{
    int _ringerStateToken;	// 8 = 0x8
    long long _muteMode;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x004000000023e46c
- (void).cxx_destruct;	// IMP=0x002000000023e3da
- (void)_unregisterForRingerMuteStateNotifications;	// IMP=0x001000000023e3ae
- (void)_registerForRingerMuteStateNotifications;	// IMP=0x001000000023e26c
- (int)_ringerStateToken;	// IMP=0x001000000023e23f
- (void)_updateRingerMuteState:(int)arg1;	// IMP=0x001000000023e184
- (long long)muteMode;	// IMP=0x001000000023e0fa
- (void)dealloc;	// IMP=0x001000000023e0bc
- (id)init;	// IMP=0x001000000023dfc0

@end

