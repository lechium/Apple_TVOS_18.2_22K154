//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWPBServiceEndpoint : PBCodable
{
    NSString *_domain;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_type;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000ad8a70
- (unsigned long long)hash;	// IMP=0x0000000000ad8a00
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ad8920
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ad8850
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ad87d0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ad87c0
- (id)dictionaryRepresentation;	// IMP=0x0000000000ad8710
- (id)description;	// IMP=0x0000000000ad8660

@end

