//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOUUID : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned long long _high;	// 16 = 0x10
    unsigned long long _low;	// 24 = 0x18
    CDStruct_583788c5 _flags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000f98322
- (unsigned long long)hash;	// IMP=0x0000000000f98265
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000f981b0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000f98111
- (void)writeTo:(id)arg1;	// IMP=0x0000000000f98083
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000f98074
- (id)jsonRepresentation;	// IMP=0x0000000000f97b28
- (id)dictionaryRepresentation;	// IMP=0x0000000000f97904
- (id)description;	// IMP=0x0000000000f97855

@end

