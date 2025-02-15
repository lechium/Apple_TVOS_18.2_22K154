//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDMemoryUtilizationTracker : NSObject
{
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x0010000000b50d0f
- (void).cxx_destruct;	// IMP=0x0000000000b50d01
@property(readonly) __weak id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
- (void)trackMemoryUsageWithReason:(long long)arg1;	// IMP=0x0000000000b50a6b
- (id)initWithLogEventSubmitter:(id)arg1;	// IMP=0x0000000000b509f6
- (id)init;	// IMP=0x0000000000b5099c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

