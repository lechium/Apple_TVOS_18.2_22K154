//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOPDSearchKeyValue32Pair : PBCodable
{
    NSString *_key;	// 8 = 0x8
    unsigned int _value;	// 16 = 0x10
    CDStruct_38ef1b98 _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x00000000002ff293
- (unsigned long long)hash;	// IMP=0x00000000002ff241
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002ff187
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002ff0ef
- (void)writeTo:(id)arg1;	// IMP=0x00000000002ff089
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002ff07c
- (id)jsonRepresentation;	// IMP=0x00000000002fee4e
- (id)dictionaryRepresentation;	// IMP=0x00000000002fed76
- (id)description;	// IMP=0x00000000002fecc7

@end

