//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface CKDPThrottlingConfigRateLimit : PBCodable
{
    long long _startTimeSecondsAfterLocalMidnight;	// 8 = 0x8
    long long _startTimeSecondsAfterUnixEpoch;	// 16 = 0x10
    int _allowedRequestCount;	// 24 = 0x18
    int _intervalLengthSec;	// 28 = 0x1c
    int _repeatEverySec;	// 32 = 0x20
    struct {
        unsigned int startTimeSecondsAfterLocalMidnight:1;
        unsigned int startTimeSecondsAfterUnixEpoch:1;
        unsigned int allowedRequestCount:1;
        unsigned int intervalLengthSec:1;
        unsigned int repeatEverySec:1;
    } _has;	// 36 = 0x24
}

@property(nonatomic) long long startTimeSecondsAfterLocalMidnight; // @synthesize startTimeSecondsAfterLocalMidnight=_startTimeSecondsAfterLocalMidnight;
@property(nonatomic) long long startTimeSecondsAfterUnixEpoch; // @synthesize startTimeSecondsAfterUnixEpoch=_startTimeSecondsAfterUnixEpoch;
@property(nonatomic) int repeatEverySec; // @synthesize repeatEverySec=_repeatEverySec;
@property(nonatomic) int allowedRequestCount; // @synthesize allowedRequestCount=_allowedRequestCount;
@property(nonatomic) int intervalLengthSec; // @synthesize intervalLengthSec=_intervalLengthSec;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001b81d8
- (unsigned long long)hash;	// IMP=0x00000000001b813a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b8019
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b7f4d
- (void)copyTo:(id)arg1;	// IMP=0x00000000001b7ea4
- (void)writeTo:(id)arg1;	// IMP=0x00000000001b7dd1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001b7dc4
- (id)dictionaryRepresentation;	// IMP=0x00000000001b77cc
- (id)description;	// IMP=0x00000000001b771d
@property(nonatomic) _Bool hasStartTimeSecondsAfterLocalMidnight;
@property(nonatomic) _Bool hasStartTimeSecondsAfterUnixEpoch;
@property(nonatomic) _Bool hasRepeatEverySec;
@property(nonatomic) _Bool hasAllowedRequestCount;
@property(nonatomic) _Bool hasIntervalLengthSec;

@end

