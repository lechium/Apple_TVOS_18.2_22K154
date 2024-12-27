//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface ChannelActivityDeactivationResponse : PBCodable
{
    unsigned long long _serverTimestampSeconds;	// 8 = 0x8
    unsigned long long _version;	// 16 = 0x10
    unsigned int _retryIntervalSeconds;	// 24 = 0x18
    int _status;	// 28 = 0x1c
    NSData *_uuid;	// 32 = 0x20
    struct {
        unsigned int serverTimestampSeconds:1;
        unsigned int version:1;
        unsigned int retryIntervalSeconds:1;
        unsigned int status:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000084a3e
@property(nonatomic) unsigned int retryIntervalSeconds; // @synthesize retryIntervalSeconds=_retryIntervalSeconds;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(nonatomic) unsigned long long serverTimestampSeconds; // @synthesize serverTimestampSeconds=_serverTimestampSeconds;
@property(retain, nonatomic) NSData *uuid; // @synthesize uuid=_uuid;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000084927
- (unsigned long long)hash;	// IMP=0x0000000000084876
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008473f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000084650
- (void)copyTo:(id)arg1;	// IMP=0x0000000000084590
- (void)writeTo:(id)arg1;	// IMP=0x00000000000844c1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000844b4
- (id)dictionaryRepresentation;	// IMP=0x0000000000083f20
- (id)description;	// IMP=0x0000000000083e71
@property(nonatomic) _Bool hasRetryIntervalSeconds;
@property(nonatomic) _Bool hasVersion;
@property(nonatomic) _Bool hasServerTimestampSeconds;
@property(readonly, nonatomic) _Bool hasUuid;
- (int)StringAsStatus:(id)arg1;	// IMP=0x0000000000083c2b
- (id)statusAsString:(int)arg1;	// IMP=0x0000000000083be2
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;

@end

