//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPBOfflinePerformanceMetrics : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_dataVersion;	// 16 = 0x10
    NSString *_deviceModel;	// 24 = 0x18
    NSString *_offlineVersion;	// 32 = 0x20
    NSString *_osBuild;	// 40 = 0x28
    NSMutableArray *_serviceMetrics;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int read_dataVersion:1;
        unsigned int read_deviceModel:1;
        unsigned int read_offlineVersion:1;
        unsigned int read_osBuild:1;
        unsigned int read_serviceMetrics:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x00000000012f142b
- (unsigned long long)hash;	// IMP=0x00000000012f1382
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000012f1230
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000012f0f05
- (void)writeTo:(id)arg1;	// IMP=0x00000000012f0c3c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000012f0c2d
- (id)jsonRepresentation;	// IMP=0x00000000012f08a2
- (id)dictionaryRepresentation;	// IMP=0x00000000012f02d7
- (id)description;	// IMP=0x00000000012f0228
- (id)initWithData:(id)arg1;	// IMP=0x00000000012ef978
- (id)init;	// IMP=0x00000000012ef91c

@end

