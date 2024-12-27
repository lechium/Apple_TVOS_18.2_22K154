//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAggregateRemoteMessageCountersLogEvent : HMMLogEvent
{
    NSString *_transportType;	// 8 = 0x8
    NSString *_direction;	// 16 = 0x10
    NSString *_deviceType;	// 24 = 0x18
    NSString *_messageName;	// 32 = 0x20
    double _primaryResidentDuration;	// 40 = 0x28
    NSNumber *_count;	// 48 = 0x30
}

+ (id)aggregateRemoteCountersLogEventWithMessageName:(id)arg1 deviceType:(id)arg2 transportType:(id)arg3 direction:(id)arg4 primaryResidentDuration:(double)arg5 count:(id)arg6;	// IMP=0x00100000007586a3
- (void).cxx_destruct;	// IMP=0x000000000075863f
@property(readonly, copy, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(readonly, nonatomic) double primaryResidentDuration; // @synthesize primaryResidentDuration=_primaryResidentDuration;
@property(readonly, copy, nonatomic) NSString *messageName; // @synthesize messageName=_messageName;
@property(readonly, copy, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(readonly, copy, nonatomic) NSString *direction; // @synthesize direction=_direction;
@property(readonly, copy, nonatomic) NSString *transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithMessageName:(id)arg1 deviceType:(id)arg2 transportType:(id)arg3 direction:(id)arg4 primaryResidentDuration:(double)arg5 count:(id)arg6;	// IMP=0x00000000007582ab

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

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

