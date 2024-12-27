//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString, NSUUID;
@protocol HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDHomeMetricsDispatcher : HMFObject
{
    NSUUID *_identifier;	// 8 = 0x8
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x00100000001d0962
- (void).cxx_destruct;	// IMP=0x00000000001d0911
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)logIdentifier;	// IMP=0x00000000001d0895
- (void)submitMigrationEventMetricsForModel:(id)arg1 reason:(id)arg2;	// IMP=0x00000000001d0707
- (void)submitMigrationEventMetricsForModels:(id)arg1 reason:(id)arg2;	// IMP=0x00000000001d0670
- (id)initWithIdentifier:(id)arg1 logEventSubmitter:(id)arg2;	// IMP=0x00000000001d05ce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

