//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CKKSAESSIVKey
{
}

+ (id)randomKey:(id *)arg1;	// IMP=0x00400000001d528a
- (id)keyMaterial;	// IMP=0x00400000001d525e
- (_Bool)doSIV:(const struct ccmode_siv *)arg1 nonce:(id)arg2 text:(id)arg3 buffer:(char *)arg4 bufferLength:(unsigned long long)arg5 authenticatedData:(id)arg6 error:(id *)arg7;	// IMP=0x00100000001d4c5f
- (id)decryptData:(id)arg1 authenticatedData:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001d49ba
- (id)encryptData:(id)arg1 authenticatedData:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001d4763
- (id)unwrapAESKey:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001d455c
- (id)wrapAESKey:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001d42f7
- (id)initWithBase64:(id)arg1;	// IMP=0x00100000001d421a
- (id)initWithBytes:(char *)arg1 len:(unsigned long long)arg2;	// IMP=0x00100000001d415f
- (id)init;	// IMP=0x00100000001d4123

@end

