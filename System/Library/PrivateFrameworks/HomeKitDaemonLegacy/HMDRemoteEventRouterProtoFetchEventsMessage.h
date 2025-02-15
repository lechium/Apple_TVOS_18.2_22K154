//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface HMDRemoteEventRouterProtoFetchEventsMessage : PBCodable
{
    int _fetchType;	// 8 = 0x8
    NSMutableArray *_topics;	// 16 = 0x10
    struct {
        unsigned int fetchType:1;
    } _has;	// 24 = 0x18
}

+ (Class)topicsType;	// IMP=0x001000000081fbfc
- (void).cxx_destruct;	// IMP=0x000000000081f9b7
@property(retain, nonatomic) NSMutableArray *topics; // @synthesize topics=_topics;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000081f81d
- (unsigned long long)hash;	// IMP=0x000000000081f7ca
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000081f710
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000081f521
- (void)copyTo:(id)arg1;	// IMP=0x000000000081f440
- (void)writeTo:(id)arg1;	// IMP=0x000000000081f2d9
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000081f2cc
- (id)dictionaryRepresentation;	// IMP=0x000000000081f015
- (id)description;	// IMP=0x000000000081ef66
- (int)StringAsFetchType:(id)arg1;	// IMP=0x000000000081ef01
- (id)fetchTypeAsString:(int)arg1;	// IMP=0x000000000081eeac
@property(nonatomic) _Bool hasFetchType;
@property(nonatomic) int fetchType; // @synthesize fetchType=_fetchType;
- (id)topicsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000081ee2b
- (unsigned long long)topicsCount;	// IMP=0x000000000081ee0e
- (void)addTopics:(id)arg1;	// IMP=0x000000000081eda4
- (void)clearTopics;	// IMP=0x000000000081ed87

@end

