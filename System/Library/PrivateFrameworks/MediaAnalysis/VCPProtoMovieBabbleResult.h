//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieBabbleResult : PBCodable
{
    float _confidence;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000000c74ad
- (void).cxx_destruct;	// IMP=0x000000000022264f
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000022259b
- (unsigned long long)hash;	// IMP=0x0000000000222493
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002223e9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000022235f
- (void)copyTo:(id)arg1;	// IMP=0x0000000000222301
- (void)writeTo:(id)arg1;	// IMP=0x00000000002222a1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000222294
- (id)dictionaryRepresentation;	// IMP=0x0000000000221fb2
- (id)description;	// IMP=0x0000000000221f03
- (id)exportToLegacyDictionary;	// IMP=0x00000000000c7625

@end

