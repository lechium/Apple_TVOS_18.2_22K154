//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface PSAppChannelUpdates : PBCodable
{
    NSString *_appId;	// 8 = 0x8
    NSMutableArray *_channelUpdates;	// 16 = 0x10
}

+ (Class)channelUpdatesType;	// IMP=0x00200000000028eb
- (void).cxx_destruct;	// IMP=0x00200000000034a7
@property(retain, nonatomic) NSMutableArray *channelUpdates; // @synthesize channelUpdates=_channelUpdates;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000032e9
- (unsigned long long)hash;	// IMP=0x001000000000329c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000031e4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000300c
- (void)copyTo:(id)arg1;	// IMP=0x0010000000002f24
- (void)writeTo:(id)arg1;	// IMP=0x0010000000002dd2
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000002dc5
- (id)dictionaryRepresentation;	// IMP=0x00100000000029ab
- (id)description;	// IMP=0x00100000000028fc
- (id)channelUpdatesAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000028ce
- (unsigned long long)channelUpdatesCount;	// IMP=0x00100000000028b1
- (void)addChannelUpdates:(id)arg1;	// IMP=0x0010000000002847
- (void)clearChannelUpdates;	// IMP=0x001000000000282a
@property(readonly, nonatomic) _Bool hasAppId;

@end

