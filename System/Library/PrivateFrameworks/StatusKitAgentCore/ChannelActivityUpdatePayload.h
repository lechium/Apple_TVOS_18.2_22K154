//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ChannelActivityUpdatePayload : PBCodable
{
    NSData *_padding;	// 8 = 0x8
    NSMutableArray *_participantPayloads;	// 16 = 0x10
    int _updateType;	// 24 = 0x18
    struct {
        unsigned int updateType:1;
    } _has;	// 28 = 0x1c
}

+ (Class)participantPayloadType;	// IMP=0x00100000000630a0
- (void).cxx_destruct;	// IMP=0x0000000000063ed7
@property(retain, nonatomic) NSData *padding; // @synthesize padding=_padding;
@property(retain, nonatomic) NSMutableArray *participantPayloads; // @synthesize participantPayloads=_participantPayloads;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000063cf8
- (unsigned long long)hash;	// IMP=0x0000000000063c78
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000063b95
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000063966
- (void)copyTo:(id)arg1;	// IMP=0x000000000006385b
- (void)writeTo:(id)arg1;	// IMP=0x00000000000636d6
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000636c9
- (id)dictionaryRepresentation;	// IMP=0x0000000000063175
- (id)description;	// IMP=0x00000000000630c6
@property(readonly, nonatomic) _Bool hasPadding;
- (id)participantPayloadAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000063083
- (unsigned long long)participantPayloadsCount;	// IMP=0x0000000000063066
- (void)addParticipantPayload:(id)arg1;	// IMP=0x0000000000062ffc
- (void)clearParticipantPayloads;	// IMP=0x0000000000062fdf
- (int)StringAsUpdateType:(id)arg1;	// IMP=0x0000000000062f7a
- (id)updateTypeAsString:(int)arg1;	// IMP=0x0000000000062f25
@property(nonatomic) _Bool hasUpdateType;
@property(nonatomic) int updateType; // @synthesize updateType=_updateType;

@end

