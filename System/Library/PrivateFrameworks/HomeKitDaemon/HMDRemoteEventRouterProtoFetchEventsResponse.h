//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface HMDRemoteEventRouterProtoFetchEventsResponse : PBCodable
{
    NSMutableArray *_changedEvents;	// 8 = 0x8
}

+ (Class)changedEventsType;	// IMP=0x0010000000b5aa08
- (void).cxx_destruct;	// IMP=0x0000000000b5a9f5
@property(retain, nonatomic) NSMutableArray *changedEvents; // @synthesize changedEvents=_changedEvents;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000b5a897
- (unsigned long long)hash;	// IMP=0x0000000000b5a87a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b5a7ea
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b5a626
- (void)copyTo:(id)arg1;	// IMP=0x0000000000b5a561
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b5a42b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b5a27f
- (id)dictionaryRepresentation;	// IMP=0x0000000000b5a04f
- (id)description;	// IMP=0x0000000000b59fa0
- (id)changedEventsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000b59f83
- (unsigned long long)changedEventsCount;	// IMP=0x0000000000b59f66
- (void)addChangedEvents:(id)arg1;	// IMP=0x0000000000b59efc
- (void)clearChangedEvents;	// IMP=0x0000000000b59edf

@end

