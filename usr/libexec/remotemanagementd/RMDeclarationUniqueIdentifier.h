//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface RMDeclarationUniqueIdentifier : NSObject
{
    NSString *_managementSourceIdentifier;	// 8 = 0x8
    NSString *_type;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSString *_serverToken;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000003225b
- (MISSING_TYPE *).cxx_destruct;	// IMP=0x002000000003261b
@property(readonly, copy, nonatomic) NSString *serverToken; // @synthesize serverToken=_serverToken;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *managementSourceIdentifier; // @synthesize managementSourceIdentifier=_managementSourceIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000032519
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000032401
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000032263
- (unsigned long long)hash;	// IMP=0x001000000003216a
- (_Bool)isEqualToDeclarationIdentifier:(id)arg1;	// IMP=0x0010000000031f6c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000031f05
- (id)description;	// IMP=0x0010000000031de3
- (id)initWithManagementSourceIdentifier:(id)arg1 type:(id)arg2 identifier:(id)arg3 serverToken:(id)arg4;	// IMP=0x0010000000031cd2
- (id)initWithDeclarationPayload:(id)arg1;	// IMP=0x0010000000031bef

@end

