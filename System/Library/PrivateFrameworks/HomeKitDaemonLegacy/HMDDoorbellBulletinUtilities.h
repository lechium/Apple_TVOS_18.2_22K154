//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDDoorbellBulletinUtilities : HMFObject
{
}

+ (id)logCategory;	// IMP=0x00100000003e524c
- (id)clipUUIDsForCoalesceableSignificantEvents:(id)arg1;	// IMP=0x00000000003e623f
- (id)faceClassificationsNearDateOfDoorbellPress:(id)arg1 forCameraProfile:(id)arg2;	// IMP=0x00000000003e61e8
- (id)significantEventsRelevantToDoorbellPress:(id)arg1 forCameraProfile:(id)arg2;	// IMP=0x00000000003e5e6b
- (id)_significantEventsWithinTimeWindowOfDoorbellPress:(id)arg1 forCameraProfile:(id)arg2;	// IMP=0x00000000003e5b21
- (id)localizedMessageForCharacteristic:(id)arg1;	// IMP=0x00000000003e58c3
- (id)_localizedDoorbellMessageForSignificantEvents:(id)arg1 forAudioAccessory:(_Bool)arg2;	// IMP=0x00000000003e52de
- (id)localizedAudioAccessoryAnnounceMessageForSignificantEvents:(id)arg1;	// IMP=0x00000000003e52c7
- (id)localizedDoorbellMessageForSignificantEvents:(id)arg1;	// IMP=0x00000000003e52b3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

