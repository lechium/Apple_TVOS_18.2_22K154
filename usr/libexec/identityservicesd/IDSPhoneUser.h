//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSPhoneUser : NSObject
{
    _Bool _isDefaultUser;	// 8 = 0x8
    NSString *_phoneNumber;	// 16 = 0x10
    NSString *_phoneBookNumber;	// 24 = 0x18
    NSString *_labelID;	// 32 = 0x20
    NSString *_countryCode;	// 40 = 0x28
    NSString *_networkCode;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001e7bfc
- (void).cxx_destruct;	// IMP=0x00200000001e80d2
@property(retain, nonatomic) NSString *networkCode; // @synthesize networkCode=_networkCode;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) _Bool isDefaultUser; // @synthesize isDefaultUser=_isDefaultUser;
@property(readonly, nonatomic) NSString *labelID; // @synthesize labelID=_labelID;
@property(retain, nonatomic) NSString *phoneBookNumber; // @synthesize phoneBookNumber=_phoneBookNumber;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001e7ebe
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001e7dfc
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001e7c04
- (_Bool)differsFromPhoneNumber:(id)arg1;	// IMP=0x00100000001e7a3c
- (_Bool)isIdenticalToUser:(id)arg1;	// IMP=0x00100000001e78c2
- (_Bool)isEqualToUser:(id)arg1;	// IMP=0x00100000001e78b0
- (_Bool)isEqualToPhoneUser:(id)arg1;	// IMP=0x00100000001e767b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001e7622
@property(readonly) unsigned long long hash;
- (_Bool)shouldReplace:(id)arg1;	// IMP=0x00100000001e7525
- (id)storageIdentifier;	// IMP=0x00100000001e7513
- (id)unprefixedIdentifier;	// IMP=0x00100000001e74b1
- (id)realmPrefixedIdentifier;	// IMP=0x00100000001e73c5
- (long long)realm;	// IMP=0x00100000001e73bd
- (id)uniqueIdentifier;	// IMP=0x00100000001e73ab
- (id)phoneUserWithUpdatedDefaultUser:(_Bool)arg1 countryCode:(id)arg2 networkCode:(id)arg3;	// IMP=0x00100000001e730b
- (id)phoneUserWithUpdatedPhoneNumber:(id)arg1;	// IMP=0x00100000001e72ae
- (id)phoneUserWithUpdatedPhoneNumber:(id)arg1 phoneBookNumber:(id)arg2;	// IMP=0x00100000001e721e
- (id)initWithLabelID:(id)arg1 phoneBookNumber:(id)arg2 isDefaultUser:(_Bool)arg3 countryCode:(id)arg4 networkCode:(id)arg5;	// IMP=0x00100000001e713a
- (id)initWithLabelID:(id)arg1 phoneBookNumber:(id)arg2;	// IMP=0x00100000001e70a1
- (id)initWithLabelID:(id)arg1;	// IMP=0x00100000001e7036

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

