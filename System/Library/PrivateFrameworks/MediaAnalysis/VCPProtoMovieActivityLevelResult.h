//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieActivityLevelResult : PBCodable
{
    float _activityScore;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x001000000009ed72
- (void).cxx_destruct;	// IMP=0x000000000016c7f5
@property(nonatomic) float activityScore; // @synthesize activityScore=_activityScore;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000016c741
- (unsigned long long)hash;	// IMP=0x000000000016c639
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000016c58f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016c505
- (void)copyTo:(id)arg1;	// IMP=0x000000000016c4a7
- (void)writeTo:(id)arg1;	// IMP=0x000000000016c447
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000016c43a
- (id)dictionaryRepresentation;	// IMP=0x000000000016c158
- (id)description;	// IMP=0x000000000016c0a9
- (id)exportToLegacyDictionary;	// IMP=0x000000000009eeea

@end

