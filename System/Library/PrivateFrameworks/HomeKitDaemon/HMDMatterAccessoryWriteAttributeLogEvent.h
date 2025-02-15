//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMDatedHomeLogEvent.h>

@class MISSING_TYPE, NSDictionary, NSNumber, NSObject, NSString;

@interface HMDMatterAccessoryWriteAttributeLogEvent : HMMDatedHomeLogEvent
{
    MISSING_TYPE *home;	// 8 = 0x8
    MISSING_TYPE *nodeId;	// 16 = 0x10
    MISSING_TYPE *endpointId;	// 24 = 0x18
    MISSING_TYPE *clusterId;	// 32 = 0x20
    MISSING_TYPE *attributeId;	// 40 = 0x28
    MISSING_TYPE *value;	// 48 = 0x30
    MISSING_TYPE *timedWriteTimeout;	// 56 = 0x38
    MISSING_TYPE *coreAnalyticsEventName;	// 64 = 0x40
    MISSING_TYPE *coreAnalyticsEventOptions;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000007ed0
- (id)initWithStartTime:(double)arg1 homeUUID:(id)arg2;	// IMP=0x0000000000007e40
- (id)initWithHomeUUID:(id)arg1;	// IMP=0x0000000000007d40
@property(nonatomic, readonly) unsigned long long coreAnalyticsEventOptions; // @synthesize coreAnalyticsEventOptions;
@property(nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;
@property(nonatomic, readonly) NSString *coreAnalyticsEventName;
- (id)initWithHome:(id)arg1 nodeId:(unsigned long long)arg2 endpointId:(id)arg3 clusterId:(id)arg4 attributeId:(id)arg5 value:(id)arg6 timedWriteTimeout:(id)arg7;	// IMP=0x00000000000079b0
@property(nonatomic, readonly) NSNumber *timedWriteTimeout; // @synthesize timedWriteTimeout;
@property(nonatomic, readonly) NSObject *value; // @synthesize value;
@property(nonatomic, readonly) NSNumber *attributeId; // @synthesize attributeId;
@property(nonatomic, readonly) NSNumber *clusterId; // @synthesize clusterId;
@property(nonatomic, readonly) NSNumber *endpointId; // @synthesize endpointId;
@property(nonatomic, readonly) unsigned long long nodeId; // @synthesize nodeId;

@end

