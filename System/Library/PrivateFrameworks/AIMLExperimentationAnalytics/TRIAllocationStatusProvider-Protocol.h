//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, OS_dispatch_queue, TRIAllocationStatusCursor;
@protocol TRINotificationToken;

@protocol TRIAllocationStatusProvider
- (_Bool)removeUpdateHandlerForToken:(id <TRINotificationToken>)arg1;
- (id <TRINotificationToken>)addStatusUpdateHandlerForEnvironment:(int)arg1 queue:(OS_dispatch_queue *)arg2 block:(void (^)(void))arg3;
- (_Bool)enumerateSampledActiveRolloutsForCorrelationID:(NSString *)arg1 error:(id *)arg2 block:(void (^)(TRIRolloutAllocationStatus *, _Bool *))arg3;
- (_Bool)enumerateActiveRolloutsWithError:(id *)arg1 block:(void (^)(TRIRolloutAllocationStatus *, _Bool *))arg2;
- (_Bool)enumerateSampledActiveExperimentsForEnvironment:(int)arg1 correlationID:(NSString *)arg2 error:(id *)arg3 block:(void (^)(TRIExperimentAllocationStatus *, _Bool *))arg4;
- (_Bool)enumerateActiveExperimentsForEnvironment:(int)arg1 error:(id *)arg2 block:(void (^)(TRIExperimentAllocationStatus *, _Bool *))arg3;
- (TRIAllocationStatusCursor *)enumerateExperimentStatusesForTestingPrivacyFilterPolicyWithEnvironment:(int)arg1 startingFromCursor:(TRIAllocationStatusCursor *)arg2 error:(id *)arg3 block:(void (^)(TRIAllocationStatus *, _Bool *))arg4;
- (TRIAllocationStatusCursor *)enumerateExperimentStatusesForEnvironment:(int)arg1 startingFromCursor:(TRIAllocationStatusCursor *)arg2 error:(id *)arg3 block:(void (^)(TRIAllocationStatus *, _Bool *))arg4;
@end

