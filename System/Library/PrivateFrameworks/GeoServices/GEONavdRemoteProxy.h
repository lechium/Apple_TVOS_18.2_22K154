//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEONavdServerProxy.h"

@class NSMutableArray, NSMutableDictionary, NSObject, NSXPCConnection;
@protocol GEONavdXPCInterface, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEONavdRemoteProxy : GEONavdServerProxy
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSMutableArray *_observers;	// 16 = 0x10
    NSMutableDictionary *_handlers;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000012341a6
- (void)navdProxyReceivedHypothesis:(id)arg1 forClient:(id)arg2;	// IMP=0x0000000001233f6c
- (void)navdProxyReceivedData:(id)arg1 ofType:(id)arg2;	// IMP=0x0000000001233c09
- (void)dealloc;	// IMP=0x0000000001233b62
- (void)forceCacheRefresh;	// IMP=0x0000000001233acf
- (void)didPostUINotification:(unsigned long long)arg1 forDestination:(id)arg2 fromClient:(id)arg3;	// IMP=0x0000000001233a41
- (void)stopMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3;	// IMP=0x00000000012338dd
- (void)onlyPerformLocalUpdatesForPlannedDestination:(id)arg1 client:(id)arg2;	// IMP=0x0000000001233773
- (void)requestRefreshForPlannedDestination:(id)arg1 client:(id)arg2;	// IMP=0x000000000123365f
- (void)startMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000000012333bf
- (void)shouldPostDarwinNotificationForNextUpdate:(_Bool)arg1;	// IMP=0x00000000012333b9
- (void)statusWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000001233279
@property(readonly, nonatomic) id <GEONavdXPCInterface> remoteObjectProxyThreadUnsafe;
- (void)unregisterObserver:(id)arg1;	// IMP=0x0000000001233189
- (void)registerObserver:(id)arg1;	// IMP=0x00000000012330cf
- (void)_connectToDaemonIfNeededThreadUnsafe;	// IMP=0x00000000012325d9
- (void)close;	// IMP=0x0000000001232433
- (void)open;	// IMP=0x00000000012323cb
- (id)init;	// IMP=0x0000000001232223

@end

