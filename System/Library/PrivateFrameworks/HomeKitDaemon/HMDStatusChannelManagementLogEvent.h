//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDStatusChannelManagementLogEvent : HMMLogEvent
{
    _Bool _isRetry;	// 8 = 0x8
    NSString *_channelPrefix;	// 16 = 0x10
    long long _action;	// 24 = 0x18
    long long _count;	// 32 = 0x20
}

+ (id)denominatorEvent;	// IMP=0x0010000000ec61cc
- (void).cxx_destruct;	// IMP=0x0000000000ec61b9
@property(readonly, nonatomic) long long count; // @synthesize count=_count;
@property(readonly, nonatomic) long long action; // @synthesize action=_action;
@property(readonly, nonatomic) _Bool isRetry; // @synthesize isRetry=_isRetry;
@property(readonly, nonatomic) NSString *channelPrefix; // @synthesize channelPrefix=_channelPrefix;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithChannelPrefix:(id)arg1 isRetry:(_Bool)arg2 action:(long long)arg3 count:(long long)arg4;	// IMP=0x0000000000ec5dca
- (id)initWithChannelPrefix:(id)arg1 isRetry:(_Bool)arg2 action:(long long)arg3;	// IMP=0x0000000000ec5db2

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

