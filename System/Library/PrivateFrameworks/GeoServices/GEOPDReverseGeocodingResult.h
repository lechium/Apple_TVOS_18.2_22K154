//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDReverseGeocodingResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000534c1c
- (unsigned long long)hash;	// IMP=0x0000000000534c14
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000534bd1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000534b74
- (void)writeTo:(id)arg1;	// IMP=0x0000000000534b57
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000534b4a
- (id)jsonRepresentation;	// IMP=0x000000000053488d
- (id)dictionaryRepresentation;	// IMP=0x0000000000534723
- (id)description;	// IMP=0x0000000000534674

@end

