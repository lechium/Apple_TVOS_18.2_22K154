//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MCNewPlainCertificatePayloadHandler
{
    struct __SecIdentity *_identity;	// 40 = 0x28
}

- (struct __SecIdentity *)copyIdentityImmediatelyWithInteractionClient:(id)arg1 outError:(id *)arg2;	// IMP=0x002000000002f8a5
- (id)_malformedCertificateError;	// IMP=0x001000000002f7d2
- (id)_cannotStoreRootCertificateError;	// IMP=0x001000000002f6ff
- (id)_cannotStoreCertificateError;	// IMP=0x001000000002f62c
- (id)_tooManyCertificatesError;	// IMP=0x001000000002f559
- (id)_invalidPasscodeError;	// IMP=0x001000000002f486
- (int)_grantPartialNonSSLTrustPolicyForCertificate:(struct __SecCertificate *)arg1;	// IMP=0x001000000002f231
- (void)_revertFullSSLTrustIfNeeded;	// IMP=0x001000000002eab1
- (void)remove;	// IMP=0x001000000002ea2e
- (void)unsetAside;	// IMP=0x001000000002e836
- (void)setAside;	// IMP=0x001000000002e7f8
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x001000000002e288
- (id)_storeCertificate:(struct __SecCertificate *)arg1 allowSSLTrust:(_Bool)arg2 outError:(id *)arg3;	// IMP=0x001000000002d8e7
- (_Bool)preflightUserInputResponses:(id)arg1 outError:(id *)arg2;	// IMP=0x001000000002d795
- (struct __SecIdentity *)_copyContentsOfPKCS12DataWithPasscode:(id)arg1 outError:(id *)arg2;	// IMP=0x001000000002d5dd
- (void)dealloc;	// IMP=0x001000000002d597
- (id)userInputFields;	// IMP=0x001000000002d3f4

@end

