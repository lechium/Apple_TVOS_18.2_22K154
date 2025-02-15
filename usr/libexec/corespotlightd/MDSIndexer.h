//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SPCoreSpotlightIndexer, _MDIndexExtensionManager;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MDSIndexer : NSObject
{
    _Bool _deviceFirstUnlockedInMKB;	// 8 = 0x8
    int _keybagLockStateNotifyToken;	// 12 = 0xc
    _MDIndexExtensionManager *_extensionDelegate;	// 16 = 0x10
    SPCoreSpotlightIndexer *_indexer;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_indexQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_firstUnlockQueue;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_firstUnlockTimer;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000001cf6
@property(nonatomic) _Bool deviceFirstUnlockedInMKB; // @synthesize deviceFirstUnlockedInMKB=_deviceFirstUnlockedInMKB;
@property(nonatomic) int keybagLockStateNotifyToken; // @synthesize keybagLockStateNotifyToken=_keybagLockStateNotifyToken;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *firstUnlockTimer; // @synthesize firstUnlockTimer=_firstUnlockTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *firstUnlockQueue; // @synthesize firstUnlockQueue=_firstUnlockQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *indexQueue; // @synthesize indexQueue=_indexQueue;
@property(retain, nonatomic) SPCoreSpotlightIndexer *indexer; // @synthesize indexer=_indexer;
@property __weak _MDIndexExtensionManager *extensionDelegate; // @synthesize extensionDelegate=_extensionDelegate;
- (void)didReceiveMemoryPressureNotification:(unsigned long long)arg1;	// IMP=0x0010000000001bfa
- (void)didReceiveSignal:(unsigned long long)arg1;	// IMP=0x0010000000001bc7
- (_Bool)disableABCReporting:(id)arg1;	// IMP=0x0010000000001bbf
- (void)indexAvailableForProtectionClass:(id)arg1 newIndex:(_Bool)arg2;	// IMP=0x0010000000001bb9
- (id)extraTTRInfo;	// IMP=0x0010000000001bb1
- (void)dumpTTRDebugFiles;	// IMP=0x0010000000001bab
- (id)indexDirectory;	// IMP=0x0010000000001b5d
- (void)recordEngagementForBundleID:(id)arg1 uniqueIdentifier:(id)arg2 protectionClass:(id)arg3 userQuery:(id)arg4 date:(id)arg5;	// IMP=0x0010000000001b57
- (id)disabledBundleSet;	// IMP=0x0010000000001b4f
- (_Bool)blocklistCheck:(id)arg1 withOptions:(long long)arg2;	// IMP=0x0010000000001b47
- (id)taskForTopHitQueryWithQueryString:(id)arg1 queryContext:(id)arg2 resultsHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000001b3f
- (void)updateApplicationsWithCompletion:(CDUnknownBlockType)arg1 clean:(_Bool)arg2;	// IMP=0x0010000000001b34
- (_Bool)setupHasComplete;	// IMP=0x0010000000001b2c
- (_Bool)indexingEnabled;	// IMP=0x0010000000001b24
- (_Bool)deviceUnlocked;	// IMP=0x0010000000001b1c
- (_Bool)deviceFirstUnlockedInSB;	// IMP=0x0010000000001b13
- (_Bool)unlockedSinceBoot;	// IMP=0x0010000000001b02
- (_Bool)managedIndex;	// IMP=0x0010000000001afa
- (_Bool)privateIndex;	// IMP=0x0010000000001af2
- (void)shutdown;	// IMP=0x0010000000001abd
- (id)init;	// IMP=0x0010000000001817
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00100000000017e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

