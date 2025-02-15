//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface PSAttribute : PBCodable
{
    NSString *_key;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000c73dc
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000c732f
- (unsigned long long)hash;	// IMP=0x00100000000c72e2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000c722a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000c718c
- (void)copyTo:(id)arg1;	// IMP=0x00100000000c7129
- (void)writeTo:(id)arg1;	// IMP=0x00100000000c70cc
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000c70bf
- (id)dictionaryRepresentation;	// IMP=0x00100000000c6ed2
- (id)description;	// IMP=0x00100000000c6e23
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasKey;

@end

