//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NRPBDeviceDiff;

__attribute__((visibility("hidden")))
@interface NRPBDeviceDiffType : PBCodable
{
    int _changeType;	// 8 = 0x8
    NRPBDeviceDiff *_diff;	// 16 = 0x10
    CDStruct_f5f6ac14 _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000004d836
- (unsigned long long)hash;	// IMP=0x000000000004d7e9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004d72e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004d69a
- (void)writeTo:(id)arg1;	// IMP=0x000000000004d61d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004d610
- (id)dictionaryRepresentation;	// IMP=0x000000000004d2da
- (id)description;	// IMP=0x000000000004d22b

@end

