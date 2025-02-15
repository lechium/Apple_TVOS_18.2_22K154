//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDAppleMediaAccessory, HMDCharacteristicsAvailabilityListener, HMDHAPAccessory, NAFuture, NSNotificationCenter, NSObject, NSUUID;
@protocol HMDDoorbellBulletinUtilities, HMMLogEventSubmitting, OS_dispatch_queue;

@protocol HMDDoorbellChimeControllerContext <NSObject>
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter;
@property(readonly, copy) NSUUID *currentAccessoryUUID;
@property(readonly) double doorbellChimeMaximumAnnounceDelay;
@property(readonly) id <HMDDoorbellBulletinUtilities> doorbellBulletinUtilities;
@property(readonly, getter=isCurrentDevicePrimaryResident) _Bool currentDevicePrimaryResident;
@property(readonly) HMDCharacteristicsAvailabilityListener *listener;
@property(readonly) NSNotificationCenter *notificationCenter;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue;
@property __weak HMDHAPAccessory *accessory;
- (_Bool)accessorySupportsCoordinationFreeDoorbellChime:(HMDAppleMediaAccessory *)arg1;
- (NAFuture *)fetchDoorbellDelay;
@end

