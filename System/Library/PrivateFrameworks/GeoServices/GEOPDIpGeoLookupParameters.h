//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDIpGeoLookupParameters : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSString *_ipAddress;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000468e9e
- (unsigned long long)hash;	// IMP=0x0000000000468e81
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000468df1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000468d66
- (void)writeTo:(id)arg1;	// IMP=0x0000000000468d0b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000468cfe
- (id)jsonRepresentation;	// IMP=0x0000000000468a0c
- (id)dictionaryRepresentation;	// IMP=0x000000000046886d
- (id)description;	// IMP=0x00000000004687be

@end

