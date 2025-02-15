//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, VCPProtoTime;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieFeatureResult : PBCodable
{
    NSData *_featureBlob;	// 8 = 0x8
    VCPProtoTime *_timestamp;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x0010000000109c72
- (void).cxx_destruct;	// IMP=0x00000000001ad107
@property(retain, nonatomic) NSData *featureBlob; // @synthesize featureBlob=_featureBlob;
@property(retain, nonatomic) VCPProtoTime *timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001ad044
- (unsigned long long)hash;	// IMP=0x00000000001acff7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001acf3f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001acea1
- (void)copyTo:(id)arg1;	// IMP=0x00000000001ace30
- (void)writeTo:(id)arg1;	// IMP=0x00000000001acdd1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001acdc4
- (id)dictionaryRepresentation;	// IMP=0x00000000001acb4d
- (id)description;	// IMP=0x00000000001aca9e
- (id)exportToLegacyDictionary;	// IMP=0x0000000000109e0f

@end

