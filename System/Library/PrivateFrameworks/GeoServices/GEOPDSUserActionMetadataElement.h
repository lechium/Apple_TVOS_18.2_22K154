//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSUserActionMetadataElement : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _uiAction;	// 16 = 0x10
    int _uiTarget;	// 20 = 0x14
    struct {
        unsigned int has_uiAction:1;
        unsigned int has_uiTarget:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000005f2716
- (unsigned long long)hash;	// IMP=0x00000000005f26d0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005f261d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005f2580
- (void)writeTo:(id)arg1;	// IMP=0x00000000005f24f2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005f24e5
- (id)jsonRepresentation;	// IMP=0x00000000005e1a2c
- (id)dictionaryRepresentation;	// IMP=0x00000000005d925a
- (id)description;	// IMP=0x00000000005d91ab

@end

