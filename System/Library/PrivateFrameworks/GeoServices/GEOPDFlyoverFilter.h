//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDFlyoverFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000bb02f3
- (unsigned long long)hash;	// IMP=0x0000000000bb02eb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bb02a8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bb024b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bb022e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bb0221
- (id)jsonRepresentation;	// IMP=0x0000000000baff64
- (id)dictionaryRepresentation;	// IMP=0x0000000000bafdfa
- (id)description;	// IMP=0x0000000000bafd4b

@end

