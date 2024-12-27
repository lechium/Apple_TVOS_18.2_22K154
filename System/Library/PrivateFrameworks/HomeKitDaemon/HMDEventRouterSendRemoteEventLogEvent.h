//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDEventRouterSendRemoteEventLogEvent : HMMLogEvent
{
    _Bool _isCachedEvent;	// 8 = 0x8
    NSString *_topic;	// 16 = 0x10
    unsigned long long _sourceDeviceType;	// 24 = 0x18
    unsigned long long _destinationDeviceType;	// 32 = 0x20
    unsigned long long _responseMessageType;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000af14fe
@property(readonly, nonatomic) unsigned long long responseMessageType; // @synthesize responseMessageType=_responseMessageType;
@property(readonly, nonatomic) _Bool isCachedEvent; // @synthesize isCachedEvent=_isCachedEvent;
@property(readonly, nonatomic) unsigned long long destinationDeviceType; // @synthesize destinationDeviceType=_destinationDeviceType;
@property(readonly, nonatomic) unsigned long long sourceDeviceType; // @synthesize sourceDeviceType=_sourceDeviceType;
@property(readonly, copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
- (id)initWithTopic:(id)arg1 sourceDeviceType:(unsigned long long)arg2 destinationDeviceType:(unsigned long long)arg3 isCachedEvent:(_Bool)arg4 responseMessageType:(unsigned long long)arg5;	// IMP=0x0000000000af13ce
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;

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

