//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDHomeLocationLogEvent : HMMLogEvent
{
    int _isGreatDistance;	// 8 = 0x8
    double _homeLocationDistance;	// 16 = 0x10
}

+ (id)updateWithHomeDistance:(double)arg1;	// IMP=0x0010000000a2eb34
@property(readonly) int isGreatDistance; // @synthesize isGreatDistance=_isGreatDistance;
@property(readonly) double homeLocationDistance; // @synthesize homeLocationDistance=_homeLocationDistance;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithDistance:(double)arg1;	// IMP=0x0000000000a2e991

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

