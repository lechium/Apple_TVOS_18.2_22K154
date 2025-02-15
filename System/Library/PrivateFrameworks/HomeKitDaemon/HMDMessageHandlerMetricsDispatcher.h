//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSUUID;
@protocol HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDMessageHandlerMetricsDispatcher : HMFObject
{
    NSUUID *_identifier;	// 8 = 0x8
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x00600000009b9c13
- (void).cxx_destruct;	// IMP=0x00000000009b9be2
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)attributeDescriptions;	// IMP=0x00000000009b9aea
- (id)privateDescription;	// IMP=0x00000000009b9ad8
- (id)logIdentifier;	// IMP=0x00000000009b9a88
- (void)submitFailureEventOfType:(unsigned long long)arg1 message:(id)arg2;	// IMP=0x00000000009b98b1
- (id)initWithIdentifier:(id)arg1 logEventSubmitter:(id)arg2;	// IMP=0x00000000009b97ed

@end

