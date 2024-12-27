//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOperation, NSString, OTDeviceInformation, OTOperationDependencies, TrustedPeersHelperHealthCheckResult;
@protocol OctagonStateString;

@interface OTCheckHealthOperation
{
    _Bool _skipRateLimitingCheck;	// 10 = 0xa
    _Bool _reportRateLimitingError;	// 11 = 0xb
    _Bool _repair;	// 12 = 0xc
    _Bool _requiresEscrowCheck;	// 13 = 0xd
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
    NSString<OctagonStateString> *_nextState;	// 24 = 0x18
    OTDeviceInformation *_deviceInfo;	// 32 = 0x20
    TrustedPeersHelperHealthCheckResult *_results;	// 40 = 0x28
    OTOperationDependencies *_deps;	// 48 = 0x30
    NSOperation *_finishOp;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000004127f
@property _Bool requiresEscrowCheck; // @synthesize requiresEscrowCheck=_requiresEscrowCheck;
@property(retain) NSOperation *finishOp; // @synthesize finishOp=_finishOp;
@property(retain) OTOperationDependencies *deps; // @synthesize deps=_deps;
@property(retain) TrustedPeersHelperHealthCheckResult *results; // @synthesize results=_results;
@property(readonly) _Bool repair; // @synthesize repair=_repair;
@property(readonly) _Bool reportRateLimitingError; // @synthesize reportRateLimitingError=_reportRateLimitingError;
@property(readonly) _Bool skipRateLimitingCheck; // @synthesize skipRateLimitingCheck=_skipRateLimitingCheck;
@property(retain) OTDeviceInformation *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
- (void)handleRepairSuggestions:(id)arg1;	// IMP=0x0010000000040f75
- (void)groupStart;	// IMP=0x00100000000403b8
- (_Bool)checkIfPasscodeIsSetForDevice;	// IMP=0x00100000000403b0
- (id)initWithDependencies:(id)arg1 intendedState:(id)arg2 errorState:(id)arg3 deviceInfo:(id)arg4 skipRateLimitedCheck:(_Bool)arg5 reportRateLimitingError:(_Bool)arg6 repair:(_Bool)arg7;	// IMP=0x00100000000402a1

@end

