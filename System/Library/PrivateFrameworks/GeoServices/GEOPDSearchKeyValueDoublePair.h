//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOPDSearchKeyValueDoublePair : PBCodable
{
    NSString *_key;	// 8 = 0x8
    double _value;	// 16 = 0x10
    CDStruct_38ef1b98 _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000303a44
- (unsigned long long)hash;	// IMP=0x000000000030391d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000030385d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003037c1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000303759
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000030374a
- (id)jsonRepresentation;	// IMP=0x000000000030323c
- (id)dictionaryRepresentation;	// IMP=0x0000000000303162
- (id)description;	// IMP=0x00000000003030b3

@end

