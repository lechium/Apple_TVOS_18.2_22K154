//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SECSFAActionAutomaticBugCapture : PBCodable
{
    NSString *_domain;	// 8 = 0x8
    NSString *_subtype;	// 16 = 0x10
    NSString *_type;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002cae3
@property(retain, nonatomic) NSString *subtype; // @synthesize subtype=_subtype;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000002c9f1
- (unsigned long long)hash;	// IMP=0x000000000002c984
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002c8a4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002c7e0
- (void)copyTo:(id)arg1;	// IMP=0x000000000002c75d
- (void)writeTo:(id)arg1;	// IMP=0x000000000002c6e3
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002c6d6
- (id)dictionaryRepresentation;	// IMP=0x000000000002c62c
- (id)description;	// IMP=0x000000000002c57d
@property(readonly, nonatomic) _Bool hasSubtype;
@property(readonly, nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasDomain;

@end

