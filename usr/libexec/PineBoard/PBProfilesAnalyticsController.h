//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, PBPowerManager;

@interface PBProfilesAnalyticsController : NSObject
{
    PBPowerManager *_powerManager;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    MISSING_TYPE *_lock_lastSystemWakeDate;	// 24 = 0x18
}

+ (id)_appsEventWithApplicationInfos:(id)arg1;	// IMP=0x00200000000c029c
+ (id)_usersStateEventWithProfileStoreSnapshot:(id)arg1;	// IMP=0x00100000000bfdcf
+ (void)sendDailyAnalyticsEventsWithProfileStoreSnapshot:(id)arg1;	// IMP=0x00100000000bfbb2
- (void).cxx_destruct;	// IMP=0x00200000000c0629
- (id)_lastSystemWakeDate;	// IMP=0x00100000000c05f1
- (void)_updateLastSystemWakeDate;	// IMP=0x00100000000c05a4
- (void)_resetLastSystemWakeDate;	// IMP=0x00100000000c056f
- (void)powerManagerDidWakeSystem:(id)arg1 reason:(long long)arg2;	// IMP=0x00100000000c055c
- (void)powerManagerDidSleepSystem:(id)arg1 reason:(long long)arg2;	// IMP=0x00100000000c0549
- (id)_userSwitchEventWithClientBundleIdentifier:(id)arg1;	// IMP=0x00100000000c04b1
- (void)sendSwitchProfileEventWithClientBundleIdentifier:(id)arg1;	// IMP=0x00100000000bfd31
- (id)initWithPowerManager:(id)arg1;	// IMP=0x00100000000bfafc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

