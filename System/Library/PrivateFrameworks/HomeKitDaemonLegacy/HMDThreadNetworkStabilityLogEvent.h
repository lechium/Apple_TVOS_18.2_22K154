//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMHomeLogEvent.h>

@class HMDThreadNetworkStatusReport, NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDThreadNetworkStabilityLogEvent : HMMHomeLogEvent
{
    HMDThreadNetworkStatusReport *_threadNetworkStatusReport;	// 8 = 0x8
    unsigned long long _threadNetworkUptime;	// 16 = 0x10
    unsigned long long _threadNetworkDowntime;	// 24 = 0x18
    unsigned long long _numReadWrites;	// 32 = 0x20
    unsigned long long _numReadErrors;	// 40 = 0x28
    unsigned long long _numWriteErrors;	// 48 = 0x30
    unsigned long long _numSessionErrors;	// 56 = 0x38
    NSString *_topReadWriteError;	// 64 = 0x40
    NSString *_topSessionError;	// 72 = 0x48
    NSString *_logTriggerReason;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000008499c0
@property(readonly, nonatomic) NSString *logTriggerReason; // @synthesize logTriggerReason=_logTriggerReason;
@property(readonly, nonatomic) NSString *topSessionError; // @synthesize topSessionError=_topSessionError;
@property(readonly, nonatomic) NSString *topReadWriteError; // @synthesize topReadWriteError=_topReadWriteError;
@property(readonly, nonatomic) unsigned long long numSessionErrors; // @synthesize numSessionErrors=_numSessionErrors;
@property(readonly, nonatomic) unsigned long long numWriteErrors; // @synthesize numWriteErrors=_numWriteErrors;
@property(readonly, nonatomic) unsigned long long numReadErrors; // @synthesize numReadErrors=_numReadErrors;
@property(readonly, nonatomic) unsigned long long numReadWrites; // @synthesize numReadWrites=_numReadWrites;
@property(readonly, nonatomic) unsigned long long threadNetworkDowntime; // @synthesize threadNetworkDowntime=_threadNetworkDowntime;
@property(readonly, nonatomic) unsigned long long threadNetworkUptime; // @synthesize threadNetworkUptime=_threadNetworkUptime;
@property(readonly, nonatomic) HMDThreadNetworkStatusReport *threadNetworkStatusReport; // @synthesize threadNetworkStatusReport=_threadNetworkStatusReport;
- (id)serializedLogEvent;	// IMP=0x0000000000849122
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000847c76
- (id)initWithHomeUUID:(id)arg1 threadNetworkStatusReport:(id)arg2 threadNetworkUptime:(unsigned long long)arg3 threadNetworkDowntime:(unsigned long long)arg4 numReadWrites:(unsigned long long)arg5 numReadErrors:(unsigned long long)arg6 numWriteErrors:(unsigned long long)arg7 topReadWriteError:(id)arg8 topSessionError:(id)arg9 numSessionErrors:(unsigned long long)arg10 logTriggerReason:(id)arg11;	// IMP=0x0000000000847a8c

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

