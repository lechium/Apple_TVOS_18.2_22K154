//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface CKCDPInitializeContainerResponse : PBCodable
{
    _Bool _success;	// 8 = 0x8
    CDStruct_f2ecb737 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003b9972
- (unsigned long long)hash;	// IMP=0x00000000003b9947
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003b98a5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003b9841
- (void)copyTo:(id)arg1;	// IMP=0x00000000003b981b
- (void)writeTo:(id)arg1;	// IMP=0x00000000003b97ef
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003b9637
- (id)dictionaryRepresentation;	// IMP=0x00000000003b959c
- (id)description;	// IMP=0x00000000003b94ed
@property(nonatomic) _Bool hasSuccess;

@end

