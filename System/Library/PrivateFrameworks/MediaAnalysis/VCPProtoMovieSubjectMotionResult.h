//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieSubjectMotionResult : PBCodable
{
    VCPProtoTimeRange *_timeRange;	// 8 = 0x8
    _Bool _hasAction;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000002e1d69
- (void).cxx_destruct;	// IMP=0x0000000000250d15
@property(nonatomic) _Bool hasAction; // @synthesize hasAction=_hasAction;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000250c69
- (unsigned long long)hash;	// IMP=0x0000000000250c2a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000250b7d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000250af7
- (void)copyTo:(id)arg1;	// IMP=0x0000000000250a9d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000250a3e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000250a31
- (id)dictionaryRepresentation;	// IMP=0x000000000025071e
- (id)description;	// IMP=0x000000000025066f
- (id)exportToLegacyDictionary;	// IMP=0x00000000002e1ee9

@end

