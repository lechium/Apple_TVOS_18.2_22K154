//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOPDSearchKey64ValueBoolPair : PBCodable
{
    unsigned long long _key;	// 8 = 0x8
    _Bool _value;	// 16 = 0x10
    CDStruct_a4cc0a70 _flags;	// 20 = 0x14
}

- (unsigned long long)hash;	// IMP=0x00000000002fa3d7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002fa313
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002fa292
- (void)writeTo:(id)arg1;	// IMP=0x00000000002fa21e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002fa211
- (id)jsonRepresentation;	// IMP=0x00000000002f9f79
- (id)dictionaryRepresentation;	// IMP=0x00000000002f9e6a
- (id)description;	// IMP=0x00000000002f9dbb

@end

