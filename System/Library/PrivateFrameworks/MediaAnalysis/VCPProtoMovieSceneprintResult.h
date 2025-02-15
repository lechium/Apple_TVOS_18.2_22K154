//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, VCPProtoTime;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieSceneprintResult : PBCodable
{
    NSData *_sceneprintBlob;	// 8 = 0x8
    VCPProtoTime *_timestamp;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x0010000000352554
- (void).cxx_destruct;	// IMP=0x000000000024e50f
@property(retain, nonatomic) NSData *sceneprintBlob; // @synthesize sceneprintBlob=_sceneprintBlob;
@property(retain, nonatomic) VCPProtoTime *timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000024e44c
- (unsigned long long)hash;	// IMP=0x000000000024e3ff
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000024e347
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000024e2a9
- (void)copyTo:(id)arg1;	// IMP=0x000000000024e238
- (void)writeTo:(id)arg1;	// IMP=0x000000000024e1d9
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000024e1cc
- (id)dictionaryRepresentation;	// IMP=0x000000000024df55
- (id)description;	// IMP=0x000000000024dea6
- (id)exportToLegacyDictionary;	// IMP=0x00000000003526f1

@end

