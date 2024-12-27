//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableArray, NSMutableDictionary, NSObject, NSString, RPCompanionLinkClient;
@protocol HMDRapportMessagingClientFactory, HMDRapportMessagingReachabilityDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDRapportMessaging : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    id <HMDRapportMessagingReachabilityDelegate> _reachabilityDelegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    id <HMDRapportMessagingClientFactory> _clientFactory;	// 32 = 0x20
    RPCompanionLinkClient *_discoveryClient;	// 40 = 0x28
    CDUnknownBlockType _requestHandler;	// 48 = 0x30
    NSMutableArray *_requestQueue;	// 56 = 0x38
    NSMutableDictionary *_deviceClients;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x0010000000974c9f
+ (id)sharedInstance;	// IMP=0x0010000000974c6f
- (void).cxx_destruct;	// IMP=0x0000000000973a6a
@property(nonatomic) __weak id <HMDRapportMessagingReachabilityDelegate> reachabilityDelegate; // @synthesize reachabilityDelegate=_reachabilityDelegate;
- (void)_updateDevice:(id)arg1 reachable:(_Bool)arg2;	// IMP=0x000000000097398e
- (void)_invalidateDestinationDeviceWithIDSIdentifier:(id)arg1;	// IMP=0x000000000097376d
- (id)_createRapportClientForDevice:(id)arg1;	// IMP=0x00000000009733cf
- (id)_clientForIDSIdentifier:(id)arg1 withDevice:(id)arg2;	// IMP=0x00000000009730f8
- (void)_completeQueuedRequests;	// IMP=0x0000000000972f3d
- (void)_queueRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000972db6
- (void)_handleRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000972ce1
- (void)_configureDiscoveryClientWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000972622
- (_Bool)isRapportDeviceDiscoveredWithIdentifier:(id)arg1;	// IMP=0x0000000000972431
- (void)sendRequest:(id)arg1 requestID:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000009722b6
- (void)registerRequestHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000097221d
- (void)configureDiscoveryClientWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000972184
- (id)initWithClientFactory:(id)arg1;	// IMP=0x000000000097203d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

