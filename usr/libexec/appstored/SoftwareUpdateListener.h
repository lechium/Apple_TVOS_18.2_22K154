//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SoftwareUpdateListener
{
}

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00200000001e18b8
- (void)shouldUseModernUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e1759
- (void)updateAllWithOrder:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e147e
- (void)updateAllWithJobResults:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e11c1
- (void)reloadManagedUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e1000
- (void)reloadFromServerWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e0e42
- (void)reloadFromServerInBackgroundWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e0b1a
- (void)removeUpdateBulletins;	// IMP=0x00100000001e0a26
- (void)showApplicationBadgeForPendingUpdates;	// IMP=0x00100000001e08f8
- (void)showApplicationUpdatesBulletin;	// IMP=0x00100000001e0804
- (void)refreshUpdatesWithCompletionBlock:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e06e5
- (void)refreshUpdateCountWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e043b
- (void)migrateUpdatesStoreWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e03ac
- (void)hideApplicationBadgeForPendingUpdates;	// IMP=0x00100000001e027e
- (void)getManagedUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e00c0
- (void)getUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001dff02
- (void)getUpdatesMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001dfe52
- (void)getUpdatesIncludingMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001dfc94
- (void)clearExpiredUpdateHistoryWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001dfb75
- (id)init;	// IMP=0x00100000001dfb46

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

