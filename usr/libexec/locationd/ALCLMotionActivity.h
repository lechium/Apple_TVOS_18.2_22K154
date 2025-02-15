//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface ALCLMotionActivity : PBCodable
{
    double _estExitTime;	// 8 = 0x8
    double _startTime;	// 16 = 0x10
    double _timestamp;	// 24 = 0x18
    int _confidence;	// 32 = 0x20
    int _exitState;	// 36 = 0x24
    int _mountedConfidence;	// 40 = 0x28
    int _mountedState;	// 44 = 0x2c
    float _tilt;	// 48 = 0x30
    int _type;	// 52 = 0x34
    _Bool _isStanding;	// 56 = 0x38
    _Bool _isVehicleConnected;	// 57 = 0x39
    struct {
        unsigned int estExitTime:1;
        unsigned int startTime:1;
        unsigned int confidence:1;
        unsigned int exitState:1;
        unsigned int mountedConfidence:1;
        unsigned int mountedState:1;
        unsigned int tilt:1;
        unsigned int isStanding:1;
        unsigned int isVehicleConnected:1;
    } _has;	// 60 = 0x3c
}

@property(nonatomic) _Bool isVehicleConnected; // @synthesize isVehicleConnected=_isVehicleConnected;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double estExitTime; // @synthesize estExitTime=_estExitTime;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) float tilt; // @synthesize tilt=_tilt;
@property(nonatomic) _Bool isStanding; // @synthesize isStanding=_isStanding;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000228824
- (unsigned long long)hash;	// IMP=0x0010000000228370
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000228167
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000228003
- (void)copyTo:(id)arg1;	// IMP=0x0010000000227edd
- (void)writeTo:(id)arg1;	// IMP=0x0010000000227d4d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000227d40
- (id)dictionaryRepresentation;	// IMP=0x0010000000226f85
- (id)description;	// IMP=0x0010000000226f0e
@property(nonatomic) _Bool hasIsVehicleConnected;
@property(nonatomic) _Bool hasStartTime;
@property(nonatomic) _Bool hasEstExitTime;
- (int)StringAsExitState:(id)arg1;	// IMP=0x0010000000226dc7
- (id)exitStateAsString:(int)arg1;	// IMP=0x0010000000226d8e
@property(nonatomic) _Bool hasExitState;
@property(nonatomic) int exitState; // @synthesize exitState=_exitState;
@property(nonatomic) _Bool hasTilt;
@property(nonatomic) _Bool hasIsStanding;
- (int)StringAsMountedConfidence:(id)arg1;	// IMP=0x0010000000226c24
- (id)mountedConfidenceAsString:(int)arg1;	// IMP=0x0010000000226beb
@property(nonatomic) _Bool hasMountedConfidence;
@property(nonatomic) int mountedConfidence; // @synthesize mountedConfidence=_mountedConfidence;
- (int)StringAsMountedState:(id)arg1;	// IMP=0x0010000000226b39
- (id)mountedStateAsString:(int)arg1;	// IMP=0x0010000000226afa
@property(nonatomic) _Bool hasMountedState;
@property(nonatomic) int mountedState; // @synthesize mountedState=_mountedState;
- (int)StringAsConfidence:(id)arg1;	// IMP=0x0010000000226a28
- (id)confidenceAsString:(int)arg1;	// IMP=0x00100000002269ef
@property(nonatomic) _Bool hasConfidence;
@property(nonatomic) int confidence; // @synthesize confidence=_confidence;
- (int)StringAsType:(id)arg1;	// IMP=0x0010000000226458
- (id)typeAsString:(int)arg1;	// IMP=0x001000000022608c

@end

