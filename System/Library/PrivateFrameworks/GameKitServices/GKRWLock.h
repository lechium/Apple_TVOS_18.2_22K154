//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GKRWLock : NSObject
{
    struct _opaque_pthread_rwlock_t {
        long long __sig;
        char __opaque[192];
    } _rwLock;	// 8 = 0x8
}

- (void)unlock;	// IMP=0x000000000003b3de
- (void)rdlock;	// IMP=0x000000000003b3d0
- (int)tryrdlock;	// IMP=0x000000000003b3c2
- (void)wrlock;	// IMP=0x000000000003b3b4
- (void)dealloc;	// IMP=0x000000000003b37a
- (id)init;	// IMP=0x000000000003b330

@end

