//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDSearchQueryPoiMetadata : PBCodable
{
    NSMutableArray *_namedFeatures;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000a5a74a
- (unsigned long long)hash;	// IMP=0x0000000000a5a72d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a5a69d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a5a4ff
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a5a3c9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a5a3ba
- (id)jsonRepresentation;	// IMP=0x0000000000a5a1cc
- (id)dictionaryRepresentation;	// IMP=0x0000000000a59f4c
- (id)description;	// IMP=0x0000000000a59e9d

@end

