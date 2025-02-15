//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

@interface PSChannelSubscription : PBCodable
{
    unsigned long long _checkpoint;	// 8 = 0x8
    unsigned long long _messageReplayCount;	// 16 = 0x10
    NSMutableArray *_attributes;	// 24 = 0x18
    NSData *_channelId;	// 32 = 0x20
    int _subscriptionInfo;	// 40 = 0x28
    struct {
        unsigned int checkpoint:1;
        unsigned int messageReplayCount:1;
        unsigned int subscriptionInfo:1;
    } _has;	// 44 = 0x2c
}

+ (Class)attributesType;	// IMP=0x00200000000865c7
- (void).cxx_destruct;	// IMP=0x0020000000087776
@property(retain, nonatomic) NSMutableArray *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) unsigned long long messageReplayCount; // @synthesize messageReplayCount=_messageReplayCount;
- (unsigned long long)checkpoint;	// IMP=0x001000000008772f
@property(retain, nonatomic) NSData *channelId; // @synthesize channelId=_channelId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000087515
- (unsigned long long)hash;	// IMP=0x0010000000087452
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000008730b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000870c0
- (void)copyTo:(id)arg1;	// IMP=0x0010000000086f7f
- (void)writeTo:(id)arg1;	// IMP=0x0010000000086dd5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000086dc8
- (id)dictionaryRepresentation;	// IMP=0x0010000000086687
- (id)description;	// IMP=0x00100000000865d8
- (id)attributesAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000865aa
- (unsigned long long)attributesCount;	// IMP=0x001000000008658d
- (void)addAttributes:(id)arg1;	// IMP=0x0010000000086523
- (void)clearAttributes;	// IMP=0x0010000000086506
- (void)clearOneofValuesForSubscriptionInfo;	// IMP=0x00100000000864c7
- (int)StringAsSubscriptionInfo:(id)arg1;	// IMP=0x0010000000086430
- (id)subscriptionInfoAsString:(int)arg1;	// IMP=0x00100000000863e7
@property(nonatomic) _Bool hasSubscriptionInfo;
@property(nonatomic) int subscriptionInfo; // @synthesize subscriptionInfo=_subscriptionInfo;
@property(nonatomic) _Bool hasMessageReplayCount;
@property(nonatomic) _Bool hasCheckpoint;
- (void)setCheckpoint:(unsigned long long)arg1;	// IMP=0x0010000000086291
@property(readonly, nonatomic) _Bool hasChannelId;

@end

