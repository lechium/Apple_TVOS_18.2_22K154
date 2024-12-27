//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieVoiceResult : PBCodable
{
    float _confidence;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x001000000002691b
- (void).cxx_destruct;	// IMP=0x00000000003444f5
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000344441
- (unsigned long long)hash;	// IMP=0x0000000000344339
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000034428f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000344205
- (void)copyTo:(id)arg1;	// IMP=0x00000000003441a7
- (void)writeTo:(id)arg1;	// IMP=0x0000000000344147
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000034413a
- (id)dictionaryRepresentation;	// IMP=0x0000000000343e58
- (id)description;	// IMP=0x0000000000343da9
- (id)exportToLegacyDictionary;	// IMP=0x0000000000026a93

@end

