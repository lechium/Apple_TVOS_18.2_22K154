//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRecord, CKDPRecordIdentifier, CKDPRecordType, NSString;

@interface CKDPRecordRetrieveChangesResponseRecordChange : PBCodable
{
    NSString *_etag;	// 8 = 0x8
    CKDPRecord *_record;	// 16 = 0x10
    CKDPRecordIdentifier *_recordIdentifier;	// 24 = 0x18
    CKDPRecordType *_recordType;	// 32 = 0x20
    int _type;	// 40 = 0x28
    CDStruct_f953fb60 _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x00000000001fdb37
@property(retain, nonatomic) CKDPRecord *record; // @synthesize record=_record;
@property(retain, nonatomic) CKDPRecordType *recordType; // @synthesize recordType=_recordType;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001fd99e
- (unsigned long long)hash;	// IMP=0x00000000001fd8ee
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001fd7b3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001fd6a1
- (void)copyTo:(id)arg1;	// IMP=0x00000000001fd5de
- (void)writeTo:(id)arg1;	// IMP=0x00000000001fd521
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001fd514
- (id)dictionaryRepresentation;	// IMP=0x00000000001fd047
- (id)description;	// IMP=0x00000000001fcf98
@property(readonly, nonatomic) _Bool hasRecord;
- (int)StringAsType:(id)arg1;	// IMP=0x00000000001fcee5
- (id)typeAsString:(int)arg1;	// IMP=0x00000000001fce9a
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool hasRecordType;
@property(readonly, nonatomic) _Bool hasEtag;
@property(readonly, nonatomic) _Bool hasRecordIdentifier;

@end

