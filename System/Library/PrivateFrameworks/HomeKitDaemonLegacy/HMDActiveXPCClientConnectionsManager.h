//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSHashTable, NSObject, NSSet, NSString;
@protocol HMDActiveXPCClientConnectionsManagerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDActiveXPCClientConnectionsManager : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSString *_logIdentifier;	// 16 = 0x10
    id <HMDActiveXPCClientConnectionsManagerDelegate> _delegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    NSHashTable *_mutableClientConnections;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x001000000022c5f2
- (void).cxx_destruct;	// IMP=0x000000000022c341
@property(readonly) NSHashTable *mutableClientConnections; // @synthesize mutableClientConnections=_mutableClientConnections;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak id <HMDActiveXPCClientConnectionsManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (void)handleClientConnectionDidDeactivate:(id)arg1;	// IMP=0x000000000022c173
- (void)handleClientConnectionDidActivate:(id)arg1;	// IMP=0x000000000022c014
- (void)removeClientConnection:(id)arg1;	// IMP=0x000000000022be3f
- (void)addClientConnection:(id)arg1;	// IMP=0x000000000022bc56
- (void)configure;	// IMP=0x000000000022bba2
@property(readonly, copy) NSSet *clientConnections;
- (id)initWithLogIdentifier:(id)arg1 workQueue:(id)arg2;	// IMP=0x000000000022b9cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

