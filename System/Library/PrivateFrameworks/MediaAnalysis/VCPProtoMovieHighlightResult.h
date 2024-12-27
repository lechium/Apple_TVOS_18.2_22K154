//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, VCPProtoBounds, VCPProtoTimeRange, VCPProtoVideoKeyFrame;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieHighlightResult : PBCodable
{
    NSData *_colorNormalizationBlob;	// 8 = 0x8
    float _curationScore;	// 16 = 0x10
    VCPProtoVideoKeyFrame *_keyFrame;	// 24 = 0x18
    VCPProtoBounds *_playbackCrop;	// 32 = 0x20
    VCPProtoTimeRange *_timeRange;	// 40 = 0x28
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x001000000031d1c7
- (void).cxx_destruct;	// IMP=0x00000000002493a2
@property(retain, nonatomic) NSData *colorNormalizationBlob; // @synthesize colorNormalizationBlob=_colorNormalizationBlob;
@property(retain, nonatomic) VCPProtoBounds *playbackCrop; // @synthesize playbackCrop=_playbackCrop;
@property(retain, nonatomic) VCPProtoVideoKeyFrame *keyFrame; // @synthesize keyFrame=_keyFrame;
@property(nonatomic) float curationScore; // @synthesize curationScore=_curationScore;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002491f3
- (unsigned long long)hash;	// IMP=0x0000000000249091
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000248f6c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000248e6c
- (void)copyTo:(id)arg1;	// IMP=0x0000000000248dbf
- (void)writeTo:(id)arg1;	// IMP=0x0000000000248d1d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000248d10
- (id)dictionaryRepresentation;	// IMP=0x00000000002488b4
- (id)description;	// IMP=0x0000000000248805
@property(readonly, nonatomic) _Bool hasColorNormalizationBlob;
- (id)exportToLegacyDictionary;	// IMP=0x000000000031d64e

@end

