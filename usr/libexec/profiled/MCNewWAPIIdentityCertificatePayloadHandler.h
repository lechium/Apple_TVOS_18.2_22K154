//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MCNewWAPIIdentityCertificatePayloadHandler
{
}

- (void)remove;	// IMP=0x0040000000077c36
- (void)unsetAside;	// IMP=0x0010000000077b9a
- (void)setAside;	// IMP=0x0010000000077a94
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x0010000000077676
- (_Bool)_storePEMDataInKeychain:(id)arg1 UUID:(id)arg2 outError:(id *)arg3;	// IMP=0x00100000000773ab
- (id)_cannotStoreCertificateError;	// IMP=0x00100000000772d8
- (id)_cannotStorePEMDataError;	// IMP=0x0010000000077205
- (id)_malformedCertificateError;	// IMP=0x0010000000077132

@end

