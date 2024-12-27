//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MADAutoAssetPersisted, NSMutableDictionary, SUCoreLog;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MADAutoSetLocker : NSObject
{
    SUCoreLog *_logger;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_lockerQueue;	// 16 = 0x10
    MADAutoAssetPersisted *_persistedState;	// 24 = 0x18
    NSMutableDictionary *_locksBySelector;	// 32 = 0x20
    NSMutableDictionary *_eliminateSelectors;	// 40 = 0x28
}

+ (void)forceGlobalUnlock:(id)arg1;	// IMP=0x00600000000a090f
+ (void)addClientLockReasons:(id)arg1 basedOnControl:(id)arg2;	// IMP=0x00600000000a0909
+ (id)migrateMismatchedPersistedStateVersion:(id)arg1 forEntryID:(id)arg2 withMismatchedState:(id)arg3;	// IMP=0x006000000009e8c2
+ (void)resumeFromPersistedWithDownloadedSelectors:(id)arg1;	// IMP=0x006000000009d39b
+ (id)lockedSelectorsForEliminate:(id)arg1;	// IMP=0x006000000009c25f
+ (id)copyOfLocksBySelector;	// IMP=0x006000000009bccf
+ (id)newCurrentLockUsageForSelector:(id)arg1;	// IMP=0x006000000009abaf
+ (_Bool)endedAllPreviousLocksByClient:(id)arg1 forAssetSelector:(id)arg2 forLockReason:(id)arg3 endError:(id *)arg4;	// IMP=0x006000000009a89f
+ (_Bool)endedPreviousLocksByClient:(id)arg1 forAssetSelector:(id)arg2 forLockReason:(id)arg3 removingLockCount:(long long)arg4 endError:(id *)arg5;	// IMP=0x006000000009a897
+ (_Bool)endedLockByClient:(id)arg1 forAssetSelector:(id)arg2 forLockReason:(id)arg3 endError:(id *)arg4;	// IMP=0x006000000009a88f
+ (_Bool)continuedLockByClient:(id)arg1 forAssetSelector:(id)arg2 forLockReason:(id)arg3 withUsagePolicy:(id)arg4 continueError:(id *)arg5;	// IMP=0x006000000009a887
+ (_Bool)additionalLockedByClient:(id)arg1 forAssetSelector:(id)arg2 forLockReason:(id)arg3 withUsagePolicy:(id)arg4 lockError:(id *)arg5;	// IMP=0x006000000009a87f
+ (_Bool)lockedByClient:(id)arg1 forAssetSetIdentifier:(id)arg2 forAtomicInstance:(id)arg3 forLockReason:(id)arg4 withUsagePolicy:(id)arg5 lockError:(id *)arg6;	// IMP=0x006000000009a877
+ (id)autoAssetLocker;	// IMP=0x006000000009a822
- (void).cxx_destruct;	// IMP=0x00000000000a11f5
@property(retain, nonatomic) NSMutableDictionary *eliminateSelectors; // @synthesize eliminateSelectors=_eliminateSelectors;
@property(retain, nonatomic) NSMutableDictionary *locksBySelector; // @synthesize locksBySelector=_locksBySelector;
@property(readonly, retain, nonatomic) MADAutoAssetPersisted *persistedState; // @synthesize persistedState=_persistedState;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *lockerQueue; // @synthesize lockerQueue=_lockerQueue;
@property(readonly, retain, nonatomic) SUCoreLog *logger; // @synthesize logger=_logger;
- (id)_newAssetLockSummaryWithoutSelectorOrAttributes:(id)arg1;	// IMP=0x00000000000a07c6
- (id)summary;	// IMP=0x00000000000a0709
- (id)description;	// IMP=0x00000000000a06f7
- (_Bool)_anyCurrentLocksForEliminate:(id)arg1;	// IMP=0x000000000009fc6a
- (id)_refreshFilesystemMetadataLastInterest:(id)arg1;	// IMP=0x000000000009f8f0
- (void)_logPersistedTableOfContents:(id)arg1;	// IMP=0x000000000009f09f
- (void)_logPersistedRemovedEntry:(id)arg1 removedAssetLock:(id)arg2 forSelector:(id)arg3 message:(id)arg4;	// IMP=0x000000000009ecd7
- (void)_logPersistedEntry:(id)arg1 operation:(id)arg2 persistingAssetLock:(id)arg3 forSelector:(id)arg4 message:(id)arg5;	// IMP=0x000000000009e8ca
- (_Bool)_endLockDecideUnlocked:(id)arg1;	// IMP=0x000000000009e820
- (void)_mergeContinuedLock:(id)arg1 intoExistingLock:(id)arg2;	// IMP=0x000000000009e6f2
- (void)_mergeAddedLock:(id)arg1 intoExistingLock:(id)arg2;	// IMP=0x000000000009e569
- (void)_persistRemoveAssetLock:(id)arg1 removedAssetLock:(id)arg2 message:(id)arg3;	// IMP=0x000000000009e288
- (_Bool)_persistAssetLock:(id)arg1 operation:(id)arg2 forAssetLock:(id)arg3 message:(id)arg4;	// IMP=0x000000000009df42
- (void)_removeAssetLock:(id)arg1 lastClient:(id)arg2 forSelector:(id)arg3 message:(id)arg4;	// IMP=0x000000000009d058
- (id)_assetIDOfLock:(id)arg1;	// IMP=0x000000000009aaf8
- (long long)_currentLockCountOfLock:(id)arg1;	// IMP=0x000000000009a8af
- (_Bool)_endLocksByClient:(id)arg1 forAssetSelector:(id)arg2 forLockReason:(id)arg3 removingLockCount:(long long)arg4 endError:(id *)arg5;	// IMP=0x000000000009a8a7
- (id)init;	// IMP=0x000000000009a64a

@end

