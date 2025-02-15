//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, PBAppInfoController, PBBulletinService;
@protocol OS_dispatch_queue_serial;

@interface PBLargeGameInstallMonitor : NSObject
{
    _Bool _activated;	// 8 = 0x8
    PBBulletinService *_bulletinService;	// 16 = 0x10
    NSObject<OS_dispatch_queue_serial> *_queue;	// 24 = 0x18
    NSMutableDictionary *_gameInstallItems;	// 32 = 0x20
    PBAppInfoController *_appInfoController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000bc8fe
@property(retain, nonatomic) PBAppInfoController *appInfoController; // @synthesize appInfoController=_appInfoController;
@property(nonatomic, getter=isActivated) _Bool activated; // @synthesize activated=_activated;
@property(readonly, nonatomic) NSMutableDictionary *gameInstallItems; // @synthesize gameInstallItems=_gameInstallItems;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue_serial> *queue; // @synthesize queue=_queue;
- (void)_postLargeGameInstalledBulletinWithAppInfo:(id)arg1;	// IMP=0x00100000000bc246
- (double)_largeGameInstallTimeThreshold;	// IMP=0x00100000000bc1d7
- (void)_handleGameAppInfoControllerUpdate:(id)arg1;	// IMP=0x00100000000bb804
@property(readonly, nonatomic) PBBulletinService *bulletinService; // @synthesize bulletinService=_bulletinService;
- (void)_activate;	// IMP=0x00100000000bb64e
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x00100000000bb45f
- (void)appInfoController:(id)arg1 didUpdate:(id)arg2;	// IMP=0x00100000000bb389
- (void)activate;	// IMP=0x00100000000bb301
- (id)init;	// IMP=0x00100000000bb28a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

