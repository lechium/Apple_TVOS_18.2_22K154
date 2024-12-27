//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, VCPProtoBounds, VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoLivePhotoHumanActionClassificationResult : PBCodable
{
    VCPProtoBounds *_bounds;	// 8 = 0x8
    NSMutableArray *_classifications;	// 16 = 0x10
    NSString *_faceId;	// 24 = 0x18
    VCPProtoTimeRange *_timeRange;	// 32 = 0x20
}

+ (Class)classificationType;	// IMP=0x0010000000272fd5
+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000002d7b75
- (void).cxx_destruct;	// IMP=0x0000000000273f22
@property(retain, nonatomic) NSString *faceId; // @synthesize faceId=_faceId;
@property(retain, nonatomic) VCPProtoBounds *bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) NSMutableArray *classifications; // @synthesize classifications=_classifications;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000273caa
- (unsigned long long)hash;	// IMP=0x0000000000273c26
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000273b1a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002738d5
- (void)copyTo:(id)arg1;	// IMP=0x00000000002737bd
- (void)writeTo:(id)arg1;	// IMP=0x000000000027362d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000273620
- (id)dictionaryRepresentation;	// IMP=0x00000000002730aa
- (id)description;	// IMP=0x0000000000272ffb
@property(readonly, nonatomic) _Bool hasFaceId;
- (id)classificationAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000272fb8
- (unsigned long long)classificationsCount;	// IMP=0x0000000000272f9b
- (void)addClassification:(id)arg1;	// IMP=0x0000000000272f31
- (void)clearClassifications;	// IMP=0x0000000000272f14
- (id)exportToLegacyDictionary;	// IMP=0x00000000002d7f81

@end

