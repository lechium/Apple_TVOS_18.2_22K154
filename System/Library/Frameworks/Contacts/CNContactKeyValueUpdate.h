//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNPropertyDescription;

__attribute__((visibility("hidden")))
@interface CNContactKeyValueUpdate
{
    CNPropertyDescription *_property;	// 8 = 0x8
    id _value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000feaf5
@property(readonly) id value; // @synthesize value=_value;
@property(readonly) CNPropertyDescription *property; // @synthesize property=_property;
- (unsigned long long)hash;	// IMP=0x00000000000fe970
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000fe75d
- (id)description;	// IMP=0x00000000000fe714
- (void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2;	// IMP=0x00000000000fe68d
- (id)initWithProperty:(id)arg1 value:(id)arg2;	// IMP=0x00000000000fe5dc
- (_Bool)applyToABPerson:(void *)arg1 withPropertiesContext:(id)arg2 logger:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000e99af

@end

