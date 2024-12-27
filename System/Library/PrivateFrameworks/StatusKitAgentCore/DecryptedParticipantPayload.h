//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface DecryptedParticipantPayload : PBCodable
{
    unsigned long long _timestamp;	// 8 = 0x8
    NSString *_channelIdentifier;	// 16 = 0x10
    NSData *_clientPayload;	// 24 = 0x18
    NSString *_presenceIdentifier;	// 32 = 0x20
    NSString *_tokenUri;	// 40 = 0x28
    struct {
        unsigned int timestamp:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000011c62
@property(retain, nonatomic) NSData *clientPayload; // @synthesize clientPayload=_clientPayload;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *channelIdentifier; // @synthesize channelIdentifier=_channelIdentifier;
@property(retain, nonatomic) NSString *presenceIdentifier; // @synthesize presenceIdentifier=_presenceIdentifier;
@property(retain, nonatomic) NSString *tokenUri; // @synthesize tokenUri=_tokenUri;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000011af9
- (unsigned long long)hash;	// IMP=0x0000000000011a4c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001190c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000117fa
- (void)copyTo:(id)arg1;	// IMP=0x0000000000011736
- (void)writeTo:(id)arg1;	// IMP=0x0000000000011679
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001166c
- (id)dictionaryRepresentation;	// IMP=0x00000000000112e1
- (id)description;	// IMP=0x0000000000011232
@property(readonly, nonatomic) _Bool hasClientPayload;
@property(nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasChannelIdentifier;
@property(readonly, nonatomic) _Bool hasPresenceIdentifier;
@property(readonly, nonatomic) _Bool hasTokenUri;

@end

