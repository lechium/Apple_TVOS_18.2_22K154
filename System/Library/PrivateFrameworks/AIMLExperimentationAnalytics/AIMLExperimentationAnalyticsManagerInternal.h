//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString, NSUUID;

@interface AIMLExperimentationAnalyticsManagerInternal : NSObject
{
    MISSING_TYPE *instrumentation;	// 8 = 0x8
    MISSING_TYPE *experimentation;	// 16 = 0x10
    MISSING_TYPE *userDefaults;	// 24 = 0x18
    MISSING_TYPE *queue;	// 32 = 0x20
    MISSING_TYPE *experimentsForCodePathID;	// 40 = 0x28
    MISSING_TYPE *rolloutTrackingInfoForNamespace;	// 48 = 0x30
    MISSING_TYPE *lock;	// 56 = 0x38
    MISSING_TYPE *rolloutRegistrationLock;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000007930
- (void)emitTriggerFor:(NSUUID *)arg1 namespace:(NSString *)arg2 requestID:(NSUUID *)arg3 completionHandler:(void (^)(NSError *))arg4;	// IMP=0x0000000000005c81
- (void)emitTriggerFromCacheFor:(NSUUID *)arg1 requestID:(NSUUID *)arg2 completionHandler:(void (^)(NSError *))arg3;	// IMP=0x0000000000005647
- (void)emitTriggerFor:(NSUUID *)arg1 requestID:(NSUUID *)arg2 completionHandler:(void (^)(NSError *))arg3;	// IMP=0x00000000000053dc
- (void)cacheTrialExperimentIdentifiersFor:(NSUUID *)arg1 namespaces:(NSArray *)arg2 completionHandler:(void (^)(NSError *))arg3;	// IMP=0x0000000000004e56
- (void)cacheTrialExperimentsFor:(NSUUID *)arg1 completionHandler:(void (^)(NSError *))arg2;	// IMP=0x0000000000004af1
- (id)init;	// IMP=0x0000000000004602

@end

