//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CountryBillingInput
{
    NSString *_countryCode;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000019db2
- (void).cxx_destruct;	// IMP=0x0020000000019d9f
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (id)description;	// IMP=0x0010000000019cce
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000019b36
- (unsigned long long)hash;	// IMP=0x0010000000019ab9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000019a1b
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000019980
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000198e5
- (id)initWithBillingCountry:(id)arg1 status:(unsigned long long)arg2 process:(id)arg3;	// IMP=0x0010000000019764

@end

