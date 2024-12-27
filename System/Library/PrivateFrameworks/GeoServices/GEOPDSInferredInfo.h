//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDSInferredValue, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSInferredInfo : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDSInferredValue *_inferredValue;	// 24 = 0x18
    NSMutableArray *_operands;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _inferredType;	// 52 = 0x34
    int _operatorValue;	// 56 = 0x38
    struct {
        unsigned int has_inferredType:1;
        unsigned int has_operatorValue:1;
        unsigned int read_unknownFields:1;
        unsigned int read_inferredValue:1;
        unsigned int read_operands:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x00000000005bcf66
- (unsigned long long)hash;	// IMP=0x00000000005bc9e0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005bc8ae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005bc550
- (void)writeTo:(id)arg1;	// IMP=0x00000000005bc0cf
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005bc0c0
- (id)jsonRepresentation;	// IMP=0x00000000005bab1a
- (id)dictionaryRepresentation;	// IMP=0x00000000005ba544
- (id)description;	// IMP=0x00000000005ba495
- (id)initWithData:(id)arg1;	// IMP=0x00000000005b9b7a
- (id)init;	// IMP=0x00000000005b9b1e

@end

