//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface CKDPUserPrivacySettings : PBCodable
{
    _Bool _discoverable;	// 8 = 0x8
    struct {
        unsigned int discoverable:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) _Bool discoverable; // @synthesize discoverable=_discoverable;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003a9810
- (unsigned long long)hash;	// IMP=0x00000000003a97e5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003a9743
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003a96df
- (void)copyTo:(id)arg1;	// IMP=0x00000000003a96b9
- (void)writeTo:(id)arg1;	// IMP=0x00000000003a968d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003a9680
- (id)dictionaryRepresentation;	// IMP=0x00000000003a942d
- (id)description;	// IMP=0x00000000003a937e
@property(nonatomic) _Bool hasDiscoverable;

@end

