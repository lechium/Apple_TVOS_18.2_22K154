//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOPDSearchBrandTrigger : PBCodable
{
    double _relevance;	// 8 = 0x8
    NSString *_trigger;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000001241b22
- (unsigned long long)hash;	// IMP=0x0000000001241a10
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001241966
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000012418dc
- (void)writeTo:(id)arg1;	// IMP=0x000000000124187c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000124186f
- (id)jsonRepresentation;	// IMP=0x0000000001241684
- (id)dictionaryRepresentation;	// IMP=0x00000000012415ba
- (id)description;	// IMP=0x000000000124150b

@end

