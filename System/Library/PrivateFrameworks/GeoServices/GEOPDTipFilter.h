//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTipFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    struct GEOPDPhotoSizeFilterValue *_photoSizeFilters;	// 16 = 0x10
    unsigned long long _photoSizeFiltersCount;	// 24 = 0x18
    unsigned long long _photoSizeFiltersSpace;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000c82474
- (unsigned long long)hash;	// IMP=0x0000000000c82449
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c823b0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c82310
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c82258
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c8224b
- (id)jsonRepresentation;	// IMP=0x0000000000c81f10
- (id)dictionaryRepresentation;	// IMP=0x0000000000c81cbd
- (id)description;	// IMP=0x0000000000c81c0e
- (void)dealloc;	// IMP=0x0000000000c81a3d

@end

