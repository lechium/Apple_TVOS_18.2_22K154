//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAllGuidesLocationsViewResult : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_allGuidesLocationsSections;	// 24 = 0x18
    NSString *_header;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_allGuidesLocationsSections:1;
        unsigned int read_header:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x00000000003e01f5
- (unsigned long long)hash;	// IMP=0x00000000003e019e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003e00cc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003dfde8
- (void)writeTo:(id)arg1;	// IMP=0x00000000003df968
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003df959
- (id)jsonRepresentation;	// IMP=0x00000000003df4b5
- (id)dictionaryRepresentation;	// IMP=0x00000000003df0cd
- (id)description;	// IMP=0x00000000003df01e
- (id)initWithData:(id)arg1;	// IMP=0x00000000003de7d9
- (id)init;	// IMP=0x00000000003de77d

@end

