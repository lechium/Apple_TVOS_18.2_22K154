//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NRPBPropertyValue;

__attribute__((visibility("hidden")))
@interface NRPBDevicePropertyDiff : PBCodable
{
    NRPBPropertyValue *_value;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000051d12
- (unsigned long long)hash;	// IMP=0x0000000000051cf5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000051c65
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000051bed
- (void)writeTo:(id)arg1;	// IMP=0x0000000000051bb2
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000051ba5
- (id)dictionaryRepresentation;	// IMP=0x0000000000051978
- (id)description;	// IMP=0x00000000000518c9

@end

