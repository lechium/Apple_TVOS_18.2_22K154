//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFTimer, NSString;

__attribute__((visibility("hidden")))
@interface HMDWatchConnectivityLogEventManager : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _hasCompleteReport;	// 12 = 0xc
    unsigned long long _watchAddedNotificationCountForCurrentIncompleteReport;	// 16 = 0x10
    unsigned long long _watchRemovedNotificationCountForCurrentIncompleteReport;	// 24 = 0x18
    unsigned long long _watchAddedNotificationCountForLastCompleteReport;	// 32 = 0x20
    unsigned long long _watchRemovedNotificationCountForLastCompleteReport;	// 40 = 0x28
    HMFTimer *_watchConnectivityLogEventManagerTimer;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x001000000064b821
- (void).cxx_destruct;	// IMP=0x000000000064b80e
@property(retain, nonatomic) HMFTimer *watchConnectivityLogEventManagerTimer; // @synthesize watchConnectivityLogEventManagerTimer=_watchConnectivityLogEventManagerTimer;
@property(nonatomic) unsigned long long watchRemovedNotificationCountForLastCompleteReport; // @synthesize watchRemovedNotificationCountForLastCompleteReport=_watchRemovedNotificationCountForLastCompleteReport;
@property(nonatomic) unsigned long long watchAddedNotificationCountForLastCompleteReport; // @synthesize watchAddedNotificationCountForLastCompleteReport=_watchAddedNotificationCountForLastCompleteReport;
@property(nonatomic) unsigned long long watchRemovedNotificationCountForCurrentIncompleteReport; // @synthesize watchRemovedNotificationCountForCurrentIncompleteReport=_watchRemovedNotificationCountForCurrentIncompleteReport;
@property(nonatomic) unsigned long long watchAddedNotificationCountForCurrentIncompleteReport; // @synthesize watchAddedNotificationCountForCurrentIncompleteReport=_watchAddedNotificationCountForCurrentIncompleteReport;
@property(nonatomic) _Bool hasCompleteReport; // @synthesize hasCompleteReport=_hasCompleteReport;
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000064b6d0
- (struct HMDWatchConnectivityLogEventManagerSnapshot)currentWatchConnectivitySnapshot;	// IMP=0x000000000064b64d
- (void)completeCurrentReport;	// IMP=0x000000000064b4b1
- (void)incrementWatchRemovedNotificationCount;	// IMP=0x000000000064b47c
- (void)incrementWatchAddedNotificationCount;	// IMP=0x000000000064b447
- (id)init;	// IMP=0x000000000064b3a2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

