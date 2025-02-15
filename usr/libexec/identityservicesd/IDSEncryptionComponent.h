//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSEncryptionController, IDSPinnedIdentityController;

@interface IDSEncryptionComponent
{
    IDSEncryptionController *_encryptionController;	// 8 = 0x8
    IDSPinnedIdentityController *_pinnedIdentityController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000019caaa
- (void)_shouldDisableEchnidaEncryption;	// IMP=0x001000000019ca8a
- (void)_shouldDisableSecondaryEncryption;	// IMP=0x001000000019ca6a
- (void)_shouldDisableEncryption:(id)arg1 UserDefaultKey:(id)arg2;	// IMP=0x001000000019c938
- (_Bool)_shouldIgnoreAutoBugCaptureForECFailure:(id)arg1;	// IMP=0x001000000019c8ab
- (_Bool)_shouldAutoBugCaptureForECError:(id)arg1;	// IMP=0x001000000019c88e
- (_Bool)shouldForwardErrorForEncryptionType:(long long)arg1 forceECC:(_Bool)arg2;	// IMP=0x001000000019c878
- (id)runIndividuallyWithInput:(id)arg1;	// IMP=0x001000000019aa42
- (id)initWithEncryptionController:(id)arg1 pinnedIdentityController:(id)arg2;	// IMP=0x001000000019a9a0
- (id)serviceController;	// IMP=0x001000000019a987

@end

