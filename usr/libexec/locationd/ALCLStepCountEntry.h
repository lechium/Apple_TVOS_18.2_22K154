//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface ALCLStepCountEntry : PBCodable
{
    double _distance;	// 8 = 0x8
    double _pace;	// 16 = 0x10
    double _timestamp;	// 24 = 0x18
    unsigned int _count;	// 32 = 0x20
    unsigned int _floorsAscended;	// 36 = 0x24
    unsigned int _floorsDescended;	// 40 = 0x28
    int _recordId;	// 44 = 0x2c
    _Bool _regularEntry;	// 48 = 0x30
    struct {
        unsigned int pace:1;
        unsigned int timestamp:1;
        unsigned int recordId:1;
    } _has;	// 52 = 0x34
}

@property(nonatomic) _Bool regularEntry; // @synthesize regularEntry=_regularEntry;
@property(nonatomic) int recordId; // @synthesize recordId=_recordId;
@property(nonatomic) double pace; // @synthesize pace=_pace;
@property(nonatomic) unsigned int floorsDescended; // @synthesize floorsDescended=_floorsDescended;
@property(nonatomic) unsigned int floorsAscended; // @synthesize floorsAscended=_floorsAscended;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(nonatomic) unsigned int count; // @synthesize count=_count;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000002161b7
- (unsigned long long)hash;	// IMP=0x0010000000215e5f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000215d3c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000215c5b
- (void)copyTo:(id)arg1;	// IMP=0x0010000000215bb8
- (void)writeTo:(id)arg1;	// IMP=0x0010000000215ab9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000215aac
- (id)dictionaryRepresentation;	// IMP=0x00100000002153e0
- (id)description;	// IMP=0x0010000000215369
@property(nonatomic) _Bool hasRecordId;
@property(nonatomic) _Bool hasPace;
@property(nonatomic) _Bool hasTimestamp;

@end

