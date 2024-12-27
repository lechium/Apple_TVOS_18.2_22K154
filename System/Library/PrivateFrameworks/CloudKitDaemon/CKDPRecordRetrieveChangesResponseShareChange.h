//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPShare, CKDPShareIdentifier;

@interface CKDPRecordRetrieveChangesResponseShareChange : PBCodable
{
    int _changeType;	// 8 = 0x8
    CKDPShare *_share;	// 16 = 0x10
    CKDPShareIdentifier *_shareIdentifier;	// 24 = 0x18
    struct {
        unsigned int changeType:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000289ae7
@property(retain, nonatomic) CKDPShare *share; // @synthesize share=_share;
@property(retain, nonatomic) CKDPShareIdentifier *shareIdentifier; // @synthesize shareIdentifier=_shareIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002899ee
- (unsigned long long)hash;	// IMP=0x0000000000289979
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000289896
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002897d3
- (void)copyTo:(id)arg1;	// IMP=0x0000000000289750
- (void)writeTo:(id)arg1;	// IMP=0x00000000002896cd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002896c0
- (id)dictionaryRepresentation;	// IMP=0x00000000002892fb
- (id)description;	// IMP=0x000000000028924c
@property(readonly, nonatomic) _Bool hasShare;
- (int)StringAsChangeType:(id)arg1;	// IMP=0x0000000000289199
- (id)changeTypeAsString:(int)arg1;	// IMP=0x000000000028914e
@property(nonatomic) _Bool hasChangeType;
@property(nonatomic) int changeType; // @synthesize changeType=_changeType;
@property(readonly, nonatomic) _Bool hasShareIdentifier;

@end

