//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBatchMerchantLookupBrandParameters : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_merchantLookupBrandParameters;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000041ecf6
- (unsigned long long)hash;	// IMP=0x000000000041ecd9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000041ec49
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000041ea8c
- (void)writeTo:(id)arg1;	// IMP=0x000000000041e92d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000041e91e
- (id)jsonRepresentation;	// IMP=0x000000000041e5df
- (id)dictionaryRepresentation;	// IMP=0x000000000041e243
- (id)description;	// IMP=0x000000000041e194

@end

