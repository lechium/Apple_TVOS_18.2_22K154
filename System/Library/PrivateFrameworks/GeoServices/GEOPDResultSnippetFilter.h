//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDResultSnippetFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    CDStruct_95bda58d _supportedChildActions;	// 16 = 0x10
    int _maxChildItems;	// 40 = 0x28
    int _maxChildPlaces;	// 44 = 0x2c
    _Bool _supportChildItems;	// 48 = 0x30
    struct {
        unsigned int has_maxChildItems:1;
        unsigned int has_maxChildPlaces:1;
        unsigned int has_supportChildItems:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000c5580b
- (unsigned long long)hash;	// IMP=0x0000000000c55792
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c55697
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c555cc
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c554ed
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c554e0
- (id)jsonRepresentation;	// IMP=0x0000000000c54e49
- (id)dictionaryRepresentation;	// IMP=0x0000000000c54a88
- (id)description;	// IMP=0x0000000000c549d9
- (void)dealloc;	// IMP=0x0000000000c54999

@end

