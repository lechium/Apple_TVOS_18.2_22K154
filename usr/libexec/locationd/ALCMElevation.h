//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface ALCMElevation : PBCodable
{
    unsigned int _elevationAscended;	// 8 = 0x8
    unsigned int _elevationDescended;	// 12 = 0xc
    int _gradeType;	// 16 = 0x10
    int _rawGradeType;	// 20 = 0x14
    int _source;	// 24 = 0x18
    float _verticalSpeed;	// 28 = 0x1c
    struct {
        unsigned int elevationDescended:1;
        unsigned int gradeType:1;
        unsigned int rawGradeType:1;
        unsigned int source:1;
        unsigned int verticalSpeed:1;
    } _has;	// 32 = 0x20
}

@property(nonatomic) float verticalSpeed; // @synthesize verticalSpeed=_verticalSpeed;
@property(nonatomic) unsigned int elevationDescended; // @synthesize elevationDescended=_elevationDescended;
@property(nonatomic) unsigned int elevationAscended; // @synthesize elevationAscended=_elevationAscended;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001e9f1f
- (unsigned long long)hash;	// IMP=0x00100000001e9d86
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001e9c7a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001e9ba1
- (void)copyTo:(id)arg1;	// IMP=0x00100000001e9b06
- (void)writeTo:(id)arg1;	// IMP=0x00100000001e9a21
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001e9a14
- (id)dictionaryRepresentation;	// IMP=0x00100000001e93b5
- (id)description;	// IMP=0x00100000001e933e
- (int)StringAsSource:(id)arg1;	// IMP=0x00100000001e92f7
- (id)sourceAsString:(int)arg1;	// IMP=0x00100000001e92b8
@property(nonatomic) _Bool hasSource;
@property(nonatomic) int source; // @synthesize source=_source;
- (int)StringAsRawGradeType:(id)arg1;	// IMP=0x00100000001e91c8
- (id)rawGradeTypeAsString:(int)arg1;	// IMP=0x00100000001e918f
@property(nonatomic) _Bool hasRawGradeType;
@property(nonatomic) int rawGradeType; // @synthesize rawGradeType=_rawGradeType;
@property(nonatomic) _Bool hasVerticalSpeed;
- (int)StringAsGradeType:(id)arg1;	// IMP=0x00100000001e9052
- (id)gradeTypeAsString:(int)arg1;	// IMP=0x00100000001e9019
@property(nonatomic) _Bool hasGradeType;
@property(nonatomic) int gradeType; // @synthesize gradeType=_gradeType;
@property(nonatomic) _Bool hasElevationDescended;

@end

