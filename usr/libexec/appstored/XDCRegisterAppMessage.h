//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface XDCRegisterAppMessage : PBCodable
{
    NSMutableArray *_metadatas;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001e8c6d
- (unsigned long long)hash;	// IMP=0x00100000001e8c50
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001e8bc0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001e8a22
- (void)writeTo:(id)arg1;	// IMP=0x00100000001e88ec
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001e8750
- (id)dictionaryRepresentation;	// IMP=0x00100000001e8520
- (id)description;	// IMP=0x00100000001e8471

@end

