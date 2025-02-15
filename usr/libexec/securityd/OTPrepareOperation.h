//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSOperation, NSString, OTAccountSettings, OTDeviceInformation, OTOperationDependencies, TPPolicyVersion;
@protocol OctagonStateString;

@interface OTPrepareOperation
{
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
    NSString<OctagonStateString> *_nextState;	// 24 = 0x18
    unsigned long long _epoch;	// 32 = 0x20
    OTDeviceInformation *_deviceInfo;	// 40 = 0x28
    NSString *_peerID;	// 48 = 0x30
    NSData *_permanentInfo;	// 56 = 0x38
    NSData *_permanentInfoSig;	// 64 = 0x40
    NSData *_stableInfo;	// 72 = 0x48
    NSData *_stableInfoSig;	// 80 = 0x50
    TPPolicyVersion *_policyOverride;	// 88 = 0x58
    OTAccountSettings *_accountSettings;	// 96 = 0x60
    OTOperationDependencies *_deps;	// 104 = 0x68
    NSOperation *_finishedOp;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00200000000a5894
@property(retain) NSOperation *finishedOp; // @synthesize finishedOp=_finishedOp;
@property(retain) OTOperationDependencies *deps; // @synthesize deps=_deps;
@property(retain) OTAccountSettings *accountSettings; // @synthesize accountSettings=_accountSettings;
@property(retain) TPPolicyVersion *policyOverride; // @synthesize policyOverride=_policyOverride;
@property(retain) NSData *stableInfoSig; // @synthesize stableInfoSig=_stableInfoSig;
@property(retain) NSData *stableInfo; // @synthesize stableInfo=_stableInfo;
@property(retain) NSData *permanentInfoSig; // @synthesize permanentInfoSig=_permanentInfoSig;
@property(retain) NSData *permanentInfo; // @synthesize permanentInfo=_permanentInfo;
@property(retain) NSString *peerID; // @synthesize peerID=_peerID;
@property(retain) OTDeviceInformation *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(nonatomic) unsigned long long epoch; // @synthesize epoch=_epoch;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
- (void)groupStart;	// IMP=0x00100000000a46f3
- (id)initWithDependencies:(id)arg1 intendedState:(id)arg2 errorState:(id)arg3 deviceInfo:(id)arg4 policyOverride:(id)arg5 accountSettings:(id)arg6 epoch:(unsigned long long)arg7;	// IMP=0x00100000000a459a

@end

