//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPShare;

@interface CKDPShareAcceptResponse : PBCodable
{
    CKDPShare *_share;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001b349d
@property(retain, nonatomic) CKDPShare *share; // @synthesize share=_share;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001b341f
- (unsigned long long)hash;	// IMP=0x00000000001b3402
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b3372
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b32fa
- (void)copyTo:(id)arg1;	// IMP=0x00000000001b32d0
- (void)writeTo:(id)arg1;	// IMP=0x00000000001b32ac
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001b329f
- (id)dictionaryRepresentation;	// IMP=0x00000000001b3072
- (id)description;	// IMP=0x00000000001b2fc3
@property(readonly, nonatomic) _Bool hasShare;

@end

