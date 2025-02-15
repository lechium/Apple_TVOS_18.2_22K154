//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface IXAppRemovabilityMetadata : NSObject
{
    unsigned long long _removability;	// 8 = 0x8
    unsigned long long _client;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000003d294
@property(readonly, nonatomic) unsigned long long client; // @synthesize client=_client;
@property(readonly, nonatomic) unsigned long long removability; // @synthesize removability=_removability;
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000003d8db
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000003d7ff
- (unsigned long long)hash;	// IMP=0x001000000003d7c3
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003d6eb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003d681
- (id)description;	// IMP=0x001000000003d5de
@property(readonly, nonatomic) _Bool isUnknown;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithMetadataDictionary:(id)arg1;	// IMP=0x001000000003d2e4
- (id)initWithRemovability:(unsigned long long)arg1 client:(unsigned long long)arg2;	// IMP=0x001000000003d29c

@end

