//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface CLCKVO2MaxSessionAttributes : PBCodable
{
    double _meanMaxMets;	// 8 = 0x8
    double _prior;	// 16 = 0x10
    double _startTime;	// 24 = 0x18
    int _algorithmVersion;	// 32 = 0x20
    unsigned int _hardwareType;	// 36 = 0x24
    _Bool _betaBlockerUse;	// 40 = 0x28
    struct {
        unsigned int meanMaxMets:1;
        unsigned int prior:1;
        unsigned int startTime:1;
        unsigned int algorithmVersion:1;
        unsigned int hardwareType:1;
        unsigned int betaBlockerUse:1;
    } _has;	// 44 = 0x2c
}

@property(nonatomic) int algorithmVersion; // @synthesize algorithmVersion=_algorithmVersion;
@property(nonatomic) _Bool betaBlockerUse; // @synthesize betaBlockerUse=_betaBlockerUse;
@property(nonatomic) unsigned int hardwareType; // @synthesize hardwareType=_hardwareType;
@property(nonatomic) double prior; // @synthesize prior=_prior;
@property(nonatomic) double meanMaxMets; // @synthesize meanMaxMets=_meanMaxMets;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000cf78be
- (unsigned long long)hash;	// IMP=0x0010000000cf7583
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000cf7438
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000cf7349
- (void)copyTo:(id)arg1;	// IMP=0x0010000000cf7298
- (void)writeTo:(id)arg1;	// IMP=0x0010000000cf71a5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000cf7198
- (id)dictionaryRepresentation;	// IMP=0x0010000000cf6bdb
- (id)description;	// IMP=0x0010000000cf6b64
@property(nonatomic) _Bool hasAlgorithmVersion;
@property(nonatomic) _Bool hasBetaBlockerUse;
@property(nonatomic) _Bool hasHardwareType;
@property(nonatomic) _Bool hasPrior;
@property(nonatomic) _Bool hasMeanMaxMets;
@property(nonatomic) _Bool hasStartTime;

@end

