//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSNumber, NSSet, NSString, RBSAssertion, RBSAssertionIdentifier, RBSLaunchRequest, RBSLaunchResponse, RBSMachPortTaskNameRight, RBSProcessExitContext, RBSProcessExitStatus, RBSProcessHandle, RBSProcessIdentifier, RBSProcessIdentity, RBSProcessInstance, RBSProcessLimitations, RBSProcessMonitor, RBSProcessMonitorConfiguration, RBSProcessPredicate, RBSProcessStateDescriptor, RBSSavedEndowment, RBSTerminateRequest;

@protocol RBSServiceLocalProtocol
- (void)reset;
- (_Bool)isIdentityAnAngel:(RBSProcessIdentity *)arg1 withError:(out id *)arg2;
- (NSSet *)preventLaunchPredicatesWithError:(out id *)arg1;
- (NSSet *)busyExtensionInstancesFromSet:(NSSet *)arg1 error:(out id *)arg2;
- (NSSet *)identifiersForStateCaptureSubsystems:(out id *)arg1;
- (NSString *)captureStateForSubsystem:(NSString *)arg1 error:(out id *)arg2;
- (_Bool)saveEndowment:(RBSSavedEndowment *)arg1 withError:(out id *)arg2;
- (NSDictionary *)infoPlistResultForInstance:(RBSProcessInstance *)arg1 forKeys:(NSArray *)arg2 error:(out id *)arg3;
- (RBSProcessHandle *)hostProcessForInstance:(RBSProcessInstance *)arg1 error:(out id *)arg2;
- (RBSProcessLimitations *)limitationsForInstance:(RBSProcessInstance *)arg1 error:(out id *)arg2;
- (RBSProcessExitContext *)lastExitContextForInstance:(RBSProcessInstance *)arg1 error:(out id *)arg2;
- (void)intendToExit:(RBSProcessInstance *)arg1 withStatus:(RBSProcessExitStatus *)arg2;
- (NSArray *)statesForPredicate:(RBSProcessPredicate *)arg1 withDescriptor:(RBSProcessStateDescriptor *)arg2 error:(out id *)arg3;
- (void)unsubscribeProcessStateMonitor:(RBSProcessMonitor *)arg1 configuration:(RBSProcessMonitorConfiguration *)arg2;
- (_Bool)subscribeProcessStateMonitor:(RBSProcessMonitor *)arg1 configuration:(RBSProcessMonitorConfiguration *)arg2 error:(out id *)arg3;
- (void)subscribeToProcessDeath:(RBSProcessIdentifier *)arg1 handler:(void (^)(RBSProcessExitContext *, NSError *))arg2;
- (RBSMachPortTaskNameRight *)portForIdentifier:(RBSProcessIdentifier *)arg1;
- (RBSProcessHandle *)handleForPredicate:(RBSProcessPredicate *)arg1 error:(out id *)arg2;
- (NSString *)processName:(NSNumber *)arg1;
- (RBSProcessHandle *)handleForKey:(NSNumber *)arg1;
- (_Bool)executeTerminateRequest:(RBSTerminateRequest *)arg1 assertion:(out id *)arg2 error:(out id *)arg3;
- (RBSLaunchResponse *)executeLaunchRequest:(RBSLaunchRequest *)arg1;
- (NSDictionary *)assertionDescriptorsByPidWithFlattenedAttributes:(_Bool)arg1 error:(out id *)arg2;
- (_Bool)invalidateAssertionWithIdentifier:(RBSAssertionIdentifier *)arg1 error:(out id *)arg2;
- (_Bool)invalidateAssertion:(RBSAssertion *)arg1 error:(out id *)arg2;
- (RBSAssertionIdentifier *)acquireAssertion:(RBSAssertion *)arg1 error:(out id *)arg2;
@end

