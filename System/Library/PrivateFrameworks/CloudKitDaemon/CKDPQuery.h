//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKDPQuery : PBCodable
{
    NSMutableArray *_filters;	// 8 = 0x8
    int _queryOperator;	// 16 = 0x10
    NSMutableArray *_sorts;	// 24 = 0x18
    NSMutableArray *_types;	// 32 = 0x20
    _Bool _distinct;	// 40 = 0x28
    struct {
        unsigned int queryOperator:1;
        unsigned int distinct:1;
    } _has;	// 44 = 0x2c
}

+ (Class)sortsType;	// IMP=0x00100000001c5a15
+ (Class)filtersType;	// IMP=0x00100000001c5943
+ (Class)typesType;	// IMP=0x00100000001c5871
- (void).cxx_destruct;	// IMP=0x00000000001c765c
@property(nonatomic) _Bool distinct; // @synthesize distinct=_distinct;
@property(retain, nonatomic) NSMutableArray *sorts; // @synthesize sorts=_sorts;
@property(retain, nonatomic) NSMutableArray *filters; // @synthesize filters=_filters;
@property(retain, nonatomic) NSMutableArray *types; // @synthesize types=_types;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001c7250
- (unsigned long long)hash;	// IMP=0x00000000001c7197
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c7055
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c6bc4
- (void)copyTo:(id)arg1;	// IMP=0x00000000001c69a9
- (void)writeTo:(id)arg1;	// IMP=0x00000000001c665d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001c6650
- (id)dictionaryRepresentation;	// IMP=0x00000000001c5c46
- (id)description;	// IMP=0x00000000001c5b97
- (int)StringAsQueryOperator:(id)arg1;	// IMP=0x00000000001c5b2c
- (id)queryOperatorAsString:(int)arg1;	// IMP=0x00000000001c5ad6
@property(nonatomic) _Bool hasQueryOperator;
@property(nonatomic) int queryOperator; // @synthesize queryOperator=_queryOperator;
@property(nonatomic) _Bool hasDistinct;
- (id)sortsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001c59f8
- (unsigned long long)sortsCount;	// IMP=0x00000000001c59db
- (void)addSorts:(id)arg1;	// IMP=0x00000000001c5971
- (void)clearSorts;	// IMP=0x00000000001c5954
- (id)filtersAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001c5926
- (unsigned long long)filtersCount;	// IMP=0x00000000001c5909
- (void)addFilters:(id)arg1;	// IMP=0x00000000001c589f
- (void)clearFilters;	// IMP=0x00000000001c5882
- (id)typesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001c5854
- (unsigned long long)typesCount;	// IMP=0x00000000001c5837
- (void)addTypes:(id)arg1;	// IMP=0x00000000001c57cd
- (void)clearTypes;	// IMP=0x00000000001c57b0

@end

