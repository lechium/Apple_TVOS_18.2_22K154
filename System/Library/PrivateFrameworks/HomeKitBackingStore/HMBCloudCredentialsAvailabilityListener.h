//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class CKContainer, HMFTimer, NAFuture, NSNotificationCenter, NSString;

__attribute__((visibility("hidden")))
@interface HMBCloudCredentialsAvailabilityListener : HMFObject
{
    struct hmf_unfair_data_lock_s _lock;	// 8 = 0x8
    CKContainer *_container;	// 16 = 0x10
    NSNotificationCenter *_notificationCenter;	// 24 = 0x18
    NAFuture *_accountAvailabilityFuture;	// 32 = 0x20
    NAFuture *_keychainAvailabilityFuture;	// 40 = 0x28
    HMFTimer *_keychainAvailabilityTimer;	// 48 = 0x30
    CDUnknownBlockType _keychainAvailabilityTimerFactory;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x0010000000009d87
- (void).cxx_destruct;	// IMP=0x0000000000008d95
@property(copy) CDUnknownBlockType keychainAvailabilityTimerFactory; // @synthesize keychainAvailabilityTimerFactory=_keychainAvailabilityTimerFactory;
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000008c3f
- (id)logIdentifier;	// IMP=0x0000000000008bd2
- (void)handleIdentityUpdateNotification:(id)arg1;	// IMP=0x0000000000008ad2
- (void)handleAccountChangedNotification:(id)arg1;	// IMP=0x00000000000089d2
- (id)waitForKeychainAvailability;	// IMP=0x00000000000086ca
- (id)waitForAccountAvailabilityAndRecheckIfAlreadyAvailable;	// IMP=0x00000000000086bb
- (id)waitForAccountAvailability;	// IMP=0x00000000000086af
- (id)initWithContainer:(id)arg1 notificationCenter:(id)arg2;	// IMP=0x00000000000085f1
- (id)initWithContainer:(id)arg1;	// IMP=0x0000000000008570

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

