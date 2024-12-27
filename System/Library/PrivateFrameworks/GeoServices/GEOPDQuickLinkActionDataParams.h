//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDQuickLinkActionDataParams : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_appAdamId;	// 24 = 0x18
    NSString *_symbolImageName;	// 32 = 0x20
    NSString *_title;	// 40 = 0x28
    NSString *_url;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_appAdamId:1;
        unsigned int read_symbolImageName:1;
        unsigned int read_title:1;
        unsigned int read_url:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x0000000000c42e7e
- (unsigned long long)hash;	// IMP=0x0000000000c42df0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c42cca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c42adb
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c428fc
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c428ed
- (id)jsonRepresentation;	// IMP=0x0000000000c42580
- (id)dictionaryRepresentation;	// IMP=0x0000000000c421fd
- (id)description;	// IMP=0x0000000000c4214e
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c41922
- (id)init;	// IMP=0x0000000000c418c6

@end

