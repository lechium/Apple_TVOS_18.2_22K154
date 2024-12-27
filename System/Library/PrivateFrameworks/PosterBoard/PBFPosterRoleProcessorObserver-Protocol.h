//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterBoard/NSObject-Protocol.h>

@class NSError, PBFPosterDataStoreEvent, PBFPosterRoleCoordinatorChange, PBFPosterRoleProcessor;
@protocol PBFPosterRoleProcessorResult, PBFPosterRoleProcessorTransaction;

@protocol PBFPosterRoleProcessorObserver <NSObject>

@optional
- (void)roleProcessorWasInvalidated:(PBFPosterRoleProcessor *)arg1;
- (void)roleProcessor:(PBFPosterRoleProcessor *)arg1 transactionFinished:(id <PBFPosterRoleProcessorTransaction>)arg2 success:(_Bool)arg3 results:(id <PBFPosterRoleProcessorResult>)arg4 error:(NSError *)arg5;
- (void)roleProcessor:(PBFPosterRoleProcessor *)arg1 didEvaluateEvent:(PBFPosterDataStoreEvent *)arg2 transaction:(id <PBFPosterRoleProcessorTransaction>)arg3;
- (void)roleProcessor:(PBFPosterRoleProcessor *)arg1 willEvaluateEvent:(PBFPosterDataStoreEvent *)arg2 transaction:(id <PBFPosterRoleProcessorTransaction>)arg3;
- (void)roleProcessor:(PBFPosterRoleProcessor *)arg1 didExecuteChange:(PBFPosterRoleCoordinatorChange *)arg2 transaction:(id <PBFPosterRoleProcessorTransaction>)arg3;
- (void)roleProcessor:(PBFPosterRoleProcessor *)arg1 willExecuteChange:(PBFPosterRoleCoordinatorChange *)arg2 transaction:(id <PBFPosterRoleProcessorTransaction>)arg3;
- (void)roleProcessor:(PBFPosterRoleProcessor *)arg1 didCommitTransaction:(id <PBFPosterRoleProcessorTransaction>)arg2;
- (void)roleProcessor:(PBFPosterRoleProcessor *)arg1 willCommitTransaction:(id <PBFPosterRoleProcessorTransaction>)arg2;
- (void)roleProcessor:(PBFPosterRoleProcessor *)arg1 didFinalizeTransaction:(id <PBFPosterRoleProcessorTransaction>)arg2;
- (void)roleProcessor:(PBFPosterRoleProcessor *)arg1 willFinalizeTransaction:(id <PBFPosterRoleProcessorTransaction>)arg2;
- (void)roleProcessor:(PBFPosterRoleProcessor *)arg1 didBeginTransaction:(id <PBFPosterRoleProcessorTransaction>)arg2;
- (void)roleProcessor:(PBFPosterRoleProcessor *)arg1 willBeginTransaction:(id <PBFPosterRoleProcessorTransaction>)arg2;
@end

