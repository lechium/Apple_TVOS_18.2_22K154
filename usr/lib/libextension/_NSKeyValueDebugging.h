//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSTimer;

__attribute__((visibility("hidden")))
@interface _NSKeyValueDebugging : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_willDidCountTable;	// 16 = 0x10
    _Bool _hasScheduledWillDidClear;	// 24 = 0x18
    NSMutableDictionary *_consistencyTable;	// 32 = 0x20
    NSTimer *_consistencyCheckTimer;	// 40 = 0x28
    NSMutableDictionary *_observedKeyPathsByObserver;	// 48 = 0x30
}

- (void)_object:(id)arg1 trackChangeForKeyOrKeys:(id)arg2 operation:(long long)arg3;	// IMP=0x00000000008a2c64
- (void)_checkConsistency;	// IMP=0x00000000008a29d3
- (void)_checkConsistencyForStatsWhileOutOfLock:(id)arg1 forPair:(id)arg2 timingDescription:(id)arg3;	// IMP=0x00000000008a24f1
- (void)_clearWillDidTable;	// IMP=0x00000000008a206e
- (void)dealloc;	// IMP=0x00000000008a1fa2
- (id)init;	// IMP=0x00000000008a1e4c

@end

