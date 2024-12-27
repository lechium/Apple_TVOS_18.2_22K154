//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface CFPDObserverOnlyTombstone : NSObject
{
    struct __CFString *_domain;	// 8 = 0x8
    struct __CFString *_userOrContainer;	// 16 = 0x10
    union {
        NSObject<OS_xpc_object> *_single;
        struct __CFSet *_multiple;
    } _observers;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    unsigned short _shmemIndex;	// 36 = 0x24
    unsigned int _isManaged:1;	// 38 = 0x26
    unsigned int _notificationInProgress:1;	// 38 = 0x26
    unsigned int _needToNotify:1;	// 38 = 0x26
}

- (void)notifyObservers;	// IMP=0x0000000000189177
- (_Bool)managed;	// IMP=0x0000000000188f32
- (id)description;	// IMP=0x0000000000188ea0
- (void)transferObservingConnectionsToSource:(id)arg1;	// IMP=0x0000000000188c1a
- (void)removeObservingConnection:(id)arg1 daemon:(id)arg2;	// IMP=0x0000000000188a15
- (unsigned long long)hash;	// IMP=0x00000000001889d1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000018893b
- (void)dealloc;	// IMP=0x00000000001888a5
- (void)alreadyLocked_transferObservingConnectionsFromSource:(id)arg1;	// IMP=0x000000000018843f
- (id)initMatchingSource:(id)arg1;	// IMP=0x0000000000188343

@end

