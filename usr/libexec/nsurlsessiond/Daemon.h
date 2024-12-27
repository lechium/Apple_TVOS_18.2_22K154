//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NDTaskStorageDB, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface Daemon : NSObject
{
    NSMutableDictionary *_clients;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_transactionQueue;	// 16 = 0x10
    _Bool _createdDataVault;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_archiveTimer;	// 32 = 0x20
    NDTaskStorageDB *_sessionTasksDB;	// 40 = 0x28
    _Bool _privileged;	// 48 = 0x30
    _Bool _inSyncBubble;	// 49 = 0x31
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
}

+ (id)sharedDaemon;	// IMP=0x0020000000045868
- (void).cxx_destruct;	// IMP=0x0020000000044d2b
@property(getter=isInSyncBubble) _Bool inSyncBubble; // @synthesize inSyncBubble=_inSyncBubble;
@property(getter=isPrivileged) _Bool privileged; // @synthesize privileged=_privileged;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)start;	// IMP=0x0010000000044b8d
- (void)waitUntilDeviceIsUnlocked;	// IMP=0x0010000000044b87
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x0010000000044afa
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x0010000000044a6d
- (id)bundleIDsForAppProxies:(id)arg1;	// IMP=0x001000000004469a
- (void)releaseTransaction;	// IMP=0x0010000000044685
- (void)addTransaction;	// IMP=0x0010000000044670
- (void)managerBecameEmpty:(id)arg1 bundleID:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000445b9
- (id)getSessionWithIdentifier:(id)arg1 forBundleID:(id)arg2;	// IMP=0x001000000004447e
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000043bc9
- (void)setupArchiveTimer;	// IMP=0x0010000000043b13
- (void)archiveState;	// IMP=0x0010000000043949
- (void)restoreState;	// IMP=0x0010000000042eaf
- (void)setupNewClassMappingsForUnarchiver;	// IMP=0x0010000000042e76
- (_Bool)applicationIsInstalled:(id)arg1;	// IMP=0x0010000000042e37
- (id)archivePath;	// IMP=0x0010000000042dc5
- (id)init;	// IMP=0x0010000000042c24
- (void)createDaemonDirectory;	// IMP=0x00100000000427db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

