//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

__attribute__((visibility("hidden")))
@interface HMDUserActivityType6Report
{
    unsigned long long _state;	// 8 = 0x8
    NSDate *_stateEnd;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000588a76
@property(readonly, nonatomic) NSDate *stateEnd; // @synthesize stateEnd=_stateEnd;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
- (id)copyReportWithLastUpdateTimestamp:(id)arg1 reason:(unsigned long long)arg2;	// IMP=0x000000000058895e
- (id)copyReportWithChangedTimestamp:(id)arg1;	// IMP=0x000000000058885b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000588733
- (id)serializedRemoteMessagePayload;	// IMP=0x0000000000588623
- (unsigned long long)contributorType;	// IMP=0x0000000000588618
- (id)initFromMessagePayload:(id)arg1 withUser:(id)arg2;	// IMP=0x00000000005884ec
- (id)initWithUser:(id)arg1 state:(unsigned long long)arg2 stateEnd:(id)arg3 withReason:(unsigned long long)arg4 changedTimestamp:(id)arg5 lastUpdateTimestamp:(id)arg6;	// IMP=0x000000000058844f
- (id)initWithUser:(id)arg1 state:(unsigned long long)arg2 stateEnd:(id)arg3 withReason:(unsigned long long)arg4;	// IMP=0x000000000058842d

@end

