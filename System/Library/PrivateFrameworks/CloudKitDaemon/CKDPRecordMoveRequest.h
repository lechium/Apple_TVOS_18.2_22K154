//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPRecord, CKDPRecordIdentifier, NSString;

@interface CKDPRecordMoveRequest : PBRequest
{
    NSString *_destinationEtag;	// 8 = 0x8
    CKDPRecord *_destinationRecord;	// 16 = 0x10
    NSString *_destinationRecordProtectionInfoTag;	// 24 = 0x18
    NSString *_destinationZoneProtectionInfoTag;	// 32 = 0x20
    NSString *_originEtag;	// 40 = 0x28
    CKDPRecordIdentifier *_originId;	// 48 = 0x30
    int _semantics;	// 56 = 0x38
    _Bool _merge;	// 60 = 0x3c
    struct {
        unsigned int semantics:1;
        unsigned int merge:1;
    } _has;	// 64 = 0x40
}

+ (id)options;	// IMP=0x001000000014190c
- (void).cxx_destruct;	// IMP=0x0000000000142b0c
@property(nonatomic) _Bool merge; // @synthesize merge=_merge;
@property(retain, nonatomic) CKDPRecord *destinationRecord; // @synthesize destinationRecord=_destinationRecord;
@property(retain, nonatomic) NSString *destinationRecordProtectionInfoTag; // @synthesize destinationRecordProtectionInfoTag=_destinationRecordProtectionInfoTag;
@property(retain, nonatomic) NSString *destinationZoneProtectionInfoTag; // @synthesize destinationZoneProtectionInfoTag=_destinationZoneProtectionInfoTag;
@property(retain, nonatomic) NSString *destinationEtag; // @synthesize destinationEtag=_destinationEtag;
@property(retain, nonatomic) NSString *originEtag; // @synthesize originEtag=_originEtag;
@property(retain, nonatomic) CKDPRecordIdentifier *originId; // @synthesize originId=_originId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001428cb
- (unsigned long long)hash;	// IMP=0x00000000001427b5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001425e3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014246c
- (void)copyTo:(id)arg1;	// IMP=0x0000000000142345
- (Class)responseClass;	// IMP=0x0000000000142334
- (unsigned int)requestTypeCode;	// IMP=0x0000000000142329
- (void)writeTo:(id)arg1;	// IMP=0x0000000000142209
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001421fc
- (id)dictionaryRepresentation;	// IMP=0x0000000000141bfa
- (id)description;	// IMP=0x0000000000141b4b
@property(nonatomic) _Bool hasMerge;
@property(readonly, nonatomic) _Bool hasDestinationRecord;
@property(readonly, nonatomic) _Bool hasDestinationRecordProtectionInfoTag;
@property(readonly, nonatomic) _Bool hasDestinationZoneProtectionInfoTag;
@property(readonly, nonatomic) _Bool hasDestinationEtag;
@property(readonly, nonatomic) _Bool hasOriginEtag;
@property(readonly, nonatomic) _Bool hasOriginId;
- (int)StringAsSemantics:(id)arg1;	// IMP=0x0000000000141a19
- (id)semanticsAsString:(int)arg1;	// IMP=0x00000000001419c3
@property(nonatomic) _Bool hasSemantics;
@property(nonatomic) int semantics; // @synthesize semantics=_semantics;

@end

