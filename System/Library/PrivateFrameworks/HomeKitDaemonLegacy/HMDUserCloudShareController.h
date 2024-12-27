//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMFTimer, NSHashTable, NSMutableArray, NSMutableDictionary, NSString;
@protocol HMDUserCloudShareControllerDelegate, OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface HMDUserCloudShareController : NSObject
{
    NSObject<OS_os_log> *_logger;	// 8 = 0x8
    NSHashTable *_connectedClients;	// 16 = 0x10
    NSMutableDictionary *_containerIdToConnectionIdentifierMap;	// 24 = 0x18
    id <HMDUserCloudShareControllerDelegate> _delegate;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_clientQueue;	// 40 = 0x28
    NSMutableArray *_pendingRequests;	// 48 = 0x30
    double _pendingRequestTimeoutInterval;	// 56 = 0x38
    HMFTimer *_pendingRequestTimer;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x0010000000641a77
+ (id)identifierForConnection:(id)arg1;	// IMP=0x00100000006418de
- (void).cxx_destruct;	// IMP=0x000000000064163f
@property(retain, nonatomic) HMFTimer *pendingRequestTimer; // @synthesize pendingRequestTimer=_pendingRequestTimer;
@property(readonly, nonatomic) double pendingRequestTimeoutInterval; // @synthesize pendingRequestTimeoutInterval=_pendingRequestTimeoutInterval;
@property(readonly, nonatomic) NSMutableArray *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property __weak id <HMDUserCloudShareControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *containerIdToConnectionIdentifierMap; // @synthesize containerIdToConnectionIdentifierMap=_containerIdToConnectionIdentifierMap;
- (void)invalidateXpcClient:(id)arg1;	// IMP=0x0000000000641515
- (void)_invalidateXpcClient:(id)arg1;	// IMP=0x000000000064138e
- (void)deregisterXpcClient:(id)arg1;	// IMP=0x00000000006412d6
- (void)_deregisterXpcClient:(id)arg1;	// IMP=0x0000000000640ee4
- (void)registerWithXpcClient:(id)arg1 containerIDs:(id)arg2;	// IMP=0x0000000000640e06
- (void)_registerWithXpcClient:(id)arg1 containerIDs:(id)arg2;	// IMP=0x00000000006407ae
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000064073d
@property(readonly, nonatomic) NSHashTable *connectedClients; // @synthesize connectedClients=_connectedClients;
- (void)handleShareRepairForRemoteClientRequest:(id)arg1 home:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000006401ca
- (void)handleShareForRemoteClientRequest:(id)arg1 home:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000063f851
- (void)_handleShareForRemoteClientRequest:(id)arg1;	// IMP=0x000000000063f60f
- (void)_sendRepairRequest:(id)arg1 toConnection:(id)arg2;	// IMP=0x000000000063f40b
- (void)_sendShareRequest:(id)arg1 toConnection:(id)arg2;	// IMP=0x000000000063f226
- (void)_resumeRequestsForContainerID:(id)arg1 connection:(id)arg2;	// IMP=0x000000000063ecf2
- (void)_handlePendingRequestTimeouts;	// IMP=0x000000000063e8c9
- (void)_addRequestToPending:(id)arg1;	// IMP=0x000000000063e758
- (void)_removeTimerIfNotNeeded;	// IMP=0x000000000063e5af
- (void)_startTimerIfNeeded;	// IMP=0x000000000063e43c
- (id)_connectionForContainerID:(id)arg1;	// IMP=0x000000000063e1bd
- (void)configure;	// IMP=0x000000000063e1b7
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 pendingRequestTimeoutInterval:(double)arg3;	// IMP=0x000000000063e078

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

