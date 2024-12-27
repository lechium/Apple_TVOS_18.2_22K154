//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UPProfileStore, UPProfileStoreSnapshot;
@protocol BSInvalidatable, OS_dispatch_queue;

@interface PBProfileStoreSnapshotController : NSObject
{
    NSObject<OS_dispatch_queue> *_callinQueue;	// 8 = 0x8
    UPProfileStoreSnapshot *_snapshot;	// 16 = 0x10
    UPProfileStore *_store;	// 24 = 0x18
    id <BSInvalidatable> _storeListenToken;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 40 = 0x28
    CDUnknownBlockType _didUpdateHandler;	// 48 = 0x30
}

+ (id)_addProfileRequestsForLegacyUserProfilesArchive:(id)arg1;	// IMP=0x00200000000a2543
+ (id)_settingRequests;	// IMP=0x00100000000a1cfb
- (void).cxx_destruct;	// IMP=0x00200000000a35cb
@property(copy, nonatomic) CDUnknownBlockType didUpdateHandler; // @synthesize didUpdateHandler=_didUpdateHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // @synthesize calloutQueue=_calloutQueue;
- (void)_handleProfileStoreUpdate;	// IMP=0x00100000000a34fd
- (void)_calloutQueue_notifyObserverWithUpdate:(id)arg1;	// IMP=0x00100000000a34e8
- (void)_callinQueue_notifyObserverWithUpdate:(id)arg1;	// IMP=0x00100000000a33f1
- (id)_callinQueue_handleUpdatedSnapshot:(id)arg1 notifyIfNeeded:(_Bool)arg2;	// IMP=0x00100000000a319c
- (void)_callinQueue_refreshSnapshotWithNotifyIfNeeded:(_Bool)arg1;	// IMP=0x00100000000a2fa0
- (void)_callinQueue_migrateUserProfilesWithController:(id)arg1;	// IMP=0x00100000000a1f1d
- (void)refreshSnapshot;	// IMP=0x00100000000a1cd0
- (void)invalidate;	// IMP=0x00100000000a1c65
- (id)updateWithBlock:(CDUnknownBlockType)arg1 error:(out id *)arg2;	// IMP=0x00100000000a1844
@property(readonly, nonatomic) UPProfileStoreSnapshot *snapshot;
- (void)dealloc;	// IMP=0x00100000000a16e5
- (id)initWithProfileStore:(id)arg1 profileArchiveController:(id)arg2 callinQueue:(id)arg3;	// IMP=0x00100000000a12a8
- (id)initWithCallinQueue:(id)arg1;	// IMP=0x00100000000a1223

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

