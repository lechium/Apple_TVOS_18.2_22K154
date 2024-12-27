//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOTFCompactPredictedSpeed : PBCodable
{
    unsigned int _deltaMinutesInFuture;	// 8 = 0x8
    unsigned int _speedKph;	// 12 = 0xc
    struct {
        unsigned int has_deltaMinutesInFuture:1;
        unsigned int has_speedKph:1;
    } _flags;	// 16 = 0x10
}

- (unsigned long long)hash;	// IMP=0x00000000002234e8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000223435
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002233b8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000223345
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000223338
- (id)jsonRepresentation;	// IMP=0x000000000022309b
- (id)dictionaryRepresentation;	// IMP=0x0000000000222f63
- (id)description;	// IMP=0x0000000000222eb4

@end

