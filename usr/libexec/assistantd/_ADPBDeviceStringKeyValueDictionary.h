//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface _ADPBDeviceStringKeyValueDictionary : PBCodable
{
    NSMutableArray *_pairs;	// 8 = 0x8
}

+ (Class)pairsType;	// IMP=0x002000000036a5a6
+ (id)_ad_keyValueDictionaryWithDictionary:(id)arg1;	// IMP=0x001000000036ea8b
- (void).cxx_destruct;	// IMP=0x002000000036a3e7
@property(retain, nonatomic) NSMutableArray *pairs; // @synthesize pairs=_pairs;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000036a289
- (unsigned long long)hash;	// IMP=0x001000000036a26c
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000036a1dc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000036a018
- (void)copyTo:(id)arg1;	// IMP=0x0010000000369f53
- (void)writeTo:(id)arg1;	// IMP=0x0010000000369e1d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000369e10
- (id)dictionaryRepresentation;	// IMP=0x0010000000369be0
- (id)description;	// IMP=0x0010000000369b31
- (id)pairsAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000369b14
- (unsigned long long)pairsCount;	// IMP=0x0010000000369af7
- (void)addPairs:(id)arg1;	// IMP=0x0010000000369a8d
- (void)clearPairs;	// IMP=0x0010000000369a70
- (id)_ad_dictionaryRepresentation;	// IMP=0x001000000036d8d6

@end

