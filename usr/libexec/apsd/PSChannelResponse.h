//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface PSChannelResponse : PBCodable
{
    unsigned long long _channelSubscriptionCheckpoint;	// 8 = 0x8
    NSData *_channelId;	// 16 = 0x10
    int _channelStatus;	// 24 = 0x18
    struct {
        unsigned int channelSubscriptionCheckpoint:1;
        unsigned int channelStatus:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x002000000001d749
@property(nonatomic) unsigned long long channelSubscriptionCheckpoint; // @synthesize channelSubscriptionCheckpoint=_channelSubscriptionCheckpoint;
@property(retain, nonatomic) NSData *channelId; // @synthesize channelId=_channelId;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000001d692
- (unsigned long long)hash;	// IMP=0x001000000001d624
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001d548
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000001d492
- (void)copyTo:(id)arg1;	// IMP=0x001000000001d411
- (void)writeTo:(id)arg1;	// IMP=0x001000000001d381
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000001d374
- (id)dictionaryRepresentation;	// IMP=0x001000000001cfbf
- (id)description;	// IMP=0x001000000001cf10
@property(nonatomic) _Bool hasChannelSubscriptionCheckpoint;
- (int)StringAsChannelStatus:(id)arg1;	// IMP=0x001000000001ce65
- (id)channelStatusAsString:(int)arg1;	// IMP=0x001000000001ce10
@property(nonatomic) _Bool hasChannelStatus;
@property(nonatomic) int channelStatus; // @synthesize channelStatus=_channelStatus;
@property(readonly, nonatomic) _Bool hasChannelId;

@end

