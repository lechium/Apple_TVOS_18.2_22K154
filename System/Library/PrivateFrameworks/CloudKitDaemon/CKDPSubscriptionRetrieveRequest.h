//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPIdentifier;

@interface CKDPSubscriptionRetrieveRequest : PBRequest
{
    CKDPIdentifier *_identifier;	// 8 = 0x8
}

+ (id)options;	// IMP=0x0010000000231858
- (void).cxx_destruct;	// IMP=0x0000000000231db3
@property(retain, nonatomic) CKDPIdentifier *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000231d35
- (unsigned long long)hash;	// IMP=0x0000000000231d18
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000231c88
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000231c10
- (void)copyTo:(id)arg1;	// IMP=0x0000000000231be6
- (Class)responseClass;	// IMP=0x0000000000231bd5
- (unsigned int)requestTypeCode;	// IMP=0x0000000000231bca
- (void)writeTo:(id)arg1;	// IMP=0x0000000000231ba6
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000231b99
- (id)dictionaryRepresentation;	// IMP=0x000000000023196c
- (id)description;	// IMP=0x00000000002318bd
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

