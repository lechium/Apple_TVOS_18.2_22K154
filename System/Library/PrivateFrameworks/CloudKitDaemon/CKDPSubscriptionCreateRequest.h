//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPSubscription;

@interface CKDPSubscriptionCreateRequest : PBRequest
{
    CKDPSubscription *_subscription;	// 8 = 0x8
}

+ (id)options;	// IMP=0x00100000001f11fc
- (void).cxx_destruct;	// IMP=0x00000000001f1757
@property(retain, nonatomic) CKDPSubscription *subscription; // @synthesize subscription=_subscription;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001f16d9
- (unsigned long long)hash;	// IMP=0x00000000001f16bc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001f162c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001f15b4
- (void)copyTo:(id)arg1;	// IMP=0x00000000001f158a
- (Class)responseClass;	// IMP=0x00000000001f1579
- (unsigned int)requestTypeCode;	// IMP=0x00000000001f156e
- (void)writeTo:(id)arg1;	// IMP=0x00000000001f154a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001f153d
- (id)dictionaryRepresentation;	// IMP=0x00000000001f1310
- (id)description;	// IMP=0x00000000001f1261
@property(readonly, nonatomic) _Bool hasSubscription;

@end

