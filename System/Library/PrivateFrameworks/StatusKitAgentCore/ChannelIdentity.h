//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface ChannelIdentity : PBCodable
{
    NSData *_channelId;	// 8 = 0x8
    int _channelOwnershipType;	// 16 = 0x10
    NSData *_channelToken;	// 24 = 0x18
    NSString *_channelTopic;	// 32 = 0x20
    CDStruct_cada917b _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000004751e
@property(retain, nonatomic) NSData *channelToken; // @synthesize channelToken=_channelToken;
@property(retain, nonatomic) NSData *channelId; // @synthesize channelId=_channelId;
@property(retain, nonatomic) NSString *channelTopic; // @synthesize channelTopic=_channelTopic;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004740c
- (unsigned long long)hash;	// IMP=0x0000000000047376
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000047268
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000047184
- (void)copyTo:(id)arg1;	// IMP=0x00000000000470e1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000047041
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000047034
- (id)dictionaryRepresentation;	// IMP=0x0000000000046cd8
- (id)description;	// IMP=0x0000000000046c29
- (int)StringAsChannelOwnershipType:(id)arg1;	// IMP=0x0000000000046bc4
- (id)channelOwnershipTypeAsString:(int)arg1;	// IMP=0x0000000000046b6f
@property(nonatomic) _Bool hasChannelOwnershipType;
@property(nonatomic) int channelOwnershipType; // @synthesize channelOwnershipType=_channelOwnershipType;
@property(readonly, nonatomic) _Bool hasChannelToken;
@property(readonly, nonatomic) _Bool hasChannelId;
@property(readonly, nonatomic) _Bool hasChannelTopic;

@end

