//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDCloudManagerModelFailureEvent : HMMLogEvent
{
    NSString *_model;	// 8 = 0x8
    NSNumber *_failureCode;	// 16 = 0x10
    NSString *_errorDomain;	// 24 = 0x18
    NSNumber *_errorCode;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000007e5066
@property(readonly, copy) NSNumber *errorCode; // @synthesize errorCode=_errorCode;
@property(readonly, copy) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(readonly, copy) NSNumber *failureCode; // @synthesize failureCode=_failureCode;
@property(readonly, copy) NSString *model; // @synthesize model=_model;
- (id)attributeDescriptions;	// IMP=0x00000000007e4e3c
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithModel:(id)arg1 failureCode:(unsigned long long)arg2 error:(id)arg3;	// IMP=0x00000000007e4b78

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

