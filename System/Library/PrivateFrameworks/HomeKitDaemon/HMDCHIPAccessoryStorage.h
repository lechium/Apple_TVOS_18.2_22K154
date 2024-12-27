//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSData, NSDictionary, NSNumber, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface HMDCHIPAccessoryStorage : HMFObject
{
    _Bool _wedSupport;	// 8 = 0x8
    NSNumber *_nodeID;	// 16 = 0x10
    NSNumber *_vendorID;	// 24 = 0x18
    NSNumber *_productID;	// 32 = 0x20
    NSData *_attributeDatabase;	// 40 = 0x28
    NSSet *_pairings;	// 48 = 0x30
    NSString *_extendedMACAddress;	// 56 = 0x38
    NSNumber *_softwareVersionNumber;	// 64 = 0x40
    NSNumber *_supportedLinkLayerTypes;	// 72 = 0x48
}

+ (id)logCategory;	// IMP=0x00100000005883c6
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000005883be
- (void).cxx_destruct;	// IMP=0x0000000000588327
@property(copy) NSNumber *supportedLinkLayerTypes; // @synthesize supportedLinkLayerTypes=_supportedLinkLayerTypes;
@property(copy) NSNumber *softwareVersionNumber; // @synthesize softwareVersionNumber=_softwareVersionNumber;
@property(copy) NSString *extendedMACAddress; // @synthesize extendedMACAddress=_extendedMACAddress;
@property _Bool wedSupport; // @synthesize wedSupport=_wedSupport;
@property(copy) NSSet *pairings; // @synthesize pairings=_pairings;
@property(copy) NSData *attributeDatabase; // @synthesize attributeDatabase=_attributeDatabase;
@property(copy) NSNumber *productID; // @synthesize productID=_productID;
@property(copy) NSNumber *vendorID; // @synthesize vendorID=_vendorID;
@property(copy) NSNumber *nodeID; // @synthesize nodeID=_nodeID;
- (id)logIdentifier;	// IMP=0x0000000000588161
- (id)attributeDescriptions;	// IMP=0x0000000000587c10
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000587892
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000587600
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000587421
- (unsigned long long)hash;	// IMP=0x0000000000587203
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000586e70
- (void)updateAccessoryModel:(id)arg1;	// IMP=0x0000000000586bf9
- (_Bool)updateUsingAccessoryModel:(id)arg1;	// IMP=0x00000000005858a3
@property(readonly, copy) NSDictionary *debugDictionaryRepresentation;

@end

