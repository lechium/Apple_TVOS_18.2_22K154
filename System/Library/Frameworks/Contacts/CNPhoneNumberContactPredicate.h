//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class CNPhoneNumber, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNPhoneNumberContactPredicate : CNPredicate
{
    _Bool _returnsMultipleResults;	// 24 = 0x18
    CNPhoneNumber *_phoneNumber;	// 32 = 0x20
    NSString *_prefixHint;	// 40 = 0x28
    NSString *_digits;	// 48 = 0x30
    NSString *_countryCode;	// 56 = 0x38
    NSArray *_groupIdentifiers;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000d39a8
- (void).cxx_destruct;	// IMP=0x00000000000d4a3d
@property(readonly, copy, nonatomic) NSArray *groupIdentifiers; // @synthesize groupIdentifiers=_groupIdentifiers;
@property(readonly, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, nonatomic) NSString *digits; // @synthesize digits=_digits;
@property(readonly, copy, nonatomic) NSString *prefixHint; // @synthesize prefixHint=_prefixHint;
@property(readonly, nonatomic) _Bool returnsMultipleResults; // @synthesize returnsMultipleResults=_returnsMultipleResults;
@property(readonly, copy, nonatomic) CNPhoneNumber *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void)cn_triageWithLog:(id)arg1 serialNumber:(unsigned long long)arg2;	// IMP=0x00000000000d48df
- (_Bool)cn_hasHighSpecificity;	// IMP=0x00000000000d486c
- (unsigned long long)hash;	// IMP=0x00000000000d44ce
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d3efb
- (id)shortDebugDescription;	// IMP=0x00000000000d3eee
- (id)description;	// IMP=0x00000000000d3cf5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d3be6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d39b0
- (id)initWithPhoneNumber:(id)arg1 prefixHint:(id)arg2 groupIdentifiers:(id)arg3 returnMultipleResults:(_Bool)arg4;	// IMP=0x00000000000d3888
- (id)initWithPhoneNumber:(id)arg1 prefixHint:(id)arg2 returnMultipleResults:(_Bool)arg3;	// IMP=0x00000000000d3870
- (id)initWithDigits:(id)arg1 countryCode:(id)arg2 returnMultipleResults:(_Bool)arg3;	// IMP=0x00000000000d374f
- (id)initWithPhoneNumber:(id)arg1 returnMultipleResults:(_Bool)arg2;	// IMP=0x00000000000d3738

@end

