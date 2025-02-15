//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCPProtoPoint : PBCodable
{
    double _x;	// 8 = 0x8
    double _y;	// 16 = 0x10
}

+ (id)pointWithPoint:(struct CGPoint)arg1;	// IMP=0x00100000002bd167
@property(nonatomic) double y; // @synthesize y=_y;
@property(nonatomic) double x; // @synthesize x=_x;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002f6667
- (unsigned long long)hash;	// IMP=0x00000000002f6495
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002f63fd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002f6395
- (void)copyTo:(id)arg1;	// IMP=0x00000000002f636d
- (void)writeTo:(id)arg1;	// IMP=0x00000000002f6306
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002f62f9
- (id)dictionaryRepresentation;	// IMP=0x00000000002f605c
- (id)description;	// IMP=0x00000000002f5fad
- (struct CGPoint)pointValue;	// IMP=0x00000000002bd1c6

@end

