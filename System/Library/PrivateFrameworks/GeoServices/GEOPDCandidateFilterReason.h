//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDResultRefinementMetadata, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCandidateFilterReason : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDResultRefinementMetadata *_sortMetadata;	// 16 = 0x10
    int _reasonType;	// 24 = 0x18
    float _viewportExpansionFactor;	// 28 = 0x1c
    struct {
        unsigned int has_reasonType:1;
        unsigned int has_viewportExpansionFactor:1;
    } _flags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000d73f68
- (unsigned long long)hash;	// IMP=0x0000000000d73e14
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d73d33
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d73c6a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d73bbd
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d73876
- (id)jsonRepresentation;	// IMP=0x0000000000d73547
- (id)dictionaryRepresentation;	// IMP=0x0000000000d7324e
- (id)description;	// IMP=0x0000000000d7319f

@end

