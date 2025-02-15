//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BKSApplicationStateMonitor, NSArray, NSDate, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSXPCListener, UALocalItemReceiver;

@interface UAUserActivityClientProcessesController
{
    NSXPCListener *_activityManagerListener;	// 8 = 0x8
    NSMutableSet *_clients;	// 16 = 0x10
    NSMutableDictionary *_userActivityClientsByPID;	// 24 = 0x18
    NSMutableSet *_additionalUserActivityAdvertisableItems;	// 32 = 0x20
    NSMutableDictionary *_proxiedClients;	// 40 = 0x28
    NSMutableDictionary *_userActivityClientsByBundleID;	// 48 = 0x30
    NSMutableSet *_visibleUserActivityClients;	// 56 = 0x38
    BKSApplicationStateMonitor *_appStateMonitor;	// 64 = 0x40
    NSString *_frontBundleID;	// 72 = 0x48
    UALocalItemReceiver *_localReceiver;	// 80 = 0x50
    NSDate *_ignoreLockScreenUntil;	// 88 = 0x58
    NSArray *_DEBUG_lastEligibleItems;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x002000000005351a
@property(readonly, copy) NSArray *DEBUG_lastEligibleItems; // @synthesize DEBUG_lastEligibleItems=_DEBUG_lastEligibleItems;
@property(copy) NSDate *ignoreLockScreenUntil; // @synthesize ignoreLockScreenUntil=_ignoreLockScreenUntil;
@property(retain) UALocalItemReceiver *localReceiver; // @synthesize localReceiver=_localReceiver;
@property(readonly, retain) NSMutableDictionary *proxiedClients; // @synthesize proxiedClients=_proxiedClients;
@property(copy) NSString *frontBundleID; // @synthesize frontBundleID=_frontBundleID;
@property(retain) BKSApplicationStateMonitor *appStateMonitor; // @synthesize appStateMonitor=_appStateMonitor;
- (id)statusString;	// IMP=0x0010000000052afb
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000005298c
- (id)recentEligibleItemsInOrder:(double)arg1;	// IMP=0x00100000000525a4
- (id)eligibleAdvertiseableItemsInOrder;	// IMP=0x001000000005171e
- (id)items;	// IMP=0x001000000005146a
- (_Bool)registerAsProxyApplication:(id)arg1 forPid:(int)arg2;	// IMP=0x0010000000051160
- (id)advertiseableItemForBundleIdentifier:(id)arg1;	// IMP=0x00100000000510fd
- (void)handleAppStateMonitorUpdate:(id)arg1;	// IMP=0x0010000000050684
- (void)removeClientActivityClient:(id)arg1;	// IMP=0x001000000004ff2e
- (id)userActivityClientForBundleIdentifier:(id)arg1;	// IMP=0x001000000004fe92
- (_Bool)removeAdditionalUserActivityAdvertisableItems:(id)arg1;	// IMP=0x001000000004fde5
- (_Bool)addAdditionalUserActivityAdvertisableItems:(id)arg1;	// IMP=0x001000000004fd34
@property(readonly, copy) NSSet *additionalUserActivityAdvertisableItems;
- (id)userActivityClientForPID:(int)arg1;	// IMP=0x001000000004fc0f
- (id)userActivityClientForUUID:(id)arg1;	// IMP=0x001000000004f9b0
@property(readonly, copy) NSSet *visibleUserActivityClients; // @dynamic visibleUserActivityClients;
@property(readonly, copy) NSArray *userActivityClients; // @dynamic userActivityClients;
- (id)userActivityInfoForUUID:(id)arg1;	// IMP=0x001000000004f5e8
- (_Bool)clientIsActive:(id)arg1;	// IMP=0x001000000004f569
- (void)addUserActivityClient:(id)arg1;	// IMP=0x001000000004f017
- (_Bool)resume;	// IMP=0x001000000004ef87
- (_Bool)suspend;	// IMP=0x001000000004eefd
- (void)dealloc;	// IMP=0x001000000004ee69
- (id)initWithManager:(id)arg1 name:(id)arg2;	// IMP=0x001000000004ea02

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

