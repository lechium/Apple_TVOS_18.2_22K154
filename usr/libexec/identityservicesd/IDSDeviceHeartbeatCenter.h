//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMTimer, NSMutableDictionary;

@interface IDSDeviceHeartbeatCenter : NSObject
{
    IMTimer *_getDependentHeartbeatTimer;	// 8 = 0x8
    NSMutableDictionary *_usersToHeartbeatDatesMap;	// 16 = 0x10
    _Bool _isSetup;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00200000000081d5
- (void).cxx_destruct;	// IMP=0x0020000000009f88
- (void)systemDidWake;	// IMP=0x0010000000009f76
- (void)_cleanupKeychain;	// IMP=0x0010000000009eb8
- (_Bool)_fetchExpiryDatesIfNecessary;	// IMP=0x0010000000009a71
- (void)accountsChanged;	// IMP=0x00100000000094f9
- (void)_updateExpiry:(double)arg1 forUser:(id)arg2;	// IMP=0x00100000000091b4
- (void)resetExpiryForUser:(id)arg1;	// IMP=0x00100000000090e3
- (void)_updateDependentRegistrations;	// IMP=0x0010000000009031
- (void)_heartbeatTimerFiredOnMain;	// IMP=0x0010000000008fb2
- (void)_scheduleRescueHeartBeat;	// IMP=0x0010000000008e37
- (void)_updateDependentRegistrationTimerFiredOnMain;	// IMP=0x0010000000008db8
- (_Bool)_scheduleDependentRegistrations;	// IMP=0x0010000000008beb
- (void)invalidateTimer;	// IMP=0x0010000000008bb9
- (void)printInfo;	// IMP=0x00100000000087f9
- (void)dealloc;	// IMP=0x0010000000008777
- (id)_getNextExpirationDate;	// IMP=0x00100000000083fd
- (void)_heartBeat;	// IMP=0x001000000000832b
- (void)setup;	// IMP=0x00100000000082d4
- (id)init;	// IMP=0x001000000000822a

@end

