//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPBOfflineDataBatchReference : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    unsigned long long _batchCompressedSizeBytes;	// 16 = 0x10
    NSData *_batchIdentifier;	// 24 = 0x18
    unsigned long long _batchSizeBytes;	// 32 = 0x20
    NSString *_url;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int has_batchCompressedSizeBytes:1;
        unsigned int has_batchSizeBytes:1;
        unsigned int read_batchIdentifier:1;
        unsigned int read_url:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x00000000013ce979
- (unsigned long long)hash;	// IMP=0x00000000013ce8d5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000013ce7b2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000013ce5b7
- (void)writeTo:(id)arg1;	// IMP=0x00000000013ce3e2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000013ce3d5
- (id)jsonRepresentation;	// IMP=0x00000000013ce17b
- (id)dictionaryRepresentation;	// IMP=0x00000000013cde6b
- (id)description;	// IMP=0x00000000013cddbc
- (id)initWithData:(id)arg1;	// IMP=0x00000000013cd7fc
- (id)init;	// IMP=0x00000000013cd7a0

@end

