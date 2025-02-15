//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface OTSupportOctagonMessage : PBCodable
{
    int _supported;	// 8 = 0x8
    CDStruct_495da94c _has;	// 12 = 0xc
}

- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000018c15
- (unsigned long long)hash;	// IMP=0x0000000000018bea
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000018b58
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000018af6
- (void)copyTo:(id)arg1;	// IMP=0x0000000000018ad2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000018aa7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000018a9a
- (id)dictionaryRepresentation;	// IMP=0x00000000000189ee
- (id)description;	// IMP=0x000000000001893f
- (int)StringAsSupported:(id)arg1;	// IMP=0x00000000000188a8
- (id)supportedAsString:(int)arg1;	// IMP=0x0000000000018860
@property(nonatomic) _Bool hasSupported;
@property(nonatomic) int supported; // @synthesize supported=_supported;

@end

