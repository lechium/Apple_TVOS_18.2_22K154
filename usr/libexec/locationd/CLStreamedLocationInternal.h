//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface CLStreamedLocationInternal : PBCodable
{
    double _rawCoordinateLatitude;	// 8 = 0x8
    double _rawCoordinateLongitude;	// 16 = 0x10
    struct {
        unsigned int rawCoordinateLatitude:1;
        unsigned int rawCoordinateLongitude:1;
    } _has;	// 24 = 0x18
}

@property(nonatomic) double rawCoordinateLongitude; // @synthesize rawCoordinateLongitude=_rawCoordinateLongitude;
@property(nonatomic) double rawCoordinateLatitude; // @synthesize rawCoordinateLatitude=_rawCoordinateLatitude;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000c364c6
- (unsigned long long)hash;	// IMP=0x0010000000c362ca
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000c3623d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000c361b8
- (void)copyTo:(id)arg1;	// IMP=0x0010000000c36171
- (void)writeTo:(id)arg1;	// IMP=0x0010000000c36101
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000c360f4
- (id)dictionaryRepresentation;	// IMP=0x0010000000c35e56
- (id)description;	// IMP=0x0010000000c35ddf
@property(nonatomic) _Bool hasRawCoordinateLongitude;
@property(nonatomic) _Bool hasRawCoordinateLatitude;
- (void)mergeIntoDaemonLocation:(struct CLDaemonLocation *)arg1;	// IMP=0x001000000080b1b7
- (id)initWithDaemonLocation:(const struct CLDaemonLocation *)arg1;	// IMP=0x001000000080b149

@end

