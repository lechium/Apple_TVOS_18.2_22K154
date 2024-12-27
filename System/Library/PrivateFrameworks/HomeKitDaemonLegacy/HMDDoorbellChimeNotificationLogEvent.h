//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSError, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDDoorbellChimeNotificationLogEvent : HMMLogEvent
{
    _Bool _coordinationPathTriggered;	// 8 = 0x8
    unsigned long long _coreUtilsLatency;	// 16 = 0x10
    unsigned long long _coreUtilsDestinationCount;	// 24 = 0x18
    long long _coordinationLatency;	// 32 = 0x20
    NSError *_coordinationError;	// 40 = 0x28
    unsigned long long _coordinationMode;	// 48 = 0x30
    unsigned long long _numHomePodsWithDoorbellChimeEnabled;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000226861
@property unsigned long long numHomePodsWithDoorbellChimeEnabled; // @synthesize numHomePodsWithDoorbellChimeEnabled=_numHomePodsWithDoorbellChimeEnabled;
@property unsigned long long coordinationMode; // @synthesize coordinationMode=_coordinationMode;
@property(copy) NSError *coordinationError; // @synthesize coordinationError=_coordinationError;
@property long long coordinationLatency; // @synthesize coordinationLatency=_coordinationLatency;
@property _Bool coordinationPathTriggered; // @synthesize coordinationPathTriggered=_coordinationPathTriggered;
@property unsigned long long coreUtilsDestinationCount; // @synthesize coreUtilsDestinationCount=_coreUtilsDestinationCount;
@property unsigned long long coreUtilsLatency; // @synthesize coreUtilsLatency=_coreUtilsLatency;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
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

