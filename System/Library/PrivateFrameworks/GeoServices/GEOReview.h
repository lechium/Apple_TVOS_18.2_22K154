//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOUser, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOReview : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_languageCode;	// 24 = 0x18
    double _reviewTime;	// 32 = 0x20
    GEOUser *_reviewer;	// 40 = 0x28
    double _score;	// 48 = 0x30
    NSString *_snippet;	// 56 = 0x38
    NSString *_uid;	// 64 = 0x40
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    _Bool _isChinaSuppressed;	// 84 = 0x54
    struct {
        unsigned int has_reviewTime:1;
        unsigned int has_score:1;
        unsigned int has_isChinaSuppressed:1;
        unsigned int read_unknownFields:1;
        unsigned int read_languageCode:1;
        unsigned int read_reviewer:1;
        unsigned int read_snippet:1;
        unsigned int read_uid:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000f891fb
- (unsigned long long)hash;	// IMP=0x0000000000f88f4f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000f88d78
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000f88af5
- (void)writeTo:(id)arg1;	// IMP=0x0000000000f8884c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000f8883d
- (id)jsonRepresentation;	// IMP=0x0000000000f8849c
- (id)dictionaryRepresentation;	// IMP=0x0000000000f87edb
- (id)description;	// IMP=0x0000000000f87e2c
- (id)initWithData:(id)arg1;	// IMP=0x0000000000f8754f
- (id)init;	// IMP=0x0000000000f874f3

@end

