//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol OS_dispatch_source;

@interface AMSDDaemonRunLoop : NSObject
{
    NSObject<OS_dispatch_source> *_sigTermSource;	// 8 = 0x8
    struct os_unfair_lock_s _connectionsLock;	// 16 = 0x10
    NSMutableSet *_connections;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000016dfe
@property(readonly, nonatomic) struct os_unfair_lock_s connectionsLock; // @synthesize connectionsLock=_connectionsLock;
@property(retain, nonatomic) NSMutableSet *connections; // @synthesize connections=_connections;
- (void)_startXPC;	// IMP=0x0010000000016d44
- (void)_setupSignalHandlers;	// IMP=0x0010000000016bb0
- (void)_setupAccountDataSync;	// IMP=0x0010000000016b50
- (void)_setupPollJobs;	// IMP=0x0010000000016b4a
- (void)_setupNotifications;	// IMP=0x0010000000016451
- (void)_setupMultiUser;	// IMP=0x001000000001644b
- (void)_tearDownMultiUser;	// IMP=0x0010000000016445
- (id)_previousBuildVersion;	// IMP=0x00100000000163f0
- (void);	// IMP=0x00100000000163b4
- (void)_handleNFCAccessoryNotification:(id)arg1;	// IMP=0x00100000000163ae
- (void)_handleBiometricsProvisioningNotification;	// IMP=0x001000000001615f
- (_Bool)_performStartup;	// IMP=0x0010000000015bbe
- (void)_clearDanglingCookieDatabasesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000155f6
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000014f74
- (void)runUntilIdleExit;	// IMP=0x0010000000014dc2
- (void)dealloc;	// IMP=0x0010000000014d71
- (id)init;	// IMP=0x0010000000014d04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

