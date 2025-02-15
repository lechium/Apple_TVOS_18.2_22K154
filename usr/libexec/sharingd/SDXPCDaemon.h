//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString, NSXPCConnection, NSXPCInterface, NSXPCListener;
@protocol OS_dispatch_queue;

@interface SDXPCDaemon : NSObject
{
    NSXPCListener *_xpcListener;	// 8 = 0x8
    _Bool _activateCalled;	// 16 = 0x10
    _Bool _invalidateCalled;	// 17 = 0x11
    _Bool _invalidateDone;	// 18 = 0x12
    NSSet *_activeConnections;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001a6f18
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) NSSet *activeConnections; // @synthesize activeConnections=_activeConnections;
- (void)connectionInvalidated:(id)arg1;	// IMP=0x00100000001a6e15
- (void)connectionEstablished:(id)arg1;	// IMP=0x00100000001a6d35
- (_Bool)shouldAcceptNewConnection:(id)arg1;	// IMP=0x00100000001a6c55
@property(readonly, nonatomic) NSXPCInterface *remoteObjectInterface;
@property(readonly, nonatomic) NSXPCInterface *exportedInterface;
@property(readonly, nonatomic) NSString *machServiceName;
- (void)establishConnectionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a68c8
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;	// IMP=0x00100000001a678a
- (void)onqueue_connectionInvalidated:(id)arg1;	// IMP=0x00100000001a663c
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000001a624c
- (void)onqueue_invalidate;	// IMP=0x00100000001a60f6
- (void)_invalidate;	// IMP=0x00100000001a6095
- (void)onqueue_activate;	// IMP=0x00100000001a5f11
- (void)_activate;	// IMP=0x00100000001a5eb0
@property(readonly, copy, nonatomic) NSXPCConnection *currentConnection;
- (void)onqueue_remoteObjectProxyForConnection:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a5d2a
- (void)remoteObjectProxyForConnection:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a5c52
- (void)onqueue_enumerateRemoteObjectProxiesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a5950
- (void)enumerateRemoteObjectProxiesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a58a6
- (void)dealloc;	// IMP=0x00100000001a57b7
- (id)init;	// IMP=0x00100000001a5760

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

