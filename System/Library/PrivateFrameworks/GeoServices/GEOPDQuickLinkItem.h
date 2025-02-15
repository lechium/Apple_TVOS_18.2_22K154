//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDQuickLinkItem : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_appAdamId;	// 24 = 0x18
    NSString *_bundleId;	// 32 = 0x20
    NSString *_symbolImageName;	// 40 = 0x28
    NSString *_title;	// 48 = 0x30
    NSString *_url;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    int _linkType;	// 76 = 0x4c
    int _relationship;	// 80 = 0x50
    struct {
        unsigned int has_linkType:1;
        unsigned int has_relationship:1;
        unsigned int read_unknownFields:1;
        unsigned int read_appAdamId:1;
        unsigned int read_bundleId:1;
        unsigned int read_symbolImageName:1;
        unsigned int read_title:1;
        unsigned int read_url:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 84 = 0x54
}

+ (id)secondaryQuickLinksForPlaceData:(id)arg1;	// IMP=0x001000000099e258
+ (id)quickLinksForPlaceData:(id)arg1;	// IMP=0x001000000099e0a1
- (void).cxx_destruct;	// IMP=0x0000000000c45aa2
- (unsigned long long)hash;	// IMP=0x0000000000c459b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c45808
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c45585
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c452d9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c452ca
- (id)jsonRepresentation;	// IMP=0x0000000000c449fe
- (id)dictionaryRepresentation;	// IMP=0x0000000000c44631
- (id)description;	// IMP=0x0000000000c44582
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c436f3
- (id)init;	// IMP=0x0000000000c43697

@end

