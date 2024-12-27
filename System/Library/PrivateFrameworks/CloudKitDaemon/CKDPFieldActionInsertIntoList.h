//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPListPosition, NSMutableArray;

@interface CKDPFieldActionInsertIntoList : PBCodable
{
    CKDPListPosition *_position;	// 8 = 0x8
    NSMutableArray *_values;	// 16 = 0x10
    _Bool _insertAfter;	// 24 = 0x18
    struct {
        unsigned int insertAfter:1;
    } _has;	// 28 = 0x1c
}

+ (Class)valueType;	// IMP=0x001000000014867c
- (void).cxx_destruct;	// IMP=0x000000000014948a
@property(retain, nonatomic) NSMutableArray *values; // @synthesize values=_values;
@property(nonatomic) _Bool insertAfter; // @synthesize insertAfter=_insertAfter;
@property(retain, nonatomic) CKDPListPosition *position; // @synthesize position=_position;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000149284
- (unsigned long long)hash;	// IMP=0x000000000014920e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000149120
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000148f1c
- (void)copyTo:(id)arg1;	// IMP=0x0000000000148e18
- (void)writeTo:(id)arg1;	// IMP=0x0000000000148c9f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000148c92
- (id)dictionaryRepresentation;	// IMP=0x000000000014873c
- (id)description;	// IMP=0x000000000014868d
- (id)valueAtIndex:(unsigned long long)arg1;	// IMP=0x000000000014865f
- (unsigned long long)valuesCount;	// IMP=0x0000000000148642
- (void)addValue:(id)arg1;	// IMP=0x00000000001485d8
- (void)clearValues;	// IMP=0x00000000001485bb
@property(nonatomic) _Bool hasInsertAfter;
@property(readonly, nonatomic) _Bool hasPosition;

@end

