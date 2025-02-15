//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAppleMediaAccessoryDiagnosticInfoController, NSObject, NSString, RPCompanionLinkClient;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDDeviceSetupConfiguringController : HMFObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    CDUnknownBlockType _rpCompanionLinkClientFactory;	// 16 = 0x10
    HMDAppleMediaAccessoryDiagnosticInfoController *_diagnosticInfoController;	// 24 = 0x18
    RPCompanionLinkClient *_client;	// 32 = 0x20
    unsigned long long _requestIDRegistrationDelay;	// 40 = 0x28
    unsigned long long _restartRPClientDelay;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x0010000000797479
- (void).cxx_destruct;	// IMP=0x0000000000795dfc
@property unsigned long long restartRPClientDelay; // @synthesize restartRPClientDelay=_restartRPClientDelay;
@property unsigned long long requestIDRegistrationDelay; // @synthesize requestIDRegistrationDelay=_requestIDRegistrationDelay;
@property(retain, nonatomic) RPCompanionLinkClient *client; // @synthesize client=_client;
@property(retain, nonatomic) HMDAppleMediaAccessoryDiagnosticInfoController *diagnosticInfoController; // @synthesize diagnosticInfoController=_diagnosticInfoController;
@property(copy, nonatomic) CDUnknownBlockType rpCompanionLinkClientFactory; // @synthesize rpCompanionLinkClientFactory=_rpCompanionLinkClientFactory;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)_setupRPClientAfter:(long long)arg1;	// IMP=0x0000000000795b86
- (void)_setupCompanionLinkClient;	// IMP=0x00000000007954e4
- (_Bool)_shouldRegisterRequest;	// IMP=0x00000000007954b1
- (void)_registerRequest:(id)arg1;	// IMP=0x0000000000795139
- (id)_activeDevicesWithMediaRouteIdentifier:(id)arg1;	// IMP=0x0000000000794db5
- (void)_tearDownCompanionLinkClient;	// IMP=0x0000000000794c99
- (void)_queryWithRequestID:(id)arg1 mediaRouteIdentifier:(id)arg2 rpDevice:(id)arg3 additionalKeys:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x00000000007947c5
- (void)_registerRequest:(id)arg1 after:(long long)arg2;	// IMP=0x0000000000794608
- (id)diagnosticInfoWithAdditionalKeys:(id)arg1;	// IMP=0x000000000079458e
- (void)registerRequestID;	// IMP=0x000000000079444d
- (void)queryConfiguringState:(id)arg1 additionalKeys:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000794340
- (void)setupRPClient;	// IMP=0x00000000007942cf
- (id)initWithQueue:(id)arg1 rpCompanionLinkClientFactory:(CDUnknownBlockType)arg2 diagnosticInfoController:(id)arg3;	// IMP=0x00000000007941e1
- (id)initWithDiagnosticInfoControllerInternal:(id)arg1;	// IMP=0x000000000079414d
- (id)initWithDiagnosticInfoController:(id)arg1;	// IMP=0x000000000079413b
- (id)init;	// IMP=0x0000000000794127

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

