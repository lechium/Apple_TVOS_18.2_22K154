//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKDPSubscriptionRetrieveResponse : PBCodable
{
    NSMutableArray *_subscriptions;	// 8 = 0x8
}

+ (Class)subscriptionsType;	// IMP=0x0010000000201d74
- (void).cxx_destruct;	// IMP=0x00000000002027e7
@property(retain, nonatomic) NSMutableArray *subscriptions; // @synthesize subscriptions=_subscriptions;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000202689
- (unsigned long long)hash;	// IMP=0x000000000020266c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002025dc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000202418
- (void)copyTo:(id)arg1;	// IMP=0x0000000000202353
- (void)writeTo:(id)arg1;	// IMP=0x000000000020221d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000202210
- (id)dictionaryRepresentation;	// IMP=0x0000000000201e34
- (id)description;	// IMP=0x0000000000201d85
- (id)subscriptionsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000201d57
- (unsigned long long)subscriptionsCount;	// IMP=0x0000000000201d3a
- (void)addSubscriptions:(id)arg1;	// IMP=0x0000000000201cd0
- (void)clearSubscriptions;	// IMP=0x0000000000201cb3

@end

