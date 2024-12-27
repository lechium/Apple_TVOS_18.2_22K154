//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface HMMTRMatterKeypair : HMFObject
{
    struct __SecKey *_operationalKey;	// 8 = 0x8
    _Bool _initialized;	// 16 = 0x10
    _Bool _deviceLocal;	// 17 = 0x11
    struct __SecKey *_privateKey;	// 24 = 0x18
    NSData *_rootCert;	// 32 = 0x20
    NSData *_operationalCert;	// 40 = 0x28
    NSData *_ipk;	// 48 = 0x30
    unsigned long long _version;	// 56 = 0x38
    struct __SecKey *_publicKey;	// 64 = 0x40
    NSString *_keychainAccount;	// 72 = 0x48
    NSData *_keyRepr;	// 80 = 0x50
    NSData *_opKeyRepr;	// 88 = 0x58
}

+ (id)logCategory;	// IMP=0x001000000003eb11
- (void).cxx_destruct;	// IMP=0x000000000003ea9c
@property(readonly) _Bool deviceLocal; // @synthesize deviceLocal=_deviceLocal;
@property(retain) NSData *opKeyRepr; // @synthesize opKeyRepr=_opKeyRepr;
@property(retain) NSData *keyRepr; // @synthesize keyRepr=_keyRepr;
@property(retain) NSString *keychainAccount; // @synthesize keychainAccount=_keychainAccount;
@property(readonly) struct __SecKey *publicKey; // @synthesize publicKey=_publicKey;
@property(readonly) unsigned long long version; // @synthesize version=_version;
@property _Bool initialized; // @synthesize initialized=_initialized;
@property(readonly, copy) NSData *ipk; // @synthesize ipk=_ipk;
@property(readonly, copy) NSData *operationalCert; // @synthesize operationalCert=_operationalCert;
@property(readonly, copy) NSData *rootCert; // @synthesize rootCert=_rootCert;
@property(readonly) struct __SecKey *privateKey; // @synthesize privateKey=_privateKey;
- (id)logIdentifier;	// IMP=0x000000000003e96c
- (struct __SecKey *)createPrivateKeyWithData:(id)arg1;	// IMP=0x000000000003e773
- (_Bool)_reloadWithDictionary:(id)arg1;	// IMP=0x000000000003e2e6
- (_Bool)_reloadWithData:(id)arg1;	// IMP=0x000000000003e0c9
- (id)_getPrivateKeydata;	// IMP=0x000000000003dc31
- (_Bool)_generateKeys;	// IMP=0x000000000003d870
- (_Bool)_storePrivateKeyData:(id)arg1;	// IMP=0x000000000003d5db
- (_Bool)reload;	// IMP=0x000000000003d138
- (id)archiveV1KeyItemValue;	// IMP=0x000000000003cce1
- (id)unarchiveV1KeyItemValue:(id)arg1;	// IMP=0x000000000003cb36
- (struct __SecKey *)pubkey;	// IMP=0x000000000003cb24
- (id)signMessageECDSA_DER:(id)arg1;	// IMP=0x000000000003c9da
- (id)copyV0KeyPair;	// IMP=0x000000000003c96f
- (_Bool)deserialize:(id)arg1;	// IMP=0x000000000003c711
- (id)serialize;	// IMP=0x000000000003c462
- (_Bool)initializeAllowingNew:(_Bool)arg1;	// IMP=0x000000000003c0eb
@property struct __SecKey *operationalKey; // @dynamic operationalKey;
- (id)initWithV1Account:(id)arg1 privateKey:(struct __SecKey *)arg2 operationalKey:(struct __SecKey *)arg3 rootCert:(id)arg4 operationalCert:(id)arg5 ipk:(id)arg6;	// IMP=0x000000000003bc56
- (id)initWithV1Account:(id)arg1;	// IMP=0x000000000003bba6
- (id)initUnassociated;	// IMP=0x000000000003b956
- (id)initWithPrivateKey:(struct __SecKey *)arg1;	// IMP=0x000000000003b7d2
- (id)initWithTLVData:(id)arg1;	// IMP=0x000000000003b74e
- (id)initWithV0Account:(id)arg1 privateKey:(struct __SecKey *)arg2;	// IMP=0x000000000003b569
- (id)initAsDeviceLocal;	// IMP=0x000000000003b3f8
- (id)initWithV0Account:(id)arg1;	// IMP=0x000000000003b357
- (id)initWithAccount:(id)arg1;	// IMP=0x000000000003b2b2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

