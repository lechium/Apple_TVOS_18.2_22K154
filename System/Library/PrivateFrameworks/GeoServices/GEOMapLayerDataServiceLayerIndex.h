//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface GEOMapLayerDataServiceLayerIndex : PBCodable
{
    NSData *_index;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000113716e
- (unsigned long long)hash;	// IMP=0x0000000001137151
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000011370c1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001137049
- (void)writeTo:(id)arg1;	// IMP=0x0000000001137025
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001137018
- (id)jsonRepresentation;	// IMP=0x0000000001136e7d
- (id)dictionaryRepresentation;	// IMP=0x0000000001136da0
- (id)description;	// IMP=0x0000000001136cf1

@end

