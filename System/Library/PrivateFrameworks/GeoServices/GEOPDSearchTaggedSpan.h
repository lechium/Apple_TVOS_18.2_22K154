//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchTaggedSpan : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_span;	// 16 = 0x10
    NSString *_tag;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_span:1;
        unsigned int read_tag:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x0000000000323580
- (unsigned long long)hash;	// IMP=0x0000000000323529
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000323457
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003232cf
- (void)writeTo:(id)arg1;	// IMP=0x0000000000323145
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000323138
- (id)jsonRepresentation;	// IMP=0x0000000000322ee3
- (id)dictionaryRepresentation;	// IMP=0x0000000000322d07
- (id)description;	// IMP=0x0000000000322c58
- (id)initWithData:(id)arg1;	// IMP=0x0000000000322858
- (id)init;	// IMP=0x00000000003227fc

@end

