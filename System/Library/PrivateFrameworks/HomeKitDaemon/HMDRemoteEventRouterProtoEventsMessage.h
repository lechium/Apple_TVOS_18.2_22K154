//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface HMDRemoteEventRouterProtoEventsMessage : PBCodable
{
    NSMutableArray *_cachedEvents;	// 8 = 0x8
    NSMutableArray *_events;	// 16 = 0x10
}

+ (Class)cachedEventsType;	// IMP=0x0010000000cd783f
+ (Class)eventsType;	// IMP=0x0010000000cd782e
- (void).cxx_destruct;	// IMP=0x0000000000cd763b
@property(retain, nonatomic) NSMutableArray *cachedEvents; // @synthesize cachedEvents=_cachedEvents;
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000cd73a7
- (unsigned long long)hash;	// IMP=0x0000000000cd735a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cd72a2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cd6fa2
- (void)copyTo:(id)arg1;	// IMP=0x0000000000cd6e4c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cd6c35
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cd6c28
- (id)dictionaryRepresentation;	// IMP=0x0000000000cd683a
- (id)description;	// IMP=0x0000000000cd678b
- (id)cachedEventsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000cd676e
- (unsigned long long)cachedEventsCount;	// IMP=0x0000000000cd6751
- (void)addCachedEvents:(id)arg1;	// IMP=0x0000000000cd66e7
- (void)clearCachedEvents;	// IMP=0x0000000000cd66ca
- (id)eventsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000cd66ad
- (unsigned long long)eventsCount;	// IMP=0x0000000000cd6690
- (void)addEvents:(id)arg1;	// IMP=0x0000000000cd6626
- (void)clearEvents;	// IMP=0x0000000000cd6609

@end

