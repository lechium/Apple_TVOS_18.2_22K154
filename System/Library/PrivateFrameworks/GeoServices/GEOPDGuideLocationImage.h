//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDCaptionedPhoto, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDGuideLocationImage : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDCaptionedPhoto *_image;	// 16 = 0x10
    int _imageType;	// 24 = 0x18
    struct {
        unsigned int has_imageType:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000bb9fb0
- (unsigned long long)hash;	// IMP=0x0000000000bb9f63
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bb9ea8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bb9e00
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bb9d7f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bb9d70
- (id)jsonRepresentation;	// IMP=0x0000000000bb9774
- (id)dictionaryRepresentation;	// IMP=0x0000000000bb950e
- (id)description;	// IMP=0x0000000000bb945f

@end

