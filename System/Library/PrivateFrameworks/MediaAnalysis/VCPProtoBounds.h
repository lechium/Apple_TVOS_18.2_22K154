//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCPProtoBounds : PBCodable
{
    double _height;	// 8 = 0x8
    double _width;	// 16 = 0x10
    double _x0;	// 24 = 0x18
    double _y0;	// 32 = 0x20
}

+ (id)boundsWithCGRect:(struct CGRect)arg1;	// IMP=0x001000000009767a
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double y0; // @synthesize y0=_y0;
@property(nonatomic) double x0; // @synthesize x0=_x0;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001152c4
- (unsigned long long)hash;	// IMP=0x0000000000114f33
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000114e6f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000114de7
- (void)copyTo:(id)arg1;	// IMP=0x0000000000114d9d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000114d01
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000114cf4
- (id)dictionaryRepresentation;	// IMP=0x000000000011491f
- (id)description;	// IMP=0x0000000000114870
- (struct CGRect)rectValue;	// IMP=0x00000000000976eb

@end

