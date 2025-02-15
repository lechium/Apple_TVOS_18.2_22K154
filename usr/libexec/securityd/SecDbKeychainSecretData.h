//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, SecDbKeychainAKSWrappedKey, SecDbKeychainSerializedSecretData, _SFAuthenticatedCiphertext;

@interface SecDbKeychainSecretData : NSObject
{
    SecDbKeychainSerializedSecretData *_serializedHolder;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000011b044
@property(readonly) NSString *tamperCheck;
@property(readonly) SecDbKeychainAKSWrappedKey *wrappedKey;
@property(readonly) _SFAuthenticatedCiphertext *ciphertext;
@property(readonly) NSData *serializedRepresentation;
- (id)initWithData:(id)arg1;	// IMP=0x001000000011ad58
- (id)initWithCiphertext:(id)arg1 wrappedKey:(id)arg2 tamperCheck:(id)arg3 error:(id *)arg4;	// IMP=0x001000000011ab69

@end

