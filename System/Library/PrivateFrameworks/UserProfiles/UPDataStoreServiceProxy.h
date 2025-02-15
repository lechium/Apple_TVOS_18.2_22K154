//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnection, NSString;
@protocol OS_dispatch_queue, UPDataStoreServerInterface, UPDataStoreServiceProxyDelegate;

__attribute__((visibility("hidden")))
@interface UPDataStoreServiceProxy : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    BSServiceConnection *_lock_connection;	// 16 = 0x10
    id <UPDataStoreServerInterface> _lock_remoteTarget;	// 24 = 0x18
    id <UPDataStoreServiceProxyDelegate> _lock_delegate;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000026735
- (void)_queue_connectionInvalidated;	// IMP=0x0000000000026681
- (void)_queue_connectionInterrupted;	// IMP=0x0000000000026602
- (_Bool)_lock_isActive;	// IMP=0x00000000000265f4
- (id)_remoteTarget;	// IMP=0x0000000000026538
- (oneway void)refreshPrimaryProfileCohortWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000264cf
- (oneway void)dumpObjectsOfTypes:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026444
- (id)dumpObjectsOfTypes:(id)arg1 outError:(out id *)arg2;	// IMP=0x00000000000263bb
- (void)invalidate;	// IMP=0x0000000000026336
- (_Bool)activate;	// IMP=0x0000000000026223
- (void)dealloc;	// IMP=0x000000000002616b
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000025d89

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

