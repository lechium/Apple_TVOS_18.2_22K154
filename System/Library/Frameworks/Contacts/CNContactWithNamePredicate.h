//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNContactWithNamePredicate : CNPredicate
{
    NSString *_name;	// 24 = 0x18
    unsigned long long _options;	// 32 = 0x20
}

+ (id)descriptionForOptions:(unsigned long long)arg1;	// IMP=0x00600000000a367a
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000a33f8
- (void).cxx_destruct;	// IMP=0x00000000000a3a85
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (unsigned long long)hash;	// IMP=0x00000000000a392c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a3731
- (id)description;	// IMP=0x00000000000a354e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a34d1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a3400
- (id)initWithName:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000000a3359
- (id)initWithName:(id)arg1;	// IMP=0x00000000000a3342

@end

