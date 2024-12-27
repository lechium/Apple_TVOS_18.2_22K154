//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPShareIdentifier, NSData, NSString;

@interface CKDPShareVettingInitiateRequest : PBRequest
{
    NSString *_baseToken;	// 8 = 0x8
    NSData *_encryptedKey;	// 16 = 0x10
    NSString *_participantId;	// 24 = 0x18
    CKDPShareIdentifier *_shareId;	// 32 = 0x20
}

+ (id)options;	// IMP=0x00100000003d9ed0
- (void).cxx_destruct;	// IMP=0x00000000003da862
@property(retain, nonatomic) NSString *baseToken; // @synthesize baseToken=_baseToken;
@property(retain, nonatomic) NSString *participantId; // @synthesize participantId=_participantId;
@property(retain, nonatomic) NSData *encryptedKey; // @synthesize encryptedKey=_encryptedKey;
@property(retain, nonatomic) CKDPShareIdentifier *shareId; // @synthesize shareId=_shareId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003da715
- (unsigned long long)hash;	// IMP=0x00000000003da691
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003da585
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003da49b
- (void)copyTo:(id)arg1;	// IMP=0x00000000003da3f8
- (Class)responseClass;	// IMP=0x00000000003da3e7
- (unsigned int)requestTypeCode;	// IMP=0x00000000003da3dc
- (void)writeTo:(id)arg1;	// IMP=0x00000000003da345
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003da338
- (id)dictionaryRepresentation;	// IMP=0x00000000003da023
- (id)description;	// IMP=0x00000000003d9f74
@property(readonly, nonatomic) _Bool hasBaseToken;
@property(readonly, nonatomic) _Bool hasParticipantId;
@property(readonly, nonatomic) _Bool hasEncryptedKey;
@property(readonly, nonatomic) _Bool hasShareId;

@end

