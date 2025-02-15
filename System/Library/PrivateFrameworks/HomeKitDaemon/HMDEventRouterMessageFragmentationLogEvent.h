//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDEventRouterMessageFragmentationLogEvent : HMMLogEvent
{
    _Bool _isCachedEventQueue;	// 8 = 0x8
    _Bool _isFragmented;	// 9 = 0x9
}

@property(readonly, nonatomic) _Bool isFragmented; // @synthesize isFragmented=_isFragmented;
@property(readonly, nonatomic) _Bool isCachedEventQueue; // @synthesize isCachedEventQueue=_isCachedEventQueue;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
- (id)initWithIsCachedEventQueue:(_Bool)arg1 isFragmented:(_Bool)arg2;	// IMP=0x0000000000c64267
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

