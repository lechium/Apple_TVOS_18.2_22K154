//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBrowseCategories : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_browseCategorys;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000d6e9c2
- (unsigned long long)hash;	// IMP=0x0000000000d6e6a3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d6e613
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d6e456
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d6e2f7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d6e2e8
- (id)jsonRepresentation;	// IMP=0x0000000000d6d920
- (id)dictionaryRepresentation;	// IMP=0x0000000000d6d584
- (id)description;	// IMP=0x0000000000d6d4d5

@end

