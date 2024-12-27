//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSTransaction.h>

@class NSNumber, NSString, PBOpenApplicationRequest;

@interface PBOpenAppDialogsTransaction : BSTransaction
{
    _Bool _restrictionPasswordRequested;	// 8 = 0x8
    PBOpenApplicationRequest *_request;	// 16 = 0x10
    NSNumber *_restrictionValue;	// 24 = 0x18
    NSNumber *_legacyGameValue;	// 32 = 0x20
    unsigned long long _signatureVersionVerificationResult;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000001e21b5
@property(nonatomic) _Bool restrictionPasswordRequested; // @synthesize restrictionPasswordRequested=_restrictionPasswordRequested;
@property(readonly, nonatomic) unsigned long long signatureVersionVerificationResult; // @synthesize signatureVersionVerificationResult=_signatureVersionVerificationResult;
@property(readonly, nonatomic) NSNumber *legacyGameValue; // @synthesize legacyGameValue=_legacyGameValue;
@property(readonly, nonatomic) NSNumber *restrictionValue; // @synthesize restrictionValue=_restrictionValue;
@property(readonly, nonatomic) PBOpenApplicationRequest *request; // @synthesize request=_request;
- (void)_addCRDRestrictionDialog;	// IMP=0x00100000001e1e97
- (void)_addLegacyGameDialogTransaction;	// IMP=0x00100000001e1c43
- (void)_addRestrictionDialogTransaction;	// IMP=0x00100000001e1978
- (void)_addValidateSignatureVersionDialogTransaction;	// IMP=0x00100000001e1716
- (void)_addInitialDialogTransaction;	// IMP=0x00100000001e1703
@property(readonly, nonatomic) NSString *launchPreventionReason;
@property(readonly, nonatomic) _Bool shouldContinueLaunch;
- (_Bool)_shouldFailForChildTransaction:(id)arg1;	// IMP=0x00100000001e1679
- (void)_begin;	// IMP=0x00100000001e1638
- (id)initWithRequest:(id)arg1;	// IMP=0x00100000001e1549

@end

