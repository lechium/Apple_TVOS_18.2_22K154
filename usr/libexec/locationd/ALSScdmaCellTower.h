//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class ALSLocation;

@interface ALSScdmaCellTower : PBCodable
{
    int _arfcn;	// 8 = 0x8
    int _cellID;	// 12 = 0xc
    int _lacID;	// 16 = 0x10
    ALSLocation *_location;	// 24 = 0x18
    int _mcc;	// 32 = 0x20
    int _mnc;	// 36 = 0x24
    int _psc;	// 40 = 0x28
    CDStruct_6bbaae90 _has;	// 44 = 0x2c
}

@property(nonatomic) int psc; // @synthesize psc=_psc;
@property(nonatomic) int arfcn; // @synthesize arfcn=_arfcn;
@property(retain, nonatomic) ALSLocation *location; // @synthesize location=_location;
@property(nonatomic) int lacID; // @synthesize lacID=_lacID;
@property(nonatomic) int cellID; // @synthesize cellID=_cellID;
@property(nonatomic) int mnc; // @synthesize mnc=_mnc;
@property(nonatomic) int mcc; // @synthesize mcc=_mcc;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000f20850
- (unsigned long long)hash;	// IMP=0x0010000000f20782
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000f20689
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000f2059c
- (void)copyTo:(id)arg1;	// IMP=0x0010000000f204f9
- (void)writeTo:(id)arg1;	// IMP=0x0010000000f20411
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000f20404
- (id)dictionaryRepresentation;	// IMP=0x0010000000f1fd82
- (id)description;	// IMP=0x0010000000f1fd0b
@property(nonatomic) _Bool hasPsc;
@property(nonatomic) _Bool hasArfcn;
@property(readonly, nonatomic) _Bool hasLocation;
- (void)dealloc;	// IMP=0x0010000000f1fc28

@end

