//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOPDSearchTokenImportance : PBCodable
{
    NSString *_token;	// 8 = 0x8
    float _score;	// 16 = 0x10
    CDStruct_f58e6c32 _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000a7298d
- (unsigned long long)hash;	// IMP=0x0000000000a7285a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a7279b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a726ff
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a72697
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a7268a
- (id)jsonRepresentation;	// IMP=0x0000000000a7247e
- (id)dictionaryRepresentation;	// IMP=0x0000000000a723a4
- (id)description;	// IMP=0x0000000000a722f5

@end

