//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, RBClientInheritanceManager, RBConnectionListener, RBProcess, RBProcessMonitorObserver, RBSAssertionIdentifier, RBSProcessHandle, RBSProcessIdentifier, RBSProcessIdentity;
@protocol OS_xpc_object, RBAssertionManaging, RBDaemonContextProviding, RBEntitlementManaging, RBEntitlementPossessing, RBProcessManaging, RBProcessMonitoring, RBRequestManaging, RBStateCaptureManaging;

__attribute__((visibility("hidden")))
@interface RBConnectionClient : NSObject
{
    NSObject<OS_xpc_object> *_connection;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    struct os_unfair_lock_s _deathMonitorsLock;	// 20 = 0x14
    id <RBAssertionManaging> _assertionManager;	// 24 = 0x18
    id <RBEntitlementManaging> _entitlementManager;	// 32 = 0x20
    id <RBProcessManaging> _processManager;	// 40 = 0x28
    id <RBProcessMonitoring> _processMonitor;	// 48 = 0x30
    id <RBStateCaptureManaging> _stateCaptureManager;	// 56 = 0x38
    id <RBDaemonContextProviding> _daemonContext;	// 64 = 0x40
    id <RBRequestManaging> _requestManager;	// 72 = 0x48
    RBConnectionListener *_listener;	// 80 = 0x50
    RBProcess *_containingProcess;	// 88 = 0x58
    _Bool _ready;	// 96 = 0x60
    NSString *_shortDescription;	// 104 = 0x68
    RBProcess *_process;	// 112 = 0x70
    RBSProcessHandle *_processHandle;	// 120 = 0x78
    RBSProcessIdentity *_processIdentity;	// 128 = 0x80
    RBSProcessIdentifier *_processIdentifier;	// 136 = 0x88
    unsigned int _euid;	// 144 = 0x90
    RBClientInheritanceManager *_inheritanceManager;	// 152 = 0x98
    id <RBEntitlementPossessing> _entitlements;	// 160 = 0xa0
    NSMutableSet *_assertionIdentifiers;	// 168 = 0xa8
    NSMutableSet *_deathMonitors;	// 176 = 0xb0
    RBProcessMonitorObserver *_stateObserver;	// 184 = 0xb8
    RBSAssertionIdentifier *_expirationBoostAssertionIdentifier;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x000000000003fe96
- (id)captureState;	// IMP=0x000000000003fe5a
@property(readonly, copy, nonatomic) NSString *stateCaptureTitle;
- (void)inheritanceManager:(id)arg1 didChangeInheritances:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003eb72
@property(readonly, copy) NSString *description;
- (_Bool)hasEntitlementDomain:(unsigned long long)arg1;	// IMP=0x000000000003b5ba
- (_Bool)hasEntitlement:(id)arg1;	// IMP=0x000000000003b5a1
- (id)init;	// IMP=0x0000000000031f6f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

