//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOPDGuideSummaryLayoutMetadata : PBCodable
{
    int _guideSummaryType;	// 8 = 0x8
    struct {
        unsigned int has_guideSummaryType:1;
    } _flags;	// 12 = 0xc
}

- (unsigned long long)hash;	// IMP=0x000000000019450e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000019447c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019441a
- (void)writeTo:(id)arg1;	// IMP=0x00000000001943ef
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001943e0
- (id)jsonRepresentation;	// IMP=0x0000000000193ef9
- (id)dictionaryRepresentation;	// IMP=0x0000000000193e12
- (id)description;	// IMP=0x0000000000193d63

@end

