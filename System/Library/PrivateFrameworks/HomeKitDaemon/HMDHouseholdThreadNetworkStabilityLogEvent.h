//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMHomeLogEvent.h>

@class HMDThreadNetworkStatusReport, NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDHouseholdThreadNetworkStabilityLogEvent : HMMHomeLogEvent
{
    unsigned long long _numStabilityReporters;	// 8 = 0x8
    HMDThreadNetworkStatusReport *_threadNetworkStatusReport;	// 16 = 0x10
    unsigned long long _threadNetworkUptime;	// 24 = 0x18
    unsigned long long _threadNetworkDowntime;	// 32 = 0x20
    unsigned long long _numReadWrites;	// 40 = 0x28
    unsigned long long _numReadErrors;	// 48 = 0x30
    unsigned long long _numWriteErrors;	// 56 = 0x38
    unsigned long long _numSessionErrors;	// 64 = 0x40
    unsigned long long _numNetworkSignatures;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000b20317
@property(readonly, nonatomic) unsigned long long numNetworkSignatures; // @synthesize numNetworkSignatures=_numNetworkSignatures;
@property(readonly, nonatomic) unsigned long long numSessionErrors; // @synthesize numSessionErrors=_numSessionErrors;
@property(readonly, nonatomic) unsigned long long numWriteErrors; // @synthesize numWriteErrors=_numWriteErrors;
@property(readonly, nonatomic) unsigned long long numReadErrors; // @synthesize numReadErrors=_numReadErrors;
@property(readonly, nonatomic) unsigned long long numReadWrites; // @synthesize numReadWrites=_numReadWrites;
@property(readonly, nonatomic) unsigned long long threadNetworkDowntime; // @synthesize threadNetworkDowntime=_threadNetworkDowntime;
@property(readonly, nonatomic) unsigned long long threadNetworkUptime; // @synthesize threadNetworkUptime=_threadNetworkUptime;
@property(readonly, nonatomic) HMDThreadNetworkStatusReport *threadNetworkStatusReport; // @synthesize threadNetworkStatusReport=_threadNetworkStatusReport;
@property(readonly, nonatomic) unsigned long long numStabilityReporters; // @synthesize numStabilityReporters=_numStabilityReporters;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithHomeUUID:(id)arg1 numStabilityReporters:(unsigned long long)arg2 threadNetworkStatusReport:(id)arg3 threadNetworkUptime:(unsigned long long)arg4 threadNetworkDowntime:(unsigned long long)arg5 numReadWrites:(unsigned long long)arg6 numReadErrors:(unsigned long long)arg7 numWriteErrors:(unsigned long long)arg8 numSessionErrors:(unsigned long long)arg9;	// IMP=0x0000000000b1f9b2

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

