//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRelatedPlaceFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _relatedPlaceTemplateItemCount;	// 16 = 0x10
    _Bool _canSupportTemplateModule;	// 20 = 0x14
    struct {
        unsigned int has_relatedPlaceTemplateItemCount:1;
        unsigned int has_canSupportTemplateModule:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000c4eafb
- (unsigned long long)hash;	// IMP=0x0000000000c4eab5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c4e9f2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c4e955
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c4e8c6
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c4e8b9
- (id)jsonRepresentation;	// IMP=0x0000000000c4e4a0
- (id)dictionaryRepresentation;	// IMP=0x0000000000c4e25f
- (id)description;	// IMP=0x0000000000c4e1b0

@end

