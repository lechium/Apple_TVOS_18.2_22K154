//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKCDPCodeServiceRequestServiceClientConfig : PBCodable
{
    NSString *_host;	// 8 = 0x8
    unsigned int _port;	// 16 = 0x10
    struct {
        unsigned int port:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x00000000002d5639
@property(nonatomic) unsigned int port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002d55a1
- (unsigned long long)hash;	// IMP=0x00000000002d554f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002d5495
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002d53fd
- (void)copyTo:(id)arg1;	// IMP=0x00000000002d539a
- (void)writeTo:(id)arg1;	// IMP=0x00000000002d5334
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002d5327
- (id)dictionaryRepresentation;	// IMP=0x00000000002d5085
- (id)description;	// IMP=0x00000000002d4fd6
@property(nonatomic) _Bool hasPort;
@property(readonly, nonatomic) _Bool hasHost;

@end

