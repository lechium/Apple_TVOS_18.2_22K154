//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOPDSearchKeyValue64Pair : PBCodable
{
    NSString *_key;	// 8 = 0x8
    unsigned long long _value;	// 16 = 0x10
    CDStruct_38ef1b98 _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000030017b
- (unsigned long long)hash;	// IMP=0x000000000030012b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000300070
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002fffd7
- (void)writeTo:(id)arg1;	// IMP=0x00000000002fff71
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002fff64
- (id)jsonRepresentation;	// IMP=0x00000000002ffd35
- (id)dictionaryRepresentation;	// IMP=0x00000000002ffc5d
- (id)description;	// IMP=0x00000000002ffbae

@end

