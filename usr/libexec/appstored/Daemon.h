//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AppMetricsMonitor, JobManagerListener, LaunchServicesObserver, NSCountedSet, NSMutableDictionary, NSString, NSXPCListener, ODRAppReviewListener, ODRDevtoolsListener, ODRDiagnosticsListener, ODRLaunchServicesListener, ODRServiceDelegate, RequestBroker, SoftwareUpdateListener, StoreQueueListener, XPCServiceBroker;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface Daemon : NSObject
{
    int _defaultsToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_jetsamSource;	// 24 = 0x18
    JobManagerListener *_jobManagerDelegate;	// 32 = 0x20
    NSXPCListener *_jobManagerListener;	// 40 = 0x28
    int _keybagToken;	// 48 = 0x30
    LaunchServicesObserver *_launchServicesObserver;	// 56 = 0x38
    ODRAppReviewListener *_odrAppReviewDelegate;	// 64 = 0x40
    NSXPCListener *_odrAppReviewListener;	// 72 = 0x48
    ODRDiagnosticsListener *_odrCtlDelegate;	// 80 = 0x50
    NSXPCListener *_odrCtlListener;	// 88 = 0x58
    ODRDevtoolsListener *_odrDevtoolsDelegate;	// 96 = 0x60
    NSXPCListener *_odrDevtoolsListener;	// 104 = 0x68
    ODRServiceDelegate *_odrFoundationDelegate;	// 112 = 0x70
    NSXPCListener *_odrFoundationListener;	// 120 = 0x78
    ODRLaunchServicesListener *_odrLaunchServicesDelegate;	// 128 = 0x80
    NSXPCListener *_odrLaunchServicesListener;	// 136 = 0x88
    NSXPCListener *_personalizationStoreService;	// 144 = 0x90
    RequestBroker *_requestBroker;	// 152 = 0x98
    NSXPCListener *_requestListener;	// 160 = 0xa0
    NSObject<OS_dispatch_source> *_signalSource;	// 168 = 0xa8
    NSXPCListener *_softwareUpdateListener;	// 176 = 0xb0
    SoftwareUpdateListener *_softwareUpdateDelegate;	// 184 = 0xb8
    NSXPCListener *_storeQueueListener;	// 192 = 0xc0
    StoreQueueListener *_storeQueueDelegate;	// 200 = 0xc8
    NSCountedSet *_transactionCount;	// 208 = 0xd0
    NSMutableDictionary *_transactionStore;	// 216 = 0xd8
    XPCServiceBroker *_serviceBroker;	// 224 = 0xe0
    AppMetricsMonitor *_appMetricsMonitor;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x00200000001c8f37
- (void)_handleMigrationDidFinishNotification:(id)arg1;	// IMP=0x00100000001c8a14
- (void)dealloc;	// IMP=0x00100000001c7309
- (id)init;	// IMP=0x00100000001c724d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

