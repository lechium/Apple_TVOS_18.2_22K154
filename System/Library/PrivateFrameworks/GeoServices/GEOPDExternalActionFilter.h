//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDExternalActionFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    CDStruct_95bda58d _componentTypes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000ba9425
- (unsigned long long)hash;	// IMP=0x0000000000ba9414
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ba93ae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ba933e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ba92c7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ba92ba
- (id)jsonRepresentation;	// IMP=0x0000000000ba8e4c
- (id)dictionaryRepresentation;	// IMP=0x0000000000ba85ca
- (id)description;	// IMP=0x0000000000ba851b
- (void)dealloc;	// IMP=0x0000000000ba84db

@end

