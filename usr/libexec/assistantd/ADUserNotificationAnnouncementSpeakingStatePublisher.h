//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSXPCConnection, NSXPCListener;
@protocol OS_dispatch_queue;

@interface ADUserNotificationAnnouncementSpeakingStatePublisher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSArray *_currentlyAnnouncingNotificationIdentifiers;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
    NSXPCListener *_listener;	// 32 = 0x20
}

+ (id)_notificationIdentifiersForObject:(id)arg1;	// IMP=0x00200000000e14f1
+ (_Bool)supportsPublishingArrivalForAceObject:(id)arg1;	// IMP=0x00100000000e1441
+ (id)sharedPublisher;	// IMP=0x00100000000e1411
- (void).cxx_destruct;	// IMP=0x00200000000e0fc3
- (void)_invalidateConnection;	// IMP=0x00100000000e0f7e
- (void)connectionInvalidated;	// IMP=0x00100000000e0eb8
- (void)connectionInterrupted;	// IMP=0x00100000000e0df2
- (id)connectionProxy;	// IMP=0x00100000000e0dd5
- (void);	// IMP=0x00100000000e0d50
- (void)_publishFinishedAndRemoveAllObjectsForReason:(id)arg1;	// IMP=0x00100000000e0c5b
- (void)_publishCancelAndRemoveAllObjectsForReason:(id)arg1;	// IMP=0x00100000000e0b66
- (_Bool)_publishStateChanged:(long long)arg1 forIdentifiers:(id)arg2;	// IMP=0x00100000000e0955
- (void)_publishObjectHasArrived:(id)arg1;	// IMP=0x00100000000e05b5
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000e0485
- (void)requestLifecycleObserver:(id)arg1 requestWasCancelledWithInfo:(id)arg2 forReason:(long long)arg3 origin:(long long)arg4 client:(id)arg5 successorInfo:(id)arg6;	// IMP=0x00100000000e043a
- (void)requestLifecycleObserver:(id)arg1 requestDidEndWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00100000000e03ef
- (void)requestLifecycleObserver:(id)arg1 requestWillBeginWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00100000000e03a4
- (void)publishObjectHasArrived:(id)arg1;	// IMP=0x00100000000e0317
- (void)dealloc;	// IMP=0x00100000000e02bd
- (id)_initWithQueue:(id)arg1;	// IMP=0x00100000000e01b9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

