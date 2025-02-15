//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPermissivePolicy.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CNDictionaryPolicy : CNPermissivePolicy
{
    NSDictionary *_policyDictionary;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000013d453
- (void).cxx_destruct;	// IMP=0x000000000013d5c5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000013d59b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000013d45b
- (_Bool)isContactPropertySupported:(id)arg1;	// IMP=0x000000000013d3a8
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2;	// IMP=0x000000000013d254
- (id)supportedLabelsForContactProperty:(id)arg1;	// IMP=0x000000000013d1a0
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1;	// IMP=0x000000000013d0bd
- (id)unsupportedAttributesForLabeledContactProperty:(id)arg1;	// IMP=0x000000000013d042
- (id)contactRestrictionsForLabeledProperty:(id)arg1;	// IMP=0x000000000013cf93
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000013cf02

@end

