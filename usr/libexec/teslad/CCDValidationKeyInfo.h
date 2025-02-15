//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface CCDValidationKeyInfo
{
    unsigned long long;	// 8 = 0x8
    NSString *_destinationKey;	// 16 = 0x10
    NSArray *_subKeys;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000010830
@property(retain, nonatomic) NSArray *subKeys; // @synthesize subKeys=_subKeys;
@property(retain, nonatomic) NSString *destinationKey; // @synthesize destinationKey=_destinationKey;
@property(nonatomic) unsigned long long validationType; // @synthesize validationType=_validationType;
- (_Bool)_validateUnstructureddDictionaryInDictionary:(id)arg1;	// IMP=0x001000000001072d
- (_Bool)_validateDictionaryInDictionary:(id)arg1 resultsDictionary:(id)arg2;	// IMP=0x0010000000010419
- (_Bool)_validateCredentialTokenInDictionary:(id)arg1;	// IMP=0x001000000001025c
- (_Bool)_validateStringArrayInDictionary:(id)arg1;	// IMP=0x001000000001007d
- (_Bool)_validateStringInDictionary:(id)arg1;	// IMP=0x001000000000ffe3
- (_Bool)_validateNumberInDictionary:(id)arg1;	// IMP=0x001000000000ff49
- (_Bool)_validateHttpsURLStringInDictionary:(id)arg1;	// IMP=0x001000000000fe38
- (_Bool)_validateCertificateArrayInDictionary:(id)arg1;	// IMP=0x001000000000fc24
- (id)_certificateDataFromBase64EncodedString:(id)arg1;	// IMP=0x001000000000fbba
- (_Bool)_validateBooleanInDictionary:(id)arg1;	// IMP=0x001000000000fba8
- (_Bool)validateSelfUsingValidationInfoWithDictionary:(id)arg1 resultsDictionary:(id)arg2;	// IMP=0x001000000000f678
- (id)description;	// IMP=0x001000000000f571
- (id)initWithName:(id)arg1 validationInfo:(id)arg2;	// IMP=0x001000000000f218

@end

