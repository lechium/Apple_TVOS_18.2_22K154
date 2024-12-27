//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHomeManager, HMDProcessMonitor, NSMutableSet, NSObject, NSString, NSXPCInterface, NSXPCListener;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCHIPXPCListener : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSXPCListener *_listener;	// 24 = 0x18
    NSXPCInterface *_exportedInterface;	// 32 = 0x20
    NSXPCInterface *_remoteObjectInterface;	// 40 = 0x28
    HMDHomeManager *_homeManager;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_processMonitorQueue;	// 56 = 0x38
    HMDProcessMonitor *_processMonitor;	// 64 = 0x40
    NSMutableSet *_mutableConnections;	// 72 = 0x48
}

+ (id)logCategory;	// IMP=0x00100000001a856f
- (void).cxx_destruct;	// IMP=0x00000000001a81c1
@property(readonly, nonatomic) NSMutableSet *mutableConnections; // @synthesize mutableConnections=_mutableConnections;
@property(readonly, nonatomic) HMDProcessMonitor *processMonitor; // @synthesize processMonitor=_processMonitor;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *processMonitorQueue; // @synthesize processMonitorQueue=_processMonitorQueue;
@property(readonly, nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly, nonatomic) NSXPCInterface *remoteObjectInterface; // @synthesize remoteObjectInterface=_remoteObjectInterface;
@property(readonly, nonatomic) NSXPCInterface *exportedInterface; // @synthesize exportedInterface=_exportedInterface;
@property(readonly) NSXPCListener *listener; // @synthesize listener=_listener;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000001a7a61
- (id)createClientConnectionWithRemoteObjectProxy:(id)arg1 homeManager:(id)arg2 connection:(id)arg3 backgroundModeEntitled:(_Bool)arg4;	// IMP=0x00000000001a78f8
- (void)stop;	// IMP=0x00000000001a78bb
- (void)start;	// IMP=0x00000000001a77a8
- (id)initWithHomeManager:(id)arg1;	// IMP=0x00000000001a752c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

