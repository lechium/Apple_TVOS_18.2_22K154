//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessageTransport.h>

@class HMDProcessMonitor, HMXPCMessageTransportConfiguration, NSArray, NSDictionary, NSMutableSet, NSObject, NSString, NSXPCInterface;
@protocol HMDAppProtectionGuard, HMDXPCListener, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDXPCMessageTransport : HMFMessageTransport
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HMDProcessMonitor *_processMonitor;	// 16 = 0x10
    HMXPCMessageTransportConfiguration *_configuration;	// 24 = 0x18
    id <HMDXPCListener> _listener;	// 32 = 0x20
    id <HMDAppProtectionGuard> _appProtectionGuard;	// 40 = 0x28
    NSMutableSet *_mutableConnections;	// 48 = 0x30
    NSXPCInterface *_exportedInterface;	// 56 = 0x38
    NSXPCInterface *_remoteObjectInterface;	// 64 = 0x40
    CDUnknownBlockType _clientConnectionFactory;	// 72 = 0x48
}

+ (id)logCategory;	// IMP=0x00100000006f9be2
+ (id)accessorySetupTransport;	// IMP=0x00100000006f9bb2
+ (id)defaultTransport;	// IMP=0x00100000006f9b82
- (void).cxx_destruct;	// IMP=0x00000000006f9498
@property(copy) CDUnknownBlockType clientConnectionFactory; // @synthesize clientConnectionFactory=_clientConnectionFactory;
@property(readonly) HMDProcessMonitor *processMonitor; // @synthesize processMonitor=_processMonitor;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000006f8bd7
- (void)connectionDidInvalidate:(id)arg1;	// IMP=0x00000000006f8acf
- (void)connectionDidDeactivate:(id)arg1;	// IMP=0x00000000006f89c7
- (void)connectionDidActivate:(id)arg1;	// IMP=0x00000000006f88bf
- (void)connectionDidStart:(id)arg1;	// IMP=0x00000000006f87b7
- (void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x00000000006f872c
- (id)logIdentifier;	// IMP=0x00000000006f8706
- (void)handleProcessStateDidChangeNotification:(id)arg1;	// IMP=0x00000000006f84b7
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000006f793a
@property(readonly, copy) NSDictionary *stateDump;
@property(readonly, copy) NSArray *connections;
- (void)stop;	// IMP=0x00000000006f76e2
- (void)start;	// IMP=0x00000000006f746d
@property(readonly) NSObject<OS_dispatch_queue> *queue;
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000006f72f6
- (id)initWithConfiguration:(id)arg1 listener:(id)arg2 processMonitor:(id)arg3 appProtectionGuard:(id)arg4;	// IMP=0x00000000006f70db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

