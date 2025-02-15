//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchQueryNormalizerMetadata : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_normalizedQuery;	// 16 = 0x10
    NSString *_normalizerName;	// 24 = 0x18
    NSString *_originalQuery;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_normalizedQuery:1;
        unsigned int read_normalizerName:1;
        unsigned int read_originalQuery:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000a59dd6
- (unsigned long long)hash;	// IMP=0x0000000000a59d5f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a59c61
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a59aae
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a598aa
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a5989b
- (id)jsonRepresentation;	// IMP=0x0000000000a5962f
- (id)dictionaryRepresentation;	// IMP=0x0000000000a5936f
- (id)description;	// IMP=0x0000000000a592c0
- (id)initWithData:(id)arg1;	// IMP=0x0000000000a58e15
- (id)init;	// IMP=0x0000000000a58db9

@end

