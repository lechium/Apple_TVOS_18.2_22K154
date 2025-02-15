//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface PSAppChannelSubscriptionResponse : PBCodable
{
    NSString *_appId;	// 8 = 0x8
    NSMutableArray *_subscriptionChannelResponses;	// 16 = 0x10
    NSMutableArray *_unsubscriptionChannelResponses;	// 24 = 0x18
}

+ (Class)unsubscriptionChannelResponseType;	// IMP=0x0020000000082175
+ (Class)subscriptionChannelResponseType;	// IMP=0x00100000000820a3
- (void).cxx_destruct;	// IMP=0x0020000000083320
@property(retain, nonatomic) NSMutableArray *unsubscriptionChannelResponses; // @synthesize unsubscriptionChannelResponses=_unsubscriptionChannelResponses;
@property(retain, nonatomic) NSMutableArray *subscriptionChannelResponses; // @synthesize subscriptionChannelResponses=_subscriptionChannelResponses;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000083049
- (unsigned long long)hash;	// IMP=0x0010000000082fdc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000082efc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000082bef
- (void)copyTo:(id)arg1;	// IMP=0x0010000000082a7b
- (void)writeTo:(id)arg1;	// IMP=0x0010000000082848
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000008283b
- (id)dictionaryRepresentation;	// IMP=0x0010000000082235
- (id)description;	// IMP=0x0010000000082186
- (id)unsubscriptionChannelResponseAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000082158
- (unsigned long long)unsubscriptionChannelResponsesCount;	// IMP=0x001000000008213b
- (void)addUnsubscriptionChannelResponse:(id)arg1;	// IMP=0x00100000000820d1
- (void)clearUnsubscriptionChannelResponses;	// IMP=0x00100000000820b4
- (id)subscriptionChannelResponseAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000082086
- (unsigned long long)subscriptionChannelResponsesCount;	// IMP=0x0010000000082069
- (void)addSubscriptionChannelResponse:(id)arg1;	// IMP=0x0010000000081fff
- (void)clearSubscriptionChannelResponses;	// IMP=0x0010000000081fe2
@property(readonly, nonatomic) _Bool hasAppId;

@end

