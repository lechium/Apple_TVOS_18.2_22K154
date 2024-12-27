//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MPPCompoundPredicate : PBCodable
{
    NSMutableArray *_predicates;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000041d19
@property(retain, nonatomic) NSMutableArray *predicates; // @synthesize predicates=_predicates;
- (unsigned long long)hash;	// IMP=0x0000000000041cd7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000041c62
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000041a9e
- (void)copyTo:(id)arg1;	// IMP=0x00000000000419d9
- (void)writeTo:(id)arg1;	// IMP=0x00000000000417f2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000417e5
- (id)dictionaryRepresentation;	// IMP=0x00000000000415b5
- (id)description;	// IMP=0x0000000000041506
- (id)predicatesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000414e9
- (unsigned long long)predicatesCount;	// IMP=0x00000000000414cc
- (void)addPredicates:(id)arg1;	// IMP=0x0000000000041462
- (void)clearPredicates;	// IMP=0x0000000000041445
- (void)dealloc;	// IMP=0x0000000000041405

@end

