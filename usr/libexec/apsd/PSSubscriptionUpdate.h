//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE;

@interface PSSubscriptionUpdate : PBCodable
{
    int _subscriptionsStatus;	// 8 = 0x8
    struct {
        unsigned int subscriptionsStatus:1;
    } _has;	// 12 = 0xc
}

- (MISSING_TYPE *)mergeFrom: /* Error: Ran out of types for this method. */;	// IMP=0x00200000000847ea
- (unsigned long long)hash;	// IMP=0x00100000000847bf
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000008472d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000846cb
- (void)copyTo:(id)arg1;	// IMP=0x00100000000846a7
- (void)writeTo:(id)arg1;	// IMP=0x001000000008467c
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000008466f
- (id)dictionaryRepresentation;	// IMP=0x0010000000084415
- (id)description;	// IMP=0x0010000000084366
- (int)StringAsSubscriptionsStatus:(id)arg1;	// IMP=0x0010000000084347
- (id)subscriptionsStatusAsString:(int)arg1;	// IMP=0x0010000000084303
@property(nonatomic) _Bool hasSubscriptionsStatus;
@property(nonatomic) int subscriptionsStatus; // @synthesize subscriptionsStatus=_subscriptionsStatus;

@end

