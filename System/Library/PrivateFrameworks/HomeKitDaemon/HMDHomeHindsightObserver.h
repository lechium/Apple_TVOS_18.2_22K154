//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, HMFTimer, NSNotificationCenter, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHomeHindsightObserver : HMFObject
{
    _Bool _configured;	// 8 = 0x8
    _Bool _registered;	// 9 = 0x9
    HMFTimer *_fakeEventInjectionTimer;	// 16 = 0x10
    NSString *_logIdentifier;	// 24 = 0x18
    HMDHome *_home;	// 32 = 0x20
    NSNotificationCenter *_notificationCenter;	// 40 = 0x28
    NSUUID *_homeUUID;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_workQueue;	// 56 = 0x38
    id _eventWriter;	// 64 = 0x40
    CDUnknownBlockType _fakeEventTimerFactory;	// 72 = 0x48
}

+ (id)interestingServiceTypeToCharacteristicTypesMap;	// IMP=0x001000000073e250
+ (id)logCategory;	// IMP=0x001000000073e220
- (void).cxx_destruct;	// IMP=0x00000000007397d3
@property(readonly, nonatomic) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000739415
- (void)handleMatterLockStateChangedNotification:(id)arg1;	// IMP=0x0000000000738d01
- (void)handleCharacteristicsChangedNotification:(id)arg1;	// IMP=0x0000000000738872
- (void)handleAccessoryRemovedNotification:(id)arg1;	// IMP=0x000000000073872f
- (void)handleAccessoryAddedNotification:(id)arg1;	// IMP=0x00000000007385ec
- (void)handlePrimaryResidentChangedNotification:(id)arg1;	// IMP=0x00000000007383d9
- (void)unconfigure;	// IMP=0x000000000073820b
- (void)configure;	// IMP=0x00000000007381b0
- (id)initWithHome:(id)arg1;	// IMP=0x000000000073809f
- (id)initWithHome:(id)arg1 workQueue:(id)arg2 notificationCenter:(id)arg3 eventWriter:(id)arg4 fakeEventTimerFactory:(CDUnknownBlockType)arg5;	// IMP=0x0000000000737eba
- (_Bool)handleMatterLockEventAtDate:(id)arg1 operationType:(unsigned char)arg2 operationSource:(unsigned char)arg3 accessory:(id)arg4 room:(id)arg5 user:(id)arg6 labelIdentifier:(id)arg7 home:(id)arg8;	// IMP=0x00000000000329c0
- (_Bool)handleLockEventAtDate:(id)arg1 characteristic:(id)arg2 service:(id)arg3 accessory:(id)arg4 room:(id)arg5 user:(id)arg6 labelIdentifier:(id)arg7 home:(id)arg8;	// IMP=0x00000000000325f0
- (_Bool)handleWindowEventAtDate:(id)arg1 characteristic:(id)arg2 service:(id)arg3 accessory:(id)arg4 room:(id)arg5 user:(id)arg6 home:(id)arg7;	// IMP=0x00000000000fc4e0
- (_Bool)handleGarageDoorEventAtDate:(id)arg1 characteristic:(id)arg2 service:(id)arg3 accessory:(id)arg4 room:(id)arg5 user:(id)arg6 home:(id)arg7;	// IMP=0x00000000000fc0e0
- (_Bool)handleDoorEventAtDate:(id)arg1 characteristic:(id)arg2 service:(id)arg3 accessory:(id)arg4 room:(id)arg5 user:(id)arg6 home:(id)arg7;	// IMP=0x00000000000fa730
- (_Bool)handleContactSensorEventAtDate:(id)arg1 characteristic:(id)arg2 service:(id)arg3 accessory:(id)arg4 room:(id)arg5 user:(id)arg6 home:(id)arg7;	// IMP=0x00000000000f8900
- (_Bool)handleSmokeDetectorEventAtDate:(id)arg1 characteristic:(id)arg2 service:(id)arg3 accessory:(id)arg4 room:(id)arg5 user:(id)arg6 home:(id)arg7;	// IMP=0x00000000001076a0
- (_Bool)handleSecuritySystemEventAtDate:(id)arg1 characteristic:(id)arg2 service:(id)arg3 accessory:(id)arg4 room:(id)arg5 user:(id)arg6 home:(id)arg7;	// IMP=0x0000000000107370
- (void)writeFakeEventsWithDate:(id)arg1 home:(id)arg2 count:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000110fd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

