//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RunningBoard/NSObject-Protocol.h>
#import <RunningBoard/RBDomainAttributeManaging-Protocol.h>

@class NSDictionary, NSSet, RBAssertion, RBAssertionAcquisitionContext, RBAssertionBatchContext, RBProcess, RBProcessState, RBSAssertionIdentifier, RBSProcessIdentifier, RBSProcessIdentity, RBSProcessInstance, RBSProcessLimitations, RBSSavedEndowment, RBSystemState;

@protocol RBAssertionManaging <NSObject, RBDomainAttributeManaging>
@property(readonly, copy, nonatomic) RBSystemState *systemState;
- (NSDictionary *)savedEndowmentsForProcess:(RBProcess *)arg1;
- (_Bool)addSavedEndowment:(RBSSavedEndowment *)arg1 forProcess:(RBProcess *)arg2;
- (RBProcess *)processForIdentity:(RBSProcessIdentity *)arg1;
- (RBProcessState *)stateForIdentity:(RBSProcessIdentity *)arg1;
- (void)revalidateAssertionsForProcessIdentities:(NSSet *)arg1;
- (_Bool)isProcessForeground:(RBProcess *)arg1;
- (void)processDidTerminate:(RBProcess *)arg1;
- (void)processDidLaunch:(RBProcess *)arg1;
- (id)popPluginHoldForAssertion:(RBSAssertionIdentifier *)arg1;
- (_Bool)hasAssertionWithIdentifier:(RBSAssertionIdentifier *)arg1;
- (NSSet *)assertionsForOriginator:(RBSProcessIdentifier *)arg1;
- (RBSProcessLimitations *)limitationsForInstance:(RBSProcessInstance *)arg1;
- (NSSet *)assertionDescriptorsWithFlattenedAttributes:(_Bool)arg1;
- (_Bool)invalidateAssertionsDueToCPUUsageViolationForProcessIdentifier:(RBSProcessIdentifier *)arg1;
- (_Bool)invalidateAssertionWithIdentifier:(RBSAssertionIdentifier *)arg1;
- (_Bool)invalidateAssertion:(RBAssertion *)arg1;
- (_Bool)invalidateAssertionFromOriginator:(RBSProcessIdentifier *)arg1 sync:(_Bool)arg2 withIdentifier:(RBSAssertionIdentifier *)arg3;
- (_Bool)invalidateAssertionFromOriginator:(RBSProcessIdentifier *)arg1 withIdentifier:(RBSAssertionIdentifier *)arg2;
- (void)acquireAssertionWithContext:(RBAssertionAcquisitionContext *)arg1 completion:(void (^)(NSError *))arg2;
- (void)commitBatchWithContext:(RBAssertionBatchContext *)arg1 completion:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg2;
@end

