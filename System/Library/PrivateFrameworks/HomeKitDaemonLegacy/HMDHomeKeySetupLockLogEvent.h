//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class HMFTimer, NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDHomeKeySetupLockLogEvent : HMMLogEvent
{
    _Bool _success;	// 8 = 0x8
    NSUUID *_accessoryUUID;	// 16 = 0x10
    unsigned long long _keyType;	// 24 = 0x18
    long long _expectedCount;	// 32 = 0x20
    long long _completedCount;	// 40 = 0x28
    HMFTimer *_timer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000006cf1ac
@property(retain, nonatomic) HMFTimer *timer; // @synthesize timer=_timer;
@property long long completedCount; // @synthesize completedCount=_completedCount;
@property long long expectedCount; // @synthesize expectedCount=_expectedCount;
@property(readonly) unsigned long long keyType; // @synthesize keyType=_keyType;
@property(readonly, copy) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(readonly) _Bool success; // @synthesize success=_success;
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000006cf099
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (void)timeout;	// IMP=0x00000000006cee56
- (void)submitSuccess;	// IMP=0x00000000006cedda
- (_Bool)incrementCompleted;	// IMP=0x00000000006ced66
- (id)initWithAccessoryUUID:(id)arg1 withKeyType:(unsigned long long)arg2 expectedCount:(long long)arg3 queue:(id)arg4;	// IMP=0x00000000006cec35

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

