//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface LogTransactions : PBCodable
{
    NSMutableArray *_transactionIDs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000229900
- (unsigned long long)hash;	// IMP=0x00100000002298e3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000229853
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000002296b5
- (void)writeTo:(id)arg1;	// IMP=0x001000000022957f
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000022942c
- (id)dictionaryRepresentation;	// IMP=0x00100000002293d0
- (id)description;	// IMP=0x0010000000229321
- (id)formattedText;	// IMP=0x0010000000146adc

@end

