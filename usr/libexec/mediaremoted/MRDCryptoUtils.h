//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MRDCryptoUtils : NSObject
{
}

+ (id)signature:(id)arg1 isValidFor:(id)arg2 withPublicKey:(id)arg3 error:(id *)arg4;	// IMP=0x00200000001b94b0
+ (id)signatureForData:(id)arg1 withPrivateKey:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001b9310
+ (void)generateCurve25519SigningKeyPairWithPrivateKeyData:(id *)arg1 publicKeyData:(id *)arg2;	// IMP=0x00100000001b9300
- (id)init;	// IMP=0x00400000001b95e0

@end

