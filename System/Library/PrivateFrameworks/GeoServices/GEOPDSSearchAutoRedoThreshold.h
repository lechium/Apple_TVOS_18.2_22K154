//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSSearchAutoRedoThreshold : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    double _panDeltaThresholdInMeters;	// 16 = 0x10
    double _zoomInPercentThreshold;	// 24 = 0x18
    double _zoomOutPercentThreshold;	// 32 = 0x20
    unsigned int _numberOfVisiblePoisThreshold;	// 40 = 0x28
    CDStruct_541951ee _flags;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x00000000005c6d8e
- (unsigned long long)hash;	// IMP=0x00000000005c69a8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005c689a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005c67bb
- (void)writeTo:(id)arg1;	// IMP=0x00000000005c66e7
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005c66d8
- (id)jsonRepresentation;	// IMP=0x00000000005c5da3
- (id)dictionaryRepresentation;	// IMP=0x00000000005c5a87
- (id)description;	// IMP=0x00000000005c59d8

@end

