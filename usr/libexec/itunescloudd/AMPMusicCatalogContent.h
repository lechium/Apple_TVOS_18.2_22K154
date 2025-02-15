//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE, NSMutableArray;

@interface AMPMusicCatalogContent : PBCodable
{
    MISSING_TYPE *_adamId;	// 8 = 0x8
    long long _canonicalId;	// 16 = 0x10
    long long _releaseDate;	// 24 = 0x18
    NSMutableArray *_contentFeatures;	// 32 = 0x20
    int _contentType;	// 40 = 0x28
    _Bool _isExplicit;	// 44 = 0x2c
    struct {
        unsigned int adamId:1;
        unsigned int canonicalId:1;
        unsigned int releaseDate:1;
        unsigned int contentType:1;
        unsigned int isExplicit:1;
    } _has;	// 48 = 0x30
}

+ (Class)contentFeaturesType;	// IMP=0x00200000000f5f10
- (void).cxx_destruct;	// IMP=0x00200000000f5a69
@property(retain, nonatomic) NSMutableArray *contentFeatures; // @synthesize contentFeatures=_contentFeatures;
@property(nonatomic) _Bool isExplicit; // @synthesize isExplicit=_isExplicit;
@property(nonatomic) long long releaseDate; // @synthesize releaseDate=_releaseDate;
@property(nonatomic) long long canonicalId; // @synthesize canonicalId=_canonicalId;
@property(nonatomic) long long adamId; // @synthesize adamId=_adamId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000f57fa
- (unsigned long long)hash;	// IMP=0x00100000000f573e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000f55f0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000f537d
- (void)copyTo:(id)arg1;	// IMP=0x00100000000f522e
- (void)writeTo:(id)arg1;	// IMP=0x00100000000f5051
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000f5044
- (id)dictionaryRepresentation;	// IMP=0x00100000000f4c48
- (id)description;	// IMP=0x00100000000f4b99
- (id)contentFeaturesAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000f4b7c
- (unsigned long long)contentFeaturesCount;	// IMP=0x00100000000f4b5f
- (void)addContentFeatures:(id)arg1;	// IMP=0x00100000000f4af5
- (void)clearContentFeatures;	// IMP=0x00100000000f4ad8
@property(nonatomic) _Bool hasIsExplicit;
@property(nonatomic) _Bool hasReleaseDate;
@property(nonatomic) _Bool hasCanonicalId;
@property(nonatomic) _Bool hasAdamId;
- (int)StringAsContentType:(id)arg1;	// IMP=0x00100000000f48df
- (id)contentTypeAsString:(int)arg1;	// IMP=0x00100000000f4897
@property(nonatomic) _Bool hasContentType;
@property(nonatomic) int contentType; // @synthesize contentType=_contentType;

@end

