//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPMergeableValueIdentifier, CKDPRecordFieldIdentifier, CKDPRecordIdentifier, CKDPRecordType, NSMutableArray;

@interface CKDPRecordRetrieveChangesResponseMergeableDeltaChange : PBCodable
{
    NSMutableArray *_deltas;	// 8 = 0x8
    CKDPRecordFieldIdentifier *_fieldIdentifier;	// 16 = 0x10
    CKDPMergeableValueIdentifier *_identifier;	// 24 = 0x18
    CKDPRecordIdentifier *_recordIdentifier;	// 32 = 0x20
    CKDPRecordType *_recordType;	// 40 = 0x28
}

+ (Class)deltasType;	// IMP=0x0010000000051674
- (void).cxx_destruct;	// IMP=0x00000000000527d9
@property(retain, nonatomic) CKDPRecordType *recordType; // @synthesize recordType=_recordType;
@property(retain, nonatomic) NSMutableArray *deltas; // @synthesize deltas=_deltas;
@property(retain, nonatomic) CKDPRecordFieldIdentifier *fieldIdentifier; // @synthesize fieldIdentifier=_fieldIdentifier;
@property(retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
@property(retain, nonatomic) CKDPMergeableValueIdentifier *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000524f0
- (unsigned long long)hash;	// IMP=0x0000000000052451
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000052319
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000520ae
- (void)copyTo:(id)arg1;	// IMP=0x0000000000051f63
- (void)writeTo:(id)arg1;	// IMP=0x0000000000051dad
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000051da0
- (id)dictionaryRepresentation;	// IMP=0x0000000000051749
- (id)description;	// IMP=0x000000000005169a
@property(readonly, nonatomic) _Bool hasRecordType;
- (id)deltasAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000051657
- (unsigned long long)deltasCount;	// IMP=0x000000000005163a
- (void)addDeltas:(id)arg1;	// IMP=0x00000000000515d0
- (void)clearDeltas;	// IMP=0x00000000000515b3
@property(readonly, nonatomic) _Bool hasFieldIdentifier;
@property(readonly, nonatomic) _Bool hasRecordIdentifier;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

