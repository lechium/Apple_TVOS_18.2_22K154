//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDQuickLinkFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _quickLinkItemsCount;	// 16 = 0x10
    struct {
        unsigned int has_quickLinkItemsCount:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000c43684
- (unsigned long long)hash;	// IMP=0x0000000000c43659
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c435c7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c43547
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c434e3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c434d6
- (id)jsonRepresentation;	// IMP=0x0000000000c43176
- (id)dictionaryRepresentation;	// IMP=0x0000000000c42fa2
- (id)description;	// IMP=0x0000000000c42ef3

@end

