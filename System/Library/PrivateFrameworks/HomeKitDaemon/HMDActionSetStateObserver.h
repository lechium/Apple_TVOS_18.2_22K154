//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/SwiftNativeNSObject.h>

@class MISSING_TYPE, NSArray;

@interface HMDActionSetStateObserver : SwiftNativeNSObject
{
    MISSING_TYPE *$defaultActor;	// 4277009103 = 0xfeedfacf
    MISSING_TYPE *monitoredCharacteristics;	// 112 = 0x70
    MISSING_TYPE *monitoredCharacteristicsToRetry;	// 120 = 0x78
    MISSING_TYPE *matterDeviceController;	// 128 = 0x80
    MISSING_TYPE *monitoredAttributes;	// 136 = 0x88
    MISSING_TYPE *monitoredDevicesByNodeID;	// 144 = 0x90
    MISSING_TYPE *characteristicsRetryTimer;	// 152 = 0x98
    MISSING_TYPE *monitoredMediaAccessoryUUIDs;	// 160 = 0xa0
    MISSING_TYPE *monitoredNaturalLightingProfiles;	// 168 = 0xa8
    MISSING_TYPE *notificationCenter;	// 176 = 0xb0
    MISSING_TYPE *notificationRegistry;	// 184 = 0xb8
    MISSING_TYPE *dataSource;	// 192 = 0xc0
    MISSING_TYPE *monitoredActionSets;	// 200 = 0xc8
}

- (id)init;	// IMP=0x00000000000c0680
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000000bc080
- (void)currentStateForActionSetUUIDs:(NSArray *)arg1 completionHandler:(void (^)(NSArray *))arg2;	// IMP=0x00000000000b2c40
- (void)handleNaturalLightingProfileStateChangedWithNotification:(id)arg1;	// IMP=0x00000000000b2550
- (void)handleMediaProfileHasMediaSessionStateChangedWithNotification:(id)arg1;	// IMP=0x00000000000b2320
- (void)handleWithCharacteristicsChangedNotification:(id)arg1;	// IMP=0x00000000000b15c0
- (void)handleActionSetUpdatedWithNotification:(id)arg1;	// IMP=0x00000000000b0e50
- (void)handleActionSetAddedWithNotification:(id)arg1;	// IMP=0x00000000000b0d80
- (void)stateRegistrationsDidChangeForActionSetUUIDs:(id)arg1;	// IMP=0x00000000000af8e0
- (void)stopMonitoringActionSet:(id)arg1;	// IMP=0x00000000000af6d0
- (id)initWithDataSource:(id)arg1 notificationRegistry:(id)arg2;	// IMP=0x00000000000af1a0
- (void)device:(id)arg1 receivedEventReport:(id)arg2;	// IMP=0x00000000000c1640
- (void)device:(id)arg1 receivedAttributeReport:(id)arg2;	// IMP=0x00000000000c1370
- (void)device:(id)arg1 stateChanged:(unsigned long long)arg2;	// IMP=0x00000000000c09b0

@end

