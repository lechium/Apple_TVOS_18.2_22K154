//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPoiIconCategoryFilter : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_9f2792e4 _excludeCategoryFilters;	// 24 = 0x18
    CDStruct_9f2792e4 _includeCategoryFilters;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_excludeCategoryFilters:1;
        unsigned int read_includeCategoryFilters:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 84 = 0x54
}

- (void).cxx_destruct;	// IMP=0x0000000000d7647f
- (unsigned long long)hash;	// IMP=0x0000000000d76311
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d7625f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d760f4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d75eca
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d75ebb
- (id)jsonRepresentation;	// IMP=0x0000000000d75797
- (id)dictionaryRepresentation;	// IMP=0x0000000000d7557d
- (id)description;	// IMP=0x0000000000d754ce
- (void)dealloc;	// IMP=0x0000000000d749b6
- (id)initWithData:(id)arg1;	// IMP=0x0000000000d7495a
- (id)init;	// IMP=0x0000000000d748fe

@end

