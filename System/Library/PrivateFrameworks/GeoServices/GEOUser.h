//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPhoto, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOUser : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPhoto *_image;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    CDStruct_9fa62941 _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000f99551
- (unsigned long long)hash;	// IMP=0x0000000000f994fa
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000f99428
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000f99285
- (void)writeTo:(id)arg1;	// IMP=0x0000000000f990a1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000f99092
- (id)jsonRepresentation;	// IMP=0x0000000000f98ce1
- (id)dictionaryRepresentation;	// IMP=0x0000000000f989b7
- (id)description;	// IMP=0x0000000000f98908
- (id)initWithData:(id)arg1;	// IMP=0x0000000000f98391
- (id)init;	// IMP=0x0000000000f98335

@end

