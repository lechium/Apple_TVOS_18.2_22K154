//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDCameraMetricsStreamLogEvent
{
    NSNumber *_referenceTimestamp;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000997185
@property(retain, nonatomic) NSNumber *referenceTimestamp; // @synthesize referenceTimestamp=_referenceTimestamp;
- (void)_addInitialConfigurationMetricsToEvent:(id)arg1;	// IMP=0x00000000009970a8
- (void)_addDurationsBetweenMilestones:(id)arg1 toEvent:(id)arg2;	// IMP=0x0000000000996fe4
- (void)_addStreamStartToFirstFrameDurationFromMilestones:(id)arg1 toEvent:(id)arg2;	// IMP=0x0000000000996dd2
- (void)_addFirstToLastDurationFromMilestones:(id)arg1 toEvent:(id)arg2;	// IMP=0x0000000000996cfd
- (id)_durationBetweenMilestone1:(id)arg1 andMilestone2:(id)arg2 index:(id)arg3;	// IMP=0x0000000000996ad9
- (id)_milestonesSortedByTimestamp;	// IMP=0x0000000000996a02
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithSessionID:(id)arg1 cameraAccessory:(id)arg2 isLocal:(_Bool)arg3;	// IMP=0x000000000099685e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSUUID",?,R,N

@property(readonly) Class superclass;

@end

