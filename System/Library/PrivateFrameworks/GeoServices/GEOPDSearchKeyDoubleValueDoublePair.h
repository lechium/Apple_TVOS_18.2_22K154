//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOPDSearchKeyDoubleValueDoublePair : PBCodable
{
    double _key;	// 8 = 0x8
    double _value;	// 16 = 0x10
    CDStruct_a4cc0a70 _flags;	// 24 = 0x18
}

- (unsigned long long)hash;	// IMP=0x00000000002fe1c3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002fe104
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002fe07f
- (void)writeTo:(id)arg1;	// IMP=0x00000000002fe008
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002fdffb
- (id)jsonRepresentation;	// IMP=0x00000000002fddd7
- (id)dictionaryRepresentation;	// IMP=0x00000000002fdcc5
- (id)description;	// IMP=0x00000000002fdc16

@end

