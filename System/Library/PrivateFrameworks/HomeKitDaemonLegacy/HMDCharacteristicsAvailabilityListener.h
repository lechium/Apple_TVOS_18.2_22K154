//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHAPAccessory, HMDNotificationRegistration, NSDictionary, NSObject, NSSet, NSString;
@protocol HMDCharacteristicsAvailabilityListenerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCharacteristicsAvailabilityListener : HMFObject
{
    NSSet *_availableCharacteristics;	// 8 = 0x8
    NSDictionary *_interestedCharacteristicTypesByServiceType;	// 16 = 0x10
    id <HMDCharacteristicsAvailabilityListenerDelegate> _delegate;	// 24 = 0x18
    HMDHAPAccessory *_accessory;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
    HMDNotificationRegistration *_notificationRegistration;	// 48 = 0x30
    NSString *_logIdentifier;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x0010000000bd84d0
- (void).cxx_destruct;	// IMP=0x0000000000bd8260
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly) HMDNotificationRegistration *notificationRegistration; // @synthesize notificationRegistration=_notificationRegistration;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property __weak id <HMDCharacteristicsAvailabilityListenerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSDictionary *interestedCharacteristicTypesByServiceType; // @synthesize interestedCharacteristicTypesByServiceType=_interestedCharacteristicTypesByServiceType;
@property(copy) NSSet *availableCharacteristics; // @synthesize availableCharacteristics=_availableCharacteristics;
- (void)handleServicesUpdated:(id)arg1;	// IMP=0x0000000000bd812a
- (void)handleCharacteristicsUpdated:(id)arg1;	// IMP=0x0000000000bd80b9
- (void)_notifyDelegate;	// IMP=0x0000000000bd7ecb
- (id)_accessoryCharacteristicsToObserve;	// IMP=0x0000000000bd7b06
- (void)_registerForNotifications;	// IMP=0x0000000000bd7a1e
- (void)start;	// IMP=0x0000000000bd79be
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2 interestedCharacteristicTypesByServiceType:(id)arg3;	// IMP=0x0000000000bd77dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

