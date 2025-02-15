//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;
@protocol HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDCloudManagerMetricsDispatcher : HMFObject
{
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x0010000000b81e5f
- (void).cxx_destruct;	// IMP=0x0000000000b81e4c
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
- (void)submitFailureEventWithModelType:(id)arg1 failureCode:(unsigned long long)arg2 error:(id)arg3;	// IMP=0x0000000000b81bf3
- (id)initWithLogEventDispatcher:(id)arg1;	// IMP=0x0000000000b81b85

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

