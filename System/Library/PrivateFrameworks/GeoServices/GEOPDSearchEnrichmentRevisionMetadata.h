//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchEnrichmentRevisionMetadata : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _revisionType;	// 16 = 0x10
    struct {
        unsigned int has_revisionType:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000daf039
- (unsigned long long)hash;	// IMP=0x0000000000daf00e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000daef7c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000daeefc
- (void)writeTo:(id)arg1;	// IMP=0x0000000000daee98
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000daee89
- (id)jsonRepresentation;	// IMP=0x0000000000dae9d5
- (id)dictionaryRepresentation;	// IMP=0x0000000000dae7de
- (id)description;	// IMP=0x0000000000dae72f

@end

