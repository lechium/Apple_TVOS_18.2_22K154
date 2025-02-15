//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface HMDRemoteEventRouterProtoConnectResponse : PBCodable
{
    NSMutableArray *_cachedEvents;	// 8 = 0x8
}

+ (Class)cachedEventsType;	// IMP=0x00100000001e7916
- (void).cxx_destruct;	// IMP=0x00000000001e7757
@property(retain, nonatomic) NSMutableArray *cachedEvents; // @synthesize cachedEvents=_cachedEvents;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001e75f9
- (unsigned long long)hash;	// IMP=0x00000000001e75dc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001e754c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001e7388
- (void)copyTo:(id)arg1;	// IMP=0x00000000001e72c3
- (void)writeTo:(id)arg1;	// IMP=0x00000000001e718d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001e7180
- (id)dictionaryRepresentation;	// IMP=0x00000000001e6f50
- (id)description;	// IMP=0x00000000001e6ea1
- (id)cachedEventsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001e6e84
- (unsigned long long)cachedEventsCount;	// IMP=0x00000000001e6e67
- (void)addCachedEvents:(id)arg1;	// IMP=0x00000000001e6dfd
- (void)clearCachedEvents;	// IMP=0x00000000001e6de0

@end

