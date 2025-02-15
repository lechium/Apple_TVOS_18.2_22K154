//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol LibraryOpen, LibraryProgress, LibraryUninstall, OS_dispatch_queue;

@interface LibraryService : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSArray *_libraryCatalogs;	// 16 = 0x10
    id <LibraryOpen> _libraryOpen;	// 24 = 0x18
    id <LibraryProgress> _libraryProgress;	// 32 = 0x20
    id <LibraryUninstall> _libraryUninstall;	// 40 = 0x28
    NSMutableDictionary *_remoteCatalogs;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000001d4cc0
- (void)catalogUnregisteredBundleIDs:(id)arg1;	// IMP=0x00100000001d4afe
- (void)catalogRefreshedBundleIDs:(id)arg1;	// IMP=0x00100000001d4a99
- (void)catalogRegisteredApps:(id)arg1;	// IMP=0x00100000001d4a34
- (void)uninstallApp:(id)arg1 requestUserConfirmation:(_Bool)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001d4721
- (void)lookupItemIDsForDeletableSystemAppsForWatchWithBundleIDs:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d46bf
- (void)lookupBundleIDsForDeletableSystemAppsForWatchWithItemIDs:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d465d
- (void)lookupItemIDsForDeletableSystemAppsWithBundleIDs:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d45fb
- (void)lookupBundleIDsForDeletableSystemAppsWithItemIDs:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d4599
- (void)launchApp:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d442d
- (void)launchApp:(id)arg1 extensionType:(long long)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001d42b0
- (void)openableStatusForExecutableAtPath:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d429b
- (void)resumeApp:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d4285
- (void)pauseApp:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d426f
- (void)cancelApp:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d4259
- (void)executeQueryForUpdatesReloadingFromServer:(_Bool)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d41f1
- (void)executeQueryWithPredicate:(id)arg1 onPairedDevice:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001d4189
- (void)executeQueryWithPredicate:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d3795
- (id)init;	// IMP=0x00100000001d3594

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

