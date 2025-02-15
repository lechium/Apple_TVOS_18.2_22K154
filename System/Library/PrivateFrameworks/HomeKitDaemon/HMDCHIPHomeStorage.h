//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSData, NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDCHIPHomeStorage : HMFObject
{
    NSNumber *_fabricID;	// 8 = 0x8
    NSNumber *_lastNodeID;	// 16 = 0x10
    NSData *_rootCertificate;	// 24 = 0x18
    NSData *_operationalCertificate;	// 32 = 0x20
    NSData *_intermediateCertificate;	// 40 = 0x28
    NSDictionary *_keyValueStore;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x0010000000598bda
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000598bd2
- (void).cxx_destruct;	// IMP=0x0000000000598b5d
@property(copy) NSDictionary *keyValueStore; // @synthesize keyValueStore=_keyValueStore;
@property(copy) NSData *intermediateCertificate; // @synthesize intermediateCertificate=_intermediateCertificate;
@property(copy) NSData *operationalCertificate; // @synthesize operationalCertificate=_operationalCertificate;
@property(copy) NSData *rootCertificate; // @synthesize rootCertificate=_rootCertificate;
@property(copy) NSNumber *lastNodeID; // @synthesize lastNodeID=_lastNodeID;
@property(copy) NSNumber *fabricID; // @synthesize fabricID=_fabricID;
- (id)attributeDescriptions;	// IMP=0x000000000059866b
- (id)logIdentifier;	// IMP=0x00000000005985ff
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000598410
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000059816b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000598005
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000597bfa
- (void)updateHomeModel:(id)arg1;	// IMP=0x0000000000597a1b
- (_Bool)updateUsingHomeModel:(id)arg1;	// IMP=0x0000000000596e93
@property(readonly, copy) NSDictionary *debugDictionaryRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

