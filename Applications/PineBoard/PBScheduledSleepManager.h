//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BNBannerSource, NSString, NSTimer, PBBulletinService, PBSBulletin, PBSScheduledSleep;
@protocol OS_dispatch_queue, PBSystemUIServiceCurrentScheduledSleepPublishing;

@interface PBScheduledSleepManager : NSObject
{
    id <PBSystemUIServiceCurrentScheduledSleepPublishing> _currentScheduledSleepPublisher;	// 8 = 0x8
    PBSScheduledSleep *_currentScheduledSleep;	// 16 = 0x10
    NSTimer *_currentScheduledSleepTimer;	// 24 = 0x18
    NSTimer *_currentCountdownTimer;	// 32 = 0x20
    PBBulletinService *_bulletinService;	// 40 = 0x28
    PBSBulletin *_sleepCancelledBulletin;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_scheduledSleepBannerQueue;	// 56 = 0x38
    BNBannerSource *_bannerSource;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000183b9b
@property(retain, nonatomic) BNBannerSource *bannerSource; // @synthesize bannerSource=_bannerSource;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *scheduledSleepBannerQueue; // @synthesize scheduledSleepBannerQueue=_scheduledSleepBannerQueue;
@property(retain, nonatomic) PBSBulletin *sleepCancelledBulletin; // @synthesize sleepCancelledBulletin=_sleepCancelledBulletin;
@property(retain, nonatomic) PBBulletinService *bulletinService; // @synthesize bulletinService=_bulletinService;
@property(retain, nonatomic) NSTimer *currentCountdownTimer; // @synthesize currentCountdownTimer=_currentCountdownTimer;
@property(retain, nonatomic) NSTimer *currentScheduledSleepTimer; // @synthesize currentScheduledSleepTimer=_currentScheduledSleepTimer;
@property(retain, nonatomic) PBSScheduledSleep *currentScheduledSleep; // @synthesize currentScheduledSleep=_currentScheduledSleep;
@property(retain, nonatomic) id <PBSystemUIServiceCurrentScheduledSleepPublishing> currentScheduledSleepPublisher; // @synthesize currentScheduledSleepPublisher=_currentScheduledSleepPublisher;
- (id)_cancelReasonFromBundleID:(id)arg1;	// IMP=0x0010000000183a9b
- (void)_reportCanceledScheduledSleepWithReason:(id)arg1 scheduledSleep:(id)arg2;	// IMP=0x001000000018388a
- (void)_reportScheduledSleepRequestFromClient:(id)arg1 scheduledSleep:(id)arg2;	// IMP=0x0010000000183724
- (void)_scheduledSleepBannerQueue_dismissScheduledSleepCountdownBannerWithReason:(id)arg1;	// IMP=0x001000000018361d
- (void);	// IMP=0x00100000001834a7
- (void)_postScheduledSleepCancelledBulletin;	// IMP=0x0010000000183334
- (id)_createScheduledSleepWithRequest:(id)arg1;	// IMP=0x0010000000183284
- (void)_cancelScheduledSleepWithReason:(id)arg1;	// IMP=0x0010000000183168
- (void)_startScheduledSleepTimerWithDuration:(double)arg1;	// IMP=0x0010000000182d8e
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x0010000000182ce0
- (void)userProfileManager:(id)arg1 didSwitchToUserWithIdentifier:(id)arg2 previousUserIdentifier:(id)arg3;	// IMP=0x0010000000182c5c
- (void)powerManager:(id)arg1 willSleepSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000182b33
- (void)scheduledSleepRequestedByClient:(id)arg1 request:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000018294f
- (void)getCurrentScheduledSleepWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001828eb
- (void)getAvailableScheduledSleepRequestsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001826df
- (void)cancelScheduledSleepRequestWithReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000182669
- (void)cancelScheduledSleepRequestFromClient:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001825bf
- (void)dealloc;	// IMP=0x001000000018257b
- (id)initWithPowerManager:(id)arg1 userProfileManager:(id)arg2;	// IMP=0x0010000000182452

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

