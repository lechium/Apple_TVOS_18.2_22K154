//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface ALCMMotionContextMotionState : PBCodable
{
    unsigned long long _startTime;	// 8 = 0x8
    int _confidence;	// 16 = 0x10
    int _exitState;	// 20 = 0x14
    int _mounted;	// 24 = 0x18
    int _mountedConfidence;	// 28 = 0x1c
    int _turn;	// 32 = 0x20
    int _type;	// 36 = 0x24
    _Bool _isMoving;	// 40 = 0x28
    _Bool _isVehicular;	// 41 = 0x29
    struct {
        unsigned int startTime:1;
        unsigned int exitState:1;
        unsigned int mounted:1;
        unsigned int mountedConfidence:1;
        unsigned int turn:1;
        unsigned int isMoving:1;
        unsigned int isVehicular:1;
    } _has;	// 44 = 0x2c
}

@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool isMoving; // @synthesize isMoving=_isMoving;
@property(nonatomic) _Bool isVehicular; // @synthesize isVehicular=_isVehicular;
@property(nonatomic) int confidence; // @synthesize confidence=_confidence;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000020fcf4
- (unsigned long long)hash;	// IMP=0x001000000020fbed
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000020fa5c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000020f942
- (void)copyTo:(id)arg1;	// IMP=0x001000000020f866
- (void)writeTo:(id)arg1;	// IMP=0x001000000020f729
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000020f71c
- (id)dictionaryRepresentation;	// IMP=0x001000000020eaef
- (id)description;	// IMP=0x001000000020ea78
@property(nonatomic) _Bool hasStartTime;
- (int)StringAsExitState:(id)arg1;	// IMP=0x001000000020e9cb
- (id)exitStateAsString:(int)arg1;	// IMP=0x001000000020e992
@property(nonatomic) _Bool hasExitState;
@property(nonatomic) int exitState; // @synthesize exitState=_exitState;
@property(nonatomic) _Bool hasIsMoving;
@property(nonatomic) _Bool hasIsVehicular;
- (int)StringAsTurn:(id)arg1;	// IMP=0x001000000020e82d
- (id)turnAsString:(int)arg1;	// IMP=0x001000000020e7f4
@property(nonatomic) _Bool hasTurn;
@property(nonatomic) int turn; // @synthesize turn=_turn;
- (int)StringAsMountedConfidence:(id)arg1;	// IMP=0x001000000020e723
- (id)mountedConfidenceAsString:(int)arg1;	// IMP=0x001000000020e6ea
@property(nonatomic) _Bool hasMountedConfidence;
@property(nonatomic) int mountedConfidence; // @synthesize mountedConfidence=_mountedConfidence;
- (int)StringAsMounted:(id)arg1;	// IMP=0x001000000020e639
- (id)mountedAsString:(int)arg1;	// IMP=0x001000000020e5fa
@property(nonatomic) _Bool hasMounted;
@property(nonatomic) int mounted; // @synthesize mounted=_mounted;
- (int)StringAsConfidence:(id)arg1;	// IMP=0x001000000020e529
- (id)confidenceAsString:(int)arg1;	// IMP=0x001000000020e4f0
- (int)StringAsType:(id)arg1;	// IMP=0x001000000020e0f4
- (id)typeAsString:(int)arg1;	// IMP=0x001000000020ddbc

@end

