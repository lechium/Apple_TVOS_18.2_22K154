//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface OTSupportSOSMessage : PBCodable
{
    int _supported;	// 8 = 0x8
    CDStruct_495da94c _has;	// 12 = 0xc
}

- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000024ba4
- (unsigned long long)hash;	// IMP=0x0000000000024b79
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000024ae7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000024a85
- (void)copyTo:(id)arg1;	// IMP=0x0000000000024a61
- (void)writeTo:(id)arg1;	// IMP=0x0000000000024a36
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000024a29
- (id)dictionaryRepresentation;	// IMP=0x000000000002497d
- (id)description;	// IMP=0x00000000000248ce
- (int)StringAsSupported:(id)arg1;	// IMP=0x0000000000024837
- (id)supportedAsString:(int)arg1;	// IMP=0x00000000000247ef
@property(nonatomic) _Bool hasSupported;
@property(nonatomic) int supported; // @synthesize supported=_supported;

@end

