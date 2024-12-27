//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPDate, CKDPDateStatistics, CKDPRecord, NSString;

@interface CKDPRecordSaveResponse : PBCodable
{
    NSString *_etag;	// 8 = 0x8
    CKDPDate *_expirationTime;	// 16 = 0x10
    CKDPRecord *_serverFields;	// 24 = 0x18
    CKDPDateStatistics *_timeStatistics;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000016cbaa
@property(retain, nonatomic) CKDPDate *expirationTime; // @synthesize expirationTime=_expirationTime;
@property(retain, nonatomic) CKDPRecord *serverFields; // @synthesize serverFields=_serverFields;
@property(retain, nonatomic) CKDPDateStatistics *timeStatistics; // @synthesize timeStatistics=_timeStatistics;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000016ca31
- (unsigned long long)hash;	// IMP=0x000000000016c9ad
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000016c8a1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016c7b7
- (void)copyTo:(id)arg1;	// IMP=0x000000000016c714
- (void)writeTo:(id)arg1;	// IMP=0x000000000016c67d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000016c670
- (id)dictionaryRepresentation;	// IMP=0x000000000016c2b7
- (id)description;	// IMP=0x000000000016c208
@property(readonly, nonatomic) _Bool hasExpirationTime;
@property(readonly, nonatomic) _Bool hasServerFields;
@property(readonly, nonatomic) _Bool hasTimeStatistics;
@property(readonly, nonatomic) _Bool hasEtag;

@end

