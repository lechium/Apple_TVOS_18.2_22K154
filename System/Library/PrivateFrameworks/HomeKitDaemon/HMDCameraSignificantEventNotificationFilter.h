//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface HMDCameraSignificantEventNotificationFilter : HMFObject
{
    NSMutableDictionary *_primaryResidentSignificantEventNotificationsByUUID;	// 8 = 0x8
    NSMutableDictionary *_cloudSignificantEventsByUUID;	// 16 = 0x10
}

+ (_Bool)isRelevantSignificantEventDate:(id)arg1;	// IMP=0x0060000000bd80ce
- (void).cxx_destruct;	// IMP=0x0000000000bd809d
@property(readonly, nonatomic) NSMutableDictionary *cloudSignificantEventsByUUID; // @synthesize cloudSignificantEventsByUUID=_cloudSignificantEventsByUUID;
@property(readonly, nonatomic) NSMutableDictionary *primaryResidentSignificantEventNotificationsByUUID; // @synthesize primaryResidentSignificantEventNotificationsByUUID=_primaryResidentSignificantEventNotificationsByUUID;
- (void)_pruneCloudSignificantEvents;	// IMP=0x0000000000bd7df0
- (void)_prunePrimaryResidentSignificantEvents;	// IMP=0x0000000000bd7b65
- (_Bool)_isSignificantEventRelevantWithUUID:(id)arg1 isFromPrimary:(_Bool)arg2;	// IMP=0x0000000000bd7a7e
- (id)consumeCloudSignificantEventWithUUID:(id)arg1;	// IMP=0x0000000000bd7995
- (id)consumePrimaryResidentSignificantEventWithUUID:(id)arg1;	// IMP=0x0000000000bd78a9
- (void)addIncomingCloudSignificantEvent:(id)arg1;	// IMP=0x0000000000bd781f
- (void)addIncomingPrimaryResidentSignificantEventNotificationWithUUID:(id)arg1 notificationReasons:(unsigned long long)arg2 date:(id)arg3;	// IMP=0x0000000000bd7761
- (id)init;	// IMP=0x0000000000bd76b6

@end

