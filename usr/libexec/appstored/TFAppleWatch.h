//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface TFAppleWatch : PBCodable
{
    NSString *_model;	// 8 = 0x8
    NSString *_osVersion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001a0fe6
- (unsigned long long)hash;	// IMP=0x00100000001a0f99
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001a0ee1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001a0e43
- (void)writeTo:(id)arg1;	// IMP=0x00100000001a0db8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001a0dab
- (id)dictionaryRepresentation;	// IMP=0x00100000001a0bbe
- (id)description;	// IMP=0x00100000001a0b0f

@end

