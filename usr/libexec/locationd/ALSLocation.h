//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface ALSLocation : PBCodable
{
    long long _latitude;	// 8 = 0x8
    long long _longitude;	// 16 = 0x10
    int _accuracy;	// 24 = 0x18
    int _altitude;	// 28 = 0x1c
    int _confidence;	// 32 = 0x20
    unsigned int _infoMask;	// 36 = 0x24
    int _locationType;	// 40 = 0x28
    int _reach;	// 44 = 0x2c
    unsigned int _score;	// 48 = 0x30
    int _verticalAccuracy;	// 52 = 0x34
    struct {
        unsigned int altitude:1;
        unsigned int confidence:1;
        unsigned int infoMask:1;
        unsigned int locationType:1;
        unsigned int reach:1;
        unsigned int score:1;
        unsigned int verticalAccuracy:1;
    } _has;	// 56 = 0x38
}

@property(nonatomic) unsigned int infoMask; // @synthesize infoMask=_infoMask;
@property(nonatomic) int reach; // @synthesize reach=_reach;
@property(nonatomic) unsigned int score; // @synthesize score=_score;
@property(nonatomic) int confidence; // @synthesize confidence=_confidence;
@property(nonatomic) int verticalAccuracy; // @synthesize verticalAccuracy=_verticalAccuracy;
@property(nonatomic) int altitude; // @synthesize altitude=_altitude;
@property(nonatomic) int locationType; // @synthesize locationType=_locationType;
@property(nonatomic) int accuracy; // @synthesize accuracy=_accuracy;
@property(nonatomic) long long longitude; // @synthesize longitude=_longitude;
@property(nonatomic) long long latitude; // @synthesize latitude=_latitude;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000b560e0
- (unsigned long long)hash;	// IMP=0x0010000000b55fc2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000b55e39
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000b55d14
- (void)copyTo:(id)arg1;	// IMP=0x0010000000b55c2d
- (void)writeTo:(id)arg1;	// IMP=0x0010000000b55ad9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000b55acc
- (id)dictionaryRepresentation;	// IMP=0x0010000000b551e4
- (id)description;	// IMP=0x0010000000b5516d
@property(nonatomic) _Bool hasInfoMask;
@property(nonatomic) _Bool hasReach;
@property(nonatomic) _Bool hasScore;
@property(nonatomic) _Bool hasConfidence;
@property(nonatomic) _Bool hasVerticalAccuracy;
@property(nonatomic) _Bool hasAltitude;
@property(nonatomic) _Bool hasLocationType;

@end

