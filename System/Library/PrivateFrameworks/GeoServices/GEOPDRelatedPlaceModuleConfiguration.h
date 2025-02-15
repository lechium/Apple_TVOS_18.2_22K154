//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRelatedPlaceModuleConfiguration : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_sectionTitles;	// 16 = 0x10
    int _numberOfRows;	// 24 = 0x18
    int _relatedPlaceComponentId;	// 28 = 0x1c
    struct {
        unsigned int has_numberOfRows:1;
        unsigned int has_relatedPlaceComponentId:1;
    } _flags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000c4fa48
- (unsigned long long)hash;	// IMP=0x0000000000c4f9d1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c4f8e9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c4f6eb
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c4f542
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c4f533
- (id)jsonRepresentation;	// IMP=0x0000000000c4f0b0
- (id)dictionaryRepresentation;	// IMP=0x0000000000c4ec31
- (id)description;	// IMP=0x0000000000c4eb82

@end

