//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDExternalAction : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_externalActionDetails;	// 16 = 0x10
    int _componentType;	// 24 = 0x18
    struct {
        unsigned int has_componentType:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000ba6f1e
- (unsigned long long)hash;	// IMP=0x0000000000ba6ed1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ba6e16
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ba6c36
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ba6ab2
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ba6aa3
- (id)jsonRepresentation;	// IMP=0x0000000000ba66b8
- (id)dictionaryRepresentation;	// IMP=0x0000000000ba5c7a
- (id)description;	// IMP=0x0000000000ba5bcb

@end

