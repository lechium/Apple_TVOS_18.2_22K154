//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMHomeLogEvent.h>

@class MISSING_TYPE, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _TtCO13HomeKitDaemon6Metric15LogEventAdaptor : HMMHomeLogEvent
{
    MISSING_TYPE *name;	// 8 = 0x8
    MISSING_TYPE *event;	// 24 = 0x18
    MISSING_TYPE *coreAnalyticsEventOptions;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000010a900
- (id)initWithStartTime:(double)arg1 homeUUID:(id)arg2;	// IMP=0x000000000010a870
- (id)initWithHomeUUID:(id)arg1;	// IMP=0x000000000010a810
@property(nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;
@property(nonatomic, readonly) NSString *coreAnalyticsEventName;
@property(nonatomic) unsigned long long coreAnalyticsEventOptions; // @synthesize coreAnalyticsEventOptions;

@end

