//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion, NSError, NSString, NSXPCConnection, _UIAsyncInvocation, _UIRemoteViewService;

__attribute__((visibility("hidden")))
@interface _UIViewServiceInterface : NSObject
{
    struct os_unfair_lock_s _terminationStateLock;	// 8 = 0x8
    NSError *_terminationError;	// 16 = 0x10
    CDUnknownBlockType _terminationHandler;	// 24 = 0x18
    _Atomic _Bool _isTerminated;	// 32 = 0x20
    _UIAsyncInvocation *_terminateInvocation;	// 40 = 0x28
    NSString *_serviceBundleIdentifier;	// 48 = 0x30
    _UIRemoteViewService *_service;	// 56 = 0x38
    BKSProcessAssertion *_serviceProcessAssertion;	// 64 = 0x40
    NSXPCConnection *_serviceConnection;	// 72 = 0x48
}

+ (id)connectToViewService:(id)arg1 deputyInterfaces:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000015529f5
+ (id)connectToViewServiceWithBundleIdentifier:(id)arg1 deputyInterfaces:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000155283b
+ (void)initialize;	// IMP=0x0010000001552798
@property(readonly, nonatomic) CDStruct_4c969caf serviceAuditToken;
@property(readonly, nonatomic) int servicePID;
- (void)dealloc;	// IMP=0x000000000155399e
- (id)disconnect;	// IMP=0x0000000001553891
- (void)setTerminationHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000001553835
- (void)_terminateUnconditionallyThen:(CDUnknownBlockType)arg1;	// IMP=0x000000000155367c
- (id)_terminateWithError:(id)arg1;	// IMP=0x0000000001553629
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;	// IMP=0x0000000001553559
- (id)connectToDeputyWithInterface:(id)arg1 fromExportedHostingObject:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000001552eb9
- (id)_initWithConnectionInfo:(CDStruct_a70f6672)arg1 service:(id)arg2 deputyInterfaces:(id)arg3;	// IMP=0x0000000001552e91
- (id)_initWithConnectionInfo:(CDStruct_a70f6672)arg1 serviceBundleIdentifier:(id)arg2 deputyInterfaces:(id)arg3;	// IMP=0x0000000001552e6f
- (id)_initWithConnectionInfo:(CDStruct_a70f6672)arg1 serviceBundleIdentifier:(id)arg2 service:(id)arg3 deputyInterfaces:(id)arg4;	// IMP=0x0000000001552b0c
- (void)_objc_initiateDealloc;	// IMP=0x00000000015527c7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

