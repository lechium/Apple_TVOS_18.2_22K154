//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC11PassKitCore32ProvisioningCarKeyStepFindReader : NSObject
{
    MISSING_TYPE *context;	// 8 = 0x8
    MISSING_TYPE *credential;	// 16 = 0x10
    MISSING_TYPE *sharedState;	// 48 = 0x30
    MISSING_TYPE *carConfiguration;	// 56 = 0x38
    MISSING_TYPE *commonCompletion;	// 64 = 0x40
    MISSING_TYPE *session;	// 80 = 0x50
    MISSING_TYPE *bindingAttestation;	// 88 = 0x58
    MISSING_TYPE *onDidStartPairing;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000000d6c50
- (id)init;	// IMP=0x00000000000d6bf0
- (void)appletSubcredentialPairingSession:(id)arg1 didFinishProbingTerminalWithError:(id)arg2 brandCode:(long long)arg3;	// IMP=0x00000000000d8240
- (void)appletSubcredentialPairingSession:(id)arg1 didFinishPreWarmWithResult:(id)arg2;	// IMP=0x00000000000d81c0
- (void)appletSubcredentialPairingSessionDidFirstTransaction:(id)arg1 withError:(id)arg2;	// IMP=0x00000000000d81a0
- (void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithError:(id)arg2;	// IMP=0x00000000000d8120
- (void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithSubcredential:(id)arg2 registrationData:(id)arg3;	// IMP=0x00000000000d8070
- (void)appletSubcredentialPairingSessionDidBeginPairing:(id)arg1;	// IMP=0x00000000000d7ff0
- (void)session:(id)arg1 didChangeState:(unsigned long long)arg2;	// IMP=0x00000000000d7f90

@end

