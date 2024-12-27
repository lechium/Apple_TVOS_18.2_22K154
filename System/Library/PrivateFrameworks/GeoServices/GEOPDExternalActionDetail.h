//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDExternalActionDetail : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_actionLabel;	// 24 = 0x18
    NSString *_actionUrlComponent;	// 32 = 0x20
    NSString *_actionUrlVerb;	// 40 = 0x28
    NSString *_logoId;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_actionLabel:1;
        unsigned int read_actionUrlComponent:1;
        unsigned int read_actionUrlVerb:1;
        unsigned int read_logoId:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x0000000000ba8466
- (unsigned long long)hash;	// IMP=0x0000000000ba83d8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ba82b2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ba80c3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ba7ee4
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ba7ed5
- (id)jsonRepresentation;	// IMP=0x0000000000ba7b68
- (id)dictionaryRepresentation;	// IMP=0x0000000000ba76d3
- (id)description;	// IMP=0x0000000000ba7624
- (id)initWithData:(id)arg1;	// IMP=0x0000000000ba6fab
- (id)init;	// IMP=0x0000000000ba6f4f

@end

