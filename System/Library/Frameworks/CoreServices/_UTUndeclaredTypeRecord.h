//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UTTypeRecord.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _UTUndeclaredTypeRecord : UTTypeRecord
{
    NSString *_identifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000016605b
- (void).cxx_destruct;	// IMP=0x0000000000166295
- (id)identifier;	// IMP=0x000000000016627f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000166229
- (id)awakeAfterUsingCoder:(id)arg1;	// IMP=0x0000000000166164
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001660bd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000166063
- (id)_persistentIdentifierWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void *)arg4;	// IMP=0x0000000000165f63
- (void)_enumerateRelatedTypesWithMaximumDegreeOfSeparation:(long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000165f5d
- (void)_enumerateRelatedTypeUnitsOrDynamicIdsWithContext:(struct LSContext *)arg1 unitID:(unsigned int)arg2 maximumDegreeOfSeparation:(long long)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000000165f57
- (_Bool)conformsToTypeIdentifier:(id)arg1;	// IMP=0x0000000000165efb
- (id)declaration;	// IMP=0x0000000000165e7e
- (_Bool)isInPublicDomain;	// IMP=0x0000000000165e1f
- (id)version;	// IMP=0x0000000000165e17
- (id)_initWithContext:(struct LSContext *)arg1 identifier:(id)arg2;	// IMP=0x0000000000165d7d

@end

