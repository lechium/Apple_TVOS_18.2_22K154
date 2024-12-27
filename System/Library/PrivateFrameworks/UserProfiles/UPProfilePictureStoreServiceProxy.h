//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnection, NSString;
@protocol OS_dispatch_queue, UPProfilePictureStoreServerInterface, UPProfilePictureStoreServiceProxyDelegate;

__attribute__((visibility("hidden")))
@interface UPProfilePictureStoreServiceProxy : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    BSServiceConnection *_lock_connection;	// 16 = 0x10
    id <UPProfilePictureStoreServerInterface> _lock_remoteTarget;	// 24 = 0x18
    int _lock_notificationToken;	// 32 = 0x20
    id <UPProfilePictureStoreServiceProxyDelegate> _lock_delegate;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000706f
- (void)_queue_handleProfilePictureStoreDidUpdate;	// IMP=0x0000000000006fad
- (void)_queue_connectionInvalidated;	// IMP=0x0000000000006ef9
- (void)_queue_connectionInterrupted;	// IMP=0x0000000000006e7a
- (_Bool)_lock_isActive;	// IMP=0x0000000000006e6c
- (id)_remoteTarget;	// IMP=0x0000000000006db0
- (oneway void)pruneProfilePictureCacheForRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006d25
- (oneway void)fetchProfilePictureCacheSnapshotWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006cbc
- (oneway void)fetchProfilePictureForRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006c31
- (id)pruneProfilePictureCacheForRequest:(id)arg1 error:(out id *)arg2;	// IMP=0x0000000000006ba8
- (id)profilePictureCacheSnapshotWithError:(out id *)arg1;	// IMP=0x0000000000006b49
- (id)cachedProfilePictureForRequest:(id)arg1 error:(out id *)arg2;	// IMP=0x0000000000006ac0
- (void)invalidate;	// IMP=0x0000000000006a1f
- (_Bool)activate;	// IMP=0x000000000000690c
- (void)dealloc;	// IMP=0x0000000000006854
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000000062f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

