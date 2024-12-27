//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AAFAnalyticsEventSecurity, NSArray, NSOperation, NSString, OTDeviceInformation, OTOperationDependencies, OTUpdateTrustedDeviceListOperation, TPPolicyVersion;
@protocol OctagonStateString;

@interface OTSOSUpgradeOperation
{
    NSString<OctagonStateString> *_nextState;	// 16 = 0x10
    NSString<OctagonStateString> *_intendedState;	// 24 = 0x18
    TPPolicyVersion *_policyOverride;	// 32 = 0x20
    OTOperationDependencies *_deps;	// 40 = 0x28
    OTDeviceInformation *_deviceInfo;	// 48 = 0x30
    NSString<OctagonStateString> *_ckksConflictState;	// 56 = 0x38
    AAFAnalyticsEventSecurity *_eventS;	// 64 = 0x40
    NSOperation *_finishedOp;	// 72 = 0x48
    OTUpdateTrustedDeviceListOperation *_updateOp;	// 80 = 0x50
    NSArray *_peerPreapprovedSPKIs;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0020000000130608
@property(retain) NSArray *peerPreapprovedSPKIs; // @synthesize peerPreapprovedSPKIs=_peerPreapprovedSPKIs;
@property(retain) OTUpdateTrustedDeviceListOperation *updateOp; // @synthesize updateOp=_updateOp;
@property(retain) NSOperation *finishedOp; // @synthesize finishedOp=_finishedOp;
@property(retain, nonatomic) AAFAnalyticsEventSecurity *eventS; // @synthesize eventS=_eventS;
@property(retain) NSString<OctagonStateString> *ckksConflictState; // @synthesize ckksConflictState=_ckksConflictState;
@property(retain) OTDeviceInformation *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain) OTOperationDependencies *deps; // @synthesize deps=_deps;
@property(readonly) TPPolicyVersion *policyOverride; // @synthesize policyOverride=_policyOverride;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
- (void)proceedWithKeys:(id)arg1 pendingTLKShares:(id)arg2;	// IMP=0x0010000000130216
- (void)afterSuccessfulAllowList;	// IMP=0x001000000013003f
- (void)requestSilentEscrowUpdate;	// IMP=0x001000000012fe2f
- (void)afterUpdate;	// IMP=0x001000000012fca1
- (void)handlePrepareErrors:(id)arg1 nextExpectedState:(id)arg2;	// IMP=0x001000000012fb3e
- (void)afterPreflight;	// IMP=0x001000000012f92b
- (void)afterPrepare;	// IMP=0x001000000012f7ab
- (void)groupStart;	// IMP=0x001000000012dfe2
- (id)persistentKeyRef:(struct __SecKey *)arg1 error:(id *)arg2;	// IMP=0x001000000012df4a
- (id)initWithDependencies:(id)arg1 intendedState:(id)arg2 ckksConflictState:(id)arg3 errorState:(id)arg4 deviceInfo:(id)arg5 policyOverride:(id)arg6;	// IMP=0x001000000012de07

@end

