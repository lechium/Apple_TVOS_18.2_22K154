//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDRegionStateCorrectnessLogEvent : HMMLogEvent
{
    _Bool _firstAccessoryReachable;	// 8 = 0x8
    _Bool _regionStateAtHome;	// 9 = 0x9
    _Bool _regionStateNearByHome;	// 10 = 0xa
    _Bool _regionStateUnknown;	// 11 = 0xb
    _Bool _isStateCorrect;	// 12 = 0xc
}

+ (id)updateWithRegion:(long long)arg1 nearbyHome:(long long)arg2 accessoryReachable:(_Bool)arg3;	// IMP=0x0010000000b35d54
+ (id)updateWithFirstAccessory:(long long)arg1 nearbyHome:(long long)arg2;	// IMP=0x0010000000b35c8f
@property(readonly) _Bool isStateCorrect; // @synthesize isStateCorrect=_isStateCorrect;
@property(readonly) _Bool regionStateUnknown; // @synthesize regionStateUnknown=_regionStateUnknown;
@property(readonly) _Bool regionStateNearByHome; // @synthesize regionStateNearByHome=_regionStateNearByHome;
@property(readonly) _Bool regionStateAtHome; // @synthesize regionStateAtHome=_regionStateAtHome;
@property(readonly) _Bool firstAccessoryReachable; // @synthesize firstAccessoryReachable=_firstAccessoryReachable;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithReason:(unsigned long long)arg1 firstAccessoryReachable:(_Bool)arg2 regionStateAtHome:(long long)arg3 regionStateNearByHome:(long long)arg4 isStateCorrect:(_Bool)arg5;	// IMP=0x0000000000b3580b

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

