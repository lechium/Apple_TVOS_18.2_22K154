//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDBulletinBoard, HMDHome, HMDIDSServerBag, HMDRemoteDeviceMonitor, HMDResidentReachabilityContext, HMFTimer, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDResidentReachabilityNotificationManager : HMFObject
{
    _Bool _notificationEnabled;	// 8 = 0x8
    _Bool _isUserPreferredReachable;	// 9 = 0x9
    HMDResidentReachabilityContext *_reachabilityContext;	// 16 = 0x10
    HMDHome *_home;	// 24 = 0x18
    HMDRemoteDeviceMonitor *_deviceMonitor;	// 32 = 0x20
    CDUnknownBlockType _timerFactory;	// 40 = 0x28
    HMDBulletinBoard *_bulletinBoard;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_workQueue;	// 56 = 0x38
    HMDIDSServerBag *_idsServerBag;	// 64 = 0x40
    HMFTimer *_evaluateDebounceTimer;	// 72 = 0x48
    HMFTimer *_unreachableBulletinDebounceTimer;	// 80 = 0x50
    double _primaryResidentUnreachableTime;	// 88 = 0x58
    HMFTimer *_userPreferredReachabilityBulletinDebounceTimer;	// 96 = 0x60
    NSString *_previousPrimary;	// 104 = 0x68
    NSString *_electedPrimary;	// 112 = 0x70
    HMDResidentReachabilityContext *_userPreferredReachabilityContext;	// 120 = 0x78
}

+ (id)logCategory;	// IMP=0x0010000000b1ea5e
- (void).cxx_destruct;	// IMP=0x0000000000b1d988
@property(retain) HMDResidentReachabilityContext *userPreferredReachabilityContext; // @synthesize userPreferredReachabilityContext=_userPreferredReachabilityContext;
@property(nonatomic) _Bool isUserPreferredReachable; // @synthesize isUserPreferredReachable=_isUserPreferredReachable;
@property(retain, nonatomic) NSString *electedPrimary; // @synthesize electedPrimary=_electedPrimary;
@property(retain, nonatomic) NSString *previousPrimary; // @synthesize previousPrimary=_previousPrimary;
@property(retain, nonatomic) HMFTimer *userPreferredReachabilityBulletinDebounceTimer; // @synthesize userPreferredReachabilityBulletinDebounceTimer=_userPreferredReachabilityBulletinDebounceTimer;
@property double primaryResidentUnreachableTime; // @synthesize primaryResidentUnreachableTime=_primaryResidentUnreachableTime;
@property _Bool notificationEnabled; // @synthesize notificationEnabled=_notificationEnabled;
@property(retain) HMFTimer *unreachableBulletinDebounceTimer; // @synthesize unreachableBulletinDebounceTimer=_unreachableBulletinDebounceTimer;
@property(retain) HMFTimer *evaluateDebounceTimer; // @synthesize evaluateDebounceTimer=_evaluateDebounceTimer;
@property(readonly) __weak HMDIDSServerBag *idsServerBag; // @synthesize idsServerBag=_idsServerBag;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) HMDBulletinBoard *bulletinBoard; // @synthesize bulletinBoard=_bulletinBoard;
@property(readonly, copy) CDUnknownBlockType timerFactory; // @synthesize timerFactory=_timerFactory;
@property(readonly) __weak HMDRemoteDeviceMonitor *deviceMonitor; // @synthesize deviceMonitor=_deviceMonitor;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
@property(retain) HMDResidentReachabilityContext *reachabilityContext; // @synthesize reachabilityContext=_reachabilityContext;
- (id)logIdentifier;	// IMP=0x0000000000b1d710
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000b1d3c1
- (id)_createTimer;	// IMP=0x0000000000b1d0d2
- (void)_startUnreachableBulletinDebounceTimer;	// IMP=0x0000000000b1cf73
- (void)_startDebounceTimer;	// IMP=0x0000000000b1ce14
- (_Bool)shouldPostUnreachableNotification;	// IMP=0x0000000000b1cda4
- (_Bool)shouldPostReachableNotification;	// IMP=0x0000000000b1cd30
@property(readonly) _Bool anyEnabledResidentSupportsReachabilityNotifications;
@property(readonly) _Bool hasMultipleResidents;
@property(readonly) _Bool hasReachableResidents;
- (void)_evaluateReachabilityBulletinAndPostponeUnreachableBulletin:(_Bool)arg1;	// IMP=0x0000000000b1c0ac
- (_Bool)shouldPostUserPreferredUnreachableNotification;	// IMP=0x0000000000b1c015
- (_Bool)shouldPostUserPreferredReachableNotification;	// IMP=0x0000000000b1bf7a
- (void)_handleUserPreferredReachabilityBulletinDebounceTimer;	// IMP=0x0000000000b1bae7
- (void)_handleUserPreferredResidentReachable:(id)arg1;	// IMP=0x0000000000b1ba2f
- (void)_handleResidentUpdated:(id)arg1;	// IMP=0x0000000000b1b977
- (void)_updatePrimaryResidentLostTime:(id)arg1;	// IMP=0x0000000000b1b757
- (void)_handleResidentRemoved:(id)arg1;	// IMP=0x0000000000b1b6e6
- (void)_handleResidentAdded:(id)arg1;	// IMP=0x0000000000b1b675
- (void)_handleNetworkReachabilityChange:(id)arg1;	// IMP=0x0000000000b1b604
- (void)configureWithHome:(id)arg1 deviceMonitor:(id)arg2 notificationCenter:(id)arg3 idsServerBag:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000b1b481
- (void)configureWithHome:(id)arg1 deviceMonitor:(id)arg2;	// IMP=0x0000000000b1b39f
- (id)initWithResidentReachabilityContext:(id)arg1 workQueue:(id)arg2 timerFactory:(CDUnknownBlockType)arg3 bulletinBoard:(id)arg4;	// IMP=0x0000000000b1b269
- (id)initWithResidentReachabilityContext:(id)arg1 workQueue:(id)arg2;	// IMP=0x0000000000b1b1cb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

