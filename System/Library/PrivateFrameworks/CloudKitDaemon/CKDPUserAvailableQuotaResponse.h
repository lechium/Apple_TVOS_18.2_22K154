//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface CKDPUserAvailableQuotaResponse : PBCodable
{
    unsigned long long _storageAvailableBytes;	// 8 = 0x8
    struct {
        unsigned int storageAvailableBytes:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned long long storageAvailableBytes; // @synthesize storageAvailableBytes=_storageAvailableBytes;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000003c7da
- (unsigned long long)hash;	// IMP=0x000000000003c7b2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003c71f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003c6bb
- (void)copyTo:(id)arg1;	// IMP=0x000000000003c695
- (void)writeTo:(id)arg1;	// IMP=0x000000000003c669
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003c65c
- (id)dictionaryRepresentation;	// IMP=0x000000000003c40e
- (id)description;	// IMP=0x000000000003c35f
@property(nonatomic) _Bool hasStorageAvailableBytes;

@end

