//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HMDUserActivityType3Report
{
    unsigned long long _state;	// 8 = 0x8
}

@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
- (id)copyReportWithLastUpdateTimestamp:(id)arg1 reason:(unsigned long long)arg2;	// IMP=0x0000000000c2ecbe
- (id)copyReportWithChangedTimestamp:(id)arg1;	// IMP=0x0000000000c2ebeb
- (id)serializedRemoteMessagePayload;	// IMP=0x0000000000c2eb12
- (unsigned long long)contributorType;	// IMP=0x0000000000c2eb07
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c2ea3c
- (id)initFromMessagePayload:(id)arg1 withUser:(id)arg2;	// IMP=0x0000000000c2e94e
- (id)initWithUser:(id)arg1 state:(unsigned long long)arg2 withReason:(unsigned long long)arg3 changedTimestamp:(id)arg4 lastUpdateTimestamp:(id)arg5;	// IMP=0x0000000000c2e8fd
- (id)initWithUser:(id)arg1 state:(unsigned long long)arg2 withReason:(unsigned long long)arg3;	// IMP=0x0000000000c2e8d7

@end

