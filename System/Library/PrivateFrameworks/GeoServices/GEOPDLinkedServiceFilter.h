//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLinkedServiceFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000bd8955
- (unsigned long long)hash;	// IMP=0x0000000000bd894d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bd890a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bd88ad
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bd8890
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bd8883
- (id)jsonRepresentation;	// IMP=0x0000000000bd85c6
- (id)dictionaryRepresentation;	// IMP=0x0000000000bd845c
- (id)description;	// IMP=0x0000000000bd83ad

@end

