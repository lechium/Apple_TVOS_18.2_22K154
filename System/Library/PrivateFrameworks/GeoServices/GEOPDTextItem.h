//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTextItem : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSString *_primaryText;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000c7c543
- (unsigned long long)hash;	// IMP=0x0000000000c7c526
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c7c496
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c7c40b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c7c3b0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c7c3a3
- (id)jsonRepresentation;	// IMP=0x0000000000c7c0b1
- (id)dictionaryRepresentation;	// IMP=0x0000000000c7bf12
- (id)description;	// IMP=0x0000000000c7be63

@end

