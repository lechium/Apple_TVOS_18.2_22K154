//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface IXServerConnection : NSObject
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_internalQueue;	// 16 = 0x10
    NSMutableDictionary *_coordinatorInstances;	// 24 = 0x18
    NSMutableDictionary *_promiseInstances;	// 32 = 0x20
}

+ (id)retrySynchronousIPC:(CDUnknownBlockType)arg1;	// IMP=0x001000000005d796
+ (id)sharedConnection;	// IMP=0x001000000005bc36
- (void).cxx_destruct;	// IMP=0x0000000000060c1e
@property(readonly, nonatomic) NSMutableDictionary *promiseInstances; // @synthesize promiseInstances=_promiseInstances;
@property(readonly, nonatomic) NSMutableDictionary *coordinatorInstances; // @synthesize coordinatorInstances=_coordinatorInstances;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (oneway void)_client_promiseWithUUID:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3;	// IMP=0x0000000000060952
- (oneway void)_client_promiseDidCompleteSuccessfullyWithUUID:(id)arg1;	// IMP=0x0000000000060711
- (oneway void)_client_coordinatorWithUUID:(id)arg1 didUpdateProgress:(double)arg2 forPhase:(unsigned long long)arg3 overallProgress:(double)arg4;	// IMP=0x000000000006048a
- (oneway void)_client_coordinatorWithUUID:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3;	// IMP=0x0000000000060156
- (oneway void)_client_coordinatorDidCompleteSuccessfullyWithUUID:(id)arg1 forRecordPromise:(id)arg2;	// IMP=0x000000000005fe3e
- (oneway void)_client_coordinatorShouldBeginPostProcessingWithUUID:(id)arg1 forRecordPromise:(id)arg2;	// IMP=0x000000000005fb26
- (oneway void)_client_coordinatorDidInstallPlaceholderWithUUID:(id)arg1 forRecordPromise:(id)arg2;	// IMP=0x000000000005f80e
- (oneway void)_client_coordinatorShouldBeginRestoringUserDataWithUUID:(id)arg1;	// IMP=0x000000000005f5cd
- (oneway void)_client_coordinatorWithUUID:(id)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;	// IMP=0x000000000005f370
- (oneway void)_client_coordinatorShouldPauseWithUUID:(id)arg1;	// IMP=0x000000000005f12f
- (oneway void)_client_coordinatorShouldResumeWithUUID:(id)arg1;	// IMP=0x000000000005eeee
- (oneway void)_client_coordinatorShouldPrioritizeWithUUID:(id)arg1;	// IMP=0x000000000005ecad
- (oneway void)_client_coordinatorDidRegisterForObservationWithUUID:(id)arg1;	// IMP=0x000000000005ea6c
- (void)resetDaemonConnection;	// IMP=0x000000000005e6f6
- (void)unregisterForUpdatesForDataPromiseWithUUID:(id)arg1;	// IMP=0x000000000005e41f
- (void)registerDataPromiseForUpdates:(id)arg1 notifyDaemon:(_Bool)arg2;	// IMP=0x000000000005e022
- (void)unregisterForUpdatesForAppInstallCoordinatorWithUUID:(id)arg1;	// IMP=0x000000000005dd4b
- (void)registerAppInstallCoordinatorForUpdates:(id)arg1 notifyDaemon:(_Bool)arg2;	// IMP=0x000000000005d92d
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000005d615
- (id)_onQueue_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000005d4c5
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000005d2dd
- (id)_onQueue_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000005d10f
- (id)init;	// IMP=0x000000000005d05f
- (_Bool)_onQueue_createXPCConnectionIfNecessary;	// IMP=0x000000000005c8f6
- (void)_onQueue_doCleanupForPromiseWithUUID:(id)arg1;	// IMP=0x000000000005c782
- (void)_onQueue_doCleanupForCoordinatorWithUUID:(id)arg1;	// IMP=0x000000000005c60e
- (void)_onQueue_reSetupObserversAfter:(id)arg1;	// IMP=0x000000000005c1c7
- (void)_onQueue_scanForAndRemoveEmptyHashTables;	// IMP=0x000000000005bcc3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

