//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface HMDHomeNFCReaderKey : HMFObject
{
    NSData *_publicKeyExternalRepresentation;	// 8 = 0x8
    NSData *_privateKey;	// 16 = 0x10
    NSData *_identifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000049b138
+ (id)publicKeyWithPublicKeyExternalRepresentation:(id)arg1;	// IMP=0x001000000049b119
+ (id)identifierForKey:(id)arg1;	// IMP=0x001000000049aff5
+ (id)createWithExternalRepresentation:(id)arg1;	// IMP=0x001000000049ae24
+ (id)createRandomKey;	// IMP=0x001000000049ab97
+ (id)createWithKeychainItem:(id)arg1;	// IMP=0x001000000072720d
+ (id)keychainItemAccountAttributeValueWithHome:(id)arg1 keyIdentifier:(id)arg2;	// IMP=0x0010000000727162
- (void).cxx_destruct;	// IMP=0x000000000049ab55
@property(readonly, copy) NSData *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSData *privateKey; // @synthesize privateKey=_privateKey;
@property(readonly, copy) NSData *publicKeyExternalRepresentation; // @synthesize publicKeyExternalRepresentation=_publicKeyExternalRepresentation;
- (id)attributeDescriptions;	// IMP=0x000000000049a935
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000049a887
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000049a79a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000049a78f
- (unsigned long long)hash;	// IMP=0x000000000049a6ce
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000049a520
@property(readonly, copy) NSData *externalRepresentation;
@property(readonly, copy) NSData *publicKey;
- (id)initWithIdentifier:(id)arg1 privateKey:(id)arg2 publicKeyExternalRepresentation:(id)arg3;	// IMP=0x000000000049a321
- (id)createKeychainItemForHome:(id)arg1;	// IMP=0x0000000000726e85

@end

